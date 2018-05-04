#coding=utf-8
import requests
import time
from bs4 import BeautifulSoup
import pymysql.cursors
from requests.packages.urllib3.exceptions import InsecureRequestWarning
import argparse

requests.packages.urllib3.disable_warnings()

def create_argument_parser():
	parser = argparse.ArgumentParser(description="hp_ilo_url and db")
	parser.add_argument('--url',dest='url',required=True,type=str,help='hp ILO url')
	parser.add_argument('--dbhost',dest='dbhost',required=True,type=str,help='Database host')
	parser.add_argument('--dbport',dest='dbport',required=True,type=int,default=3306,help='Database port')
	parser.add_argument('--dbuser',dest='dbuser',required=True,type=str,help='Database user')
	parser.add_argument('--dbpassword',dest='dbpassword',required=True,type=str,help='Database password')

	return parser

parser = create_argument_parser()
args = parser.parse_args()
connection = pymysql.connect(host=args.dbhost,user=args.dbuser,password=args.dbpassword,db='monitor',charset='utf8mb4')
hdd_serial = []

def getLoginSID():#get login cookie
    url = args.url 
    data = {'name':'nautilus','pwd':'Nautilus@2017'}
    loginUrl = "%s/cgi/login.cgi" % url
    login = requests.post(loginUrl,data,verify=False)
    SID = requests.utils.dict_from_cookiejar(login.cookies)

    return SID['SID']

def getXML():#get XML from response
    headers = {
        'Cookie':'SID=%s' % getLoginSID()
    }
    HDDInfo = '(0,0)'
    timeStamp = time.strftime("%a %b %d %Y %H:%M:%S")
    url = "%s/cgi/ipmi.cgi" % args.url
    r = requests.post(url,data={'Get_PhysicalHDDInfo.XML':HDDInfo,
                                'time_stamp':timeStamp,
                                '_':''
                                },headers=headers,verify=False)

    return r.text

def parseXML():
	soup = BeautifulSoup(getXML(), 'xml')
	serial_num = soup.find_all('HDD',Revision="0101")
	#serial0 = serial_num[0]['SN']
	#serial1 = serial_num[1]['SN']
	#print(len(serial_num))
	for i in range(len(serial_num)):
		hdd_serial.append(serial_num[i]['SN'])
	return hdd_serial

def getDB_Compare():
	try:
		with connection.cursor() as cursor:
			sql = "SELECT disk_serial_nos FROM hp_ilo_disks WHERE hp_ilo_url=%s" 
			cursor.execute(sql,args.url)
			rows = cursor.fetchall()
			listRows = list(rows[0])
			print('Original serial number is: ',listRows[0])
			print('Realtime serial number is: ',hdd_serial)
			for i in range(len(listRows[0].split(','))):
				nospace = listRows[0].split(',')[i].strip()
				#print(nospace)
				with open ('supmic-hdd-serial/out','w') as f:
					if not nospace == hdd_serial[i]:
						f.write('hark disk has been stolen!')
		connection.commit()
	finally:
		connection.close()

if __name__ == "__main__":
	parseXML()
	getDB_Compare()

