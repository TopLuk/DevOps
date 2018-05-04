
#if !defined(FUTURE_FTDCQUERYAPI_H)
#define FUTURE_FTDCQUERYAPI_H

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "FutureFtdcUserApiStruct.h"

#if defined(ISLIB) && defined(WIN32)
#ifdef LIB_QUERY_API_EXPORT
#define QUERY_API_EXPORT __declspec(dllexport)
#else
#define QUERY_API_EXPORT __declspec(dllimport)
#endif
#else
#define QUERY_API_EXPORT 
#endif


class CFutureFtdcQuerySpi
{
public:
	///当客户端与交易后台建立起通信连接时（还未登录前），该方法被调用。
	virtual void OnFrontConnected(){};
	
	///当客户端与交易后台通信连接断开时，该方法被调用。当发生这个情况后，API会自动重新连接，客户端可不做处理。
	///@param nReason 错误原因
	///        0x1001 网络读失败
	///        0x1002 网络写失败
	///        0x2001 接收心跳超时
	///        0x2002 发送心跳失败
	///        0x2003 收到错误报文
	virtual void OnFrontDisconnected(int nReason){};
		
	///心跳超时警告。当长时间未收到报文时，该方法被调用。
	///@param nTimeLapse 距离上次接收报文的时间
	virtual void OnHeartBeatWarning(int nTimeLapse){};
	
	///客户端认证响应
	virtual void OnRspAuthenticate(CFutureFtdcRspAuthenticateField *pRspAuthenticateField, CFutureFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};


	///登录请求响应
	virtual void OnRspUserLogin(CFutureFtdcRspUserLoginField *pRspUserLogin, CFutureFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

	///登出请求响应
	virtual void OnRspUserLogout(CFutureFtdcUserLogoutField *pUserLogout, CFutureFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

	///请求查询报单响应
	virtual void OnRspQryOrder(CFutureFtdcOrderField *pOrder, CFutureFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

	///请求查询成交响应
	virtual void OnRspQryTrade(CFutureFtdcTradeField *pTrade, CFutureFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

	///请求查询投资者持仓响应
	virtual void OnRspQryInvestorPosition(CFutureFtdcInvestorPositionField *pInvestorPosition, CFutureFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

	///请求查询资金账户响应
	virtual void OnRspQryTradingAccount(CFutureFtdcTradingAccountField *pTradingAccount, CFutureFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

	///请求查询投资者响应
	virtual void OnRspQryInvestor(CFutureFtdcInvestorField *pInvestor, CFutureFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

	///请求查询交易编码响应
	virtual void OnRspQryTradingCode(CFutureFtdcTradingCodeField *pTradingCode, CFutureFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

	///请求查询合约保证金率响应
	virtual void OnRspQryInstrumentMarginRate(CFutureFtdcInstrumentMarginRateField *pInstrumentMarginRate, CFutureFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

	///请求查询合约手续费率响应
	virtual void OnRspQryInstrumentCommissionRate(CFutureFtdcInstrumentCommissionRateField *pInstrumentCommissionRate, CFutureFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

	///请求查询交易所响应
	virtual void OnRspQryExchange(CFutureFtdcExchangeField *pExchange, CFutureFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

	///请求查询合约响应
	virtual void OnRspQryInstrument(CFutureFtdcInstrumentField *pInstrument, CFutureFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

	///请求查询行情响应
	virtual void OnRspQryDepthMarketData(CFutureFtdcDepthMarketDataField *pDepthMarketData, CFutureFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

	///请求查询投资者结算结果响应
	virtual void OnRspQrySettlementInfo(CFutureFtdcSettlementInfoField *pSettlementInfo, CFutureFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

	///请求查询转帐银行响应
	virtual void OnRspQryTransferBank(CFutureFtdcTransferBankField *pTransferBank, CFutureFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

	///请求查询投资者持仓明细响应
	virtual void OnRspQryInvestorPositionDetail(CFutureFtdcInvestorPositionDetailField *pInvestorPositionDetail, CFutureFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

	///请求查询投资者持仓明细响应
	virtual void OnRspQryInvestorPositionCombineDetail(CFutureFtdcInvestorPositionCombineDetailField *pInvestorPositionCombineDetail, CFutureFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

	///查询保证金监管系统经纪公司资金账户密钥响应
	virtual void OnRspQryCFMMCTradingAccountKey(CFutureFtdcCFMMCTradingAccountKeyField *pCFMMCTradingAccountKey, CFutureFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

	///请求查询仓单折抵信息响应
	virtual void OnRspQryEWarrantOffset(CFutureFtdcEWarrantOffsetField *pEWarrantOffset, CFutureFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

	///请求查询执行宣告响应
	virtual void OnRspQryExecOrder(CFutureFtdcExecOrderField *pExecOrder, CFutureFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

	///请求查询执行宣告操作响应
	virtual void OnRspQryExecOrderAction(CFutureFtdcExecOrderActionField *pExecOrderAction, CFutureFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

	///请求查询错误执行宣告响应
	virtual void OnRspQryErrExecOrder(CFutureFtdcErrExecOrderField *pErrExecOrder, CFutureFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

	///请求查询错误执行宣告操作响应
	virtual void OnRspQryErrExecOrderAction(CFutureFtdcErrExecOrderActionField *pErrExecOrderAction, CFutureFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

	///请求查询转帐流水响应
	virtual void OnRspQryTransferSerial(CFutureFtdcTransferSerialField *pTransferSerial, CFutureFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

	///请求查询银期签约关系响应
	virtual void OnRspQryAccountregister(CFutureFtdcAccountregisterField *pAccountregister, CFutureFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

	///错误应答
	virtual void OnRspError(CFutureFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

	///请求查询签约银行响应
	virtual void OnRspQryContractBank(CFutureFtdcContractBankField *pContractBank, CFutureFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

	///请求查询交易通知响应
	virtual void OnRspQryTradingNotice(CFutureFtdcTradingNoticeField *pTradingNotice, CFutureFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

	///请求查询经纪公司交易参数响应
	virtual void OnRspQryBrokerTradingParams(CFutureFtdcBrokerTradingParamsField *pBrokerTradingParams, CFutureFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

	///请求查询经纪公司交易算法响应
	virtual void OnRspQryBrokerTradingAlgos(CFutureFtdcBrokerTradingAlgosField *pBrokerTradingAlgos, CFutureFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};
};

#ifndef WINDOWS
	#if __GNUC__ >= 4
		#pragma GCC visibility push(default)
	#endif
#endif
class QUERY_API_EXPORT CFutureFtdcQueryApi
{
public:
	///创建QueryApi
	///@param pszFlowPath 存贮订阅信息文件的目录，默认为当前目录
	///@return 创建出的UserApi
	//modify for udp marketdata
	static CFutureFtdcQueryApi *CreateFtdcQueryApi(const char *pszFlowPath = "", const bool bIsUsingUdp=false);
	
	///删除接口对象本身
	///@remark 不再使用本接口对象时,调用该函数删除接口对象
	virtual void Release() = 0;
	
	///初始化
	///@remark 初始化运行环境,只有调用后,接口才开始工作
	virtual void Init() = 0;
	
	///等待接口线程结束运行
	///@return 线程退出代码
	virtual int Join() = 0;
	
	///获取当前交易日
	///@retrun 获取到的交易日
	///@remark 只有登录成功后,才能得到正确的交易日
	virtual const char *GetTradingDay() = 0;
	
	///注册前置机网络地址
	///@param pszFrontAddress：前置机网络地址。
	///@remark 网络地址的格式为：“protocol://ipaddress:port”，如：”tcp://127.0.0.1:17001”。 
	///@remark “tcp”代表传输协议，“127.0.0.1”代表服务器地址。”17001”代表服务器端口号。
	virtual void RegisterFront(char *pszFrontAddress, unsigned int priority = 0) = 0;
	
	///注册回调接口
	///@param pSpi 派生自回调接口类的实例
	virtual void RegisterSpi(CFutureFtdcQuerySpi *pSpi) = 0;
	
	///订阅私有流。
	///@param nResumeType 私有流重传方式  
	///        FUTURE_TERT_RESTART:从本交易日开始重传
	///        FUTURE_TERT_RESUME:从上次收到的续传
	///        FUTURE_TERT_QUICK:只传送登录后私有流的内容
	///@remark 该方法要在Init方法前调用。若不调用则不会收到私有流的数据。
	virtual void SubscribePrivateTopic(FUTURE_TE_RESUME_TYPE nResumeType) = 0;
	
	///订阅公共流。
	///@param nResumeType 公共流重传方式  
	///        FUTURE_TERT_RESTART:从本交易日开始重传
	///        FUTURE_TERT_RESUME:从上次收到的续传
	///        FUTURE_TERT_QUICK:只传送登录后公共流的内容
	///@remark 该方法要在Init方法前调用。若不调用则不会收到公共流的数据。
	virtual void SubscribePublicTopic(FUTURE_TE_RESUME_TYPE nResumeType) = 0;

  ///客户端认证请求
	virtual int ReqAuthenticate(CFutureFtdcReqAuthenticateField *pReqAuthenticateField, int nRequestID) = 0;
	
	///用户登录请求
	virtual int ReqUserLogin(CFutureFtdcReqUserLoginField *pReqUserLoginField, int nRequestID) = 0;
	

	///登出请求
	virtual int ReqUserLogout(CFutureFtdcUserLogoutField *pUserLogout, int nRequestID) = 0;

	///请求查询报单
	virtual int ReqQryOrder(CFutureFtdcQryOrderField *pQryOrder, int nRequestID) = 0;

	///请求查询成交
	virtual int ReqQryTrade(CFutureFtdcQryTradeField *pQryTrade, int nRequestID) = 0;

	///请求查询投资者持仓
	virtual int ReqQryInvestorPosition(CFutureFtdcQryInvestorPositionField *pQryInvestorPosition, int nRequestID) = 0;

	///请求查询资金账户
	virtual int ReqQryTradingAccount(CFutureFtdcQryTradingAccountField *pQryTradingAccount, int nRequestID) = 0;

	///请求查询投资者
	virtual int ReqQryInvestor(CFutureFtdcQryInvestorField *pQryInvestor, int nRequestID) = 0;

	///请求查询交易编码
	virtual int ReqQryTradingCode(CFutureFtdcQryTradingCodeField *pQryTradingCode, int nRequestID) = 0;

	///请求查询合约保证金率
	virtual int ReqQryInstrumentMarginRate(CFutureFtdcQryInstrumentMarginRateField *pQryInstrumentMarginRate, int nRequestID) = 0;

	///请求查询合约手续费率
	virtual int ReqQryInstrumentCommissionRate(CFutureFtdcQryInstrumentCommissionRateField *pQryInstrumentCommissionRate, int nRequestID) = 0;

	///请求查询交易所
	virtual int ReqQryExchange(CFutureFtdcQryExchangeField *pQryExchange, int nRequestID) = 0;

	///请求查询合约
	virtual int ReqQryInstrument(CFutureFtdcQryInstrumentField *pQryInstrument, int nRequestID) = 0;

	///请求查询行情
	virtual int ReqQryDepthMarketData(CFutureFtdcQryDepthMarketDataField *pQryDepthMarketData, int nRequestID) = 0;

	///请求查询投资者结算结果
	virtual int ReqQrySettlementInfo(CFutureFtdcQrySettlementInfoField *pQrySettlementInfo, int nRequestID) = 0;

	///请求查询转帐银行
	virtual int ReqQryTransferBank(CFutureFtdcQryTransferBankField *pQryTransferBank, int nRequestID) = 0;

	///请求查询投资者持仓明细
	virtual int ReqQryInvestorPositionDetail(CFutureFtdcQryInvestorPositionDetailField *pQryInvestorPositionDetail, int nRequestID) = 0;

	///请求查询投资者持仓明细
	virtual int ReqQryInvestorPositionCombineDetail(CFutureFtdcQryInvestorPositionCombineDetailField *pQryInvestorPositionCombineDetail, int nRequestID) = 0;

	///请求查询保证金监管系统经纪公司资金账户密钥
	virtual int ReqQryCFMMCTradingAccountKey(CFutureFtdcQryCFMMCTradingAccountKeyField *pQryCFMMCTradingAccountKey, int nRequestID) = 0;

	///请求查询仓单折抵信息
	virtual int ReqQryEWarrantOffset(CFutureFtdcQryEWarrantOffsetField *pQryEWarrantOffset, int nRequestID) = 0;

	///请求查询执行宣告
	virtual int ReqQryExecOrder(CFutureFtdcQryExecOrderField *pQryExecOrder, int nRequestID) = 0;

	///请求查询执行宣告操作
	virtual int ReqQryExecOrderAction(CFutureFtdcQryExecOrderActionField *pQryExecOrderAction, int nRequestID) = 0;

	///请求查询错误执行宣告
	virtual int ReqQryErrExecOrder(CFutureFtdcQryErrExecOrderField *pQryErrExecOrder, int nRequestID) = 0;

	///请求查询错误执行宣告操作
	virtual int ReqQryErrExecOrderAction(CFutureFtdcQryErrExecOrderActionField *pQryErrExecOrderAction, int nRequestID) = 0;

	///请求查询转帐流水
	virtual int ReqQryTransferSerial(CFutureFtdcQryTransferSerialField *pQryTransferSerial, int nRequestID) = 0;

	///请求查询银期签约关系
	virtual int ReqQryAccountregister(CFutureFtdcQryAccountregisterField *pQryAccountregister, int nRequestID) = 0;

	///请求查询签约银行
	virtual int ReqQryContractBank(CFutureFtdcQryContractBankField *pQryContractBank, int nRequestID) = 0;

	///请求查询交易通知
	virtual int ReqQryTradingNotice(CFutureFtdcQryTradingNoticeField *pQryTradingNotice, int nRequestID) = 0;

	///请求查询经纪公司交易参数
	virtual int ReqQryBrokerTradingParams(CFutureFtdcQryBrokerTradingParamsField *pQryBrokerTradingParams, int nRequestID) = 0;

	///请求查询经纪公司交易算法
	virtual int ReqQryBrokerTradingAlgos(CFutureFtdcQryBrokerTradingAlgosField *pQryBrokerTradingAlgos, int nRequestID) = 0;
protected:
	~CFutureFtdcQueryApi(){};
};

#ifndef WINDOWS
	#if __GNUC__ >= 4
		#pragma GCC visibility pop
	#endif
#endif
#endif
