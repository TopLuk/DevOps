#include "DFITCL2Api.h"
#include "my_callback.h"
#include <iostream>
#include <string.h>
#include <unistd.h>
int main(int argc, char *argv[])
{
	DFITC_L2::DFITCL2Api * p = NEW_CONNECTOR();
	my_callback_t a;

	if(0 != p->Connect("tcp://10.7.22.125:10986", &a, 0))	/// 0为udp收行情，1为tcp收行情
	{
		std::cout << "Connect failed" << std::endl;
		return -1;
	}
	else
	{
		std::cout << "Connect successfully" << std::endl;
	}
	sleep(3);	/// 等待3秒，确保连接成功

	struct DFITCUserLoginField data;
	std::string name("nuodeshi");	/// 帐号
	std::string password("nuodeshi");	/// 密码
	strcpy(data.accountID, name.c_str());
	strcpy(data.passwd,    password.c_str());
	p->ReqUserLogin(&data);
	sleep(3);	/// 等待3秒，确保成功登录

	//char * contracts[3]={"", "", ""};
	//contracts[0] = "m1404";
	//contracts[1] = "m1405";
	//contracts[2] = "m1406";
	//int count = 3;	/// 订阅行情个数，应与contracts中的合约个数一样
	//p->SubscribeMarketData(contracts, count);	/// 订阅部分行情
	p->SubscribeAll();	/// 订阅全部行情

	while(true){
		sleep(10);
	}
	DELETE_CONNECTOR(p);
	return 0;
}
