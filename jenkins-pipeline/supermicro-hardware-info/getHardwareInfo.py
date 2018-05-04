import requests
import time
from bs4 import BeautifulSoup
import argparse
import pymysql.cursors

requests.packages.urllib3.disable_warnings()

def create_argument_parser():
	parser=argparse.ArgumentParser(description="hp_ilo_url and hp_ilo_name")
	parser.add_argument('--url',dest='url',required=True,type=str,help='hp ILO url')
	parser.add_argument('--name',dest='name',required=True,type=str,help='hp ILO name')
	parser.add_argument('--dbhost',dest='dbhost',required=True,type=str,help='Database host')
	parser.add_argument('--dbport',dest='dbport',required=True,type=int,default=3306,help='Database port')
	parser.add_argument('--dbuser',dest='dbuser',required=True,type=str,help='Database user')
	parser.add_argument('--dbpassword',dest='dbpassword',required=True,type=str,help='Database password')
	
	return parser

parser=create_argument_parser()
args=parser.parse_args()
connection=pymysql.connect(host=args.dbhost,user=args.dbuser,password=args.dbpassword,db='monitor',charset='utf8mb4')
hp_ilo = [args.url,args.name]


def getLoginSID():#get login cookie
	data = {'name':'nautilus','pwd':'Nautilus@2017'}
	loginUrl="%s/cgi/login.cgi" % args.url
	login = requests.post(loginUrl,data,verify=False)
	SID=requests.utils.dict_from_cookiejar(login.cookies)

	return SID['SID']

def getXML():#get XML from response
	headers = {
				'Cookie':'SID=%s' % getLoginSID()
	}

	sensor = '(1,ff)'
	ts = time.time()
	timeStamp = time.strftime("%a %b %d %Y %H:%M:%S")
	#timeStamp = 'Tue Dec 12 2017 16:59:38 GMT+0800 (China Standard Time)'

	url="%s/cgi/ipmi.cgi" % args.url
	r = requests.post(url, data = {'SENSOR_INFO_FOR_SYS_HEALTH.XML':sensor, 'time_stamp':timeStamp, '_':''}, headers=headers, verify=False)

	return r.text

		
soup = BeautifulSoup(getXML(),'lxml')


def proc_data(id_list):
	list=[]
	for i in id_list:
		get_all_comp = soup.find_all('sensor',id = i)
		comp_reading_stat = get_all_comp[0]['reading']
		list.append(comp_reading_stat)
	if '000000' in list:
		hp_ilo.append('N/A')
		list = []
	else:
		list=[]
		proc_data2(id_list)

def proc_data2(id_list):	
	list=[]
	for i in id_list:
		get_all_comp = soup.find_all('sensor',id = i)
		comp_stat = get_all_comp[0]['option']
		list.append(comp_stat)
	if '00' in list:
		hp_ilo.append('OP_STATUS_DEGRADED')
	else:
		hp_ilo.append('OP_STATUS_OK')

def parseXML():
	#system_health
	sys_helh = soup.find_all('sensor',id = "004")
	strSys = str(sys_helh)
	if strSys.find('c0') == -1:
		hp_ilo.append('OP_STATUS_DEGRADED')	
	else:
		hp_ilo.append('OP_STATUS_OK')	
	
	#fans_status & fans_redundancy
	fan_id = ['01e','01f','020','021','022','023','024','025']
	proc_data(fan_id)
	hp_ilo.append('REDUNDANT')

	#temperature_status
	temp_id = ['003','00e','010','012','014','016','018','01a','01c']
	proc_data(temp_id)

	#power supply status
	powerSB_id = ['027','031','032','033','034','035']
	proc_data(powerSB_id)

	#power supply redundancy
	powerCC_id = ['028','029']
	proc_data(powerCC_id) 

	#storage status
	storage_id = ['03a','03b','039']
	proc_data(storage_id)

	#nic status 
	nic_id = ['006','007']
	proc_data(nic_id)	
	
	#cpu status
	cpu_id = ['001','002','008','009','02b','02c','02d','02e','02f','030']
	proc_data(cpu_id)

	#memory status
	mem_id = ['00a','00b','00c','00d']
	proc_data(mem_id)	
	
	#external health status
	extn_id = ['005']
	proc_data(extn_id)

	#battery status
	bat_id = ['02a']
	proc_data(bat_id)

	#update time
	update_time = time.time()
	hp_ilo.append(update_time)
	
	print(hp_ilo)


parseXML()

try:
	with connection.cursor() as cursor:
		sql="DELETE FROM `monitor`.`status_hp_ilo` WHERE  `hp_ilo_url`=%s"
		cursor.execute(sql,args.url)
		sql="INSERT INTO status_hp_ilo VALUES(%s,%s,%s,%s,%s,%s,%s,%s,%s,%s,%s,%s,%s,%s,%s)"	
		cursor.execute(sql,hp_ilo)
	connection.commit()
finally:
	connection.close()
	
