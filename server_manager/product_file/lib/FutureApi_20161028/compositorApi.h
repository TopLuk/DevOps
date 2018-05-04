#if !defined(COMPOSITE_FTDCTRADERAPI_H)
#define COMPOSITE_FTDCTRADERAPI_H

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "FutureFtdcUserApiStruct.h"

#if defined(ISLIB) && defined(WIN32)
#ifdef LIB_COMPOSITE_TRADER_API_EXPORT
#define COMPOSITE_TRADER_API_EXPORT __declspec(dllexport)
#else
#define COMPOSITE_TRADER_API_EXPORT __declspec(dllimport)
#endif
#else
#define COMPOSITE_TRADER_API_EXPORT 
#endif

enum API_CONNECT_TYPE
{
		TYPE_TRADE_API=0,
		TYPE_QUERY_API=1,
		TYPE_PRIVATE_API=2
};

class CFutureFtdcCompositeSpi
{
public:
	///当客户端与交易后台建立起通信连接时（还未登录前），该方法被调用。
	virtual void OnFrontConnected(){};
	
	virtual void OnSingleFrontConnected(API_CONNECT_TYPE connecType){};
	
	///当客户端与交易后台通信连接断开时，该方法被调用。当发生这个情况后，API会自动重新连接，客户端可不做处理。
	///@param nReason 错误原因
	///        0x1001 网络读失败
	///        0x1002 网络写失败
	///        0x2001 接收心跳超时
	///        0x2002 发送心跳失败
	///        0x2003 收到错误报文
	virtual void OnFrontDisconnected(int nReason){};
		
	virtual void OnSingleFrontDisconnected(API_CONNECT_TYPE connecType,int nReason){};	
		
	///心跳超时警告。当长时间未收到报文时，该方法被调用。
	///@param nTimeLapse 距离上次接收报文的时间
	virtual void OnHeartBeatWarning(int nTimeLapse){};
	
	///客户端认证响应
	virtual void OnRspAuthenticate(CFutureFtdcRspAuthenticateField *pRspAuthenticateField, CFutureFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

	virtual void OnRspUserLogin(CFutureFtdcRspUserLoginField *pRspUserLogin, CFutureFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};
	
	virtual void OnSingleRspUserLogin(API_CONNECT_TYPE connecType,CFutureFtdcRspUserLoginField *pRspUserLogin, CFutureFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};
	///登出请求响应
	virtual void OnRspUserLogout(CFutureFtdcUserLogoutField *pUserLogout, CFutureFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};
	///用户口令更新请求响应
	virtual void OnRspUserPasswordUpdate(CFutureFtdcUserPasswordUpdateField *pUserPasswordUpdate, CFutureFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};
	///资金账户口令更新请求响应
	virtual void OnRspTradingAccountPasswordUpdate(CFutureFtdcTradingAccountPasswordUpdateField *pTradingAccountPasswordUpdate, CFutureFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};
	///报单录入请求响应
	virtual void OnRspOrderInsert(CFutureFtdcInputOrderField *pInputOrder, CFutureFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};
	///报单操作请求响应
	virtual void OnRspOrderAction(CFutureFtdcInputOrderActionField *pInputOrderAction, CFutureFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};
	///查询最大报单数量响应
	virtual void OnRspQueryMaxOrderVolume(CFutureFtdcQueryMaxOrderVolumeField *pQueryMaxOrderVolume, CFutureFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};
	///投资者结算结果确认响应
	virtual void OnRspSettlementInfoConfirm(CFutureFtdcSettlementInfoConfirmField *pSettlementInfoConfirm, CFutureFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};
	///执行宣告录入请求响应
	virtual void OnRspExecOrderInsert(CFutureFtdcInputExecOrderField *pInputExecOrder, CFutureFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};
	///执行宣告操作请求响应
	virtual void OnRspExecOrderAction(CFutureFtdcInputExecOrderActionField *pInputExecOrderAction, CFutureFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};
	///报价录入请求响应
	virtual void OnRspQuoteInsert(CFutureFtdcInputQuoteField *pInputQuote, CFutureFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};
	///报价操作请求响应
	virtual void OnRspQuoteAction(CFutureFtdcInputQuoteActionField *pInputQuoteAction, CFutureFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};
	///询价操作应答
	virtual void OnRspForQuote(CFutureFtdcInputForQuoteField *pInputForQuote, CFutureFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};
	///请求资金内转响应
	virtual void OnRspInternalTransfer(CFutureFtdcInternalTransferField *pInternalTransfer, CFutureFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};
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

	///报单通知
	virtual void OnRtnOrder(CFutureFtdcOrderField *pOrder) {};

	///成交通知
	virtual void OnRtnTrade(CFutureFtdcTradeField *pTrade) {};

	///报单录入错误回报
	virtual void OnErrRtnOrderInsert(CFutureFtdcInputOrderField *pInputOrder, CFutureFtdcRspInfoField *pRspInfo) {};

	///报单操作错误回报
	virtual void OnErrRtnOrderAction(CFutureFtdcOrderActionField *pOrderAction, CFutureFtdcRspInfoField *pRspInfo) {};

	///合约交易状态通知
	virtual void OnRtnInstrumentStatus(CFutureFtdcInstrumentStatusField *pInstrumentStatus) {};

	///提示条件单校验错误
	virtual void OnRtnErrorConditionalOrder(CFutureFtdcErrorConditionalOrderField *pErrorConditionalOrder) {};

	///报价录入错误回报
	virtual void OnErrRtnQuoteInsert(CFutureFtdcInputQuoteField *pInputQuote, CFutureFtdcRspInfoField *pRspInfo) {};

	///报价操作错误回报
	virtual void OnErrRtnQuoteAction(CFutureFtdcQuoteActionField *pQuoteAction, CFutureFtdcRspInfoField *pRspInfo) {};

	///询价通知
	virtual void OnRtnForQuote(CFutureFtdcForQuoteField *pForQuote) {};

	///询价回报
	virtual void OnRtnExchRspForQuote(CFutureFtdcExchRspForQuoteField *pExchRspForQuote) {};

	///提示交易所询价失败
	virtual void OnRtnErrExchRtnForQuote(CFutureFtdcErrRtnExchRtnForQuoteField *pErrRtnExchRtnForQuote) {};

	///交易所报单录入错误回报
	virtual void OnRtnErrExchRtnOrderInsert(CFutureFtdcExchangeOrderInsertErrorField *pExchangeOrderInsertError) {};

	///交易所报单操作错误回报
	virtual void OnRtnErrExchRtnOrderAction(CFutureFtdcExchangeOrderActionErrorField *pExchangeOrderActionError) {};
	///请求查询签约银行响应
	virtual void OnRspQryContractBank(CFutureFtdcContractBankField *pContractBank, CFutureFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};
	///请求查询交易通知响应
	virtual void OnRspQryTradingNotice(CFutureFtdcTradingNoticeField *pTradingNotice, CFutureFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};
	///请求查询经纪公司交易参数响应
	virtual void OnRspQryBrokerTradingParams(CFutureFtdcBrokerTradingParamsField *pBrokerTradingParams, CFutureFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};
	///请求查询经纪公司交易算法响应
	virtual void OnRspQryBrokerTradingAlgos(CFutureFtdcBrokerTradingAlgosField *pBrokerTradingAlgos, CFutureFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

	///银行发起银行资金转期货通知
	virtual void OnRtnFromBankToFutureByBank(CFutureFtdcRspTransferField *pRspTransfer) {};

	///银行发起期货资金转银行通知
	virtual void OnRtnFromFutureToBankByBank(CFutureFtdcRspTransferField *pRspTransfer) {};

	///银行发起冲正银行转期货通知
	virtual void OnRtnRepealFromBankToFutureByBank(CFutureFtdcRspRepealField *pRspRepeal) {};

	///银行发起冲正期货转银行通知
	virtual void OnRtnRepealFromFutureToBankByBank(CFutureFtdcRspRepealField *pRspRepeal) {};

	///期货发起银行资金转期货通知
	virtual void OnRtnFromBankToFutureByFuture(CFutureFtdcRspTransferField *pRspTransfer) {};

	///期货发起期货资金转银行通知
	virtual void OnRtnFromFutureToBankByFuture(CFutureFtdcRspTransferField *pRspTransfer) {};

	///系统运行时期货端手工发起冲正银行转期货请求，银行处理完毕后报盘发回的通知
	virtual void OnRtnRepealFromBankToFutureByFutureManual(CFutureFtdcRspRepealField *pRspRepeal) {};

	///系统运行时期货端手工发起冲正期货转银行请求，银行处理完毕后报盘发回的通知
	virtual void OnRtnRepealFromFutureToBankByFutureManual(CFutureFtdcRspRepealField *pRspRepeal) {};

	///期货发起查询银行余额通知
	virtual void OnRtnQueryBankBalanceByFuture(CFutureFtdcNotifyQueryAccountField *pNotifyQueryAccount) {};

	///期货发起银行资金转期货错误回报
	virtual void OnErrRtnBankToFutureByFuture(CFutureFtdcReqTransferField *pReqTransfer, CFutureFtdcRspInfoField *pRspInfo) {};

	///期货发起期货资金转银行错误回报
	virtual void OnErrRtnFutureToBankByFuture(CFutureFtdcReqTransferField *pReqTransfer, CFutureFtdcRspInfoField *pRspInfo) {};

	///系统运行时期货端手工发起冲正银行转期货错误回报
	virtual void OnErrRtnRepealBankToFutureByFutureManual(CFutureFtdcReqRepealField *pReqRepeal, CFutureFtdcRspInfoField *pRspInfo) {};

	///系统运行时期货端手工发起冲正期货转银行错误回报
	virtual void OnErrRtnRepealFutureToBankByFutureManual(CFutureFtdcReqRepealField *pReqRepeal, CFutureFtdcRspInfoField *pRspInfo) {};

	///期货发起查询银行余额错误回报
	virtual void OnErrRtnQueryBankBalanceByFuture(CFutureFtdcReqQueryAccountField *pReqQueryAccount, CFutureFtdcRspInfoField *pRspInfo) {};

	///期货发起冲正银行转期货请求，银行处理完毕后报盘发回的通知
	virtual void OnRtnRepealFromBankToFutureByFuture(CFutureFtdcRspRepealField *pRspRepeal) {};

	///期货发起冲正期货转银行请求，银行处理完毕后报盘发回的通知
	virtual void OnRtnRepealFromFutureToBankByFuture(CFutureFtdcRspRepealField *pRspRepeal) {};
	///期货发起银行资金转期货应答
	virtual void OnRspFromBankToFutureByFuture(CFutureFtdcReqTransferField *pReqTransfer, CFutureFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};
	///期货发起期货资金转银行应答
	virtual void OnRspFromFutureToBankByFuture(CFutureFtdcReqTransferField *pReqTransfer, CFutureFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

	///银行发起银期开户通知
	virtual void OnRtnOpenAccountByBank(CFutureFtdcOpenAccountField *pOpenAccount) {};

	///银行发起银期销户通知
	virtual void OnRtnCancelAccountByBank(CFutureFtdcCancelAccountField *pCancelAccount) {};

	///银行发起变更银行账号通知
	virtual void OnRtnChangeAccountByBank(CFutureFtdcChangeAccountField *pChangeAccount) {};
};

#ifndef WINDOWS
	#if __GNUC__ >= 4
		#pragma GCC visibility push(default)
	#endif
#endif
class COMPOSITE_TRADER_API_EXPORT CFutureFtdcCompositeApi
{
public:
	///创建TraderApi
	///@param pszFlowPath 存贮订阅信息文件的目录，默认为当前目录
	///@return 创建出的UserApi
	//modify for udp marketdata
	static CFutureFtdcCompositeApi *CreateFtdcCompositeApi(const char *pszFlowPath = ".", const bool bIsUsingUdp=false);
	
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
	virtual void RegisterFront(API_CONNECT_TYPE connectType,char *pszFrontAddress, unsigned int priority = 0) = 0;
	
	///注册回调接口
	///@param pSpi 派生自回调接口类的实例
	virtual void RegisterSpi(CFutureFtdcCompositeSpi *pSpi) = 0;
	
	///订阅私有流。
	///@param nResumeType 私有流重传方式  
	///        THOST_TERT_RESTART:从本交易日开始重传
	///        THOST_TERT_RESUME:从上次收到的续传
	///        THOST_TERT_QUICK:只传送登录后私有流的内容
	///@remark 该方法要在Init方法前调用。若不调用则不会收到私有流的数据。
	virtual void SubscribePrivateTopic(FUTURE_TE_RESUME_TYPE nResumeType) = 0;
	
	///订阅公共流。
	///@param nResumeType 公共流重传方式  
	///        THOST_TERT_RESTART:从本交易日开始重传
	///        THOST_TERT_RESUME:从上次收到的续传
	///        THOST_TERT_QUICK:只传送登录后公共流的内容
	///@remark 该方法要在Init方法前调用。若不调用则不会收到公共流的数据。
	virtual void SubscribePublicTopic(FUTURE_TE_RESUME_TYPE nResumeType) = 0;

  ///客户端认证请求
	virtual int ReqAuthenticate(CFutureFtdcReqAuthenticateField *pReqAuthenticateField, int nRequestID) = 0;
	
	///用户登录请求
	virtual int ReqUserLogin(CFutureFtdcReqUserLoginField *pReqUserLoginField, int nRequestID) = 0;
	
	virtual int ReqSingleUserLogin(API_CONNECT_TYPE connType,CFutureFtdcReqUserLoginField *pReqUserLoginField, int nRequestID) = 0;
	

	///登出请求
	virtual int ReqUserLogout(CFutureFtdcUserLogoutField *pUserLogout, int nRequestID) = 0;

	///用户口令更新请求
	virtual int ReqUserPasswordUpdate(CFutureFtdcUserPasswordUpdateField *pUserPasswordUpdate, int nRequestID) = 0;

	///资金账户口令更新请求
	virtual int ReqTradingAccountPasswordUpdate(CFutureFtdcTradingAccountPasswordUpdateField *pTradingAccountPasswordUpdate, int nRequestID) = 0;

	///报单录入请求
	virtual int ReqOrderInsert(CFutureFtdcInputOrderField *pInputOrder, int nRequestID) = 0;

	///报单操作请求
	virtual int ReqOrderAction(CFutureFtdcInputOrderActionField *pInputOrderAction, int nRequestID) = 0;

	///查询最大报单数量请求
	virtual int ReqQueryMaxOrderVolume(CFutureFtdcQueryMaxOrderVolumeField *pQueryMaxOrderVolume, int nRequestID) = 0;

	///投资者结算结果确认
	virtual int ReqSettlementInfoConfirm(CFutureFtdcSettlementInfoConfirmField *pSettlementInfoConfirm, int nRequestID) = 0;

	///执行宣告录入请求
	virtual int ReqExecOrderInsert(CFutureFtdcInputExecOrderField *pInputExecOrder, int nRequestID) = 0;

	///执行宣告操作请求
	virtual int ReqExecOrderAction(CFutureFtdcInputExecOrderActionField *pInputExecOrderAction, int nRequestID) = 0;

	///报价录入请求
	virtual int ReqQuoteInsert(CFutureFtdcInputQuoteField *pInputQuote, int nRequestID) = 0;

	///报价操作请求
	virtual int ReqQuoteAction(CFutureFtdcInputQuoteActionField *pInputQuoteAction, int nRequestID) = 0;

	///询价操作请求
	virtual int ReqForQuote(CFutureFtdcInputForQuoteField *pInputForQuote, int nRequestID) = 0;

	///请求资金内转
	virtual int ReqInternalTransfer(CFutureFtdcInternalTransferField *pInternalTransfer, int nRequestID) = 0;

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

	///期货发起银行资金转期货请求
	virtual int ReqFromBankToFutureByFuture(CFutureFtdcReqTransferField *pReqTransfer, int nRequestID) = 0;

	///期货发起期货资金转银行请求
	virtual int ReqFromFutureToBankByFuture(CFutureFtdcReqTransferField *pReqTransfer, int nRequestID) = 0;
protected:
	~CFutureFtdcCompositeApi(){};
};

#ifndef WINDOWS
	#if __GNUC__ >= 4
		#pragma GCC visibility pop
	#endif
#endif
#endif
