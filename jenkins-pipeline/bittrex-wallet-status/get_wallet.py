from bs4 import BeautifulSoup
from selenium import webdriver
from selenium.webdriver.common.desired_capabilities import DesiredCapabilities
import pymysql.cursors
import time
import datetime
import argparse

coin_stat = []

def create_argument_parser():
	parser = argparse.ArgumentParser(description="DB information")
	parser.add_argument('--dbhost',dest='dbhost',required=True,type=str,help='Database host')
	parser.add_argument('--dbport',dest='dbport',required=True,type=int,default=3306,help='Database port')
	parser.add_argument('--dbuser',dest='dbuser',required=True,type=str,help='Database user')
	parser.add_argument('--dbpassword',dest='dbpassword',required=True,type=str,help='Database password')
	parser.add_argument('--workspace',dest='workspace',required=True,type=str,help='Jenkins workspace')
	return parser

def getDynamicHTML():
	#url = "https://bittrex.com/Status"
	#browser = webdriver.Remote(command_executor='http://127.0.0.1:8910',desired_capabilities=DesiredCapabilities.PHANTOMJS)
	#browser.get(url)
	#time.sleep(15)
	#print(browser.page_source)
	with open('/var/jenkins_home/workspace/WALLET-STATUS@2/bittrex-wallet-status/output','r') as f:
		wallet_html = f.read()
		#print(wallet_html)
		soup = BeautifulSoup(wallet_html,'html.parser')
		tagTd = soup.find_all('td',class_='description')
		#print(tagTd)
		for i in tagTd:
			strText = str(i.get_text())
			#if strText.startswith('Disabled'):
				#break
			coin_stat.append(strText)
		#print(coin_stat)
		print(len(coin_stat))
		if len(coin_stat) % 7 > 0:
			del coin_stat[-(len(coin_stat)%7):]
			del coin_stat[-14:]
		print(coin_stat)

def DataToDB(list):
	try:
		with connection.cursor() as cursor:
			sql = "INSERT INTO bittrex_wallet_status(cur_time,status,currency,block_height,connections,last_update,last_checked,notice) VALUES(%s,%s,%s,%s,%s,%s,%s,%s)"
			for i in coin_stat[0:len(coin_stat):7]:
				i = []
				now = datetime.datetime.now()
				curTime = str(now.strftime("%Y-%m-%d %H:%M:%S"))
				i = [curTime]
				i.extend(list[0:7])
				del list[0:7]
				cursor.execute(sql,i)
		connection.commit()
	finally:
		connection.close()

parser = create_argument_parser()
args = parser.parse_args()
connection = pymysql.connect(host=args.dbhost,user=args.dbuser,password=args.dbpassword,db='monitor',charset='utf8mb4')
if __name__ == "__main__":
	getDynamicHTML()
	DataToDB(coin_stat)




