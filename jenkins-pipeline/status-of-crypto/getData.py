#coding=utf-8
from bs4 import BeautifulSoup
import pymysql.cursors
import datetime
import argparse
import time
from selenium import webdriver
from selenium.webdriver.common.desired_capabilities import DesiredCapabilities

coinList = []
coinName = []

def create_argument_parser():
	parser = argparse.ArgumentParser(description="DB information")
	parser.add_argument('--dbhost',dest='dbhost',required=True,type=str,help='Database host')
	parser.add_argument('--dbport',dest='dbport',required=True,type=int,default=3306,help='Database port')
	parser.add_argument('--dbuser',dest='dbuser',required=True,type=str,help='Database user')
	parser.add_argument('--dbpassword',dest='dbpassword',required=True,type=str,help='Database password')
	return parser





def getHTML():
	#http_proxy  = "http://172.30.70.51:8080"
	#https_proxy = "https://172.30.70.51:8080"
	#proxyDict = {
    	#"http" : http_proxy,
	#	"https" : https_proxy
    #}
	#url = "https://hitbtc.com/system-health"
	with open('/var/jenkins_home/workspace/SYSTEM-HEALTH@2/status-of-crypto/output') as f:
		html_doc = f.read()
		soup = BeautifulSoup(html_doc,'html.parser')
		tagTd = soup.find_all('td',class_='table__cell')
	
	
		for i in tagTd:
 			if str(i.b) != 'None':
 				coinName.append(i.b.get_text())
		for i in tagTd:
			strText = str(i.get_text()).strip()
			coinList.append(strText)

	for i in range(len(coinList)):
		coinList[i].strip()
		if coinList[i].find("count") != -1:
			newStr = coinList[i].replace('count:','').strip()
			coinList[i] = newStr
		if coinList[i].find("low") != -1:
			coinList[i] = coinList[i][0:13] + coinList[i][78:92] + coinList[i][157:171]
		if coinList[i].find("oldest") != -1:
			coinList[i] = coinList[i][0:7] + coinList[i][28:56]
		if coinList[i].find("since") != -1:
			coinList[i].strip('\n')
			coinList[i] = coinList[i][0:8] + "\t" + coinList[i][8:14] + coinList[i][48:]
	print(coinName)
def DataToDB(list):
	
	try:
		with connection.cursor() as cursor:
			sql = "INSERT INTO hitbtc_system_health VALUES(%s,%s,%s,%s,%s,%s,%s,%s,%s,%s,%s,%s,%s)"
			for i in coinName:
				i = []
				now = datetime.datetime.now()
				cur_time = str(now.strftime("%Y-%m-%d %H:%M:%S"))
				i = [cur_time]
				i.extend(list[0:12])
				del list[0:12]
				cursor.execute(sql,i)
			if not cursor.rowcount:
				print("No results found!")
			else:
				for row in cursor:
					print(row[1])
		connection.commit()
	finally:
		connection.close()
        

parser = create_argument_parser()
args = parser.parse_args()
connection = pymysql.connect(host=args.dbhost,user=args.dbuser,password=args.dbpassword,db='monitor',charset='utf8mb4')

if __name__ == "__main__":
	getHTML()
	DataToDB(coinList)
