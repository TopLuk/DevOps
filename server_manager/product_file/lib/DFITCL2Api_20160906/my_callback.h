#ifndef MY_CALLBACK_TYPE
#define MY_CALLBACK_TYPE

#include "DFITCL2Api.h"
#include <iostream>
#include <string>
#include <stdio.h>
#include <time.h>
using namespace DFITC_L2;

class my_callback_t : public DFITC_L2::DFITCL2Spi{
public:
    my_callback_t() { }
    ~my_callback_t() { }
	
	
	const std::string currentDateTime() {
		time_t     now = time(0);
		struct tm  tstruct;
		char       buf[80];
		tstruct = *localtime(&now);
		// Visit http://en.cppreference.com/w/cpp/chrono/c/strftime
		// for more information about date/time format
		strftime(buf, sizeof(buf), "%Y-%m-%d.%X", &tstruct);

		return buf;
	}
	
	
	void OnConnected() { std::cout << "my_callback_t::OnConnected" << std::endl; } 
	void OnDisconnected(int pReason) { std::cout << "my_callback_t::OnDisconnected" << std::endl; }
	void OnRspUserLogin(struct ErrorRtnField * pErrorField)  { 
	std::cout << "my_callback_t::OnRspUserLogin:"<< pErrorField->ErrorID << "," << pErrorField->ErrorMsg << std::endl; 
	}
	void OnRspUserLogout(struct ErrorRtnField * pErrorField) { 
	std::cout << "my_callback_t::OnRspUserLogout："<< pErrorField->ErrorID << "," << pErrorField->ErrorMsg << std::endl; }
	
	void OnRspSubscribeMarketData(struct ErrorRtnField * pErrorField) { 
	std::cout << "my_callback_t::OnRspSubscribeMarketData:"<< pErrorField->ErrorID << "," << pErrorField->ErrorMsg << std::endl; }
	void OnRspUnSubscribeMarketData(ErrorRtnField * pErrorField) { 
	std::cout << "my_callback_t::OnRspUnSubscribeMarketData:"<< pErrorField->ErrorID << "," << pErrorField->ErrorMsg << std::endl; }
	void OnRspSubscribeAll(struct ErrorRtnField * pErrorField) { 
	std::cout << "my_callback_t::OnRspSubscribeAll:"<< pErrorField->ErrorID << "," << pErrorField->ErrorMsg << std::endl; }
	void OnRspUnSubscribeAll(struct ErrorRtnField * pErrorField) { 
	std::cout << "my_callback_t::OnRspUnSubscribeAll:"<< pErrorField->ErrorID << "," << pErrorField->ErrorMsg << std::endl; }
	void OnRspModifyPassword(struct ErrorRtnField * pErrorField) { 
	std::cout << "my_callback_t::OnRspModifyPassword:"<< pErrorField->ErrorID << "," << pErrorField->ErrorMsg << std::endl; }
	void OnHeartBeatLost() { std::cout << "my_callback_t::OnHeartBeatLost" << std::endl; }
	
	void OnBestAndDeep(MDBestAndDeep * const pQuote)  { 
	std::cout << "my_callback_t::OnBestAndDeep:"
		<<currentDateTime()<<","
		<<pQuote->Contract <<"," 
		<<pQuote->GenTime <<"," 
		<<pQuote->OpenInterest<<","					//持仓量
		<<pQuote->LastPrice<<","						//最新价
		<<pQuote->MatchTotQty<<","					//成交数量
		<<pQuote->Turnover<<","						//成交金额
		<<pQuote->RiseLimit<<","						//最高报价
		<<pQuote->FallLimit<<","						//最低报价
		<<pQuote->HighPrice<<","						//最高价
		<<pQuote->LowPrice<<","						//最低价
		<<pQuote->PreDelta<<","						//昨虚实度
		<<pQuote->CurrDelta<<","						//今虚实度
		<<pQuote->BuyPriceOne<<","					//买入价格1
		<<pQuote->BuyQtyOne<<","						//买入数量1
		<<pQuote->BuyImplyQtyOne<<","					//买1推导量
		<<pQuote->BuyPriceTwo<<","         
		<<pQuote->BuyQtyTwo<<","
		<<pQuote->BuyImplyQtyTwo<<","
		<<pQuote->BuyPriceThree<<","
		<<pQuote->BuyQtyThree<<","
		<<pQuote->BuyImplyQtyThree<<","
		<<pQuote->BuyPriceFour<<","
		<<pQuote->BuyQtyFour<<","
		<<pQuote->BuyImplyQtyFour<<","
		<<pQuote->BuyPriceFive<<","
		<<pQuote->BuyQtyFive<<","
		<<pQuote->BuyImplyQtyFive<<","
		<<pQuote->SellPriceOne<<","					//卖出价格1
		<<pQuote->SellQtyOne<<","						//买出数量1
		<<pQuote->SellImplyQtyOne<<","				//卖1推导量
		<<pQuote->SellPriceTwo<<","        
		<<pQuote->SellQtyTwo<<","
		<<pQuote->SellImplyQtyTwo<<","
		<<pQuote->SellPriceThree<<","
		<<pQuote->SellQtyThree<<","
		<<pQuote->SellImplyQtyThree<<","
		<<pQuote->SellPriceFour<<","
		<<pQuote->SellQtyFour<<","
		<<pQuote->SellImplyQtyFour<<","
		<<pQuote->SellPriceFive<<","
		<<pQuote->SellQtyFive<<","
		<<pQuote->SellImplyQtyFive<<","				//行情产生时间
		<<pQuote->LastMatchQty<<","					//最新成交量		
		<< std::endl; }
	
	void OnArbi(MDBestAndDeep * const pQuote){ 
		std::cout << "my_callback_t::OnArbi:"
		<<currentDateTime()<<","
		<<pQuote->Contract <<"," 
		<<pQuote->GenTime <<"," 
		<<pQuote->OpenInterest<<","					//持仓量
		<<pQuote->LastPrice<<","						//最新价
		<<pQuote->MatchTotQty<<","					//成交数量
		<<pQuote->Turnover<<","						//成交金额
		<<pQuote->RiseLimit<<","						//最高报价
		<<pQuote->FallLimit<<","						//最低报价
		<<pQuote->HighPrice<<","						//最高价
		<<pQuote->LowPrice<<","						//最低价
		<<pQuote->PreDelta<<","						//昨虚实度
		<<pQuote->CurrDelta<<","						//今虚实度
		<<pQuote->BuyPriceOne<<","					//买入价格1
		<<pQuote->BuyQtyOne<<","						//买入数量1
		<<pQuote->BuyImplyQtyOne<<","					//买1推导量
		<<pQuote->BuyPriceTwo<<","         
		<<pQuote->BuyQtyTwo<<","
		<<pQuote->BuyImplyQtyTwo<<","
		<<pQuote->BuyPriceThree<<","
		<<pQuote->BuyQtyThree<<","
		<<pQuote->BuyImplyQtyThree<<","
		<<pQuote->BuyPriceFour<<","
		<<pQuote->BuyQtyFour<<","
		<<pQuote->BuyImplyQtyFour<<","
		<<pQuote->BuyPriceFive<<","
		<<pQuote->BuyQtyFive<<","
		<<pQuote->BuyImplyQtyFive<<","
		<<pQuote->SellPriceOne<<","					//卖出价格1
		<<pQuote->SellQtyOne<<","						//买出数量1
		<<pQuote->SellImplyQtyOne<<","				//卖1推导量
		<<pQuote->SellPriceTwo<<","        
		<<pQuote->SellQtyTwo<<","
		<<pQuote->SellImplyQtyTwo<<","
		<<pQuote->SellPriceThree<<","
		<<pQuote->SellQtyThree<<","
		<<pQuote->SellImplyQtyThree<<","
		<<pQuote->SellPriceFour<<","
		<<pQuote->SellQtyFour<<","
		<<pQuote->SellImplyQtyFour<<","
		<<pQuote->SellPriceFive<<","
		<<pQuote->SellQtyFive<<","
		<<pQuote->SellImplyQtyFive<<","				//行情产生时间
		<<pQuote->LastMatchQty<<","					//最新成交量		
		<< std::endl; }
		
	void OnTenEntrust(MDTenEntrust * const pQuote)  { 
		std::cout << "my_callback_t::OnTenEntrust"
			<<currentDateTime()<<","
		    <<pQuote->Type<<","							//行情域标识
			<<pQuote->Len<<","
			<<pQuote->Contract<<","					//合约代码
			<<pQuote->BestBuyOrderPrice<<","				//价格
			<<pQuote->BestBuyOrderQtyOne<<","				//委托量1
			<<pQuote->BestBuyOrderQtyTwo<<","				//委托量2
			<<pQuote->BestBuyOrderQtyThree<<","			//委托量3
			<<pQuote->BestBuyOrderQtyFour<<","			//委托量4
			<<pQuote->BestBuyOrderQtyFive<<","			//委托量5
			<<pQuote->BestBuyOrderQtySix<<","				//委托量6
			<<pQuote->BestBuyOrderQtySeven<<","			//委托量7
			<<pQuote->BestBuyOrderQtyEight<<","			//委托量8
			<<pQuote->BestBuyOrderQtyNine<<","			//委托量9
			<<pQuote->BestBuyOrderQtyTen<<","				//委托量10
			<<pQuote->BestSellOrderPrice<<","				//价格
			<<pQuote->BestSellOrderQtyOne<<","			//委托量1
			<<pQuote->BestSellOrderQtyTwo<<","			//委托量2
			<<pQuote->BestSellOrderQtyThree<<","			//委托量3
			<<pQuote->BestSellOrderQtyFour<<","			//委托量4
			<<pQuote->BestSellOrderQtyFive<<","			//委托量5
			<<pQuote->BestSellOrderQtySix<<","			//委托量6
			<<pQuote->BestSellOrderQtySeven<<","			//委托量7
			<<pQuote->BestSellOrderQtyEight<<","			//委托量8
			<<pQuote->BestSellOrderQtyNine<<","			//委托量9
			<<pQuote->BestSellOrderQtyTen<<","			//委托量10
			<<pQuote->GenTime<<","					//生成时间
		    << std::endl; 
	}
	
	void OnRealtime(MDRealTimePrice * const pQuote) { 
		std::cout << "my_callback_t::OnRealtime" 
		<<currentDateTime()<<","
		<<pQuote->Type<<","							//行情域标识
		<<pQuote->Len<<","
		<<pQuote->ContractID<<","					//合约号
		<<pQuote->RealTimePrice<<","					//实时结算价
		<< std::endl; 
	}
	
	void OnOrderStatistic(MDOrderStatistic * const pQuote){ 
		std::cout << "my_callback_t::OnOrderStatistic" 
		<<currentDateTime()<<","
		<<pQuote->Type<<","						//行情域标识
		<<pQuote->Len<<","
		<<pQuote->ContractID<<","					//合约号
		<<pQuote->TotalBuyOrderNum<<","				//买委托总量
		<<pQuote->TotalSellOrderNum<<","				//卖委托总量
		<<pQuote->WeightedAverageBuyOrderPrice<<","	//加权平均委买价格
		<<pQuote->WeightedAverageSellOrderPrice<<","	//加权平均委卖价格
		<< std::endl; 
	}
	
	void OnMarchPrice(MDMarchPriceQty * const pQuote){ 
		std::cout << "my_callback_t::OnMarchPrice" 
		<<currentDateTime()<<","
		<<pQuote->Type<<","							//行情域标识
		<<pQuote->Len<<","
		<<pQuote->ContractID[80]<<","					//合约号
		<<pQuote->PriceOne<<","						//价格
		<<pQuote->PriceOneBOQty<<","					//买开数量
		<<pQuote->PriceOneBEQty<<","					//买平数量
		<<pQuote->PriceOneSOQty<<","					//卖开数量
		<<pQuote->PriceOneSEQty<<","					//卖平数量
		<<pQuote->PriceTwo<<","						//价格
		<<pQuote->PriceTwoBOQty<<","					//买开数量
		<<pQuote->PriceTwoBEQty<<","					//买平数量
		<<pQuote->PriceTwoSOQty<<","					//卖开数量
		<<pQuote->PriceTwoSEQty<<","					//卖平数量
		<<pQuote->PriceThree<<","						//价格
		<<pQuote->PriceThreeBOQty<<","				//买开数量
		<<pQuote->PriceThreeBEQty<<","				//买平数量
		<<pQuote->PriceThreeSOQty<<","				//卖开数量
		<<pQuote->PriceThreeSEQty<<","				//卖平数量
		<<pQuote->PriceFour<<","						//价格
		<<pQuote->PriceFourBOQty<<","					//买开数量
		<<pQuote->PriceFourBEQty<<","					//买平数量
		<<pQuote->PriceFourSOQty<<","					//卖开数量
		<<pQuote->PriceFourSEQty<<","					//卖平数量
		<<pQuote->PriceFive<<","						//价格
		<<pQuote->PriceFiveBOQty<<","					//买开数量
		<<pQuote->PriceFiveBEQty<<","					//买平数量
		<<pQuote->PriceFiveSOQty<<","					//卖开数量
		<<pQuote->PriceFiveSEQty<<","					//卖平数量
		<< std::endl; 
	}
protected:
	DFITC_L2::DFITCL2Api *md_pApi;
};

#endif

