#coding=utf-8
import pymysql.cursors
import argparse
current_time=[]
trade_front=[]
time=[]
latency_list=[]

def create_argument_parser():
	parser=argparse.ArgumentParser(description="Machine number and DB information")
	parser.add_argument('--dbhost',dest='dbhost',required=True,type=str,help='Database host')
	parser.add_argument('--dbport',dest='dbport',required=True,type=int,default=3306,help='Database port')
	parser.add_argument('--dbuser',dest='dbuser',required=True,type=str,help='Database user')
	parser.add_argument('--dbpassword',dest='dbpassword',required=True,type=str,help='Database password'    )
	parser.add_argument('--machine',dest='machine',required=True,type=str,help='Trade Front Machine Number')

	return parser

def cal_avg_per10(list,*argv):
	for i in list:
		if len(list)<9:
			break
		list.remove(max(list))
		list.remove(min(list))
		average=sum(list)/10*1000
		print(average)
		latency_list.append(average)


f=open('./out','r')
for line in f:
	line=line.strip('\n')
	if '==' in line:
		cal_avg_per10(time)
		time = []
		continue
	if len(line) > 6:
		current_time.append(line.split(" ")[1]+" "+line.split(" ")[2])
		trade_front.append(line.split(" ")[0])
		continue
	time.append(float(line))	
print(current_time)
print(trade_front)
print(latency_list)


#connection=pymysql.connect(host="monitor.nautiluscapital.net",user='monitor',password='r4y8aEaendJB',
#db='monitor',charset='utf8mb4',)
parser=create_argument_parser()
args=parser.parse_args()
connection=pymysql.connect(host=args.dbhost,user=args.dbuser,password=args.dbpassword,db='monitor',charset='utf8mb4')

try:
	with connection.cursor() as cursor:
		sql="INSERT INTO trade_front_latency VALUES(%s,%s,%s,%s)"
		for i in range(len(trade_front)):
			cursor.execute(sql,(current_time[i],args.machine,trade_front[i],latency_list[i]))
		if not cursor.rowcount:
			print("No results found")
		else:
			for row in cursor:
				print(row[1])
	connection.commit()

finally:
	connection.close()

