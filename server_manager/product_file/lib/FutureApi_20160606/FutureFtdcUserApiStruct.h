
#if !defined(FUTURE_FTDCSTRUCT_H)
#define FUTURE_FTDCSTRUCT_H

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "FutureFtdcUserApiDataType.h"

#pragma pack(push)
#pragma pack(1)

///信息分发
struct CFutureFtdcDisseminationField
{
	///序列系列号
	TFutureFtdcSequenceSeriesType	SequenceSeries;
	///序列号
	TFutureFtdcSequenceNoType	SequenceNo;
};

///用户登录请求
struct CFutureFtdcReqUserLoginField
{
	///交易日
	TFutureFtdcDateType	TradingDay;
	///经纪公司代码
	TFutureFtdcBrokerIDType	BrokerID;
	///用户代码
	TFutureFtdcUserIDType	UserID;
	///密码
	TFutureFtdcPasswordType	Password;
	///用户端产品信息
	TFutureFtdcProductInfoType	UserProductInfo;
	///接口端产品信息
	TFutureFtdcProductInfoType	InterfaceProductInfo;
	///协议信息
	TFutureFtdcProtocolInfoType	ProtocolInfo;
	///Mac地址
	TFutureFtdcMacAddressType	MacAddress;
	///动态密码
	TFutureFtdcPasswordType	OneTimePassword;
	///终端IP地址
	TFutureFtdcIPAddressType	ClientIPAddress;
};

///用户登录应答
struct CFutureFtdcRspUserLoginField
{
	///交易日
	TFutureFtdcDateType	TradingDay;
	///登录成功时间
	TFutureFtdcTimeType	LoginTime;
	///经纪公司代码
	TFutureFtdcBrokerIDType	BrokerID;
	///用户代码
	TFutureFtdcUserIDType	UserID;
	///交易系统名称
	TFutureFtdcSystemNameType	SystemName;
	///前置编号
	TFutureFtdcFrontIDType	FrontID;
	///会话编号
	TFutureFtdcSessionIDType	SessionID;
	///最大报单引用
	TFutureFtdcOrderRefType	MaxOrderRef;
	///上期所时间
	TFutureFtdcTimeType	SHFETime;
	///大商所时间
	TFutureFtdcTimeType	DCETime;
	///郑商所时间
	TFutureFtdcTimeType	CZCETime;
	///中金所时间
	TFutureFtdcTimeType	FFEXTime;
};

///用户登出请求
struct CFutureFtdcUserLogoutField
{
	///经纪公司代码
	TFutureFtdcBrokerIDType	BrokerID;
	///用户代码
	TFutureFtdcUserIDType	UserID;
};

///强制交易员退出
struct CFutureFtdcForceUserLogoutField
{
	///经纪公司代码
	TFutureFtdcBrokerIDType	BrokerID;
	///用户代码
	TFutureFtdcUserIDType	UserID;
};

///客户端认证请求
struct CFutureFtdcReqAuthenticateField
{
	///经纪公司代码
	TFutureFtdcBrokerIDType	BrokerID;
	///用户代码
	TFutureFtdcUserIDType	UserID;
	///用户端产品信息
	TFutureFtdcProductInfoType	UserProductInfo;
	///认证码
	TFutureFtdcAuthCodeType	AuthCode;
};

///客户端认证响应
struct CFutureFtdcRspAuthenticateField
{
	///经纪公司代码
	TFutureFtdcBrokerIDType	BrokerID;
	///用户代码
	TFutureFtdcUserIDType	UserID;
	///用户端产品信息
	TFutureFtdcProductInfoType	UserProductInfo;
};

///客户端认证信息
struct CFutureFtdcAuthenticationInfoField
{
	///经纪公司代码
	TFutureFtdcBrokerIDType	BrokerID;
	///用户代码
	TFutureFtdcUserIDType	UserID;
	///用户端产品信息
	TFutureFtdcProductInfoType	UserProductInfo;
	///认证信息
	TFutureFtdcAuthInfoType	AuthInfo;
	///是否为认证结果
	TFutureFtdcBoolType	IsResult;
};

///银期转帐报文头
struct CFutureFtdcTransferHeaderField
{
	///版本号，常量，1.0
	TFutureFtdcVersionType	Version;
	///交易代码，必填
	TFutureFtdcTradeCodeType	TradeCode;
	///交易日期，必填，格式：yyyymmdd
	TFutureFtdcTradeDateType	TradeDate;
	///交易时间，必填，格式：hhmmss
	TFutureFtdcTradeTimeType	TradeTime;
	///发起方流水号，N/A
	TFutureFtdcTradeSerialType	TradeSerial;
	///期货公司代码，必填
	TFutureFtdcFutureIDType	FutureID;
	///银行代码，根据查询银行得到，必填
	TFutureFtdcBankIDType	BankID;
	///银行分中心代码，根据查询银行得到，必填
	TFutureFtdcBankBrchIDType	BankBrchID;
	///操作员，N/A
	TFutureFtdcOperNoType	OperNo;
	///交易设备类型，N/A
	TFutureFtdcDeviceIDType	DeviceID;
	///记录数，N/A
	TFutureFtdcRecordNumType	RecordNum;
	///会话编号，N/A
	TFutureFtdcSessionIDType	SessionID;
	///请求编号，N/A
	TFutureFtdcRequestIDType	RequestID;
};

///银行资金转期货请求，TradeCode=202001
struct CFutureFtdcTransferBankToFutureReqField
{
	///期货资金账户
	TFutureFtdcAccountIDType	FutureAccount;
	///密码标志
	TFutureFtdcFuturePwdFlagType	FuturePwdFlag;
	///密码
	TFutureFtdcFutureAccPwdType	FutureAccPwd;
	///转账金额
	TFutureFtdcMoneyType	TradeAmt;
	///客户手续费
	TFutureFtdcMoneyType	CustFee;
	///币种：RMB-人民币 USD-美圆 HKD-港元
	TFutureFtdcCurrencyCodeType	CurrencyCode;
};

///银行资金转期货请求响应
struct CFutureFtdcTransferBankToFutureRspField
{
	///响应代码
	TFutureFtdcRetCodeType	RetCode;
	///响应信息
	TFutureFtdcRetInfoType	RetInfo;
	///资金账户
	TFutureFtdcAccountIDType	FutureAccount;
	///转帐金额
	TFutureFtdcMoneyType	TradeAmt;
	///应收客户手续费
	TFutureFtdcMoneyType	CustFee;
	///币种
	TFutureFtdcCurrencyCodeType	CurrencyCode;
};

///期货资金转银行请求，TradeCode=202002
struct CFutureFtdcTransferFutureToBankReqField
{
	///期货资金账户
	TFutureFtdcAccountIDType	FutureAccount;
	///密码标志
	TFutureFtdcFuturePwdFlagType	FuturePwdFlag;
	///密码
	TFutureFtdcFutureAccPwdType	FutureAccPwd;
	///转账金额
	TFutureFtdcMoneyType	TradeAmt;
	///客户手续费
	TFutureFtdcMoneyType	CustFee;
	///币种：RMB-人民币 USD-美圆 HKD-港元
	TFutureFtdcCurrencyCodeType	CurrencyCode;
};

///期货资金转银行请求响应
struct CFutureFtdcTransferFutureToBankRspField
{
	///响应代码
	TFutureFtdcRetCodeType	RetCode;
	///响应信息
	TFutureFtdcRetInfoType	RetInfo;
	///资金账户
	TFutureFtdcAccountIDType	FutureAccount;
	///转帐金额
	TFutureFtdcMoneyType	TradeAmt;
	///应收客户手续费
	TFutureFtdcMoneyType	CustFee;
	///币种
	TFutureFtdcCurrencyCodeType	CurrencyCode;
};

///查询银行资金请求，TradeCode=204002
struct CFutureFtdcTransferQryBankReqField
{
	///期货资金账户
	TFutureFtdcAccountIDType	FutureAccount;
	///密码标志
	TFutureFtdcFuturePwdFlagType	FuturePwdFlag;
	///密码
	TFutureFtdcFutureAccPwdType	FutureAccPwd;
	///币种：RMB-人民币 USD-美圆 HKD-港元
	TFutureFtdcCurrencyCodeType	CurrencyCode;
};

///查询银行资金请求响应
struct CFutureFtdcTransferQryBankRspField
{
	///响应代码
	TFutureFtdcRetCodeType	RetCode;
	///响应信息
	TFutureFtdcRetInfoType	RetInfo;
	///资金账户
	TFutureFtdcAccountIDType	FutureAccount;
	///银行余额
	TFutureFtdcMoneyType	TradeAmt;
	///银行可用余额
	TFutureFtdcMoneyType	UseAmt;
	///银行可取余额
	TFutureFtdcMoneyType	FetchAmt;
	///币种
	TFutureFtdcCurrencyCodeType	CurrencyCode;
};

///查询银行交易明细请求，TradeCode=204999
struct CFutureFtdcTransferQryDetailReqField
{
	///期货资金账户
	TFutureFtdcAccountIDType	FutureAccount;
};

///查询银行交易明细请求响应
struct CFutureFtdcTransferQryDetailRspField
{
	///交易日期
	TFutureFtdcDateType	TradeDate;
	///交易时间
	TFutureFtdcTradeTimeType	TradeTime;
	///交易代码
	TFutureFtdcTradeCodeType	TradeCode;
	///期货流水号
	TFutureFtdcTradeSerialNoType	FutureSerial;
	///期货公司代码
	TFutureFtdcFutureIDType	FutureID;
	///资金帐号
	TFutureFtdcFutureAccountType	FutureAccount;
	///银行流水号
	TFutureFtdcTradeSerialNoType	BankSerial;
	///银行代码
	TFutureFtdcBankIDType	BankID;
	///银行分中心代码
	TFutureFtdcBankBrchIDType	BankBrchID;
	///银行账号
	TFutureFtdcBankAccountType	BankAccount;
	///证件号码
	TFutureFtdcCertCodeType	CertCode;
	///货币代码
	TFutureFtdcCurrencyCodeType	CurrencyCode;
	///发生金额
	TFutureFtdcMoneyType	TxAmount;
	///有效标志
	TFutureFtdcTransferValidFlagType	Flag;
};

///响应信息
struct CFutureFtdcRspInfoField
{
	///错误代码
	TFutureFtdcErrorIDType	ErrorID;
	///错误信息
	TFutureFtdcErrorMsgType	ErrorMsg;
};

///交易所
struct CFutureFtdcExchangeField
{
	///交易所代码
	TFutureFtdcExchangeIDType	ExchangeID;
	///交易所名称
	TFutureFtdcExchangeNameType	ExchangeName;
	///交易所属性
	TFutureFtdcExchangePropertyType	ExchangeProperty;
};

///产品
struct CFutureFtdcProductField
{
	///产品代码
	TFutureFtdcInstrumentIDType	ProductID;
	///产品名称
	TFutureFtdcProductNameType	ProductName;
	///交易所代码
	TFutureFtdcExchangeIDType	ExchangeID;
	///产品类型
	TFutureFtdcProductClassType	ProductClass;
	///合约数量乘数
	TFutureFtdcVolumeMultipleType	VolumeMultiple;
	///最小变动价位
	TFutureFtdcPriceType	PriceTick;
	///市价单最大下单量
	TFutureFtdcVolumeType	MaxMarketOrderVolume;
	///市价单最小下单量
	TFutureFtdcVolumeType	MinMarketOrderVolume;
	///限价单最大下单量
	TFutureFtdcVolumeType	MaxLimitOrderVolume;
	///限价单最小下单量
	TFutureFtdcVolumeType	MinLimitOrderVolume;
	///持仓类型
	TFutureFtdcPositionTypeType	PositionType;
	///持仓日期类型
	TFutureFtdcPositionDateTypeType	PositionDateType;
	///平仓处理类型
	TFutureFtdcCloseDealTypeType	CloseDealType;
};

///合约
struct CFutureFtdcInstrumentField
{
	///交易所代码
	TFutureFtdcExchangeIDType	ExchangeID;
	///合约代码
	TFutureFtdcInstrumentIDType	InstrumentID;
	///合约名称
	TFutureFtdcInstrumentNameType	InstrumentName;
	///合约在交易所的代码
	TFutureFtdcExchangeInstIDType	ExchangeInstID;
	///产品代码
	TFutureFtdcInstrumentIDType	ProductID;
	///产品类型
	TFutureFtdcProductClassType	ProductClass;
	///交割年份
	TFutureFtdcYearType	DeliveryYear;
	///交割月
	TFutureFtdcMonthType	DeliveryMonth;
	///市价单最大下单量
	TFutureFtdcVolumeType	MaxMarketOrderVolume;
	///市价单最小下单量
	TFutureFtdcVolumeType	MinMarketOrderVolume;
	///限价单最大下单量
	TFutureFtdcVolumeType	MaxLimitOrderVolume;
	///限价单最小下单量
	TFutureFtdcVolumeType	MinLimitOrderVolume;
	///合约数量乘数
	TFutureFtdcVolumeMultipleType	VolumeMultiple;
	///最小变动价位
	TFutureFtdcPriceType	PriceTick;
	///创建日
	TFutureFtdcDateType	CreateDate;
	///上市日
	TFutureFtdcDateType	OpenDate;
	///到期日
	TFutureFtdcDateType	ExpireDate;
	///开始交割日
	TFutureFtdcDateType	StartDelivDate;
	///结束交割日
	TFutureFtdcDateType	EndDelivDate;
	///合约生命周期状态
	TFutureFtdcInstLifePhaseType	InstLifePhase;
	///当前是否交易
	TFutureFtdcBoolType	IsTrading;
	///持仓类型
	TFutureFtdcPositionTypeType	PositionType;
	///持仓日期类型
	TFutureFtdcPositionDateTypeType	PositionDateType;
	///是否使用大额单边保证金算法
	TFutureFtdcMaxMarginSideAlgorithmType	MaxMarginSideAlgorithm;
	///基础商品代码
	TFutureFtdcInstrumentIDType	UnderlyingInstrID;
	///执行价
	TFutureFtdcPriceType	StrikePrice;
	///期权类型
	TFutureFtdcOptionsTypeType	OptionsType;
	///合约基础商品乘数
	TFutureFtdcVolumeMultipleType	UnderlyingMultiple;
};

///经纪公司
struct CFutureFtdcBrokerField
{
	///经纪公司代码
	TFutureFtdcBrokerIDType	BrokerID;
	///经纪公司简称
	TFutureFtdcBrokerAbbrType	BrokerAbbr;
	///经纪公司名称
	TFutureFtdcBrokerNameType	BrokerName;
	///是否活跃
	TFutureFtdcBoolType	IsActive;
};

///交易所交易员
struct CFutureFtdcTraderField
{
	///交易所代码
	TFutureFtdcExchangeIDType	ExchangeID;
	///交易所交易员代码
	TFutureFtdcTraderIDType	TraderID;
	///会员代码
	TFutureFtdcParticipantIDType	ParticipantID;
	///密码
	TFutureFtdcPasswordType	Password;
	///安装数量
	TFutureFtdcInstallCountType	InstallCount;
	///经纪公司代码
	TFutureFtdcBrokerIDType	BrokerID;
};

///投资者
struct CFutureFtdcInvestorField
{
	///投资者代码
	TFutureFtdcInvestorIDType	InvestorID;
	///经纪公司代码
	TFutureFtdcBrokerIDType	BrokerID;
	///投资者分组代码
	TFutureFtdcInvestorIDType	InvestorGroupID;
	///投资者名称
	TFutureFtdcPartyNameType	InvestorName;
	///证件类型
	TFutureFtdcIdCardTypeType	IdentifiedCardType;
	///证件号码
	TFutureFtdcIdentifiedCardNoType	IdentifiedCardNo;
	///是否活跃
	TFutureFtdcBoolType	IsActive;
	///联系电话
	TFutureFtdcTelephoneType	Telephone;
	///通讯地址
	TFutureFtdcAddressType	Address;
	///开户日期
	TFutureFtdcDateType	OpenDate;
	///手机
	TFutureFtdcMobileType	Mobile;
	///手续费率模板代码
	TFutureFtdcInvestorIDType	CommModelID;
	///填充字段
	TFutureFtdcPadFieldType	PadField;
	///保证金率模板代码
	TFutureFtdcInvestorIDType	MarginModelID;
};

///交易编码
struct CFutureFtdcTradingCodeField
{
	///投资者代码
	TFutureFtdcInvestorIDType	InvestorID;
	///经纪公司代码
	TFutureFtdcBrokerIDType	BrokerID;
	///交易所代码
	TFutureFtdcExchangeIDType	ExchangeID;
	///客户代码
	TFutureFtdcClientIDType	ClientID;
	///是否活跃
	TFutureFtdcBoolType	IsActive;
	///交易编码类型
	TFutureFtdcClientIDTypeType	ClientIDType;
};

///会员编码和经纪公司编码对照表
struct CFutureFtdcPartBrokerField
{
	///经纪公司代码
	TFutureFtdcBrokerIDType	BrokerID;
	///交易所代码
	TFutureFtdcExchangeIDType	ExchangeID;
	///会员代码
	TFutureFtdcParticipantIDType	ParticipantID;
	///是否活跃
	TFutureFtdcBoolType	IsActive;
};

///管理用户
struct CFutureFtdcSuperUserField
{
	///用户代码
	TFutureFtdcUserIDType	UserID;
	///用户名称
	TFutureFtdcUserNameType	UserName;
	///密码
	TFutureFtdcPasswordType	Password;
	///是否活跃
	TFutureFtdcBoolType	IsActive;
};

///管理用户功能权限
struct CFutureFtdcSuperUserFunctionField
{
	///用户代码
	TFutureFtdcUserIDType	UserID;
	///功能代码
	TFutureFtdcFunctionCodeType	FunctionCode;
};

///投资者组
struct CFutureFtdcInvestorGroupField
{
	///经纪公司代码
	TFutureFtdcBrokerIDType	BrokerID;
	///投资者分组代码
	TFutureFtdcInvestorIDType	InvestorGroupID;
	///投资者分组名称
	TFutureFtdcInvestorGroupNameType	InvestorGroupName;
};

///资金账户
struct CFutureFtdcTradingAccountField
{
	///经纪公司代码
	TFutureFtdcBrokerIDType	BrokerID;
	///投资者帐号
	TFutureFtdcAccountIDType	AccountID;
	///上次质押金额
	TFutureFtdcMoneyType	PreMortgage;
	///上次信用额度
	TFutureFtdcMoneyType	PreCredit;
	///上次存款额
	TFutureFtdcMoneyType	PreDeposit;
	///上次结算准备金
	TFutureFtdcMoneyType	PreBalance;
	///上次占用的保证金
	TFutureFtdcMoneyType	PreMargin;
	///利息基数
	TFutureFtdcMoneyType	InterestBase;
	///利息收入
	TFutureFtdcMoneyType	Interest;
	///入金金额
	TFutureFtdcMoneyType	Deposit;
	///出金金额
	TFutureFtdcMoneyType	Withdraw;
	///冻结的保证金
	TFutureFtdcMoneyType	FrozenMargin;
	///冻结的资金
	TFutureFtdcMoneyType	FrozenCash;
	///冻结的手续费
	TFutureFtdcMoneyType	FrozenCommission;
	///当前保证金总额
	TFutureFtdcMoneyType	CurrMargin;
	///资金差额
	TFutureFtdcMoneyType	CashIn;
	///手续费
	TFutureFtdcMoneyType	Commission;
	///平仓盈亏
	TFutureFtdcMoneyType	CloseProfit;
	///持仓盈亏
	TFutureFtdcMoneyType	PositionProfit;
	///期货结算准备金
	TFutureFtdcMoneyType	Balance;
	///可用资金
	TFutureFtdcMoneyType	Available;
	///可取资金
	TFutureFtdcMoneyType	WithdrawQuota;
	///基本准备金
	TFutureFtdcMoneyType	Reserve;
	///交易日
	TFutureFtdcDateType	TradingDay;
	///结算编号
	TFutureFtdcSettlementIDType	SettlementID;
	///信用额度
	TFutureFtdcMoneyType	Credit;
	///质押金额
	TFutureFtdcMoneyType	Mortgage;
	///交易所保证金
	TFutureFtdcMoneyType	ExchangeMargin;
	///投资者交割保证金
	TFutureFtdcMoneyType	DeliveryMargin;
	///交易所交割保证金
	TFutureFtdcMoneyType	ExchangeDeliveryMargin;
	///保底期货结算准备金
	TFutureFtdcMoneyType	ReserveBalance;
	///期权平仓盈亏
	TFutureFtdcMoneyType	OptionCloseProfit;
	///帐户级别
	TFutureFtdcAccountLevelType	AccountLevel;
};

///投资者持仓
struct CFutureFtdcInvestorPositionField
{
	///交易所代码
	TFutureFtdcExchangeIDType	ExchangeID;
	///合约代码
	TFutureFtdcInstrumentIDType	InstrumentID;
	///经纪公司代码
	TFutureFtdcBrokerIDType	BrokerID;
	///投资者代码
	TFutureFtdcInvestorIDType	InvestorID;
	///持仓多空方向
	TFutureFtdcPosiDirectionType	PosiDirection;
	///投机套保标志
	TFutureFtdcHedgeFlagType	HedgeFlag;
	///持仓日期
	TFutureFtdcPositionDateType	PositionDate;
	///上日持仓
	TFutureFtdcVolumeType	YdPosition;
	///今日持仓
	TFutureFtdcVolumeType	Position;
	///多头冻结
	TFutureFtdcVolumeType	LongFrozen;
	///空头冻结
	TFutureFtdcVolumeType	ShortFrozen;
	///开仓冻结金额
	TFutureFtdcMoneyType	LongFrozenAmount;
	///开仓冻结金额
	TFutureFtdcMoneyType	ShortFrozenAmount;
	///开仓量
	TFutureFtdcVolumeType	OpenVolume;
	///平仓量
	TFutureFtdcVolumeType	CloseVolume;
	///开仓金额
	TFutureFtdcMoneyType	OpenAmount;
	///平仓金额
	TFutureFtdcMoneyType	CloseAmount;
	///平昨仓金额
	TFutureFtdcMoneyType	YdCloseAmount;
	///平昨仓数量
	TFutureFtdcVolumeType	YdCloseVolume;
	///持仓成本
	TFutureFtdcMoneyType	PositionCost;
	///上次占用的保证金
	TFutureFtdcMoneyType	PreMargin;
	///占用的保证金
	TFutureFtdcMoneyType	UseMargin;
	///冻结的保证金
	TFutureFtdcMoneyType	FrozenMargin;
	///冻结的资金
	TFutureFtdcMoneyType	FrozenCash;
	///冻结的手续费
	TFutureFtdcMoneyType	FrozenCommission;
	///资金差额
	TFutureFtdcMoneyType	CashIn;
	///手续费
	TFutureFtdcMoneyType	Commission;
	///平仓盈亏
	TFutureFtdcMoneyType	CloseProfit;
	///持仓盈亏
	TFutureFtdcMoneyType	PositionProfit;
	///上次结算价
	TFutureFtdcPriceType	PreSettlementPrice;
	///本次结算价
	TFutureFtdcPriceType	SettlementPrice;
	///交易日
	TFutureFtdcDateType	TradingDay;
	///结算编号
	TFutureFtdcSettlementIDType	SettlementID;
	///开仓成本
	TFutureFtdcMoneyType	OpenCost;
	///交易所保证金
	TFutureFtdcMoneyType	ExchangeMargin;
	///组合成交形成的持仓
	TFutureFtdcVolumeType	CombPosition;
	///组合多头冻结
	TFutureFtdcVolumeType	CombLongFrozen;
	///组合空头冻结
	TFutureFtdcVolumeType	CombShortFrozen;
	///逐日盯市平仓盈亏
	TFutureFtdcMoneyType	CloseProfitByDate;
	///逐笔对冲平仓盈亏
	TFutureFtdcMoneyType	CloseProfitByTrade;
	///今日持仓
	TFutureFtdcVolumeType	TodayPosition;
	///保证金率
	TFutureFtdcRatioType	MarginRateByMoney;
	///保证金率(按手数)
	TFutureFtdcRatioType	MarginRateByVolume;
	///执行冻结
	TFutureFtdcVolumeType	StrikeFrozen;
	///执行冻结金额
	TFutureFtdcMoneyType	StrikeFrozenAmount;
	///放弃执行冻结
	TFutureFtdcVolumeType	AbandonFrozen;
};

///合约保证金率
struct CFutureFtdcInstrumentMarginRateField
{
	///交易所代码
	TFutureFtdcExchangeIDType	ExchangeID;
	///合约代码
	TFutureFtdcInstrumentIDType	InstrumentID;
	///投资者范围
	TFutureFtdcInvestorRangeType	InvestorRange;
	///经纪公司代码
	TFutureFtdcBrokerIDType	BrokerID;
	///投资者代码
	TFutureFtdcInvestorIDType	InvestorID;
	///投机套保标志
	TFutureFtdcHedgeFlagType	HedgeFlag;
	///多头保证金率
	TFutureFtdcRatioType	LongMarginRatioByMoney;
	///多头保证金费
	TFutureFtdcMoneyType	LongMarginRatioByVolume;
	///空头保证金率
	TFutureFtdcRatioType	ShortMarginRatioByMoney;
	///空头保证金费
	TFutureFtdcMoneyType	ShortMarginRatioByVolume;
	///是否相对交易所收取
	TFutureFtdcBoolType	IsRelative;
};

///合约手续费率
struct CFutureFtdcInstrumentCommissionRateField
{
	///交易所代码
	TFutureFtdcExchangeIDType	ExchangeID;
	///合约代码
	TFutureFtdcInstrumentIDType	InstrumentID;
	///投资者范围
	TFutureFtdcInvestorRangeType	InvestorRange;
	///经纪公司代码
	TFutureFtdcBrokerIDType	BrokerID;
	///投资者代码
	TFutureFtdcInvestorIDType	InvestorID;
	///投机套保标志
	TFutureFtdcHedgeFlagType	HedgeFlag;
	///开仓手续费率
	TFutureFtdcRatioType	OpenRatioByMoney;
	///开仓手续费
	TFutureFtdcRatioType	OpenRatioByVolume;
	///平仓手续费率
	TFutureFtdcRatioType	CloseRatioByMoney;
	///平仓手续费
	TFutureFtdcRatioType	CloseRatioByVolume;
	///平今手续费率
	TFutureFtdcRatioType	CloseTodayRatioByMoney;
	///平今手续费
	TFutureFtdcRatioType	CloseTodayRatioByVolume;
};

///深度行情
struct CFutureFtdcDepthMarketDataField
{
	///交易日
	TFutureFtdcDateType	TradingDay;
	///合约代码
	TFutureFtdcInstrumentIDType	InstrumentID;
	///交易所代码
	TFutureFtdcExchangeIDType	ExchangeID;
	///合约在交易所的代码
	TFutureFtdcExchangeInstIDType	ExchangeInstID;
	///最新价
	TFutureFtdcPriceType	LastPrice;
	///上次结算价
	TFutureFtdcPriceType	PreSettlementPrice;
	///昨收盘
	TFutureFtdcPriceType	PreClosePrice;
	///昨持仓量
	TFutureFtdcLargeVolumeType	PreOpenInterest;
	///今开盘
	TFutureFtdcPriceType	OpenPrice;
	///最高价
	TFutureFtdcPriceType	HighestPrice;
	///最低价
	TFutureFtdcPriceType	LowestPrice;
	///数量
	TFutureFtdcVolumeType	Volume;
	///成交金额
	TFutureFtdcMoneyType	Turnover;
	///持仓量
	TFutureFtdcLargeVolumeType	OpenInterest;
	///今收盘
	TFutureFtdcPriceType	ClosePrice;
	///本次结算价
	TFutureFtdcPriceType	SettlementPrice;
	///涨停板价
	TFutureFtdcPriceType	UpperLimitPrice;
	///跌停板价
	TFutureFtdcPriceType	LowerLimitPrice;
	///昨虚实度
	TFutureFtdcRatioType	PreDelta;
	///今虚实度
	TFutureFtdcRatioType	CurrDelta;
	///最后修改时间
	TFutureFtdcTimeType	UpdateTime;
	///最后修改毫秒
	TFutureFtdcMillisecType	UpdateMillisec;
	///申买价一
	TFutureFtdcPriceType	BidPrice1;
	///申买量一
	TFutureFtdcVolumeType	BidVolume1;
	///申卖价一
	TFutureFtdcPriceType	AskPrice1;
	///申卖量一
	TFutureFtdcVolumeType	AskVolume1;
	///申买价二
	TFutureFtdcPriceType	BidPrice2;
	///申买量二
	TFutureFtdcVolumeType	BidVolume2;
	///申卖价二
	TFutureFtdcPriceType	AskPrice2;
	///申卖量二
	TFutureFtdcVolumeType	AskVolume2;
	///申买价三
	TFutureFtdcPriceType	BidPrice3;
	///申买量三
	TFutureFtdcVolumeType	BidVolume3;
	///申卖价三
	TFutureFtdcPriceType	AskPrice3;
	///申卖量三
	TFutureFtdcVolumeType	AskVolume3;
	///申买价四
	TFutureFtdcPriceType	BidPrice4;
	///申买量四
	TFutureFtdcVolumeType	BidVolume4;
	///申卖价四
	TFutureFtdcPriceType	AskPrice4;
	///申卖量四
	TFutureFtdcVolumeType	AskVolume4;
	///申买价五
	TFutureFtdcPriceType	BidPrice5;
	///申买量五
	TFutureFtdcVolumeType	BidVolume5;
	///申卖价五
	TFutureFtdcPriceType	AskPrice5;
	///申卖量五
	TFutureFtdcVolumeType	AskVolume5;
	///当日均价
	TFutureFtdcPriceType	AveragePrice;
	///业务日期
	TFutureFtdcDateType	ActionDay;
};

///投资者合约交易权限
struct CFutureFtdcInstrumentTradingRightField
{
	///交易所代码
	TFutureFtdcExchangeIDType	ExchangeID;
	///合约代码
	TFutureFtdcInstrumentIDType	InstrumentID;
	///投资者范围
	TFutureFtdcInvestorRangeType	InvestorRange;
	///经纪公司代码
	TFutureFtdcBrokerIDType	BrokerID;
	///投资者代码
	TFutureFtdcInvestorIDType	InvestorID;
	///交易权限
	TFutureFtdcTradingRightType	TradingRight;
	///报价交易权限
	TFutureFtdcTradingRightType	QuoteTradingRight;
};

///经纪公司用户
struct CFutureFtdcBrokerUserField
{
	///经纪公司代码
	TFutureFtdcBrokerIDType	BrokerID;
	///用户代码
	TFutureFtdcUserIDType	UserID;
	///用户名称
	TFutureFtdcUserNameType	UserName;
	///用户类型
	TFutureFtdcUserTypeType	UserType;
	///是否活跃
	TFutureFtdcBoolType	IsActive;
	///是否使用令牌
	TFutureFtdcBoolType	IsUsingOTP;
};

///经纪公司用户口令
struct CFutureFtdcBrokerUserPasswordField
{
	///经纪公司代码
	TFutureFtdcBrokerIDType	BrokerID;
	///用户代码
	TFutureFtdcUserIDType	UserID;
	///密码
	TFutureFtdcPasswordType	Password;
};

///经纪公司用户功能权限
struct CFutureFtdcBrokerUserFunctionField
{
	///经纪公司代码
	TFutureFtdcBrokerIDType	BrokerID;
	///用户代码
	TFutureFtdcUserIDType	UserID;
	///经纪公司功能代码
	TFutureFtdcBrokerFunctionCodeType	BrokerFunctionCode;
};

///交易所交易员报盘机
struct CFutureFtdcTraderOfferField
{
	///交易所代码
	TFutureFtdcExchangeIDType	ExchangeID;
	///交易所交易员代码
	TFutureFtdcTraderIDType	TraderID;
	///会员代码
	TFutureFtdcParticipantIDType	ParticipantID;
	///密码
	TFutureFtdcPasswordType	Password;
	///安装编号
	TFutureFtdcInstallIDType	InstallID;
	///本地报单编号
	TFutureFtdcOrderLocalIDType	OrderLocalID;
	///交易所交易员连接状态
	TFutureFtdcTraderConnectStatusType	TraderConnectStatus;
	///发出连接请求的日期
	TFutureFtdcDateType	ConnectRequestDate;
	///发出连接请求的时间
	TFutureFtdcTimeType	ConnectRequestTime;
	///上次报告日期
	TFutureFtdcDateType	LastReportDate;
	///上次报告时间
	TFutureFtdcTimeType	LastReportTime;
	///完成连接日期
	TFutureFtdcDateType	ConnectDate;
	///完成连接时间
	TFutureFtdcTimeType	ConnectTime;
	///启动日期
	TFutureFtdcDateType	StartDate;
	///启动时间
	TFutureFtdcTimeType	StartTime;
	///交易日
	TFutureFtdcDateType	TradingDay;
	///经纪公司代码
	TFutureFtdcBrokerIDType	BrokerID;
	///本席位最大成交编号
	TFutureFtdcTradeIDType	MaxTradeID;
	///本席位最大报单备拷
	TFutureFtdcReturnCodeType	MaxOrderMessageReference;
};

///投资者结算结果
struct CFutureFtdcSettlementInfoField
{
	///交易日
	TFutureFtdcDateType	TradingDay;
	///结算编号
	TFutureFtdcSettlementIDType	SettlementID;
	///经纪公司代码
	TFutureFtdcBrokerIDType	BrokerID;
	///投资者代码
	TFutureFtdcInvestorIDType	InvestorID;
	///序号
	TFutureFtdcSequenceNoType	SequenceNo;
	///消息正文
	TFutureFtdcContentType	Content;
};

///合约保证金率调整
struct CFutureFtdcInstrumentMarginRateAdjustField
{
	///交易所代码
	TFutureFtdcExchangeIDType	ExchangeID;
	///合约代码
	TFutureFtdcInstrumentIDType	InstrumentID;
	///投资者范围
	TFutureFtdcInvestorRangeType	InvestorRange;
	///经纪公司代码
	TFutureFtdcBrokerIDType	BrokerID;
	///投资者代码
	TFutureFtdcInvestorIDType	InvestorID;
	///投机套保标志
	TFutureFtdcHedgeFlagType	HedgeFlag;
	///多头保证金率
	TFutureFtdcRatioType	LongMarginRatioByMoney;
	///多头保证金费
	TFutureFtdcMoneyType	LongMarginRatioByVolume;
	///空头保证金率
	TFutureFtdcRatioType	ShortMarginRatioByMoney;
	///空头保证金费
	TFutureFtdcMoneyType	ShortMarginRatioByVolume;
	///是否相对交易所收取
	TFutureFtdcBoolType	IsRelative;
};

///交易所保证金率
struct CFutureFtdcExchangeMarginRateField
{
	///经纪公司代码
	TFutureFtdcBrokerIDType	BrokerID;
	///交易所代码
	TFutureFtdcExchangeIDType	ExchangeID;
	///合约代码
	TFutureFtdcInstrumentIDType	InstrumentID;
	///投机套保标志
	TFutureFtdcHedgeFlagType	HedgeFlag;
	///多头保证金率
	TFutureFtdcRatioType	LongMarginRatioByMoney;
	///多头保证金费
	TFutureFtdcMoneyType	LongMarginRatioByVolume;
	///空头保证金率
	TFutureFtdcRatioType	ShortMarginRatioByMoney;
	///空头保证金费
	TFutureFtdcMoneyType	ShortMarginRatioByVolume;
};

///交易所保证金率调整
struct CFutureFtdcExchangeMarginRateAdjustField
{
	///经纪公司代码
	TFutureFtdcBrokerIDType	BrokerID;
	///交易所代码
	TFutureFtdcExchangeIDType	ExchangeID;
	///合约代码
	TFutureFtdcInstrumentIDType	InstrumentID;
	///投机套保标志
	TFutureFtdcHedgeFlagType	HedgeFlag;
	///跟随交易所投资者多头保证金率
	TFutureFtdcRatioType	LongMarginRatioByMoney;
	///跟随交易所投资者多头保证金费
	TFutureFtdcMoneyType	LongMarginRatioByVolume;
	///跟随交易所投资者空头保证金率
	TFutureFtdcRatioType	ShortMarginRatioByMoney;
	///跟随交易所投资者空头保证金费
	TFutureFtdcMoneyType	ShortMarginRatioByVolume;
	///交易所多头保证金率
	TFutureFtdcRatioType	ExchLongMarginRatioByMoney;
	///交易所多头保证金费
	TFutureFtdcMoneyType	ExchLongMarginRatioByVolume;
	///交易所空头保证金率
	TFutureFtdcRatioType	ExchShortMarginRatioByMoney;
	///交易所空头保证金费
	TFutureFtdcMoneyType	ExchShortMarginRatioByVolume;
	///不跟随交易所投资者多头保证金率
	TFutureFtdcRatioType	NoLongMarginRatioByMoney;
	///不跟随交易所投资者多头保证金费
	TFutureFtdcMoneyType	NoLongMarginRatioByVolume;
	///不跟随交易所投资者空头保证金率
	TFutureFtdcRatioType	NoShortMarginRatioByMoney;
	///不跟随交易所投资者空头保证金费
	TFutureFtdcMoneyType	NoShortMarginRatioByVolume;
};

///结算引用
struct CFutureFtdcSettlementRefField
{
	///交易日
	TFutureFtdcDateType	TradingDay;
	///结算编号
	TFutureFtdcSettlementIDType	SettlementID;
};

///当前时间
struct CFutureFtdcCurrentTimeField
{
	///当前日期
	TFutureFtdcDateType	CurrDate;
	///当前时间
	TFutureFtdcTimeType	CurrTime;
	///当前时间（毫秒）
	TFutureFtdcMillisecType	CurrMillisec;
	///业务日期
	TFutureFtdcDateType	ActionDay;
};

///通讯阶段
struct CFutureFtdcCommPhaseField
{
	///交易日
	TFutureFtdcDateType	TradingDay;
	///通讯时段编号
	TFutureFtdcCommPhaseNoType	CommPhaseNo;
	///系统编号
	TFutureFtdcSystemIDType	SystemID;
};

///登录信息
struct CFutureFtdcLoginInfoField
{
	///前置编号
	TFutureFtdcFrontIDType	FrontID;
	///会话编号
	TFutureFtdcSessionIDType	SessionID;
	///经纪公司代码
	TFutureFtdcBrokerIDType	BrokerID;
	///用户代码
	TFutureFtdcUserIDType	UserID;
	///登录日期
	TFutureFtdcDateType	LoginDate;
	///登录时间
	TFutureFtdcTimeType	LoginTime;
	///IP地址
	TFutureFtdcIPAddressType	IPAddress;
	///用户端产品信息
	TFutureFtdcProductInfoType	UserProductInfo;
	///接口端产品信息
	TFutureFtdcProductInfoType	InterfaceProductInfo;
	///协议信息
	TFutureFtdcProtocolInfoType	ProtocolInfo;
	///系统名称
	TFutureFtdcSystemNameType	SystemName;
	///密码
	TFutureFtdcPasswordType	Password;
	///最大报单引用
	TFutureFtdcOrderRefType	MaxOrderRef;
	///上期所时间
	TFutureFtdcTimeType	SHFETime;
	///大商所时间
	TFutureFtdcTimeType	DCETime;
	///郑商所时间
	TFutureFtdcTimeType	CZCETime;
	///中金所时间
	TFutureFtdcTimeType	FFEXTime;
	///Mac地址
	TFutureFtdcMacAddressType	MacAddress;
	///动态密码
	TFutureFtdcPasswordType	OneTimePassword;
};

///登录信息
struct CFutureFtdcLogoutAllField
{
	///前置编号
	TFutureFtdcFrontIDType	FrontID;
	///会话编号
	TFutureFtdcSessionIDType	SessionID;
	///系统名称
	TFutureFtdcSystemNameType	SystemName;
};

///前置状态
struct CFutureFtdcFrontStatusField
{
	///前置编号
	TFutureFtdcFrontIDType	FrontID;
	///上次报告日期
	TFutureFtdcDateType	LastReportDate;
	///上次报告时间
	TFutureFtdcTimeType	LastReportTime;
	///是否活跃
	TFutureFtdcBoolType	IsActive;
};

///用户口令变更
struct CFutureFtdcUserPasswordUpdateField
{
	///经纪公司代码
	TFutureFtdcBrokerIDType	BrokerID;
	///用户代码
	TFutureFtdcUserIDType	UserID;
	///原来的口令
	TFutureFtdcPasswordType	OldPassword;
	///新的口令
	TFutureFtdcPasswordType	NewPassword;
};

///输入报单
struct CFutureFtdcInputOrderField
{
	///经纪公司代码
	TFutureFtdcBrokerIDType	BrokerID;
	///投资者代码
	TFutureFtdcInvestorIDType	InvestorID;
	///合约代码
	TFutureFtdcInstrumentIDType	InstrumentID;
	///报单引用
	TFutureFtdcOrderRefType	OrderRef;
	///用户代码
	TFutureFtdcUserIDType	UserID;
	///报单价格条件
	TFutureFtdcOrderPriceTypeType	OrderPriceType;
	///买卖方向
	TFutureFtdcDirectionType	Direction;
	///组合开平标志
	TFutureFtdcCombOffsetFlagType	CombOffsetFlag;
	///组合投机套保标志
	TFutureFtdcCombHedgeFlagType	CombHedgeFlag;
	///价格
	TFutureFtdcPriceType	LimitPrice;
	///数量
	TFutureFtdcVolumeType	VolumeTotalOriginal;
	///有效期类型
	TFutureFtdcTimeConditionType	TimeCondition;
	///GTD日期
	TFutureFtdcDateType	GTDDate;
	///成交量类型
	TFutureFtdcVolumeConditionType	VolumeCondition;
	///最小成交量
	TFutureFtdcVolumeType	MinVolume;
	///触发条件
	TFutureFtdcContingentConditionType	ContingentCondition;
	///止损价
	TFutureFtdcPriceType	StopPrice;
	///强平原因
	TFutureFtdcForceCloseReasonType	ForceCloseReason;
	///自动挂起标志
	TFutureFtdcBoolType	IsAutoSuspend;
	///业务单元
	TFutureFtdcBusinessUnitType	BusinessUnit;
	///请求编号
	TFutureFtdcRequestIDType	RequestID;
	///用户强评标志
	TFutureFtdcBoolType	UserForceClose;
	///互换单标志
	TFutureFtdcBoolType	IsSwapOrder;
	///本地报单编号
	TFutureFtdcOrderLocalIDType	OrderLocalID;
};

///报单
struct CFutureFtdcOrderField
{
	///经纪公司代码
	TFutureFtdcBrokerIDType	BrokerID;
	///投资者代码
	TFutureFtdcInvestorIDType	InvestorID;
	///合约代码
	TFutureFtdcInstrumentIDType	InstrumentID;
	///报单引用
	TFutureFtdcOrderRefType	OrderRef;
	///用户代码
	TFutureFtdcUserIDType	UserID;
	///报单价格条件
	TFutureFtdcOrderPriceTypeType	OrderPriceType;
	///买卖方向
	TFutureFtdcDirectionType	Direction;
	///组合开平标志
	TFutureFtdcCombOffsetFlagType	CombOffsetFlag;
	///组合投机套保标志
	TFutureFtdcCombHedgeFlagType	CombHedgeFlag;
	///价格
	TFutureFtdcPriceType	LimitPrice;
	///数量
	TFutureFtdcVolumeType	VolumeTotalOriginal;
	///有效期类型
	TFutureFtdcTimeConditionType	TimeCondition;
	///GTD日期
	TFutureFtdcDateType	GTDDate;
	///成交量类型
	TFutureFtdcVolumeConditionType	VolumeCondition;
	///最小成交量
	TFutureFtdcVolumeType	MinVolume;
	///触发条件
	TFutureFtdcContingentConditionType	ContingentCondition;
	///止损价
	TFutureFtdcPriceType	StopPrice;
	///强平原因
	TFutureFtdcForceCloseReasonType	ForceCloseReason;
	///自动挂起标志
	TFutureFtdcBoolType	IsAutoSuspend;
	///业务单元
	TFutureFtdcBusinessUnitType	BusinessUnit;
	///请求编号
	TFutureFtdcRequestIDType	RequestID;
	///本地报单编号
	TFutureFtdcOrderLocalIDType	OrderLocalID;
	///交易所代码
	TFutureFtdcExchangeIDType	ExchangeID;
	///会员代码
	TFutureFtdcParticipantIDType	ParticipantID;
	///客户代码
	TFutureFtdcClientIDType	ClientID;
	///合约在交易所的代码
	TFutureFtdcExchangeInstIDType	ExchangeInstID;
	///交易所交易员代码
	TFutureFtdcTraderIDType	TraderID;
	///安装编号
	TFutureFtdcInstallIDType	InstallID;
	///报单提交状态
	TFutureFtdcOrderSubmitStatusType	OrderSubmitStatus;
	///报单提示序号
	TFutureFtdcSequenceNoType	NotifySequence;
	///交易日
	TFutureFtdcDateType	TradingDay;
	///结算编号
	TFutureFtdcSettlementIDType	SettlementID;
	///报单编号
	TFutureFtdcOrderSysIDType	OrderSysID;
	///报单来源
	TFutureFtdcOrderSourceType	OrderSource;
	///报单状态
	TFutureFtdcOrderStatusType	OrderStatus;
	///报单类型
	TFutureFtdcOrderTypeType	OrderType;
	///今成交数量
	TFutureFtdcVolumeType	VolumeTraded;
	///剩余数量
	TFutureFtdcVolumeType	VolumeTotal;
	///报单日期
	TFutureFtdcDateType	InsertDate;
	///委托时间
	TFutureFtdcTimeType	InsertTime;
	///激活时间
	TFutureFtdcTimeType	ActiveTime;
	///挂起时间
	TFutureFtdcTimeType	SuspendTime;
	///最后修改时间
	TFutureFtdcTimeType	UpdateTime;
	///撤销时间
	TFutureFtdcTimeType	CancelTime;
	///最后修改交易所交易员代码
	TFutureFtdcTraderIDType	ActiveTraderID;
	///结算会员编号
	TFutureFtdcParticipantIDType	ClearingPartID;
	///序号
	TFutureFtdcSequenceNoType	SequenceNo;
	///前置编号
	TFutureFtdcFrontIDType	FrontID;
	///会话编号
	TFutureFtdcSessionIDType	SessionID;
	///用户端产品信息
	TFutureFtdcProductInfoType	UserProductInfo;
	///状态信息
	TFutureFtdcErrorMsgType	StatusMsg;
	///用户强评标志
	TFutureFtdcBoolType	UserForceClose;
	///操作用户代码
	TFutureFtdcUserIDType	ActiveUserID;
	///经纪公司报单编号
	TFutureFtdcSequenceNoType	BrokerOrderSeq;
	///相关报单
	TFutureFtdcOrderSysIDType	RelativeOrderSysID;
	///郑商所成交数量
	TFutureFtdcVolumeType	ZCETotalTradedVolume;
	///互换单标志
	TFutureFtdcBoolType	IsSwapOrder;
	///交易编码类型
	TFutureFtdcClientIDTypeType	ClientIDType;
};

///交易所报单
struct CFutureFtdcExchangeOrderField
{
	///报单价格条件
	TFutureFtdcOrderPriceTypeType	OrderPriceType;
	///买卖方向
	TFutureFtdcDirectionType	Direction;
	///组合开平标志
	TFutureFtdcCombOffsetFlagType	CombOffsetFlag;
	///组合投机套保标志
	TFutureFtdcCombHedgeFlagType	CombHedgeFlag;
	///价格
	TFutureFtdcPriceType	LimitPrice;
	///数量
	TFutureFtdcVolumeType	VolumeTotalOriginal;
	///有效期类型
	TFutureFtdcTimeConditionType	TimeCondition;
	///GTD日期
	TFutureFtdcDateType	GTDDate;
	///成交量类型
	TFutureFtdcVolumeConditionType	VolumeCondition;
	///最小成交量
	TFutureFtdcVolumeType	MinVolume;
	///触发条件
	TFutureFtdcContingentConditionType	ContingentCondition;
	///止损价
	TFutureFtdcPriceType	StopPrice;
	///强平原因
	TFutureFtdcForceCloseReasonType	ForceCloseReason;
	///自动挂起标志
	TFutureFtdcBoolType	IsAutoSuspend;
	///业务单元
	TFutureFtdcBusinessUnitType	BusinessUnit;
	///请求编号
	TFutureFtdcRequestIDType	RequestID;
	///本地报单编号
	TFutureFtdcOrderLocalIDType	OrderLocalID;
	///交易所代码
	TFutureFtdcExchangeIDType	ExchangeID;
	///会员代码
	TFutureFtdcParticipantIDType	ParticipantID;
	///客户代码
	TFutureFtdcClientIDType	ClientID;
	///合约在交易所的代码
	TFutureFtdcExchangeInstIDType	ExchangeInstID;
	///交易所交易员代码
	TFutureFtdcTraderIDType	TraderID;
	///安装编号
	TFutureFtdcInstallIDType	InstallID;
	///报单提交状态
	TFutureFtdcOrderSubmitStatusType	OrderSubmitStatus;
	///报单提示序号
	TFutureFtdcSequenceNoType	NotifySequence;
	///交易日
	TFutureFtdcDateType	TradingDay;
	///结算编号
	TFutureFtdcSettlementIDType	SettlementID;
	///报单编号
	TFutureFtdcOrderSysIDType	OrderSysID;
	///报单来源
	TFutureFtdcOrderSourceType	OrderSource;
	///报单状态
	TFutureFtdcOrderStatusType	OrderStatus;
	///报单类型
	TFutureFtdcOrderTypeType	OrderType;
	///今成交数量
	TFutureFtdcVolumeType	VolumeTraded;
	///剩余数量
	TFutureFtdcVolumeType	VolumeTotal;
	///报单日期
	TFutureFtdcDateType	InsertDate;
	///委托时间
	TFutureFtdcTimeType	InsertTime;
	///激活时间
	TFutureFtdcTimeType	ActiveTime;
	///挂起时间
	TFutureFtdcTimeType	SuspendTime;
	///最后修改时间
	TFutureFtdcTimeType	UpdateTime;
	///撤销时间
	TFutureFtdcTimeType	CancelTime;
	///最后修改交易所交易员代码
	TFutureFtdcTraderIDType	ActiveTraderID;
	///结算会员编号
	TFutureFtdcParticipantIDType	ClearingPartID;
	///序号
	TFutureFtdcSequenceNoType	SequenceNo;
	///投资者代码
	TFutureFtdcInvestorIDType	InvestorID;
	///经纪公司代码
	TFutureFtdcBrokerIDType	BrokerID;
	///会话编号
	TFutureFtdcSessionIDType	SessionID;
	///报单引用
	TFutureFtdcOrderRefType	OrderRef;
};

///交易所报单插入失败
struct CFutureFtdcExchangeOrderInsertErrorField
{
	///交易所代码
	TFutureFtdcExchangeIDType	ExchangeID;
	///会员代码
	TFutureFtdcParticipantIDType	ParticipantID;
	///交易所交易员代码
	TFutureFtdcTraderIDType	TraderID;
	///安装编号
	TFutureFtdcInstallIDType	InstallID;
	///本地报单编号
	TFutureFtdcOrderLocalIDType	OrderLocalID;
	///错误代码
	TFutureFtdcErrorIDType	ErrorID;
	///错误信息
	TFutureFtdcErrorMsgType	ErrorMsg;
	///客户代码
	TFutureFtdcClientIDType	ClientID;
	///投资者代码
	TFutureFtdcInvestorIDType	InvestorID;
	///业务单元
	TFutureFtdcBusinessUnitType	BusinessUnit;
	///序号
	TFutureFtdcSequenceNoType	SequenceNo;
	///经纪公司代码
	TFutureFtdcBrokerIDType	BrokerID;
	///会话编号
	TFutureFtdcSessionIDType	SessionID;
	///报单引用
	TFutureFtdcOrderRefType	OrderRef;
};

///输入报单操作
struct CFutureFtdcInputOrderActionField
{
	///经纪公司代码
	TFutureFtdcBrokerIDType	BrokerID;
	///投资者代码
	TFutureFtdcInvestorIDType	InvestorID;
	///报单操作引用
	TFutureFtdcOrderActionRefType	OrderActionRef;
	///报单引用
	TFutureFtdcOrderRefType	OrderRef;
	///请求编号
	TFutureFtdcRequestIDType	RequestID;
	///买卖方向
	TFutureFtdcDirectionType	Direction;
	///前置编号
	TFutureFtdcFrontIDType	FrontID;
	///会话编号
	TFutureFtdcSessionIDType	SessionID;
	///交易所代码
	TFutureFtdcExchangeIDType	ExchangeID;
	///报单编号
	TFutureFtdcOrderSysIDType	OrderSysID;
	///操作标志
	TFutureFtdcActionFlagType	ActionFlag;
	///价格
	TFutureFtdcPriceType	LimitPrice;
	///数量变化
	TFutureFtdcVolumeType	VolumeChange;
	///用户代码
	TFutureFtdcUserIDType	UserID;
	///合约代码
	TFutureFtdcInstrumentIDType	InstrumentID;
};

///报单操作
struct CFutureFtdcOrderActionField
{
	///经纪公司代码
	TFutureFtdcBrokerIDType	BrokerID;
	///投资者代码
	TFutureFtdcInvestorIDType	InvestorID;
	///报单操作引用
	TFutureFtdcOrderActionRefType	OrderActionRef;
	///报单引用
	TFutureFtdcOrderRefType	OrderRef;
	///请求编号
	TFutureFtdcRequestIDType	RequestID;
	///买卖方向
	TFutureFtdcDirectionType	Direction;
	///前置编号
	TFutureFtdcFrontIDType	FrontID;
	///会话编号
	TFutureFtdcSessionIDType	SessionID;
	///交易所代码
	TFutureFtdcExchangeIDType	ExchangeID;
	///报单编号
	TFutureFtdcOrderSysIDType	OrderSysID;
	///操作标志
	TFutureFtdcActionFlagType	ActionFlag;
	///价格
	TFutureFtdcPriceType	LimitPrice;
	///数量变化
	TFutureFtdcVolumeType	VolumeChange;
	///操作日期
	TFutureFtdcDateType	ActionDate;
	///操作时间
	TFutureFtdcTimeType	ActionTime;
	///交易所交易员代码
	TFutureFtdcTraderIDType	TraderID;
	///安装编号
	TFutureFtdcInstallIDType	InstallID;
	///本地报单编号
	TFutureFtdcOrderLocalIDType	OrderLocalID;
	///操作本地编号
	TFutureFtdcOrderLocalIDType	ActionLocalID;
	///会员代码
	TFutureFtdcParticipantIDType	ParticipantID;
	///客户代码
	TFutureFtdcClientIDType	ClientID;
	///业务单元
	TFutureFtdcBusinessUnitType	BusinessUnit;
	///报单操作状态
	TFutureFtdcOrderActionStatusType	OrderActionStatus;
	///用户代码
	TFutureFtdcUserIDType	UserID;
	///状态信息
	TFutureFtdcErrorMsgType	StatusMsg;
	///合约代码
	TFutureFtdcInstrumentIDType	InstrumentID;
};

///交易所报单操作
struct CFutureFtdcExchangeOrderActionField
{
	///交易所代码
	TFutureFtdcExchangeIDType	ExchangeID;
	///报单编号
	TFutureFtdcOrderSysIDType	OrderSysID;
	///操作标志
	TFutureFtdcActionFlagType	ActionFlag;
	///价格
	TFutureFtdcPriceType	LimitPrice;
	///数量变化
	TFutureFtdcVolumeType	VolumeChange;
	///操作日期
	TFutureFtdcDateType	ActionDate;
	///操作时间
	TFutureFtdcTimeType	ActionTime;
	///交易所交易员代码
	TFutureFtdcTraderIDType	TraderID;
	///安装编号
	TFutureFtdcInstallIDType	InstallID;
	///本地报单编号
	TFutureFtdcOrderLocalIDType	OrderLocalID;
	///操作本地编号
	TFutureFtdcOrderLocalIDType	ActionLocalID;
	///会员代码
	TFutureFtdcParticipantIDType	ParticipantID;
	///客户代码
	TFutureFtdcClientIDType	ClientID;
	///业务单元
	TFutureFtdcBusinessUnitType	BusinessUnit;
	///报单操作状态
	TFutureFtdcOrderActionStatusType	OrderActionStatus;
	///用户代码
	TFutureFtdcUserIDType	UserID;
	///投资者代码
	TFutureFtdcInvestorIDType	InvestorID;
	///经纪公司代码
	TFutureFtdcBrokerIDType	BrokerID;
	///会话编号
	TFutureFtdcSessionIDType	SessionID;
	///报单操作引用
	TFutureFtdcOrderActionRefType	OrderActionRef;
};

///交易所报单操作失败
struct CFutureFtdcExchangeOrderActionErrorField
{
	///交易所代码
	TFutureFtdcExchangeIDType	ExchangeID;
	///报单编号
	TFutureFtdcOrderSysIDType	OrderSysID;
	///交易所交易员代码
	TFutureFtdcTraderIDType	TraderID;
	///安装编号
	TFutureFtdcInstallIDType	InstallID;
	///本地报单编号
	TFutureFtdcOrderLocalIDType	OrderLocalID;
	///操作本地编号
	TFutureFtdcOrderLocalIDType	ActionLocalID;
	///错误代码
	TFutureFtdcErrorIDType	ErrorID;
	///错误信息
	TFutureFtdcErrorMsgType	ErrorMsg;
	///客户代码
	TFutureFtdcClientIDType	ClientID;
	///投资者代码
	TFutureFtdcInvestorIDType	InvestorID;
	///业务单元
	TFutureFtdcBusinessUnitType	BusinessUnit;
	///经纪公司代码
	TFutureFtdcBrokerIDType	BrokerID;
};

///交易所成交
struct CFutureFtdcExchangeTradeField
{
	///交易所代码
	TFutureFtdcExchangeIDType	ExchangeID;
	///成交编号
	TFutureFtdcTradeIDType	TradeID;
	///买卖方向
	TFutureFtdcDirectionType	Direction;
	///报单编号
	TFutureFtdcOrderSysIDType	OrderSysID;
	///会员代码
	TFutureFtdcParticipantIDType	ParticipantID;
	///客户代码
	TFutureFtdcClientIDType	ClientID;
	///交易角色
	TFutureFtdcTradingRoleType	TradingRole;
	///合约在交易所的代码
	TFutureFtdcExchangeInstIDType	ExchangeInstID;
	///开平标志
	TFutureFtdcOffsetFlagType	OffsetFlag;
	///投机套保标志
	TFutureFtdcHedgeFlagType	HedgeFlag;
	///价格
	TFutureFtdcPriceType	Price;
	///数量
	TFutureFtdcVolumeType	Volume;
	///成交时期
	TFutureFtdcDateType	TradeDate;
	///成交时间
	TFutureFtdcTimeType	TradeTime;
	///成交类型
	TFutureFtdcTradeTypeType	TradeType;
	///成交价来源
	TFutureFtdcPriceSourceType	PriceSource;
	///交易所交易员代码
	TFutureFtdcTraderIDType	TraderID;
	///本地报单编号
	TFutureFtdcOrderLocalIDType	OrderLocalID;
	///结算会员编号
	TFutureFtdcParticipantIDType	ClearingPartID;
	///业务单元
	TFutureFtdcBusinessUnitType	BusinessUnit;
	///序号
	TFutureFtdcSequenceNoType	SequenceNo;
	///成交来源
	TFutureFtdcTradeSourceType	TradeSource;
	///投资者代码
	TFutureFtdcInvestorIDType	InvestorID;
};

///成交
struct CFutureFtdcTradeField
{
	///经纪公司代码
	TFutureFtdcBrokerIDType	BrokerID;
	///投资者代码
	TFutureFtdcInvestorIDType	InvestorID;
	///合约代码
	TFutureFtdcInstrumentIDType	InstrumentID;
	///报单引用
	TFutureFtdcOrderRefType	OrderRef;
	///用户代码
	TFutureFtdcUserIDType	UserID;
	///交易所代码
	TFutureFtdcExchangeIDType	ExchangeID;
	///成交编号
	TFutureFtdcTradeIDType	TradeID;
	///买卖方向
	TFutureFtdcDirectionType	Direction;
	///报单编号
	TFutureFtdcOrderSysIDType	OrderSysID;
	///会员代码
	TFutureFtdcParticipantIDType	ParticipantID;
	///客户代码
	TFutureFtdcClientIDType	ClientID;
	///交易角色
	TFutureFtdcTradingRoleType	TradingRole;
	///合约在交易所的代码
	TFutureFtdcExchangeInstIDType	ExchangeInstID;
	///开平标志
	TFutureFtdcOffsetFlagType	OffsetFlag;
	///投机套保标志
	TFutureFtdcHedgeFlagType	HedgeFlag;
	///价格
	TFutureFtdcPriceType	Price;
	///数量
	TFutureFtdcVolumeType	Volume;
	///成交时期
	TFutureFtdcDateType	TradeDate;
	///成交时间
	TFutureFtdcTimeType	TradeTime;
	///成交类型
	TFutureFtdcTradeTypeType	TradeType;
	///成交价来源
	TFutureFtdcPriceSourceType	PriceSource;
	///交易所交易员代码
	TFutureFtdcTraderIDType	TraderID;
	///本地报单编号
	TFutureFtdcOrderLocalIDType	OrderLocalID;
	///结算会员编号
	TFutureFtdcParticipantIDType	ClearingPartID;
	///业务单元
	TFutureFtdcBusinessUnitType	BusinessUnit;
	///序号
	TFutureFtdcSequenceNoType	SequenceNo;
	///交易日
	TFutureFtdcDateType	TradingDay;
	///结算编号
	TFutureFtdcSettlementIDType	SettlementID;
	///经纪公司报单编号
	TFutureFtdcSequenceNoType	BrokerOrderSeq;
	///成交来源
	TFutureFtdcTradeSourceType	TradeSource;
};

///用户会话
struct CFutureFtdcUserSessionField
{
	///前置编号
	TFutureFtdcFrontIDType	FrontID;
	///会话编号
	TFutureFtdcSessionIDType	SessionID;
	///经纪公司代码
	TFutureFtdcBrokerIDType	BrokerID;
	///用户代码
	TFutureFtdcUserIDType	UserID;
	///登录日期
	TFutureFtdcDateType	LoginDate;
	///登录时间
	TFutureFtdcTimeType	LoginTime;
	///IP地址
	TFutureFtdcIPAddressType	IPAddress;
	///用户端产品信息
	TFutureFtdcProductInfoType	UserProductInfo;
	///接口端产品信息
	TFutureFtdcProductInfoType	InterfaceProductInfo;
	///协议信息
	TFutureFtdcProtocolInfoType	ProtocolInfo;
	///Mac地址
	TFutureFtdcMacAddressType	MacAddress;
};

///查询最大报单数量
struct CFutureFtdcQueryMaxOrderVolumeField
{
	///经纪公司代码
	TFutureFtdcBrokerIDType	BrokerID;
	///投资者代码
	TFutureFtdcInvestorIDType	InvestorID;
	///交易所代码
	TFutureFtdcExchangeIDType	ExchangeID;
	///合约代码
	TFutureFtdcInstrumentIDType	InstrumentID;
	///买卖方向
	TFutureFtdcDirectionType	Direction;
	///开平标志
	TFutureFtdcOffsetFlagType	OffsetFlag;
	///投机套保标志
	TFutureFtdcHedgeFlagType	HedgeFlag;
	///最大允许报单数量
	TFutureFtdcVolumeType	MaxVolume;
};

///投资者结算结果确认信息
struct CFutureFtdcSettlementInfoConfirmField
{
	///经纪公司代码
	TFutureFtdcBrokerIDType	BrokerID;
	///投资者代码
	TFutureFtdcInvestorIDType	InvestorID;
	///确认日期
	TFutureFtdcDateType	ConfirmDate;
	///确认时间
	TFutureFtdcTimeType	ConfirmTime;
};

///出入金同步
struct CFutureFtdcSyncDepositField
{
	///出入金流水号
	TFutureFtdcDepositSeqNoType	DepositSeqNo;
	///经纪公司代码
	TFutureFtdcBrokerIDType	BrokerID;
	///投资者代码
	TFutureFtdcInvestorIDType	InvestorID;
	///入金金额
	TFutureFtdcMoneyType	Deposit;
	///是否强制进行
	TFutureFtdcBoolType	IsForce;
};

///经纪公司同步
struct CFutureFtdcBrokerSyncField
{
	///经纪公司代码
	TFutureFtdcBrokerIDType	BrokerID;
};

///正在同步中的投资者
struct CFutureFtdcSyncingInvestorField
{
	///投资者代码
	TFutureFtdcInvestorIDType	InvestorID;
	///经纪公司代码
	TFutureFtdcBrokerIDType	BrokerID;
	///投资者分组代码
	TFutureFtdcInvestorIDType	InvestorGroupID;
	///投资者名称
	TFutureFtdcPartyNameType	InvestorName;
	///证件类型
	TFutureFtdcIdCardTypeType	IdentifiedCardType;
	///证件号码
	TFutureFtdcIdentifiedCardNoType	IdentifiedCardNo;
	///是否活跃
	TFutureFtdcBoolType	IsActive;
	///联系电话
	TFutureFtdcTelephoneType	Telephone;
	///通讯地址
	TFutureFtdcAddressType	Address;
	///开户日期
	TFutureFtdcDateType	OpenDate;
	///手机
	TFutureFtdcMobileType	Mobile;
	///手续费率模板代码
	TFutureFtdcInvestorIDType	CommModelID;
	///填充字段
	TFutureFtdcPadFieldType	PadField;
	///保证金率模板代码
	TFutureFtdcInvestorIDType	MarginModelID;
};

///正在同步中的交易代码
struct CFutureFtdcSyncingTradingCodeField
{
	///投资者代码
	TFutureFtdcInvestorIDType	InvestorID;
	///经纪公司代码
	TFutureFtdcBrokerIDType	BrokerID;
	///交易所代码
	TFutureFtdcExchangeIDType	ExchangeID;
	///客户代码
	TFutureFtdcClientIDType	ClientID;
	///是否活跃
	TFutureFtdcBoolType	IsActive;
	///交易编码类型
	TFutureFtdcClientIDTypeType	ClientIDType;
};

///正在同步中的投资者分组
struct CFutureFtdcSyncingInvestorGroupField
{
	///经纪公司代码
	TFutureFtdcBrokerIDType	BrokerID;
	///投资者分组代码
	TFutureFtdcInvestorIDType	InvestorGroupID;
	///投资者分组名称
	TFutureFtdcInvestorGroupNameType	InvestorGroupName;
};

///正在同步中的交易账号
struct CFutureFtdcSyncingTradingAccountField
{
	///经纪公司代码
	TFutureFtdcBrokerIDType	BrokerID;
	///投资者帐号
	TFutureFtdcAccountIDType	AccountID;
	///上次质押金额
	TFutureFtdcMoneyType	PreMortgage;
	///上次信用额度
	TFutureFtdcMoneyType	PreCredit;
	///上次存款额
	TFutureFtdcMoneyType	PreDeposit;
	///上次结算准备金
	TFutureFtdcMoneyType	PreBalance;
	///上次占用的保证金
	TFutureFtdcMoneyType	PreMargin;
	///利息基数
	TFutureFtdcMoneyType	InterestBase;
	///利息收入
	TFutureFtdcMoneyType	Interest;
	///入金金额
	TFutureFtdcMoneyType	Deposit;
	///出金金额
	TFutureFtdcMoneyType	Withdraw;
	///冻结的保证金
	TFutureFtdcMoneyType	FrozenMargin;
	///冻结的资金
	TFutureFtdcMoneyType	FrozenCash;
	///冻结的手续费
	TFutureFtdcMoneyType	FrozenCommission;
	///当前保证金总额
	TFutureFtdcMoneyType	CurrMargin;
	///资金差额
	TFutureFtdcMoneyType	CashIn;
	///手续费
	TFutureFtdcMoneyType	Commission;
	///平仓盈亏
	TFutureFtdcMoneyType	CloseProfit;
	///持仓盈亏
	TFutureFtdcMoneyType	PositionProfit;
	///期货结算准备金
	TFutureFtdcMoneyType	Balance;
	///可用资金
	TFutureFtdcMoneyType	Available;
	///可取资金
	TFutureFtdcMoneyType	WithdrawQuota;
	///基本准备金
	TFutureFtdcMoneyType	Reserve;
	///交易日
	TFutureFtdcDateType	TradingDay;
	///结算编号
	TFutureFtdcSettlementIDType	SettlementID;
	///信用额度
	TFutureFtdcMoneyType	Credit;
	///质押金额
	TFutureFtdcMoneyType	Mortgage;
	///交易所保证金
	TFutureFtdcMoneyType	ExchangeMargin;
	///投资者交割保证金
	TFutureFtdcMoneyType	DeliveryMargin;
	///交易所交割保证金
	TFutureFtdcMoneyType	ExchangeDeliveryMargin;
	///保底期货结算准备金
	TFutureFtdcMoneyType	ReserveBalance;
	///期权平仓盈亏
	TFutureFtdcMoneyType	OptionCloseProfit;
	///帐户级别
	TFutureFtdcAccountLevelType	AccountLevel;
};

///正在同步中的投资者持仓
struct CFutureFtdcSyncingInvestorPositionField
{
	///交易所代码
	TFutureFtdcExchangeIDType	ExchangeID;
	///合约代码
	TFutureFtdcInstrumentIDType	InstrumentID;
	///经纪公司代码
	TFutureFtdcBrokerIDType	BrokerID;
	///投资者代码
	TFutureFtdcInvestorIDType	InvestorID;
	///持仓多空方向
	TFutureFtdcPosiDirectionType	PosiDirection;
	///投机套保标志
	TFutureFtdcHedgeFlagType	HedgeFlag;
	///持仓日期
	TFutureFtdcPositionDateType	PositionDate;
	///上日持仓
	TFutureFtdcVolumeType	YdPosition;
	///今日持仓
	TFutureFtdcVolumeType	Position;
	///多头冻结
	TFutureFtdcVolumeType	LongFrozen;
	///空头冻结
	TFutureFtdcVolumeType	ShortFrozen;
	///开仓冻结金额
	TFutureFtdcMoneyType	LongFrozenAmount;
	///开仓冻结金额
	TFutureFtdcMoneyType	ShortFrozenAmount;
	///开仓量
	TFutureFtdcVolumeType	OpenVolume;
	///平仓量
	TFutureFtdcVolumeType	CloseVolume;
	///开仓金额
	TFutureFtdcMoneyType	OpenAmount;
	///平仓金额
	TFutureFtdcMoneyType	CloseAmount;
	///平昨仓金额
	TFutureFtdcMoneyType	YdCloseAmount;
	///平昨仓数量
	TFutureFtdcVolumeType	YdCloseVolume;
	///持仓成本
	TFutureFtdcMoneyType	PositionCost;
	///上次占用的保证金
	TFutureFtdcMoneyType	PreMargin;
	///占用的保证金
	TFutureFtdcMoneyType	UseMargin;
	///冻结的保证金
	TFutureFtdcMoneyType	FrozenMargin;
	///冻结的资金
	TFutureFtdcMoneyType	FrozenCash;
	///冻结的手续费
	TFutureFtdcMoneyType	FrozenCommission;
	///资金差额
	TFutureFtdcMoneyType	CashIn;
	///手续费
	TFutureFtdcMoneyType	Commission;
	///平仓盈亏
	TFutureFtdcMoneyType	CloseProfit;
	///持仓盈亏
	TFutureFtdcMoneyType	PositionProfit;
	///上次结算价
	TFutureFtdcPriceType	PreSettlementPrice;
	///本次结算价
	TFutureFtdcPriceType	SettlementPrice;
	///交易日
	TFutureFtdcDateType	TradingDay;
	///结算编号
	TFutureFtdcSettlementIDType	SettlementID;
	///开仓成本
	TFutureFtdcMoneyType	OpenCost;
	///交易所保证金
	TFutureFtdcMoneyType	ExchangeMargin;
	///组合成交形成的持仓
	TFutureFtdcVolumeType	CombPosition;
	///组合多头冻结
	TFutureFtdcVolumeType	CombLongFrozen;
	///组合空头冻结
	TFutureFtdcVolumeType	CombShortFrozen;
	///逐日盯市平仓盈亏
	TFutureFtdcMoneyType	CloseProfitByDate;
	///逐笔对冲平仓盈亏
	TFutureFtdcMoneyType	CloseProfitByTrade;
	///今日持仓
	TFutureFtdcVolumeType	TodayPosition;
	///保证金率
	TFutureFtdcRatioType	MarginRateByMoney;
	///保证金率(按手数)
	TFutureFtdcRatioType	MarginRateByVolume;
	///执行冻结
	TFutureFtdcVolumeType	StrikeFrozen;
	///执行冻结金额
	TFutureFtdcMoneyType	StrikeFrozenAmount;
	///放弃执行冻结
	TFutureFtdcVolumeType	AbandonFrozen;
};

///正在同步中的合约保证金率
struct CFutureFtdcSyncingInstrumentMarginRateField
{
	///交易所代码
	TFutureFtdcExchangeIDType	ExchangeID;
	///合约代码
	TFutureFtdcInstrumentIDType	InstrumentID;
	///投资者范围
	TFutureFtdcInvestorRangeType	InvestorRange;
	///经纪公司代码
	TFutureFtdcBrokerIDType	BrokerID;
	///投资者代码
	TFutureFtdcInvestorIDType	InvestorID;
	///投机套保标志
	TFutureFtdcHedgeFlagType	HedgeFlag;
	///多头保证金率
	TFutureFtdcRatioType	LongMarginRatioByMoney;
	///多头保证金费
	TFutureFtdcMoneyType	LongMarginRatioByVolume;
	///空头保证金率
	TFutureFtdcRatioType	ShortMarginRatioByMoney;
	///空头保证金费
	TFutureFtdcMoneyType	ShortMarginRatioByVolume;
	///是否相对交易所收取
	TFutureFtdcBoolType	IsRelative;
};

///正在同步中的合约手续费率
struct CFutureFtdcSyncingInstrumentCommissionRateField
{
	///交易所代码
	TFutureFtdcExchangeIDType	ExchangeID;
	///合约代码
	TFutureFtdcInstrumentIDType	InstrumentID;
	///投资者范围
	TFutureFtdcInvestorRangeType	InvestorRange;
	///经纪公司代码
	TFutureFtdcBrokerIDType	BrokerID;
	///投资者代码
	TFutureFtdcInvestorIDType	InvestorID;
	///投机套保标志
	TFutureFtdcHedgeFlagType	HedgeFlag;
	///开仓手续费率
	TFutureFtdcRatioType	OpenRatioByMoney;
	///开仓手续费
	TFutureFtdcRatioType	OpenRatioByVolume;
	///平仓手续费率
	TFutureFtdcRatioType	CloseRatioByMoney;
	///平仓手续费
	TFutureFtdcRatioType	CloseRatioByVolume;
	///平今手续费率
	TFutureFtdcRatioType	CloseTodayRatioByMoney;
	///平今手续费
	TFutureFtdcRatioType	CloseTodayRatioByVolume;
};

///正在同步中的合约交易权限
struct CFutureFtdcSyncingInstrumentTradingRightField
{
	///交易所代码
	TFutureFtdcExchangeIDType	ExchangeID;
	///合约代码
	TFutureFtdcInstrumentIDType	InstrumentID;
	///投资者范围
	TFutureFtdcInvestorRangeType	InvestorRange;
	///经纪公司代码
	TFutureFtdcBrokerIDType	BrokerID;
	///投资者代码
	TFutureFtdcInvestorIDType	InvestorID;
	///交易权限
	TFutureFtdcTradingRightType	TradingRight;
	///报价交易权限
	TFutureFtdcTradingRightType	QuoteTradingRight;
};

///查询报单
struct CFutureFtdcQryOrderField
{
	///经纪公司代码
	TFutureFtdcBrokerIDType	BrokerID;
	///投资者代码
	TFutureFtdcInvestorIDType	InvestorID;
	///合约代码
	TFutureFtdcInstrumentIDType	InstrumentID;
	///交易所代码
	TFutureFtdcExchangeIDType	ExchangeID;
	///报单编号
	TFutureFtdcOrderSysIDType	OrderSysID;
	///开始时间
	TFutureFtdcTimeType	InsertTimeStart;
	///结束时间
	TFutureFtdcTimeType	InsertTimeEnd;
};

///查询成交
struct CFutureFtdcQryTradeField
{
	///经纪公司代码
	TFutureFtdcBrokerIDType	BrokerID;
	///投资者代码
	TFutureFtdcInvestorIDType	InvestorID;
	///合约代码
	TFutureFtdcInstrumentIDType	InstrumentID;
	///交易所代码
	TFutureFtdcExchangeIDType	ExchangeID;
	///成交编号
	TFutureFtdcTradeIDType	TradeID;
	///开始时间
	TFutureFtdcTimeType	TradeTimeStart;
	///结束时间
	TFutureFtdcTimeType	TradeTimeEnd;
};

///查询投资者持仓
struct CFutureFtdcQryInvestorPositionField
{
	///经纪公司代码
	TFutureFtdcBrokerIDType	BrokerID;
	///投资者代码
	TFutureFtdcInvestorIDType	InvestorID;
	///交易所代码
	TFutureFtdcExchangeIDType	ExchangeID;
	///合约代码
	TFutureFtdcInstrumentIDType	InstrumentID;
};

///查询资金账户
struct CFutureFtdcQryTradingAccountField
{
	///经纪公司代码
	TFutureFtdcBrokerIDType	BrokerID;
	///投资者代码
	TFutureFtdcInvestorIDType	InvestorID;
};

///查询投资者
struct CFutureFtdcQryInvestorField
{
	///经纪公司代码
	TFutureFtdcBrokerIDType	BrokerID;
	///投资者代码
	TFutureFtdcInvestorIDType	InvestorID;
};

///查询交易编码
struct CFutureFtdcQryTradingCodeField
{
	///经纪公司代码
	TFutureFtdcBrokerIDType	BrokerID;
	///投资者代码
	TFutureFtdcInvestorIDType	InvestorID;
	///交易所代码
	TFutureFtdcExchangeIDType	ExchangeID;
	///客户代码
	TFutureFtdcClientIDType	ClientID;
	///交易编码类型
	TFutureFtdcClientIDTypeType	ClientIDType;
};

///查询交易编码
struct CFutureFtdcQryInvestorGroupField
{
	///经纪公司代码
	TFutureFtdcBrokerIDType	BrokerID;
};

///查询交易编码
struct CFutureFtdcQryInstrumentMarginRateField
{
	///经纪公司代码
	TFutureFtdcBrokerIDType	BrokerID;
	///投资者代码
	TFutureFtdcInvestorIDType	InvestorID;
	///合约代码
	TFutureFtdcInstrumentIDType	InstrumentID;
	///交易所代码
	TFutureFtdcExchangeIDType	ExchangeID;
	///投机套保标志
	TFutureFtdcHedgeFlagType	HedgeFlag;
};

///查询交易编码
struct CFutureFtdcQryInstrumentCommissionRateField
{
	///经纪公司代码
	TFutureFtdcBrokerIDType	BrokerID;
	///投资者代码
	TFutureFtdcInvestorIDType	InvestorID;
	///交易所代码
	TFutureFtdcExchangeIDType	ExchangeID;
	///合约代码
	TFutureFtdcInstrumentIDType	InstrumentID;
	///投机套保标志
	TFutureFtdcHedgeFlagType	HedgeFlag;
};

///查询交易编码
struct CFutureFtdcQryInstrumentTradingRightField
{
	///经纪公司代码
	TFutureFtdcBrokerIDType	BrokerID;
	///投资者代码
	TFutureFtdcInvestorIDType	InvestorID;
	///交易所代码
	TFutureFtdcExchangeIDType	ExchangeID;
	///合约代码
	TFutureFtdcInstrumentIDType	InstrumentID;
};

///查询经纪公司
struct CFutureFtdcQryBrokerField
{
	///经纪公司代码
	TFutureFtdcBrokerIDType	BrokerID;
};

///查询交易员
struct CFutureFtdcQryTraderField
{
	///交易所代码
	TFutureFtdcExchangeIDType	ExchangeID;
	///会员代码
	TFutureFtdcParticipantIDType	ParticipantID;
	///交易所交易员代码
	TFutureFtdcTraderIDType	TraderID;
};

///查询经纪公司会员代码
struct CFutureFtdcQryPartBrokerField
{
	///交易所代码
	TFutureFtdcExchangeIDType	ExchangeID;
	///经纪公司代码
	TFutureFtdcBrokerIDType	BrokerID;
	///会员代码
	TFutureFtdcParticipantIDType	ParticipantID;
};

///查询管理用户功能权限
struct CFutureFtdcQrySuperUserFunctionField
{
	///用户代码
	TFutureFtdcUserIDType	UserID;
};

///查询用户会话
struct CFutureFtdcQryUserSessionField
{
	///前置编号
	TFutureFtdcFrontIDType	FrontID;
	///会话编号
	TFutureFtdcSessionIDType	SessionID;
	///经纪公司代码
	TFutureFtdcBrokerIDType	BrokerID;
	///用户代码
	TFutureFtdcUserIDType	UserID;
};

///查询前置状态
struct CFutureFtdcQryFrontStatusField
{
	///前置编号
	TFutureFtdcFrontIDType	FrontID;
};

///查询交易所报单
struct CFutureFtdcQryExchangeOrderField
{
	///会员代码
	TFutureFtdcParticipantIDType	ParticipantID;
	///客户代码
	TFutureFtdcClientIDType	ClientID;
	///合约在交易所的代码
	TFutureFtdcExchangeInstIDType	ExchangeInstID;
	///交易所代码
	TFutureFtdcExchangeIDType	ExchangeID;
	///交易所交易员代码
	TFutureFtdcTraderIDType	TraderID;
};

///查询报单操作
struct CFutureFtdcQryOrderActionField
{
	///经纪公司代码
	TFutureFtdcBrokerIDType	BrokerID;
	///投资者代码
	TFutureFtdcInvestorIDType	InvestorID;
	///交易所代码
	TFutureFtdcExchangeIDType	ExchangeID;
};

///查询交易所报单操作
struct CFutureFtdcQryExchangeOrderActionField
{
	///会员代码
	TFutureFtdcParticipantIDType	ParticipantID;
	///客户代码
	TFutureFtdcClientIDType	ClientID;
	///交易所代码
	TFutureFtdcExchangeIDType	ExchangeID;
	///交易所交易员代码
	TFutureFtdcTraderIDType	TraderID;
};

///查询管理用户
struct CFutureFtdcQrySuperUserField
{
	///用户代码
	TFutureFtdcUserIDType	UserID;
};

///查询交易所
struct CFutureFtdcQryExchangeField
{
	///交易所代码
	TFutureFtdcExchangeIDType	ExchangeID;
};

///查询产品
struct CFutureFtdcQryProductField
{
	///产品代码
	TFutureFtdcInstrumentIDType	ProductID;
	///产品类型
	TFutureFtdcProductClassType	ProductClass;
};

///查询合约
struct CFutureFtdcQryInstrumentField
{
	///合约代码
	TFutureFtdcInstrumentIDType	InstrumentID;
	///交易所代码
	TFutureFtdcExchangeIDType	ExchangeID;
	///合约在交易所的代码
	TFutureFtdcExchangeInstIDType	ExchangeInstID;
	///产品代码
	TFutureFtdcInstrumentIDType	ProductID;
};

///查询行情
struct CFutureFtdcQryDepthMarketDataField
{
	///交易所代码
	TFutureFtdcExchangeIDType	ExchangeID;
	///合约代码
	TFutureFtdcInstrumentIDType	InstrumentID;
};

///查询经纪公司用户
struct CFutureFtdcQryBrokerUserField
{
	///经纪公司代码
	TFutureFtdcBrokerIDType	BrokerID;
	///用户代码
	TFutureFtdcUserIDType	UserID;
};

///查询经纪公司用户权限
struct CFutureFtdcQryBrokerUserFunctionField
{
	///经纪公司代码
	TFutureFtdcBrokerIDType	BrokerID;
	///用户代码
	TFutureFtdcUserIDType	UserID;
};

///查询交易员报盘机
struct CFutureFtdcQryTraderOfferField
{
	///交易所代码
	TFutureFtdcExchangeIDType	ExchangeID;
	///会员代码
	TFutureFtdcParticipantIDType	ParticipantID;
	///交易所交易员代码
	TFutureFtdcTraderIDType	TraderID;
};

///查询出入金流水
struct CFutureFtdcQrySyncDepositField
{
	///经纪公司代码
	TFutureFtdcBrokerIDType	BrokerID;
	///出入金流水号
	TFutureFtdcDepositSeqNoType	DepositSeqNo;
};

///查询投资者结算结果
struct CFutureFtdcQrySettlementInfoField
{
	///经纪公司代码
	TFutureFtdcBrokerIDType	BrokerID;
	///投资者代码
	TFutureFtdcInvestorIDType	InvestorID;
	///交易日
	TFutureFtdcDateType	TradingDay;
};

///查询报单
struct CFutureFtdcQryHisOrderField
{
	///经纪公司代码
	TFutureFtdcBrokerIDType	BrokerID;
	///投资者代码
	TFutureFtdcInvestorIDType	InvestorID;
	///合约代码
	TFutureFtdcInstrumentIDType	InstrumentID;
	///交易所代码
	TFutureFtdcExchangeIDType	ExchangeID;
	///报单编号
	TFutureFtdcOrderSysIDType	OrderSysID;
	///开始时间
	TFutureFtdcTimeType	InsertTimeStart;
	///结束时间
	TFutureFtdcTimeType	InsertTimeEnd;
	///交易日
	TFutureFtdcDateType	TradingDay;
	///结算编号
	TFutureFtdcSettlementIDType	SettlementID;
};

///当前期权合约最小保证金
struct CFutureFtdcOptionInstrMiniMarginField
{
	///交易所代码
	TFutureFtdcExchangeIDType	ExchangeID;
	///合约代码
	TFutureFtdcInstrumentIDType	InstrumentID;
	///投资者范围
	TFutureFtdcInvestorRangeType	InvestorRange;
	///经纪公司代码
	TFutureFtdcBrokerIDType	BrokerID;
	///投资者代码
	TFutureFtdcInvestorIDType	InvestorID;
	///单位（手）期权合约最小保证金
	TFutureFtdcMoneyType	MinMargin;
	///取值方式
	TFutureFtdcValueMethodType	ValueMethod;
	///是否跟随交易所收取
	TFutureFtdcBoolType	IsRelative;
};

///经纪公司交易所期权保证金算法
struct CFutureFtdcBrokerExchOptMarginAlgoField
{
	///经纪公司代码
	TFutureFtdcBrokerIDType	BrokerID;
	///交易所代码
	TFutureFtdcExchangeIDType	ExchangeID;
	///最低保障系数
	TFutureFtdcRatioType	GuaranteeRatio;
	///虚值额优惠比率
	TFutureFtdcRatioType	OutRatio;
};

///当前期权合约保证金调整系数
struct CFutureFtdcOptionInstrMarginAdjustField
{
	///交易所代码
	TFutureFtdcExchangeIDType	ExchangeID;
	///合约代码
	TFutureFtdcInstrumentIDType	InstrumentID;
	///投资者范围
	TFutureFtdcInvestorRangeType	InvestorRange;
	///经纪公司代码
	TFutureFtdcBrokerIDType	BrokerID;
	///投资者代码
	TFutureFtdcInvestorIDType	InvestorID;
	///投机套保标志
	TFutureFtdcHedgeFlagType	HedgeFlag;
	///空头保证金调整系数
	TFutureFtdcRatioType	ShortMarginRatioByMoney;
	///空头保证金调整系数
	TFutureFtdcMoneyType	ShortMarginRatioByVolume;
	///是否跟随交易所收取
	TFutureFtdcBoolType	IsRelative;
};

///当前期权合约手续费的详细内容
struct CFutureFtdcOptionInstrCommRateField
{
	///交易所代码
	TFutureFtdcExchangeIDType	ExchangeID;
	///合约代码
	TFutureFtdcInstrumentIDType	InstrumentID;
	///投资者范围
	TFutureFtdcInvestorRangeType	InvestorRange;
	///经纪公司代码
	TFutureFtdcBrokerIDType	BrokerID;
	///投资者代码
	TFutureFtdcInvestorIDType	InvestorID;
	///投机套保标志
	TFutureFtdcHedgeFlagType	HedgeFlag;
	///开仓手续费率
	TFutureFtdcRatioType	OpenRatioByMoney;
	///开仓手续费
	TFutureFtdcRatioType	OpenRatioByVolume;
	///平仓手续费率
	TFutureFtdcRatioType	CloseRatioByMoney;
	///平仓手续费
	TFutureFtdcRatioType	CloseRatioByVolume;
	///平今手续费率
	TFutureFtdcRatioType	CloseTodayRatioByMoney;
	///平今手续费
	TFutureFtdcRatioType	CloseTodayRatioByVolume;
	///执行手续费率
	TFutureFtdcRatioType	StrikeRatioByMoney;
	///执行手续费
	TFutureFtdcMoneyType	StrikeRatioByVolume;
};

///期权交易成本
struct CFutureFtdcOptionInstrTradeCostField
{
	///经纪公司代码
	TFutureFtdcBrokerIDType	BrokerID;
	///投资者代码
	TFutureFtdcInvestorIDType	InvestorID;
	///交易所代码
	TFutureFtdcExchangeIDType	ExchangeID;
	///合约代码
	TFutureFtdcInstrumentIDType	InstrumentID;
	///投机套保标志
	TFutureFtdcHedgeFlagType	HedgeFlag;
	///期权合约保证金
	TFutureFtdcMoneyType	Margin;
	///期权合约权利金
	TFutureFtdcMoneyType	Royalty;
};

///期权交易成本查询
struct CFutureFtdcQryOptionInstrTradeCostField
{
	///经纪公司代码
	TFutureFtdcBrokerIDType	BrokerID;
	///投资者代码
	TFutureFtdcInvestorIDType	InvestorID;
	///交易所代码
	TFutureFtdcExchangeIDType	ExchangeID;
	///合约代码
	TFutureFtdcInstrumentIDType	InstrumentID;
	///投机套保标志
	TFutureFtdcHedgeFlagType	HedgeFlag;
	///期权合约报价
	TFutureFtdcPriceType	InputPrice;
};

///期权手续费率查询
struct CFutureFtdcQryOptionInstrCommRateField
{
	///经纪公司代码
	TFutureFtdcBrokerIDType	BrokerID;
	///投资者代码
	TFutureFtdcInvestorIDType	InvestorID;
	///交易所代码
	TFutureFtdcExchangeIDType	ExchangeID;
	///合约代码
	TFutureFtdcInstrumentIDType	InstrumentID;
	///投机套保标志
	TFutureFtdcHedgeFlagType	HedgeFlag;
};

///股指现货指数
struct CFutureFtdcIndexPriceField
{
	///经纪公司代码
	TFutureFtdcBrokerIDType	BrokerID;
	///交易所代码
	TFutureFtdcExchangeIDType	ExchangeID;
	///合约代码
	TFutureFtdcInstrumentIDType	InstrumentID;
	///现货收盘价
	TFutureFtdcPriceType	ClosePrice;
};

///输入的执行宣告
struct CFutureFtdcInputExecOrderField
{
	///经纪公司代码
	TFutureFtdcBrokerIDType	BrokerID;
	///投资者代码
	TFutureFtdcInvestorIDType	InvestorID;
	///合约代码
	TFutureFtdcInstrumentIDType	InstrumentID;
	///执行宣告引用
	TFutureFtdcOrderRefType	ExecOrderRef;
	///用户代码
	TFutureFtdcUserIDType	UserID;
	///报单引用
	TFutureFtdcOrderRefType	OrderRef;
	///数量
	TFutureFtdcVolumeType	Volume;
	///请求编号
	TFutureFtdcRequestIDType	RequestID;
	///业务单元
	TFutureFtdcBusinessUnitType	BusinessUnit;
	///开平标志
	TFutureFtdcOffsetFlagType	OffsetFlag;
	///投机套保标志
	TFutureFtdcHedgeFlagType	HedgeFlag;
	///执行类型
	TFutureFtdcActionTypeType	ActionType;
	///保留头寸申请的持仓方向
	TFutureFtdcPosiDirectionType	PosiDirection;
	///期权行权后是否保留期货头寸的标记
	TFutureFtdcExecOrderPositionFlagType	ReservePositionFlag;
	///期权行权后生成的头寸是否自动平仓
	TFutureFtdcExecOrderCloseFlagType	CloseFlag;
};

///输入执行宣告操作
struct CFutureFtdcInputExecOrderActionField
{
	///经纪公司代码
	TFutureFtdcBrokerIDType	BrokerID;
	///投资者代码
	TFutureFtdcInvestorIDType	InvestorID;
	///执行宣告操作引用
	TFutureFtdcOrderActionRefType	ExecOrderActionRef;
	///执行宣告引用
	TFutureFtdcOrderRefType	ExecOrderRef;
	///请求编号
	TFutureFtdcRequestIDType	RequestID;
	///前置编号
	TFutureFtdcFrontIDType	FrontID;
	///会话编号
	TFutureFtdcSessionIDType	SessionID;
	///交易所代码
	TFutureFtdcExchangeIDType	ExchangeID;
	///执行宣告操作编号
	TFutureFtdcExecOrderSysIDType	ExecOrderSysID;
	///操作标志
	TFutureFtdcActionFlagType	ActionFlag;
	///用户代码
	TFutureFtdcUserIDType	UserID;
	///合约代码
	TFutureFtdcInstrumentIDType	InstrumentID;
};

///执行宣告
struct CFutureFtdcExecOrderField
{
	///经纪公司代码
	TFutureFtdcBrokerIDType	BrokerID;
	///投资者代码
	TFutureFtdcInvestorIDType	InvestorID;
	///合约代码
	TFutureFtdcInstrumentIDType	InstrumentID;
	///执行宣告引用
	TFutureFtdcOrderRefType	ExecOrderRef;
	///用户代码
	TFutureFtdcUserIDType	UserID;
	///报单引用
	TFutureFtdcOrderRefType	OrderRef;
	///数量
	TFutureFtdcVolumeType	Volume;
	///请求编号
	TFutureFtdcRequestIDType	RequestID;
	///业务单元
	TFutureFtdcBusinessUnitType	BusinessUnit;
	///开平标志
	TFutureFtdcOffsetFlagType	OffsetFlag;
	///投机套保标志
	TFutureFtdcHedgeFlagType	HedgeFlag;
	///执行类型
	TFutureFtdcActionTypeType	ActionType;
	///保留头寸申请的持仓方向
	TFutureFtdcPosiDirectionType	PosiDirection;
	///期权行权后是否保留期货头寸的标记
	TFutureFtdcExecOrderPositionFlagType	ReservePositionFlag;
	///期权行权后生成的头寸是否自动平仓
	TFutureFtdcExecOrderCloseFlagType	CloseFlag;
	///本地执行宣告编号
	TFutureFtdcOrderLocalIDType	ExecOrderLocalID;
	///交易所代码
	TFutureFtdcExchangeIDType	ExchangeID;
	///会员代码
	TFutureFtdcParticipantIDType	ParticipantID;
	///客户代码
	TFutureFtdcClientIDType	ClientID;
	///合约在交易所的代码
	TFutureFtdcExchangeInstIDType	ExchangeInstID;
	///交易所交易员代码
	TFutureFtdcTraderIDType	TraderID;
	///安装编号
	TFutureFtdcInstallIDType	InstallID;
	///执行宣告提交状态
	TFutureFtdcOrderSubmitStatusType	OrderSubmitStatus;
	///报单提示序号
	TFutureFtdcSequenceNoType	NotifySequence;
	///交易日
	TFutureFtdcDateType	TradingDay;
	///结算编号
	TFutureFtdcSettlementIDType	SettlementID;
	///执行宣告编号
	TFutureFtdcExecOrderSysIDType	ExecOrderSysID;
	///报单日期
	TFutureFtdcDateType	InsertDate;
	///插入时间
	TFutureFtdcTimeType	InsertTime;
	///撤销时间
	TFutureFtdcTimeType	CancelTime;
	///执行结果
	TFutureFtdcExecResultType	ExecResult;
	///结算会员编号
	TFutureFtdcParticipantIDType	ClearingPartID;
	///序号
	TFutureFtdcSequenceNoType	SequenceNo;
	///前置编号
	TFutureFtdcFrontIDType	FrontID;
	///会话编号
	TFutureFtdcSessionIDType	SessionID;
	///用户端产品信息
	TFutureFtdcProductInfoType	UserProductInfo;
	///状态信息
	TFutureFtdcErrorMsgType	StatusMsg;
	///操作用户代码
	TFutureFtdcUserIDType	ActiveUserID;
	///经纪公司报单编号
	TFutureFtdcSequenceNoType	BrokerExecOrderSeq;
	///交易编码类型
	TFutureFtdcClientIDTypeType	ClientIDType;
};

///执行宣告操作
struct CFutureFtdcExecOrderActionField
{
	///经纪公司代码
	TFutureFtdcBrokerIDType	BrokerID;
	///投资者代码
	TFutureFtdcInvestorIDType	InvestorID;
	///执行宣告操作引用
	TFutureFtdcOrderActionRefType	ExecOrderActionRef;
	///执行宣告引用
	TFutureFtdcOrderRefType	ExecOrderRef;
	///请求编号
	TFutureFtdcRequestIDType	RequestID;
	///前置编号
	TFutureFtdcFrontIDType	FrontID;
	///会话编号
	TFutureFtdcSessionIDType	SessionID;
	///交易所代码
	TFutureFtdcExchangeIDType	ExchangeID;
	///执行宣告操作编号
	TFutureFtdcExecOrderSysIDType	ExecOrderSysID;
	///操作标志
	TFutureFtdcActionFlagType	ActionFlag;
	///操作日期
	TFutureFtdcDateType	ActionDate;
	///操作时间
	TFutureFtdcTimeType	ActionTime;
	///交易所交易员代码
	TFutureFtdcTraderIDType	TraderID;
	///安装编号
	TFutureFtdcInstallIDType	InstallID;
	///本地执行宣告编号
	TFutureFtdcOrderLocalIDType	ExecOrderLocalID;
	///操作本地编号
	TFutureFtdcOrderLocalIDType	ActionLocalID;
	///会员代码
	TFutureFtdcParticipantIDType	ParticipantID;
	///客户代码
	TFutureFtdcClientIDType	ClientID;
	///业务单元
	TFutureFtdcBusinessUnitType	BusinessUnit;
	///报单操作状态
	TFutureFtdcOrderActionStatusType	OrderActionStatus;
	///用户代码
	TFutureFtdcUserIDType	UserID;
	///状态信息
	TFutureFtdcErrorMsgType	StatusMsg;
	///合约代码
	TFutureFtdcInstrumentIDType	InstrumentID;
};

///执行宣告查询
struct CFutureFtdcQryExecOrderField
{
	///经纪公司代码
	TFutureFtdcBrokerIDType	BrokerID;
	///投资者代码
	TFutureFtdcInvestorIDType	InvestorID;
	///合约代码
	TFutureFtdcInstrumentIDType	InstrumentID;
	///交易所代码
	TFutureFtdcExchangeIDType	ExchangeID;
	///执行宣告编号
	TFutureFtdcExecOrderSysIDType	ExecOrderSysID;
	///开始时间
	TFutureFtdcTimeType	InsertTimeStart;
	///结束时间
	TFutureFtdcTimeType	InsertTimeEnd;
};

///交易所执行宣告信息
struct CFutureFtdcExchangeExecOrderField
{
	///数量
	TFutureFtdcVolumeType	Volume;
	///请求编号
	TFutureFtdcRequestIDType	RequestID;
	///业务单元
	TFutureFtdcBusinessUnitType	BusinessUnit;
	///开平标志
	TFutureFtdcOffsetFlagType	OffsetFlag;
	///投机套保标志
	TFutureFtdcHedgeFlagType	HedgeFlag;
	///执行类型
	TFutureFtdcActionTypeType	ActionType;
	///保留头寸申请的持仓方向
	TFutureFtdcPosiDirectionType	PosiDirection;
	///期权行权后是否保留期货头寸的标记
	TFutureFtdcExecOrderPositionFlagType	ReservePositionFlag;
	///期权行权后生成的头寸是否自动平仓
	TFutureFtdcExecOrderCloseFlagType	CloseFlag;
	///本地执行宣告编号
	TFutureFtdcOrderLocalIDType	ExecOrderLocalID;
	///交易所代码
	TFutureFtdcExchangeIDType	ExchangeID;
	///会员代码
	TFutureFtdcParticipantIDType	ParticipantID;
	///客户代码
	TFutureFtdcClientIDType	ClientID;
	///合约在交易所的代码
	TFutureFtdcExchangeInstIDType	ExchangeInstID;
	///交易所交易员代码
	TFutureFtdcTraderIDType	TraderID;
	///安装编号
	TFutureFtdcInstallIDType	InstallID;
	///执行宣告提交状态
	TFutureFtdcOrderSubmitStatusType	OrderSubmitStatus;
	///报单提示序号
	TFutureFtdcSequenceNoType	NotifySequence;
	///交易日
	TFutureFtdcDateType	TradingDay;
	///结算编号
	TFutureFtdcSettlementIDType	SettlementID;
	///执行宣告编号
	TFutureFtdcExecOrderSysIDType	ExecOrderSysID;
	///报单日期
	TFutureFtdcDateType	InsertDate;
	///插入时间
	TFutureFtdcTimeType	InsertTime;
	///撤销时间
	TFutureFtdcTimeType	CancelTime;
	///执行结果
	TFutureFtdcExecResultType	ExecResult;
	///结算会员编号
	TFutureFtdcParticipantIDType	ClearingPartID;
	///序号
	TFutureFtdcSequenceNoType	SequenceNo;
};

///交易所执行宣告查询
struct CFutureFtdcQryExchangeExecOrderField
{
	///会员代码
	TFutureFtdcParticipantIDType	ParticipantID;
	///客户代码
	TFutureFtdcClientIDType	ClientID;
	///合约在交易所的代码
	TFutureFtdcExchangeInstIDType	ExchangeInstID;
	///交易所代码
	TFutureFtdcExchangeIDType	ExchangeID;
	///交易所交易员代码
	TFutureFtdcTraderIDType	TraderID;
};

///执行宣告操作查询
struct CFutureFtdcQryExecOrderActionField
{
	///经纪公司代码
	TFutureFtdcBrokerIDType	BrokerID;
	///投资者代码
	TFutureFtdcInvestorIDType	InvestorID;
	///交易所代码
	TFutureFtdcExchangeIDType	ExchangeID;
};

///交易所执行宣告操作
struct CFutureFtdcExchangeExecOrderActionField
{
	///经纪公司代码
	TFutureFtdcBrokerIDType	BrokerID;
	///投资者代码
	TFutureFtdcInvestorIDType	InvestorID;
	///交易所代码
	TFutureFtdcExchangeIDType	ExchangeID;
	///执行宣告操作编号
	TFutureFtdcExecOrderSysIDType	ExecOrderSysID;
	///操作标志
	TFutureFtdcActionFlagType	ActionFlag;
	///操作日期
	TFutureFtdcDateType	ActionDate;
	///操作时间
	TFutureFtdcTimeType	ActionTime;
	///交易所交易员代码
	TFutureFtdcTraderIDType	TraderID;
	///安装编号
	TFutureFtdcInstallIDType	InstallID;
	///本地执行宣告编号
	TFutureFtdcOrderLocalIDType	ExecOrderLocalID;
	///操作本地编号
	TFutureFtdcOrderLocalIDType	ActionLocalID;
	///会员代码
	TFutureFtdcParticipantIDType	ParticipantID;
	///客户代码
	TFutureFtdcClientIDType	ClientID;
	///业务单元
	TFutureFtdcBusinessUnitType	BusinessUnit;
	///报单操作状态
	TFutureFtdcOrderActionStatusType	OrderActionStatus;
	///用户代码
	TFutureFtdcUserIDType	UserID;
	///合约代码
	TFutureFtdcInstrumentIDType	InstrumentID;
};

///交易所执行宣告操作查询
struct CFutureFtdcQryExchangeExecOrderActionField
{
	///会员代码
	TFutureFtdcParticipantIDType	ParticipantID;
	///客户代码
	TFutureFtdcClientIDType	ClientID;
	///交易所代码
	TFutureFtdcExchangeIDType	ExchangeID;
	///交易所交易员代码
	TFutureFtdcTraderIDType	TraderID;
};

///错误执行宣告
struct CFutureFtdcErrExecOrderField
{
	///经纪公司代码
	TFutureFtdcBrokerIDType	BrokerID;
	///投资者代码
	TFutureFtdcInvestorIDType	InvestorID;
	///合约代码
	TFutureFtdcInstrumentIDType	InstrumentID;
	///执行宣告引用
	TFutureFtdcOrderRefType	ExecOrderRef;
	///用户代码
	TFutureFtdcUserIDType	UserID;
	///报单引用
	TFutureFtdcOrderRefType	OrderRef;
	///数量
	TFutureFtdcVolumeType	Volume;
	///请求编号
	TFutureFtdcRequestIDType	RequestID;
	///业务单元
	TFutureFtdcBusinessUnitType	BusinessUnit;
	///开平标志
	TFutureFtdcOffsetFlagType	OffsetFlag;
	///投机套保标志
	TFutureFtdcHedgeFlagType	HedgeFlag;
	///执行类型
	TFutureFtdcActionTypeType	ActionType;
	///保留头寸申请的持仓方向
	TFutureFtdcPosiDirectionType	PosiDirection;
	///期权行权后是否保留期货头寸的标记
	TFutureFtdcExecOrderPositionFlagType	ReservePositionFlag;
	///期权行权后生成的头寸是否自动平仓
	TFutureFtdcExecOrderCloseFlagType	CloseFlag;
	///错误代码
	TFutureFtdcErrorIDType	ErrorID;
	///错误信息
	TFutureFtdcErrorMsgType	ErrorMsg;
};

///查询错误执行宣告
struct CFutureFtdcQryErrExecOrderField
{
	///经纪公司代码
	TFutureFtdcBrokerIDType	BrokerID;
	///投资者代码
	TFutureFtdcInvestorIDType	InvestorID;
};

///错误执行宣告操作
struct CFutureFtdcErrExecOrderActionField
{
	///经纪公司代码
	TFutureFtdcBrokerIDType	BrokerID;
	///投资者代码
	TFutureFtdcInvestorIDType	InvestorID;
	///执行宣告操作引用
	TFutureFtdcOrderActionRefType	ExecOrderActionRef;
	///执行宣告引用
	TFutureFtdcOrderRefType	ExecOrderRef;
	///请求编号
	TFutureFtdcRequestIDType	RequestID;
	///前置编号
	TFutureFtdcFrontIDType	FrontID;
	///会话编号
	TFutureFtdcSessionIDType	SessionID;
	///交易所代码
	TFutureFtdcExchangeIDType	ExchangeID;
	///执行宣告操作编号
	TFutureFtdcExecOrderSysIDType	ExecOrderSysID;
	///操作标志
	TFutureFtdcActionFlagType	ActionFlag;
	///用户代码
	TFutureFtdcUserIDType	UserID;
	///合约代码
	TFutureFtdcInstrumentIDType	InstrumentID;
	///错误代码
	TFutureFtdcErrorIDType	ErrorID;
	///错误信息
	TFutureFtdcErrorMsgType	ErrorMsg;
};

///查询错误执行宣告操作
struct CFutureFtdcQryErrExecOrderActionField
{
	///经纪公司代码
	TFutureFtdcBrokerIDType	BrokerID;
	///投资者代码
	TFutureFtdcInvestorIDType	InvestorID;
};

///报价输入
struct CFutureFtdcInputQuoteField
{
	///经纪公司代码
	TFutureFtdcBrokerIDType	BrokerID;
	///投资者代码
	TFutureFtdcInvestorIDType	InvestorID;
	///合约代码
	TFutureFtdcInstrumentIDType	InstrumentID;
	///报单引用
	TFutureFtdcOrderRefType	OrderRef;
	///用户代码
	TFutureFtdcUserIDType	UserID;
	///买方数量
	TFutureFtdcVolumeType	BidVolumeTotalOriginal;
	///价格
	TFutureFtdcPriceType	BidPrice;
	///买方组合开平标志
	TFutureFtdcCombOffsetFlagType	BidCombOffsetFlag;
	///买方组合投机套保标志
	TFutureFtdcCombHedgeFlagType	BidCombHedgeFlag;
	///卖方数量
	TFutureFtdcVolumeType	AskVolumeTotalOriginal;
	///价格
	TFutureFtdcPriceType	AskPrice;
	///卖方组合开平标志
	TFutureFtdcCombOffsetFlagType	AskCombOffsetFlag;
	///卖方组合投机套保标志
	TFutureFtdcCombHedgeFlagType	AskCombHedgeFlag;
	///业务单元
	TFutureFtdcBusinessUnitType	BusinessUnit;
	///交易所代码
	TFutureFtdcExchangeIDType	ExchangeID;
};

///报价操作输入
struct CFutureFtdcInputQuoteActionField
{
	///经纪公司代码
	TFutureFtdcBrokerIDType	BrokerID;
	///投资者代码
	TFutureFtdcInvestorIDType	InvestorID;
	///报单操作引用
	TFutureFtdcOrderActionRefType	QuoteActionRef;
	///报单引用
	TFutureFtdcOrderRefType	QuoteRef;
	///请求编号
	TFutureFtdcRequestIDType	RequestID;
	///前置编号
	TFutureFtdcFrontIDType	FrontID;
	///会话编号
	TFutureFtdcSessionIDType	SessionID;
	///交易所代码
	TFutureFtdcExchangeIDType	ExchangeID;
	///报单编号
	TFutureFtdcOrderSysIDType	QuoteSysID;
	///操作标志
	TFutureFtdcActionFlagType	ActionFlag;
	///用户代码
	TFutureFtdcUserIDType	UserID;
	///合约代码
	TFutureFtdcInstrumentIDType	InstrumentID;
};

///查询报价
struct CFutureFtdcQryQuoteField
{
	///经纪公司代码
	TFutureFtdcBrokerIDType	BrokerID;
	///投资者代码
	TFutureFtdcInvestorIDType	InvestorID;
	///合约代码
	TFutureFtdcInstrumentIDType	InstrumentID;
	///交易所代码
	TFutureFtdcExchangeIDType	ExchangeID;
	///报价编号
	TFutureFtdcOrderSysIDType	QuoteSysID;
	///开始时间
	TFutureFtdcTimeType	InsertTimeStart;
	///结束时间
	TFutureFtdcTimeType	InsertTimeEnd;
};

///报价
struct CFutureFtdcQuoteField
{
	///经纪公司代码
	TFutureFtdcBrokerIDType	BrokerID;
	///投资者代码
	TFutureFtdcInvestorIDType	InvestorID;
	///合约代码
	TFutureFtdcInstrumentIDType	InstrumentID;
	///报单引用
	TFutureFtdcOrderRefType	OrderRef;
	///用户代码
	TFutureFtdcUserIDType	UserID;
	///买方数量
	TFutureFtdcVolumeType	BidVolumeTotalOriginal;
	///价格
	TFutureFtdcPriceType	BidPrice;
	///买方组合开平标志
	TFutureFtdcCombOffsetFlagType	BidCombOffsetFlag;
	///买方组合投机套保标志
	TFutureFtdcCombHedgeFlagType	BidCombHedgeFlag;
	///卖方数量
	TFutureFtdcVolumeType	AskVolumeTotalOriginal;
	///价格
	TFutureFtdcPriceType	AskPrice;
	///卖方组合开平标志
	TFutureFtdcCombOffsetFlagType	AskCombOffsetFlag;
	///卖方组合投机套保标志
	TFutureFtdcCombHedgeFlagType	AskCombHedgeFlag;
	///业务单元
	TFutureFtdcBusinessUnitType	BusinessUnit;
	///本地报单编号
	TFutureFtdcOrderLocalIDType	OrderLocalID;
	///交易所代码
	TFutureFtdcExchangeIDType	ExchangeID;
	///会员代码
	TFutureFtdcParticipantIDType	ParticipantID;
	///客户代码
	TFutureFtdcClientIDType	ClientID;
	///合约在交易所的代码
	TFutureFtdcExchangeInstIDType	ExchangeInstID;
	///交易所交易员代码
	TFutureFtdcTraderIDType	TraderID;
	///安装编号
	TFutureFtdcInstallIDType	InstallID;
	///报单提交状态
	TFutureFtdcOrderSubmitStatusType	OrderSubmitStatus;
	///报单提示序号
	TFutureFtdcSequenceNoType	NotifySequence;
	///交易日
	TFutureFtdcDateType	TradingDay;
	///结算编号
	TFutureFtdcSettlementIDType	SettlementID;
	///报单编号
	TFutureFtdcOrderSysIDType	QuoteSysID;
	///买方报单编号
	TFutureFtdcOrderSysIDType	BidOrderSysID;
	///卖方报单编号
	TFutureFtdcOrderSysIDType	AskOrderSysID;
	///报单状态
	TFutureFtdcOrderStatusType	QuoteStatus;
	///买方剩余数量
	TFutureFtdcVolumeType	BidVolumeTotal;
	///卖方剩余数量
	TFutureFtdcVolumeType	AskVolumeTotal;
	///买方成交数量
	TFutureFtdcVolumeType	BidVolumeTraded;
	///卖方成交数量
	TFutureFtdcVolumeType	AskVolumeTraded;
	///报单日期
	TFutureFtdcDateType	InsertDate;
	///委托时间
	TFutureFtdcTimeType	InsertTime;
	///激活时间
	TFutureFtdcTimeType	ActiveTime;
	///挂起时间
	TFutureFtdcTimeType	SuspendTime;
	///最后修改时间
	TFutureFtdcTimeType	UpdateTime;
	///撤销时间
	TFutureFtdcTimeType	CancelTime;
	///最后修改交易所交易员代码
	TFutureFtdcTraderIDType	ActiveTraderID;
	///结算会员编号
	TFutureFtdcParticipantIDType	ClearingPartID;
	///序号
	TFutureFtdcSequenceNoType	SequenceNo;
	///前置编号
	TFutureFtdcFrontIDType	FrontID;
	///会话编号
	TFutureFtdcSessionIDType	SessionID;
	///用户端产品信息
	TFutureFtdcProductInfoType	UserProductInfo;
	///状态信息
	TFutureFtdcErrorMsgType	StatusMsg;
	///操作用户代码
	TFutureFtdcUserIDType	ActiveUserID;
	///经纪公司报单编号
	TFutureFtdcSequenceNoType	BrokerOrderSeq;
	///交易编码类型
	TFutureFtdcClientIDTypeType	ClientIDType;
};

///资金内转
struct CFutureFtdcInternalTransferField
{
	///出入金流水号
	TFutureFtdcDepositSeqNoType	DepositSeqNo;
	///经纪公司代码
	TFutureFtdcBrokerIDType	BrokerID;
	///转出投资者代码
	TFutureFtdcInvestorIDType	InvestorID;
	///转入投资者代码
	TFutureFtdcInvestorIDType	InInvestorID;
	///内转金额
	TFutureFtdcMoneyType	Deposit;
	///是否强制进行
	TFutureFtdcBoolType	IsForce;
};

///报价
struct CFutureFtdcQuoteActionField
{
	///经纪公司代码
	TFutureFtdcBrokerIDType	BrokerID;
	///投资者代码
	TFutureFtdcInvestorIDType	InvestorID;
	///报单操作引用
	TFutureFtdcOrderActionRefType	QuoteActionRef;
	///报单引用
	TFutureFtdcOrderRefType	QuoteRef;
	///请求编号
	TFutureFtdcRequestIDType	RequestID;
	///前置编号
	TFutureFtdcFrontIDType	FrontID;
	///会话编号
	TFutureFtdcSessionIDType	SessionID;
	///交易所代码
	TFutureFtdcExchangeIDType	ExchangeID;
	///报单编号
	TFutureFtdcOrderSysIDType	QuoteSysID;
	///操作标志
	TFutureFtdcActionFlagType	ActionFlag;
	///操作日期
	TFutureFtdcDateType	ActionDate;
	///操作时间
	TFutureFtdcTimeType	ActionTime;
	///交易所交易员代码
	TFutureFtdcTraderIDType	TraderID;
	///安装编号
	TFutureFtdcInstallIDType	InstallID;
	///本地报价编号
	TFutureFtdcOrderLocalIDType	QuoteLocalID;
	///操作本地编号
	TFutureFtdcOrderLocalIDType	ActionLocalID;
	///会员代码
	TFutureFtdcParticipantIDType	ParticipantID;
	///客户代码
	TFutureFtdcClientIDType	ClientID;
	///业务单元
	TFutureFtdcBusinessUnitType	BusinessUnit;
	///报单操作状态
	TFutureFtdcOrderActionStatusType	OrderActionStatus;
	///用户代码
	TFutureFtdcUserIDType	UserID;
	///状态信息
	TFutureFtdcErrorMsgType	StatusMsg;
	///合约代码
	TFutureFtdcInstrumentIDType	InstrumentID;
};

///报价
struct CFutureFtdcQryQuoteActionField
{
	///经纪公司代码
	TFutureFtdcBrokerIDType	BrokerID;
	///投资者代码
	TFutureFtdcInvestorIDType	InvestorID;
	///交易所代码
	TFutureFtdcExchangeIDType	ExchangeID;
};

///投资者产品组保证金
struct CFutureFtdcInvestorProductGroupMarginField
{
	///经纪公司代码
	TFutureFtdcBrokerIDType	BrokerID;
	///投资者代码
	TFutureFtdcInvestorIDType	InvestorID;
	///交易所代码
	TFutureFtdcExchangeIDType	ExchangeID;
	///品种/跨品种标示
	TFutureFtdcInstrumentIDType	ProductGroupID;
	///交易日
	TFutureFtdcDateType	TradingDay;
	///结算编号
	TFutureFtdcSettlementIDType	SettlementID;
	///冻结的保证金
	TFutureFtdcMoneyType	FrozenMargin;
	///多头冻结的保证金
	TFutureFtdcMoneyType	LongFrozenMargin;
	///空头冻结的保证金
	TFutureFtdcMoneyType	ShortFrozenMargin;
	///占用的保证金
	TFutureFtdcMoneyType	UseMargin;
	///多头保证金
	TFutureFtdcMoneyType	LongUseMargin;
	///空头保证金
	TFutureFtdcMoneyType	ShortUseMargin;
	///交易所保证金
	TFutureFtdcMoneyType	ExchMargin;
	///交易所多头保证金
	TFutureFtdcMoneyType	LongExchMargin;
	///交易所空头保证金
	TFutureFtdcMoneyType	ShortExchMargin;
	///平仓盈亏
	TFutureFtdcMoneyType	CloseProfit;
	///冻结的手续费
	TFutureFtdcMoneyType	FrozenCommission;
	///手续费
	TFutureFtdcMoneyType	Commission;
	///冻结的资金
	TFutureFtdcMoneyType	FrozenCash;
	///资金差额
	TFutureFtdcMoneyType	CashIn;
	///持仓盈亏
	TFutureFtdcMoneyType	PositionProfit;
	///折抵总金额
	TFutureFtdcMoneyType	OffsetAmount;
	///多头折抵总金额
	TFutureFtdcMoneyType	LongOffsetAmount;
	///空头折抵总金额
	TFutureFtdcMoneyType	ShortOffsetAmount;
	///交易所折抵总金额
	TFutureFtdcMoneyType	ExchOffsetAmount;
	///交易所多头折抵总金额
	TFutureFtdcMoneyType	LongExchOffsetAmount;
	///交易所空头折抵总金额
	TFutureFtdcMoneyType	ShortExchOffsetAmount;
	///投机套保标志
	TFutureFtdcHedgeFlagType	HedgeFlag;
};

///投资者产品组保证金
struct CFutureFtdcQryInvestorProductGroupMarginField
{
	///经纪公司代码
	TFutureFtdcBrokerIDType	BrokerID;
	///投资者代码
	TFutureFtdcInvestorIDType	InvestorID;
	///品种/跨品种标示
	TFutureFtdcInstrumentIDType	ProductGroupID;
	///投机套保标志
	TFutureFtdcHedgeFlagType	HedgeFlag;
};

///市场行情
struct CFutureFtdcMarketDataField
{
	///交易日
	TFutureFtdcDateType	TradingDay;
	///合约代码
	TFutureFtdcInstrumentIDType	InstrumentID;
	///交易所代码
	TFutureFtdcExchangeIDType	ExchangeID;
	///合约在交易所的代码
	TFutureFtdcExchangeInstIDType	ExchangeInstID;
	///最新价
	TFutureFtdcPriceType	LastPrice;
	///上次结算价
	TFutureFtdcPriceType	PreSettlementPrice;
	///昨收盘
	TFutureFtdcPriceType	PreClosePrice;
	///昨持仓量
	TFutureFtdcLargeVolumeType	PreOpenInterest;
	///今开盘
	TFutureFtdcPriceType	OpenPrice;
	///最高价
	TFutureFtdcPriceType	HighestPrice;
	///最低价
	TFutureFtdcPriceType	LowestPrice;
	///数量
	TFutureFtdcVolumeType	Volume;
	///成交金额
	TFutureFtdcMoneyType	Turnover;
	///持仓量
	TFutureFtdcLargeVolumeType	OpenInterest;
	///今收盘
	TFutureFtdcPriceType	ClosePrice;
	///本次结算价
	TFutureFtdcPriceType	SettlementPrice;
	///涨停板价
	TFutureFtdcPriceType	UpperLimitPrice;
	///跌停板价
	TFutureFtdcPriceType	LowerLimitPrice;
	///昨虚实度
	TFutureFtdcRatioType	PreDelta;
	///今虚实度
	TFutureFtdcRatioType	CurrDelta;
	///最后修改时间
	TFutureFtdcTimeType	UpdateTime;
	///最后修改毫秒
	TFutureFtdcMillisecType	UpdateMillisec;
	///业务日期
	TFutureFtdcDateType	ActionDay;
};

///行情基础属性
struct CFutureFtdcMarketDataBaseField
{
	///交易日
	TFutureFtdcDateType	TradingDay;
	///上次结算价
	TFutureFtdcPriceType	PreSettlementPrice;
	///昨收盘
	TFutureFtdcPriceType	PreClosePrice;
	///昨持仓量
	TFutureFtdcLargeVolumeType	PreOpenInterest;
	///昨虚实度
	TFutureFtdcRatioType	PreDelta;
};

///行情静态属性
struct CFutureFtdcMarketDataStaticField
{
	///今开盘
	TFutureFtdcPriceType	OpenPrice;
	///最高价
	TFutureFtdcPriceType	HighestPrice;
	///最低价
	TFutureFtdcPriceType	LowestPrice;
	///今收盘
	TFutureFtdcPriceType	ClosePrice;
	///涨停板价
	TFutureFtdcPriceType	UpperLimitPrice;
	///跌停板价
	TFutureFtdcPriceType	LowerLimitPrice;
	///本次结算价
	TFutureFtdcPriceType	SettlementPrice;
	///今虚实度
	TFutureFtdcRatioType	CurrDelta;
};

///行情最新成交属性
struct CFutureFtdcMarketDataLastMatchField
{
	///最新价
	TFutureFtdcPriceType	LastPrice;
	///数量
	TFutureFtdcVolumeType	Volume;
	///成交金额
	TFutureFtdcMoneyType	Turnover;
	///持仓量
	TFutureFtdcLargeVolumeType	OpenInterest;
};

///行情最优价属性
struct CFutureFtdcMarketDataBestPriceField
{
	///申买价一
	TFutureFtdcPriceType	BidPrice1;
	///申买量一
	TFutureFtdcVolumeType	BidVolume1;
	///申卖价一
	TFutureFtdcPriceType	AskPrice1;
	///申卖量一
	TFutureFtdcVolumeType	AskVolume1;
};

///行情申买二、三属性
struct CFutureFtdcMarketDataBid23Field
{
	///申买价二
	TFutureFtdcPriceType	BidPrice2;
	///申买量二
	TFutureFtdcVolumeType	BidVolume2;
	///申买价三
	TFutureFtdcPriceType	BidPrice3;
	///申买量三
	TFutureFtdcVolumeType	BidVolume3;
};

///行情申卖二、三属性
struct CFutureFtdcMarketDataAsk23Field
{
	///申卖价二
	TFutureFtdcPriceType	AskPrice2;
	///申卖量二
	TFutureFtdcVolumeType	AskVolume2;
	///申卖价三
	TFutureFtdcPriceType	AskPrice3;
	///申卖量三
	TFutureFtdcVolumeType	AskVolume3;
};

///行情申买四、五属性
struct CFutureFtdcMarketDataBid45Field
{
	///申买价四
	TFutureFtdcPriceType	BidPrice4;
	///申买量四
	TFutureFtdcVolumeType	BidVolume4;
	///申买价五
	TFutureFtdcPriceType	BidPrice5;
	///申买量五
	TFutureFtdcVolumeType	BidVolume5;
};

///行情申卖四、五属性
struct CFutureFtdcMarketDataAsk45Field
{
	///申卖价四
	TFutureFtdcPriceType	AskPrice4;
	///申卖量四
	TFutureFtdcVolumeType	AskVolume4;
	///申卖价五
	TFutureFtdcPriceType	AskPrice5;
	///申卖量五
	TFutureFtdcVolumeType	AskVolume5;
};

///行情更新时间属性
struct CFutureFtdcMarketDataUpdateTimeField
{
	///合约代码
	TFutureFtdcInstrumentIDType	InstrumentID;
	///最后修改时间
	TFutureFtdcTimeType	UpdateTime;
	///最后修改毫秒
	TFutureFtdcMillisecType	UpdateMillisec;
	///业务日期
	TFutureFtdcDateType	ActionDay;
};

///行情交易所代码属性
struct CFutureFtdcMarketDataExchangeField
{
	///交易所代码
	TFutureFtdcExchangeIDType	ExchangeID;
};

///指定的合约
struct CFutureFtdcSpecificInstrumentField
{
	///合约代码
	TFutureFtdcInstrumentIDType	InstrumentID;
};

///合约状态
struct CFutureFtdcInstrumentStatusField
{
	///交易所代码
	TFutureFtdcExchangeIDType	ExchangeID;
	///合约在交易所的代码
	TFutureFtdcExchangeInstIDType	ExchangeInstID;
	///结算组代码
	TFutureFtdcSettlementGroupIDType	SettlementGroupID;
	///合约代码
	TFutureFtdcInstrumentIDType	InstrumentID;
	///合约交易状态
	TFutureFtdcInstrumentStatusType	InstrumentStatus;
	///交易阶段编号
	TFutureFtdcTradingSegmentSNType	TradingSegmentSN;
	///进入本状态时间
	TFutureFtdcTimeType	EnterTime;
	///进入本状态原因
	TFutureFtdcInstStatusEnterReasonType	EnterReason;
};

///查询合约状态
struct CFutureFtdcQryInstrumentStatusField
{
	///交易所代码
	TFutureFtdcExchangeIDType	ExchangeID;
	///合约在交易所的代码
	TFutureFtdcExchangeInstIDType	ExchangeInstID;
};

///投资者账户
struct CFutureFtdcInvestorAccountField
{
	///经纪公司代码
	TFutureFtdcBrokerIDType	BrokerID;
	///投资者代码
	TFutureFtdcInvestorIDType	InvestorID;
	///投资者帐号
	TFutureFtdcAccountIDType	AccountID;
};

///浮动盈亏算法
struct CFutureFtdcPositionProfitAlgorithmField
{
	///经纪公司代码
	TFutureFtdcBrokerIDType	BrokerID;
	///投资者帐号
	TFutureFtdcAccountIDType	AccountID;
	///盈亏算法
	TFutureFtdcAlgorithmType	Algorithm;
	///备注
	TFutureFtdcMemoType	Memo;
};

///会员资金折扣
struct CFutureFtdcDiscountField
{
	///经纪公司代码
	TFutureFtdcBrokerIDType	BrokerID;
	///投资者范围
	TFutureFtdcInvestorRangeType	InvestorRange;
	///投资者代码
	TFutureFtdcInvestorIDType	InvestorID;
	///资金折扣比例
	TFutureFtdcRatioType	Discount;
};

///查询转帐银行
struct CFutureFtdcQryTransferBankField
{
	///银行代码
	TFutureFtdcBankIDType	BankID;
	///银行分中心代码
	TFutureFtdcBankBrchIDType	BankBrchID;
};

///转帐银行
struct CFutureFtdcTransferBankField
{
	///银行代码
	TFutureFtdcBankIDType	BankID;
	///银行分中心代码
	TFutureFtdcBankBrchIDType	BankBrchID;
	///银行名称
	TFutureFtdcBankNameType	BankName;
	///是否活跃
	TFutureFtdcBoolType	IsActive;
};

///查询投资者持仓明细
struct CFutureFtdcQryInvestorPositionDetailField
{
	///经纪公司代码
	TFutureFtdcBrokerIDType	BrokerID;
	///投资者代码
	TFutureFtdcInvestorIDType	InvestorID;
	///交易所代码
	TFutureFtdcExchangeIDType	ExchangeID;
	///合约代码
	TFutureFtdcInstrumentIDType	InstrumentID;
};

///投资者持仓明细
struct CFutureFtdcInvestorPositionDetailField
{
	///合约代码
	TFutureFtdcInstrumentIDType	InstrumentID;
	///经纪公司代码
	TFutureFtdcBrokerIDType	BrokerID;
	///投资者代码
	TFutureFtdcInvestorIDType	InvestorID;
	///投机套保标志
	TFutureFtdcHedgeFlagType	HedgeFlag;
	///买卖
	TFutureFtdcDirectionType	Direction;
	///开仓日期
	TFutureFtdcDateType	OpenDate;
	///成交编号
	TFutureFtdcTradeIDType	TradeID;
	///数量
	TFutureFtdcVolumeType	Volume;
	///开仓价
	TFutureFtdcPriceType	OpenPrice;
	///交易日
	TFutureFtdcDateType	TradingDay;
	///结算编号
	TFutureFtdcSettlementIDType	SettlementID;
	///成交类型
	TFutureFtdcTradeTypeType	TradeType;
	///组合合约代码
	TFutureFtdcInstrumentIDType	CombInstrumentID;
	///交易所代码
	TFutureFtdcExchangeIDType	ExchangeID;
	///逐日盯市平仓盈亏
	TFutureFtdcMoneyType	CloseProfitByDate;
	///逐笔对冲平仓盈亏
	TFutureFtdcMoneyType	CloseProfitByTrade;
	///逐日盯市持仓盈亏
	TFutureFtdcMoneyType	PositionProfitByDate;
	///逐笔对冲持仓盈亏
	TFutureFtdcMoneyType	PositionProfitByTrade;
	///投资者保证金
	TFutureFtdcMoneyType	Margin;
	///交易所保证金
	TFutureFtdcMoneyType	ExchMargin;
	///保证金率
	TFutureFtdcRatioType	MarginRateByMoney;
	///保证金率(按手数)
	TFutureFtdcRatioType	MarginRateByVolume;
	///昨结算价
	TFutureFtdcPriceType	LastSettlementPrice;
	///结算价
	TFutureFtdcPriceType	SettlementPrice;
	///平仓量
	TFutureFtdcVolumeType	CloseVolume;
	///平仓金额
	TFutureFtdcMoneyType	CloseAmount;
};

///资金账户口令域
struct CFutureFtdcTradingAccountPasswordField
{
	///经纪公司代码
	TFutureFtdcBrokerIDType	BrokerID;
	///投资者帐号
	TFutureFtdcAccountIDType	AccountID;
	///密码
	TFutureFtdcPasswordType	Password;
};

///交易所行情报盘机
struct CFutureFtdcMDTraderOfferField
{
	///交易所代码
	TFutureFtdcExchangeIDType	ExchangeID;
	///交易所交易员代码
	TFutureFtdcTraderIDType	TraderID;
	///会员代码
	TFutureFtdcParticipantIDType	ParticipantID;
	///密码
	TFutureFtdcPasswordType	Password;
	///安装编号
	TFutureFtdcInstallIDType	InstallID;
	///本地报单编号
	TFutureFtdcOrderLocalIDType	OrderLocalID;
	///交易所交易员连接状态
	TFutureFtdcTraderConnectStatusType	TraderConnectStatus;
	///发出连接请求的日期
	TFutureFtdcDateType	ConnectRequestDate;
	///发出连接请求的时间
	TFutureFtdcTimeType	ConnectRequestTime;
	///上次报告日期
	TFutureFtdcDateType	LastReportDate;
	///上次报告时间
	TFutureFtdcTimeType	LastReportTime;
	///完成连接日期
	TFutureFtdcDateType	ConnectDate;
	///完成连接时间
	TFutureFtdcTimeType	ConnectTime;
	///启动日期
	TFutureFtdcDateType	StartDate;
	///启动时间
	TFutureFtdcTimeType	StartTime;
	///交易日
	TFutureFtdcDateType	TradingDay;
	///经纪公司代码
	TFutureFtdcBrokerIDType	BrokerID;
	///本席位最大成交编号
	TFutureFtdcTradeIDType	MaxTradeID;
	///本席位最大报单备拷
	TFutureFtdcReturnCodeType	MaxOrderMessageReference;
};

///查询行情报盘机
struct CFutureFtdcQryMDTraderOfferField
{
	///交易所代码
	TFutureFtdcExchangeIDType	ExchangeID;
	///会员代码
	TFutureFtdcParticipantIDType	ParticipantID;
	///交易所交易员代码
	TFutureFtdcTraderIDType	TraderID;
};

///查询客户通知
struct CFutureFtdcQryNoticeField
{
	///经纪公司代码
	TFutureFtdcBrokerIDType	BrokerID;
};

///客户通知
struct CFutureFtdcNoticeField
{
	///经纪公司代码
	TFutureFtdcBrokerIDType	BrokerID;
	///消息正文
	TFutureFtdcContentType	Content;
	///经纪公司通知内容序列号
	TFutureFtdcSequenceLabelType	SequenceLabel;
};

///用户权限
struct CFutureFtdcUserRightField
{
	///经纪公司代码
	TFutureFtdcBrokerIDType	BrokerID;
	///用户代码
	TFutureFtdcUserIDType	UserID;
	///客户权限类型
	TFutureFtdcUserRightTypeType	UserRightType;
	///是否禁止
	TFutureFtdcBoolType	IsForbidden;
};

///查询结算信息确认域
struct CFutureFtdcQrySettlementInfoConfirmField
{
	///经纪公司代码
	TFutureFtdcBrokerIDType	BrokerID;
	///投资者代码
	TFutureFtdcInvestorIDType	InvestorID;
};

///装载结算信息
struct CFutureFtdcLoadSettlementInfoField
{
	///经纪公司代码
	TFutureFtdcBrokerIDType	BrokerID;
};

///经纪公司可提资金算法表
struct CFutureFtdcBrokerWithdrawAlgorithmField
{
	///经纪公司代码
	TFutureFtdcBrokerIDType	BrokerID;
	///可提资金算法
	TFutureFtdcAlgorithmType	WithdrawAlgorithm;
	///资金使用率
	TFutureFtdcRatioType	UsingRatio;
	///可提是否包含平仓盈利
	TFutureFtdcIncludeCloseProfitType	IncludeCloseProfit;
	///本日无仓且无成交客户是否受可提比例限制
	TFutureFtdcAllWithoutTradeType	AllWithoutTrade;
	///可用是否包含平仓盈利
	TFutureFtdcIncludeCloseProfitType	AvailIncludeCloseProfit;
	///是否启用用户事件
	TFutureFtdcBoolType	IsBrokerUserEvent;
};

///资金账户口令变更域
struct CFutureFtdcTradingAccountPasswordUpdateV1Field
{
	///经纪公司代码
	TFutureFtdcBrokerIDType	BrokerID;
	///投资者代码
	TFutureFtdcInvestorIDType	InvestorID;
	///原来的口令
	TFutureFtdcPasswordType	OldPassword;
	///新的口令
	TFutureFtdcPasswordType	NewPassword;
};

///资金账户口令变更域
struct CFutureFtdcTradingAccountPasswordUpdateField
{
	///经纪公司代码
	TFutureFtdcBrokerIDType	BrokerID;
	///投资者帐号
	TFutureFtdcAccountIDType	AccountID;
	///原来的口令
	TFutureFtdcPasswordType	OldPassword;
	///新的口令
	TFutureFtdcPasswordType	NewPassword;
};

///查询组合合约分腿
struct CFutureFtdcQryCombinationLegField
{
	///交易所代码
	TFutureFtdcExchangeIDType	ExchangeID;
	///组合合约代码
	TFutureFtdcInstrumentIDType	CombInstrumentID;
	///单腿编号
	TFutureFtdcLegIDType	LegID;
	///单腿合约代码
	TFutureFtdcInstrumentIDType	LegInstrumentID;
};

///查询组合合约分腿
struct CFutureFtdcQrySyncStatusField
{
	///交易日
	TFutureFtdcDateType	TradingDay;
};

///组合交易合约的单腿
struct CFutureFtdcCombinationLegField
{
	///交易所代码
	TFutureFtdcExchangeIDType	ExchangeID;
	///组合合约代码
	TFutureFtdcInstrumentIDType	CombInstrumentID;
	///单腿编号
	TFutureFtdcLegIDType	LegID;
	///单腿合约代码
	TFutureFtdcInstrumentIDType	LegInstrumentID;
	///买卖方向
	TFutureFtdcDirectionType	Direction;
	///单腿乘数
	TFutureFtdcLegMultipleType	LegMultiple;
	///派生层数
	TFutureFtdcImplyLevelType	ImplyLevel;
};

///数据同步状态
struct CFutureFtdcSyncStatusField
{
	///交易日
	TFutureFtdcDateType	TradingDay;
	///数据同步状态
	TFutureFtdcDataSyncStatusType	DataSyncStatus;
};

///查询联系人
struct CFutureFtdcQryLinkManField
{
	///经纪公司代码
	TFutureFtdcBrokerIDType	BrokerID;
	///投资者代码
	TFutureFtdcInvestorIDType	InvestorID;
};

///联系人
struct CFutureFtdcLinkManField
{
	///经纪公司代码
	TFutureFtdcBrokerIDType	BrokerID;
	///投资者代码
	TFutureFtdcInvestorIDType	InvestorID;
	///联系人类型
	TFutureFtdcPersonTypeType	PersonType;
	///证件类型
	TFutureFtdcIdCardTypeType	IdentifiedCardType;
	///证件号码
	TFutureFtdcIdentifiedCardNoType	IdentifiedCardNo;
	///名称
	TFutureFtdcPartyNameType	PersonName;
	///联系电话
	TFutureFtdcTelephoneType	Telephone;
	///通讯地址
	TFutureFtdcAddressType	Address;
	///邮政编码
	TFutureFtdcZipCodeType	ZipCode;
	///优先级
	TFutureFtdcPriorityType	Priority;
};

///查询经纪公司用户事件
struct CFutureFtdcQryBrokerUserEventField
{
	///经纪公司代码
	TFutureFtdcBrokerIDType	BrokerID;
	///用户代码
	TFutureFtdcUserIDType	UserID;
	///用户事件类型
	TFutureFtdcUserEventTypeType	UserEventType;
};

///查询经纪公司用户事件
struct CFutureFtdcBrokerUserEventField
{
	///经纪公司代码
	TFutureFtdcBrokerIDType	BrokerID;
	///用户代码
	TFutureFtdcUserIDType	UserID;
	///用户事件类型
	TFutureFtdcUserEventTypeType	UserEventType;
	///用户事件序号
	TFutureFtdcSequenceNoType	EventSequenceNo;
	///事件发生日期
	TFutureFtdcDateType	EventDate;
	///事件发生时间
	TFutureFtdcTimeType	EventTime;
	///用户事件信息
	TFutureFtdcUserEventInfoType	UserEventInfo;
	///投资者代码
	TFutureFtdcInvestorIDType	InvestorID;
	///合约代码
	TFutureFtdcInstrumentIDType	InstrumentID;
	///交易所代码
	TFutureFtdcExchangeIDType	ExchangeID;
};

///查询签约银行请求
struct CFutureFtdcQryContractBankField
{
	///经纪公司代码
	TFutureFtdcBrokerIDType	BrokerID;
	///银行代码
	TFutureFtdcBankIDType	BankID;
	///银行分中心代码
	TFutureFtdcBankBrchIDType	BankBrchID;
};

///查询签约银行响应
struct CFutureFtdcContractBankField
{
	///经纪公司代码
	TFutureFtdcBrokerIDType	BrokerID;
	///银行代码
	TFutureFtdcBankIDType	BankID;
	///银行分中心代码
	TFutureFtdcBankBrchIDType	BankBrchID;
	///银行名称
	TFutureFtdcBankNameType	BankName;
};

///投资者组合持仓明细
struct CFutureFtdcInvestorPositionCombineDetailField
{
	///交易日
	TFutureFtdcDateType	TradingDay;
	///开仓日期
	TFutureFtdcDateType	OpenDate;
	///交易所代码
	TFutureFtdcExchangeIDType	ExchangeID;
	///结算编号
	TFutureFtdcSettlementIDType	SettlementID;
	///经纪公司代码
	TFutureFtdcBrokerIDType	BrokerID;
	///投资者代码
	TFutureFtdcInvestorIDType	InvestorID;
	///组合编号
	TFutureFtdcTradeIDType	ComTradeID;
	///撮合编号
	TFutureFtdcTradeIDType	TradeID;
	///合约代码
	TFutureFtdcInstrumentIDType	InstrumentID;
	///投机套保标志
	TFutureFtdcHedgeFlagType	HedgeFlag;
	///买卖
	TFutureFtdcDirectionType	Direction;
	///持仓量
	TFutureFtdcVolumeType	TotalAmt;
	///投资者保证金
	TFutureFtdcMoneyType	Margin;
	///交易所保证金
	TFutureFtdcMoneyType	ExchMargin;
	///保证金率
	TFutureFtdcRatioType	MarginRateByMoney;
	///保证金率(按手数)
	TFutureFtdcRatioType	MarginRateByVolume;
	///单腿编号
	TFutureFtdcLegIDType	LegID;
	///单腿乘数
	TFutureFtdcLegMultipleType	LegMultiple;
	///组合持仓合约编码
	TFutureFtdcInstrumentIDType	CombInstrumentID;
	///成交组号
	TFutureFtdcTradeGroupIDType	TradeGroupID;
};

///预埋单
struct CFutureFtdcParkedOrderField
{
	///经纪公司代码
	TFutureFtdcBrokerIDType	BrokerID;
	///投资者代码
	TFutureFtdcInvestorIDType	InvestorID;
	///合约代码
	TFutureFtdcInstrumentIDType	InstrumentID;
	///报单引用
	TFutureFtdcOrderRefType	OrderRef;
	///用户代码
	TFutureFtdcUserIDType	UserID;
	///报单价格条件
	TFutureFtdcOrderPriceTypeType	OrderPriceType;
	///买卖方向
	TFutureFtdcDirectionType	Direction;
	///组合开平标志
	TFutureFtdcCombOffsetFlagType	CombOffsetFlag;
	///组合投机套保标志
	TFutureFtdcCombHedgeFlagType	CombHedgeFlag;
	///价格
	TFutureFtdcPriceType	LimitPrice;
	///数量
	TFutureFtdcVolumeType	VolumeTotalOriginal;
	///有效期类型
	TFutureFtdcTimeConditionType	TimeCondition;
	///GTD日期
	TFutureFtdcDateType	GTDDate;
	///成交量类型
	TFutureFtdcVolumeConditionType	VolumeCondition;
	///最小成交量
	TFutureFtdcVolumeType	MinVolume;
	///触发条件
	TFutureFtdcContingentConditionType	ContingentCondition;
	///止损价
	TFutureFtdcPriceType	StopPrice;
	///强平原因
	TFutureFtdcForceCloseReasonType	ForceCloseReason;
	///自动挂起标志
	TFutureFtdcBoolType	IsAutoSuspend;
	///业务单元
	TFutureFtdcBusinessUnitType	BusinessUnit;
	///请求编号
	TFutureFtdcRequestIDType	RequestID;
	///用户强评标志
	TFutureFtdcBoolType	UserForceClose;
	///互换单标志
	TFutureFtdcBoolType	IsSwapOrder;
	///本地报单编号
	TFutureFtdcOrderLocalIDType	OrderLocalID;
	///交易所代码
	TFutureFtdcExchangeIDType	ExchangeID;
	///预埋报单编号
	TFutureFtdcParkedOrderIDType	ParkedOrderID;
	///用户类型
	TFutureFtdcUserTypeType	UserType;
	///预埋单状态
	TFutureFtdcParkedOrderStatusType	Status;
	///错误代码
	TFutureFtdcErrorIDType	ErrorID;
	///错误信息
	TFutureFtdcErrorMsgType	ErrorMsg;
};

///输入预埋单操作
struct CFutureFtdcParkedOrderActionField
{
	///经纪公司代码
	TFutureFtdcBrokerIDType	BrokerID;
	///投资者代码
	TFutureFtdcInvestorIDType	InvestorID;
	///报单操作引用
	TFutureFtdcOrderActionRefType	OrderActionRef;
	///报单引用
	TFutureFtdcOrderRefType	OrderRef;
	///请求编号
	TFutureFtdcRequestIDType	RequestID;
	///买卖方向
	TFutureFtdcDirectionType	Direction;
	///前置编号
	TFutureFtdcFrontIDType	FrontID;
	///会话编号
	TFutureFtdcSessionIDType	SessionID;
	///交易所代码
	TFutureFtdcExchangeIDType	ExchangeID;
	///报单编号
	TFutureFtdcOrderSysIDType	OrderSysID;
	///操作标志
	TFutureFtdcActionFlagType	ActionFlag;
	///价格
	TFutureFtdcPriceType	LimitPrice;
	///数量变化
	TFutureFtdcVolumeType	VolumeChange;
	///用户代码
	TFutureFtdcUserIDType	UserID;
	///合约代码
	TFutureFtdcInstrumentIDType	InstrumentID;
	///预埋撤单单编号
	TFutureFtdcParkedOrderActionIDType	ParkedOrderActionID;
	///用户类型
	TFutureFtdcUserTypeType	UserType;
	///预埋撤单状态
	TFutureFtdcParkedOrderStatusType	Status;
	///错误代码
	TFutureFtdcErrorIDType	ErrorID;
	///错误信息
	TFutureFtdcErrorMsgType	ErrorMsg;
};

///查询预埋单
struct CFutureFtdcQryParkedOrderField
{
	///经纪公司代码
	TFutureFtdcBrokerIDType	BrokerID;
	///投资者代码
	TFutureFtdcInvestorIDType	InvestorID;
	///合约代码
	TFutureFtdcInstrumentIDType	InstrumentID;
	///交易所代码
	TFutureFtdcExchangeIDType	ExchangeID;
};

///查询预埋撤单
struct CFutureFtdcQryParkedOrderActionField
{
	///经纪公司代码
	TFutureFtdcBrokerIDType	BrokerID;
	///投资者代码
	TFutureFtdcInvestorIDType	InvestorID;
	///合约代码
	TFutureFtdcInstrumentIDType	InstrumentID;
	///交易所代码
	TFutureFtdcExchangeIDType	ExchangeID;
};

///删除预埋单
struct CFutureFtdcRemoveParkedOrderField
{
	///经纪公司代码
	TFutureFtdcBrokerIDType	BrokerID;
	///投资者代码
	TFutureFtdcInvestorIDType	InvestorID;
	///预埋报单编号
	TFutureFtdcParkedOrderIDType	ParkedOrderID;
};

///删除预埋撤单
struct CFutureFtdcRemoveParkedOrderActionField
{
	///经纪公司代码
	TFutureFtdcBrokerIDType	BrokerID;
	///投资者代码
	TFutureFtdcInvestorIDType	InvestorID;
	///预埋撤单编号
	TFutureFtdcParkedOrderActionIDType	ParkedOrderActionID;
};

///经纪公司可提资金算法表
struct CFutureFtdcInvestorWithdrawAlgorithmField
{
	///经纪公司代码
	TFutureFtdcBrokerIDType	BrokerID;
	///投资者范围
	TFutureFtdcInvestorRangeType	InvestorRange;
	///投资者代码
	TFutureFtdcInvestorIDType	InvestorID;
	///可提资金比例
	TFutureFtdcRatioType	UsingRatio;
};

///查询组合持仓明细
struct CFutureFtdcQryInvestorPositionCombineDetailField
{
	///经纪公司代码
	TFutureFtdcBrokerIDType	BrokerID;
	///投资者代码
	TFutureFtdcInvestorIDType	InvestorID;
	///交易所代码
	TFutureFtdcExchangeIDType	ExchangeID;
	///组合持仓合约编码
	TFutureFtdcInstrumentIDType	CombInstrumentID;
};

///成交均价
struct CFutureFtdcMarketDataAveragePriceField
{
	///当日均价
	TFutureFtdcPriceType	AveragePrice;
};

///校验投资者密码
struct CFutureFtdcVerifyInvestorPasswordField
{
	///经纪公司代码
	TFutureFtdcBrokerIDType	BrokerID;
	///投资者代码
	TFutureFtdcInvestorIDType	InvestorID;
	///密码
	TFutureFtdcPasswordType	Password;
};

///用户IP
struct CFutureFtdcUserIPField
{
	///经纪公司代码
	TFutureFtdcBrokerIDType	BrokerID;
	///用户代码
	TFutureFtdcUserIDType	UserID;
	///IP地址
	TFutureFtdcIPAddressType	IPAddress;
	///IP地址掩码
	TFutureFtdcIPAddressType	IPMask;
	///Mac地址
	TFutureFtdcMacAddressType	MacAddress;
};

///用户事件通知信息
struct CFutureFtdcTradingNoticeInfoField
{
	///经纪公司代码
	TFutureFtdcBrokerIDType	BrokerID;
	///投资者代码
	TFutureFtdcInvestorIDType	InvestorID;
	///发送时间
	TFutureFtdcTimeType	SendTime;
	///消息正文
	TFutureFtdcContentType	FieldContent;
	///序列系列号
	TFutureFtdcSequenceSeriesType	SequenceSeries;
	///序列号
	TFutureFtdcSequenceNoType	SequenceNo;
};

///用户事件通知
struct CFutureFtdcTradingNoticeField
{
	///经纪公司代码
	TFutureFtdcBrokerIDType	BrokerID;
	///投资者范围
	TFutureFtdcInvestorRangeType	InvestorRange;
	///投资者代码
	TFutureFtdcInvestorIDType	InvestorID;
	///序列系列号
	TFutureFtdcSequenceSeriesType	SequenceSeries;
	///用户代码
	TFutureFtdcUserIDType	UserID;
	///发送时间
	TFutureFtdcTimeType	SendTime;
	///序列号
	TFutureFtdcSequenceNoType	SequenceNo;
	///消息正文
	TFutureFtdcContentType	FieldContent;
};

///查询交易事件通知
struct CFutureFtdcQryTradingNoticeField
{
	///经纪公司代码
	TFutureFtdcBrokerIDType	BrokerID;
	///投资者代码
	TFutureFtdcInvestorIDType	InvestorID;
};

///查询错误报单
struct CFutureFtdcQryErrOrderField
{
	///经纪公司代码
	TFutureFtdcBrokerIDType	BrokerID;
	///投资者代码
	TFutureFtdcInvestorIDType	InvestorID;
};

///错误报单
struct CFutureFtdcErrOrderField
{
	///经纪公司代码
	TFutureFtdcBrokerIDType	BrokerID;
	///投资者代码
	TFutureFtdcInvestorIDType	InvestorID;
	///合约代码
	TFutureFtdcInstrumentIDType	InstrumentID;
	///报单引用
	TFutureFtdcOrderRefType	OrderRef;
	///用户代码
	TFutureFtdcUserIDType	UserID;
	///报单价格条件
	TFutureFtdcOrderPriceTypeType	OrderPriceType;
	///买卖方向
	TFutureFtdcDirectionType	Direction;
	///组合开平标志
	TFutureFtdcCombOffsetFlagType	CombOffsetFlag;
	///组合投机套保标志
	TFutureFtdcCombHedgeFlagType	CombHedgeFlag;
	///价格
	TFutureFtdcPriceType	LimitPrice;
	///数量
	TFutureFtdcVolumeType	VolumeTotalOriginal;
	///有效期类型
	TFutureFtdcTimeConditionType	TimeCondition;
	///GTD日期
	TFutureFtdcDateType	GTDDate;
	///成交量类型
	TFutureFtdcVolumeConditionType	VolumeCondition;
	///最小成交量
	TFutureFtdcVolumeType	MinVolume;
	///触发条件
	TFutureFtdcContingentConditionType	ContingentCondition;
	///止损价
	TFutureFtdcPriceType	StopPrice;
	///强平原因
	TFutureFtdcForceCloseReasonType	ForceCloseReason;
	///自动挂起标志
	TFutureFtdcBoolType	IsAutoSuspend;
	///业务单元
	TFutureFtdcBusinessUnitType	BusinessUnit;
	///请求编号
	TFutureFtdcRequestIDType	RequestID;
	///用户强评标志
	TFutureFtdcBoolType	UserForceClose;
	///错误代码
	TFutureFtdcErrorIDType	ErrorID;
	///错误信息
	TFutureFtdcErrorMsgType	ErrorMsg;
	///互换单标志
	TFutureFtdcBoolType	IsSwapOrder;
	///本地报单编号
	TFutureFtdcOrderLocalIDType	OrderLocalID;
};

///查询错误报单操作
struct CFutureFtdcErrorConditionalOrderField
{
	///经纪公司代码
	TFutureFtdcBrokerIDType	BrokerID;
	///投资者代码
	TFutureFtdcInvestorIDType	InvestorID;
	///合约代码
	TFutureFtdcInstrumentIDType	InstrumentID;
	///报单引用
	TFutureFtdcOrderRefType	OrderRef;
	///用户代码
	TFutureFtdcUserIDType	UserID;
	///报单价格条件
	TFutureFtdcOrderPriceTypeType	OrderPriceType;
	///买卖方向
	TFutureFtdcDirectionType	Direction;
	///组合开平标志
	TFutureFtdcCombOffsetFlagType	CombOffsetFlag;
	///组合投机套保标志
	TFutureFtdcCombHedgeFlagType	CombHedgeFlag;
	///价格
	TFutureFtdcPriceType	LimitPrice;
	///数量
	TFutureFtdcVolumeType	VolumeTotalOriginal;
	///有效期类型
	TFutureFtdcTimeConditionType	TimeCondition;
	///GTD日期
	TFutureFtdcDateType	GTDDate;
	///成交量类型
	TFutureFtdcVolumeConditionType	VolumeCondition;
	///最小成交量
	TFutureFtdcVolumeType	MinVolume;
	///触发条件
	TFutureFtdcContingentConditionType	ContingentCondition;
	///止损价
	TFutureFtdcPriceType	StopPrice;
	///强平原因
	TFutureFtdcForceCloseReasonType	ForceCloseReason;
	///自动挂起标志
	TFutureFtdcBoolType	IsAutoSuspend;
	///业务单元
	TFutureFtdcBusinessUnitType	BusinessUnit;
	///请求编号
	TFutureFtdcRequestIDType	RequestID;
	///本地报单编号
	TFutureFtdcOrderLocalIDType	OrderLocalID;
	///交易所代码
	TFutureFtdcExchangeIDType	ExchangeID;
	///会员代码
	TFutureFtdcParticipantIDType	ParticipantID;
	///客户代码
	TFutureFtdcClientIDType	ClientID;
	///合约在交易所的代码
	TFutureFtdcExchangeInstIDType	ExchangeInstID;
	///交易所交易员代码
	TFutureFtdcTraderIDType	TraderID;
	///安装编号
	TFutureFtdcInstallIDType	InstallID;
	///报单提交状态
	TFutureFtdcOrderSubmitStatusType	OrderSubmitStatus;
	///报单提示序号
	TFutureFtdcSequenceNoType	NotifySequence;
	///交易日
	TFutureFtdcDateType	TradingDay;
	///结算编号
	TFutureFtdcSettlementIDType	SettlementID;
	///报单编号
	TFutureFtdcOrderSysIDType	OrderSysID;
	///报单来源
	TFutureFtdcOrderSourceType	OrderSource;
	///报单状态
	TFutureFtdcOrderStatusType	OrderStatus;
	///报单类型
	TFutureFtdcOrderTypeType	OrderType;
	///今成交数量
	TFutureFtdcVolumeType	VolumeTraded;
	///剩余数量
	TFutureFtdcVolumeType	VolumeTotal;
	///报单日期
	TFutureFtdcDateType	InsertDate;
	///委托时间
	TFutureFtdcTimeType	InsertTime;
	///激活时间
	TFutureFtdcTimeType	ActiveTime;
	///挂起时间
	TFutureFtdcTimeType	SuspendTime;
	///最后修改时间
	TFutureFtdcTimeType	UpdateTime;
	///撤销时间
	TFutureFtdcTimeType	CancelTime;
	///最后修改交易所交易员代码
	TFutureFtdcTraderIDType	ActiveTraderID;
	///结算会员编号
	TFutureFtdcParticipantIDType	ClearingPartID;
	///序号
	TFutureFtdcSequenceNoType	SequenceNo;
	///前置编号
	TFutureFtdcFrontIDType	FrontID;
	///会话编号
	TFutureFtdcSessionIDType	SessionID;
	///用户端产品信息
	TFutureFtdcProductInfoType	UserProductInfo;
	///状态信息
	TFutureFtdcErrorMsgType	StatusMsg;
	///用户强评标志
	TFutureFtdcBoolType	UserForceClose;
	///操作用户代码
	TFutureFtdcUserIDType	ActiveUserID;
	///经纪公司报单编号
	TFutureFtdcSequenceNoType	BrokerOrderSeq;
	///相关报单
	TFutureFtdcOrderSysIDType	RelativeOrderSysID;
	///郑商所成交数量
	TFutureFtdcVolumeType	ZCETotalTradedVolume;
	///错误代码
	TFutureFtdcErrorIDType	ErrorID;
	///错误信息
	TFutureFtdcErrorMsgType	ErrorMsg;
	///互换单标志
	TFutureFtdcBoolType	IsSwapOrder;
};

///查询错误报单操作
struct CFutureFtdcQryErrOrderActionField
{
	///经纪公司代码
	TFutureFtdcBrokerIDType	BrokerID;
	///投资者代码
	TFutureFtdcInvestorIDType	InvestorID;
};

///错误报单操作
struct CFutureFtdcErrOrderActionField
{
	///经纪公司代码
	TFutureFtdcBrokerIDType	BrokerID;
	///投资者代码
	TFutureFtdcInvestorIDType	InvestorID;
	///报单操作引用
	TFutureFtdcOrderActionRefType	OrderActionRef;
	///报单引用
	TFutureFtdcOrderRefType	OrderRef;
	///请求编号
	TFutureFtdcRequestIDType	RequestID;
	///买卖方向
	TFutureFtdcDirectionType	Direction;
	///前置编号
	TFutureFtdcFrontIDType	FrontID;
	///会话编号
	TFutureFtdcSessionIDType	SessionID;
	///交易所代码
	TFutureFtdcExchangeIDType	ExchangeID;
	///报单编号
	TFutureFtdcOrderSysIDType	OrderSysID;
	///操作标志
	TFutureFtdcActionFlagType	ActionFlag;
	///价格
	TFutureFtdcPriceType	LimitPrice;
	///数量变化
	TFutureFtdcVolumeType	VolumeChange;
	///操作日期
	TFutureFtdcDateType	ActionDate;
	///操作时间
	TFutureFtdcTimeType	ActionTime;
	///交易所交易员代码
	TFutureFtdcTraderIDType	TraderID;
	///安装编号
	TFutureFtdcInstallIDType	InstallID;
	///本地报单编号
	TFutureFtdcOrderLocalIDType	OrderLocalID;
	///操作本地编号
	TFutureFtdcOrderLocalIDType	ActionLocalID;
	///会员代码
	TFutureFtdcParticipantIDType	ParticipantID;
	///客户代码
	TFutureFtdcClientIDType	ClientID;
	///业务单元
	TFutureFtdcBusinessUnitType	BusinessUnit;
	///报单操作状态
	TFutureFtdcOrderActionStatusType	OrderActionStatus;
	///用户代码
	TFutureFtdcUserIDType	UserID;
	///状态信息
	TFutureFtdcErrorMsgType	StatusMsg;
	///合约代码
	TFutureFtdcInstrumentIDType	InstrumentID;
	///错误代码
	TFutureFtdcErrorIDType	ErrorID;
	///错误信息
	TFutureFtdcErrorMsgType	ErrorMsg;
};

///查询交易所状态
struct CFutureFtdcQryExchangeSequenceField
{
	///交易所代码
	TFutureFtdcExchangeIDType	ExchangeID;
};

///交易所状态
struct CFutureFtdcExchangeSequenceField
{
	///交易所代码
	TFutureFtdcExchangeIDType	ExchangeID;
	///序号
	TFutureFtdcSequenceNoType	SequenceNo;
	///合约交易状态
	TFutureFtdcInstrumentStatusType	MarketStatus;
};

///根据价格查询最大报单数量
struct CFutureFtdcQueryMaxOrderVolumeWithPriceField
{
	///经纪公司代码
	TFutureFtdcBrokerIDType	BrokerID;
	///投资者代码
	TFutureFtdcInvestorIDType	InvestorID;
	///交易所代码
	TFutureFtdcExchangeIDType	ExchangeID;
	///合约代码
	TFutureFtdcInstrumentIDType	InstrumentID;
	///买卖方向
	TFutureFtdcDirectionType	Direction;
	///开平标志
	TFutureFtdcOffsetFlagType	OffsetFlag;
	///投机套保标志
	TFutureFtdcHedgeFlagType	HedgeFlag;
	///最大允许报单数量
	TFutureFtdcVolumeType	MaxVolume;
	///报单价格
	TFutureFtdcPriceType	Price;
};

///查询经纪公司交易参数
struct CFutureFtdcQryBrokerTradingParamsField
{
	///经纪公司代码
	TFutureFtdcBrokerIDType	BrokerID;
	///投资者代码
	TFutureFtdcInvestorIDType	InvestorID;
};

///经纪公司交易参数
struct CFutureFtdcBrokerTradingParamsField
{
	///经纪公司代码
	TFutureFtdcBrokerIDType	BrokerID;
	///投资者代码
	TFutureFtdcInvestorIDType	InvestorID;
	///保证金价格类型
	TFutureFtdcMarginPriceTypeType	MarginPriceType;
	///盈亏算法
	TFutureFtdcAlgorithmType	Algorithm;
	///可用是否包含平仓盈利
	TFutureFtdcIncludeCloseProfitType	AvailIncludeCloseProfit;
};

///查询经纪公司交易算法
struct CFutureFtdcQryBrokerTradingAlgosField
{
	///经纪公司代码
	TFutureFtdcBrokerIDType	BrokerID;
	///交易所代码
	TFutureFtdcExchangeIDType	ExchangeID;
	///合约代码
	TFutureFtdcInstrumentIDType	InstrumentID;
};

///经纪公司交易算法
struct CFutureFtdcBrokerTradingAlgosField
{
	///经纪公司代码
	TFutureFtdcBrokerIDType	BrokerID;
	///交易所代码
	TFutureFtdcExchangeIDType	ExchangeID;
	///合约代码
	TFutureFtdcInstrumentIDType	InstrumentID;
	///持仓处理算法编号
	TFutureFtdcHandlePositionAlgoIDType	HandlePositionAlgoID;
	///寻找保证金率算法编号
	TFutureFtdcFindMarginRateAlgoIDType	FindMarginRateAlgoID;
	///资金处理算法编号
	TFutureFtdcHandleTradingAccountAlgoIDType	HandleTradingAccountAlgoID;
};

///查询经纪公司资金
struct CFutureFtdcQueryBrokerDepositField
{
	///经纪公司代码
	TFutureFtdcBrokerIDType	BrokerID;
	///交易所代码
	TFutureFtdcExchangeIDType	ExchangeID;
};

///经纪公司资金
struct CFutureFtdcBrokerDepositField
{
	///交易日期
	TFutureFtdcTradeDateType	TradingDay;
	///经纪公司代码
	TFutureFtdcBrokerIDType	BrokerID;
	///会员代码
	TFutureFtdcParticipantIDType	ParticipantID;
	///交易所代码
	TFutureFtdcExchangeIDType	ExchangeID;
	///上次结算准备金
	TFutureFtdcMoneyType	PreBalance;
	///当前保证金总额
	TFutureFtdcMoneyType	CurrMargin;
	///平仓盈亏
	TFutureFtdcMoneyType	CloseProfit;
	///期货结算准备金
	TFutureFtdcMoneyType	Balance;
	///入金金额
	TFutureFtdcMoneyType	Deposit;
	///出金金额
	TFutureFtdcMoneyType	Withdraw;
	///可提资金
	TFutureFtdcMoneyType	Available;
	///基本准备金
	TFutureFtdcMoneyType	Reserve;
	///冻结的保证金
	TFutureFtdcMoneyType	FrozenMargin;
};

///查询保证金监管系统经纪公司密钥
struct CFutureFtdcQryCFMMCBrokerKeyField
{
	///经纪公司代码
	TFutureFtdcBrokerIDType	BrokerID;
};

///保证金监管系统经纪公司密钥
struct CFutureFtdcCFMMCBrokerKeyField
{
	///经纪公司代码
	TFutureFtdcBrokerIDType	BrokerID;
	///经纪公司统一编码
	TFutureFtdcParticipantIDType	ParticipantID;
	///密钥生成日期
	TFutureFtdcDateType	CreateDate;
	///密钥生成时间
	TFutureFtdcTimeType	CreateTime;
	///密钥编号
	TFutureFtdcSequenceNoType	KeyID;
	///动态密钥
	TFutureFtdcCFMMCKeyType	CurrentKey;
	///动态密钥类型
	TFutureFtdcCFMMCKeyKindType	KeyKind;
};

///保证金监管系统经纪公司资金账户密钥
struct CFutureFtdcCFMMCTradingAccountKeyField
{
	///经纪公司代码
	TFutureFtdcBrokerIDType	BrokerID;
	///经纪公司统一编码
	TFutureFtdcParticipantIDType	ParticipantID;
	///投资者帐号
	TFutureFtdcAccountIDType	AccountID;
	///密钥编号
	TFutureFtdcSequenceNoType	KeyID;
	///动态密钥
	TFutureFtdcCFMMCKeyType	CurrentKey;
};

///请求查询保证金监管系统经纪公司资金账户密钥
struct CFutureFtdcQryCFMMCTradingAccountKeyField
{
	///经纪公司代码
	TFutureFtdcBrokerIDType	BrokerID;
	///投资者代码
	TFutureFtdcInvestorIDType	InvestorID;
};

///用户动态令牌参数
struct CFutureFtdcBrokerUserOTPParamField
{
	///经纪公司代码
	TFutureFtdcBrokerIDType	BrokerID;
	///用户代码
	TFutureFtdcUserIDType	UserID;
	///动态令牌提供商
	TFutureFtdcOTPVendorsIDType	OTPVendorsID;
	///动态令牌序列号
	TFutureFtdcSerialNumberType	SerialNumber;
	///令牌密钥
	TFutureFtdcAuthKeyType	AuthKey;
	///漂移值
	TFutureFtdcLastDriftType	LastDrift;
	///成功值
	TFutureFtdcLastSuccessType	LastSuccess;
	///动态令牌类型
	TFutureFtdcOTPTypeType	OTPType;
};

///手工同步用户动态令牌
struct CFutureFtdcManualSyncBrokerUserOTPField
{
	///经纪公司代码
	TFutureFtdcBrokerIDType	BrokerID;
	///用户代码
	TFutureFtdcUserIDType	UserID;
	///动态令牌类型
	TFutureFtdcOTPTypeType	OTPType;
	///第一个动态密码
	TFutureFtdcPasswordType	FirstOTP;
	///第二个动态密码
	TFutureFtdcPasswordType	SecondOTP;
};

///投资者手续费率模板
struct CFutureFtdcCommRateModelField
{
	///经纪公司代码
	TFutureFtdcBrokerIDType	BrokerID;
	///手续费率模板代码
	TFutureFtdcInvestorIDType	CommModelID;
	///模板名称
	TFutureFtdcCommModelNameType	CommModelName;
};

///请求查询投资者手续费率模板
struct CFutureFtdcQryCommRateModelField
{
	///经纪公司代码
	TFutureFtdcBrokerIDType	BrokerID;
	///手续费率模板代码
	TFutureFtdcInvestorIDType	CommModelID;
};

///投资者保证金率模板
struct CFutureFtdcMarginModelField
{
	///经纪公司代码
	TFutureFtdcBrokerIDType	BrokerID;
	///保证金率模板代码
	TFutureFtdcInvestorIDType	MarginModelID;
	///模板名称
	TFutureFtdcCommModelNameType	MarginModelName;
};

///仓单折抵信息
struct CFutureFtdcEWarrantOffsetField
{
	///交易日期
	TFutureFtdcTradeDateType	TradingDay;
	///经纪公司代码
	TFutureFtdcBrokerIDType	BrokerID;
	///投资者代码
	TFutureFtdcInvestorIDType	InvestorID;
	///交易所代码
	TFutureFtdcExchangeIDType	ExchangeID;
	///合约代码
	TFutureFtdcInstrumentIDType	InstrumentID;
	///买卖方向
	TFutureFtdcDirectionType	Direction;
	///投机套保标志
	TFutureFtdcHedgeFlagType	HedgeFlag;
	///数量
	TFutureFtdcVolumeType	Volume;
};

///查询仓单折抵信息
struct CFutureFtdcQryEWarrantOffsetField
{
	///经纪公司代码
	TFutureFtdcBrokerIDType	BrokerID;
	///投资者代码
	TFutureFtdcInvestorIDType	InvestorID;
	///交易所代码
	TFutureFtdcExchangeIDType	ExchangeID;
	///合约代码
	TFutureFtdcInstrumentIDType	InstrumentID;
};

///转帐开户请求
struct CFutureFtdcReqOpenAccountField
{
	///业务功能码
	TFutureFtdcTradeCodeType	TradeCode;
	///银行代码
	TFutureFtdcBankIDType	BankID;
	///银行分支机构代码
	TFutureFtdcBankBrchIDType	BankBranchID;
	///期商代码
	TFutureFtdcBrokerIDType	BrokerID;
	///期商分支机构代码
	TFutureFtdcFutureBranchIDType	BrokerBranchID;
	///交易日期
	TFutureFtdcTradeDateType	TradeDate;
	///交易时间
	TFutureFtdcTradeTimeType	TradeTime;
	///银行流水号
	TFutureFtdcBankSerialType	BankSerial;
	///交易系统日期 
	TFutureFtdcTradeDateType	TradingDay;
	///银期平台消息流水号
	TFutureFtdcSerialType	PlateSerial;
	///最后分片标志
	TFutureFtdcLastFragmentType	LastFragment;
	///会话号
	TFutureFtdcSessionIDType	SessionID;
	///客户姓名
	TFutureFtdcIndividualNameType	CustomerName;
	///证件类型
	TFutureFtdcIdCardTypeType	IdCardType;
	///证件号码
	TFutureFtdcIdentifiedCardNoType	IdentifiedCardNo;
	///性别
	TFutureFtdcGenderType	Gender;
	///国家代码
	TFutureFtdcCountryCodeType	CountryCode;
	///客户类型
	TFutureFtdcCustTypeType	CustType;
	///地址
	TFutureFtdcAddressType	Address;
	///邮编
	TFutureFtdcZipCodeType	ZipCode;
	///电话号码
	TFutureFtdcTelephoneType	Telephone;
	///手机
	TFutureFtdcMobilePhoneType	MobilePhone;
	///传真
	TFutureFtdcFaxType	Fax;
	///电子邮件
	TFutureFtdcEMailType	EMail;
	///资金账户状态
	TFutureFtdcMoneyAccountStatusType	MoneyAccountStatus;
	///银行帐号
	TFutureFtdcBankAccountType	BankAccount;
	///银行密码
	TFutureFtdcPasswordType	BankPassWord;
	///投资者帐号
	TFutureFtdcAccountIDType	AccountID;
	///期货密码
	TFutureFtdcPasswordType	Password;
	///安装编号
	TFutureFtdcInstallIDType	InstallID;
	///验证客户证件号码标志
	TFutureFtdcYesNoIndicatorType	VerifyCertNoFlag;
	///币种代码
	TFutureFtdcCurrencyIDType	CurrencyID;
	///汇钞标志
	TFutureFtdcCashExchangeCodeType	CashExchangeCode;
	///摘要
	TFutureFtdcDigestType	Digest;
	///银行帐号类型
	TFutureFtdcBankAccTypeType	BankAccType;
	///渠道标志
	TFutureFtdcDeviceIDType	DeviceID;
	///期货单位帐号类型
	TFutureFtdcBankAccTypeType	BankSecuAccType;
	///期货公司银行编码
	TFutureFtdcBankCodingForFutureType	BrokerIDByBank;
	///期货单位帐号
	TFutureFtdcBankAccountType	BankSecuAcc;
	///银行密码标志
	TFutureFtdcPwdFlagType	BankPwdFlag;
	///期货资金密码核对标志
	TFutureFtdcPwdFlagType	SecuPwdFlag;
	///交易柜员
	TFutureFtdcOperNoType	OperNo;
	///交易ID
	TFutureFtdcTIDType	TID;
	///用户标识
	TFutureFtdcUserIDType	UserID;
};

///转帐销户请求
struct CFutureFtdcReqCancelAccountField
{
	///业务功能码
	TFutureFtdcTradeCodeType	TradeCode;
	///银行代码
	TFutureFtdcBankIDType	BankID;
	///银行分支机构代码
	TFutureFtdcBankBrchIDType	BankBranchID;
	///期商代码
	TFutureFtdcBrokerIDType	BrokerID;
	///期商分支机构代码
	TFutureFtdcFutureBranchIDType	BrokerBranchID;
	///交易日期
	TFutureFtdcTradeDateType	TradeDate;
	///交易时间
	TFutureFtdcTradeTimeType	TradeTime;
	///银行流水号
	TFutureFtdcBankSerialType	BankSerial;
	///交易系统日期 
	TFutureFtdcTradeDateType	TradingDay;
	///银期平台消息流水号
	TFutureFtdcSerialType	PlateSerial;
	///最后分片标志
	TFutureFtdcLastFragmentType	LastFragment;
	///会话号
	TFutureFtdcSessionIDType	SessionID;
	///客户姓名
	TFutureFtdcIndividualNameType	CustomerName;
	///证件类型
	TFutureFtdcIdCardTypeType	IdCardType;
	///证件号码
	TFutureFtdcIdentifiedCardNoType	IdentifiedCardNo;
	///性别
	TFutureFtdcGenderType	Gender;
	///国家代码
	TFutureFtdcCountryCodeType	CountryCode;
	///客户类型
	TFutureFtdcCustTypeType	CustType;
	///地址
	TFutureFtdcAddressType	Address;
	///邮编
	TFutureFtdcZipCodeType	ZipCode;
	///电话号码
	TFutureFtdcTelephoneType	Telephone;
	///手机
	TFutureFtdcMobilePhoneType	MobilePhone;
	///传真
	TFutureFtdcFaxType	Fax;
	///电子邮件
	TFutureFtdcEMailType	EMail;
	///资金账户状态
	TFutureFtdcMoneyAccountStatusType	MoneyAccountStatus;
	///银行帐号
	TFutureFtdcBankAccountType	BankAccount;
	///银行密码
	TFutureFtdcPasswordType	BankPassWord;
	///投资者帐号
	TFutureFtdcAccountIDType	AccountID;
	///期货密码
	TFutureFtdcPasswordType	Password;
	///安装编号
	TFutureFtdcInstallIDType	InstallID;
	///验证客户证件号码标志
	TFutureFtdcYesNoIndicatorType	VerifyCertNoFlag;
	///币种代码
	TFutureFtdcCurrencyIDType	CurrencyID;
	///汇钞标志
	TFutureFtdcCashExchangeCodeType	CashExchangeCode;
	///摘要
	TFutureFtdcDigestType	Digest;
	///银行帐号类型
	TFutureFtdcBankAccTypeType	BankAccType;
	///渠道标志
	TFutureFtdcDeviceIDType	DeviceID;
	///期货单位帐号类型
	TFutureFtdcBankAccTypeType	BankSecuAccType;
	///期货公司银行编码
	TFutureFtdcBankCodingForFutureType	BrokerIDByBank;
	///期货单位帐号
	TFutureFtdcBankAccountType	BankSecuAcc;
	///银行密码标志
	TFutureFtdcPwdFlagType	BankPwdFlag;
	///期货资金密码核对标志
	TFutureFtdcPwdFlagType	SecuPwdFlag;
	///交易柜员
	TFutureFtdcOperNoType	OperNo;
	///交易ID
	TFutureFtdcTIDType	TID;
	///用户标识
	TFutureFtdcUserIDType	UserID;
};

///变更银行账户请求
struct CFutureFtdcReqChangeAccountField
{
	///业务功能码
	TFutureFtdcTradeCodeType	TradeCode;
	///银行代码
	TFutureFtdcBankIDType	BankID;
	///银行分支机构代码
	TFutureFtdcBankBrchIDType	BankBranchID;
	///期商代码
	TFutureFtdcBrokerIDType	BrokerID;
	///期商分支机构代码
	TFutureFtdcFutureBranchIDType	BrokerBranchID;
	///交易日期
	TFutureFtdcTradeDateType	TradeDate;
	///交易时间
	TFutureFtdcTradeTimeType	TradeTime;
	///银行流水号
	TFutureFtdcBankSerialType	BankSerial;
	///交易系统日期 
	TFutureFtdcTradeDateType	TradingDay;
	///银期平台消息流水号
	TFutureFtdcSerialType	PlateSerial;
	///最后分片标志
	TFutureFtdcLastFragmentType	LastFragment;
	///会话号
	TFutureFtdcSessionIDType	SessionID;
	///客户姓名
	TFutureFtdcIndividualNameType	CustomerName;
	///证件类型
	TFutureFtdcIdCardTypeType	IdCardType;
	///证件号码
	TFutureFtdcIdentifiedCardNoType	IdentifiedCardNo;
	///性别
	TFutureFtdcGenderType	Gender;
	///国家代码
	TFutureFtdcCountryCodeType	CountryCode;
	///客户类型
	TFutureFtdcCustTypeType	CustType;
	///地址
	TFutureFtdcAddressType	Address;
	///邮编
	TFutureFtdcZipCodeType	ZipCode;
	///电话号码
	TFutureFtdcTelephoneType	Telephone;
	///手机
	TFutureFtdcMobilePhoneType	MobilePhone;
	///传真
	TFutureFtdcFaxType	Fax;
	///电子邮件
	TFutureFtdcEMailType	EMail;
	///资金账户状态
	TFutureFtdcMoneyAccountStatusType	MoneyAccountStatus;
	///银行帐号
	TFutureFtdcBankAccountType	BankAccount;
	///银行密码
	TFutureFtdcPasswordType	BankPassWord;
	///新银行帐号
	TFutureFtdcBankAccountType	NewBankAccount;
	///新银行密码
	TFutureFtdcPasswordType	NewBankPassWord;
	///投资者帐号
	TFutureFtdcAccountIDType	AccountID;
	///期货密码
	TFutureFtdcPasswordType	Password;
	///银行帐号类型
	TFutureFtdcBankAccTypeType	BankAccType;
	///安装编号
	TFutureFtdcInstallIDType	InstallID;
	///验证客户证件号码标志
	TFutureFtdcYesNoIndicatorType	VerifyCertNoFlag;
	///币种代码
	TFutureFtdcCurrencyIDType	CurrencyID;
	///期货公司银行编码
	TFutureFtdcBankCodingForFutureType	BrokerIDByBank;
	///银行密码标志
	TFutureFtdcPwdFlagType	BankPwdFlag;
	///期货资金密码核对标志
	TFutureFtdcPwdFlagType	SecuPwdFlag;
	///交易ID
	TFutureFtdcTIDType	TID;
	///摘要
	TFutureFtdcDigestType	Digest;
};

///转账请求
struct CFutureFtdcReqTransferField
{
	///业务功能码
	TFutureFtdcTradeCodeType	TradeCode;
	///银行代码
	TFutureFtdcBankIDType	BankID;
	///银行分支机构代码
	TFutureFtdcBankBrchIDType	BankBranchID;
	///期商代码
	TFutureFtdcBrokerIDType	BrokerID;
	///期商分支机构代码
	TFutureFtdcFutureBranchIDType	BrokerBranchID;
	///交易日期
	TFutureFtdcTradeDateType	TradeDate;
	///交易时间
	TFutureFtdcTradeTimeType	TradeTime;
	///银行流水号
	TFutureFtdcBankSerialType	BankSerial;
	///交易系统日期 
	TFutureFtdcTradeDateType	TradingDay;
	///银期平台消息流水号
	TFutureFtdcSerialType	PlateSerial;
	///最后分片标志
	TFutureFtdcLastFragmentType	LastFragment;
	///会话号
	TFutureFtdcSessionIDType	SessionID;
	///客户姓名
	TFutureFtdcIndividualNameType	CustomerName;
	///证件类型
	TFutureFtdcIdCardTypeType	IdCardType;
	///证件号码
	TFutureFtdcIdentifiedCardNoType	IdentifiedCardNo;
	///客户类型
	TFutureFtdcCustTypeType	CustType;
	///银行帐号
	TFutureFtdcBankAccountType	BankAccount;
	///银行密码
	TFutureFtdcPasswordType	BankPassWord;
	///投资者帐号
	TFutureFtdcAccountIDType	AccountID;
	///期货密码
	TFutureFtdcPasswordType	Password;
	///安装编号
	TFutureFtdcInstallIDType	InstallID;
	///期货公司流水号
	TFutureFtdcFutureSerialType	FutureSerial;
	///用户标识
	TFutureFtdcUserIDType	UserID;
	///验证客户证件号码标志
	TFutureFtdcYesNoIndicatorType	VerifyCertNoFlag;
	///币种代码
	TFutureFtdcCurrencyIDType	CurrencyID;
	///转帐金额
	TFutureFtdcTradeAmountType	TradeAmount;
	///期货可取金额
	TFutureFtdcTradeAmountType	FutureFetchAmount;
	///费用支付标志
	TFutureFtdcFeePayFlagType	FeePayFlag;
	///应收客户费用
	TFutureFtdcCustFeeType	CustFee;
	///应收期货公司费用
	TFutureFtdcFutureFeeType	BrokerFee;
	///发送方给接收方的消息
	TFutureFtdcAddInfoType	Message;
	///摘要
	TFutureFtdcDigestType	Digest;
	///银行帐号类型
	TFutureFtdcBankAccTypeType	BankAccType;
	///渠道标志
	TFutureFtdcDeviceIDType	DeviceID;
	///期货单位帐号类型
	TFutureFtdcBankAccTypeType	BankSecuAccType;
	///期货公司银行编码
	TFutureFtdcBankCodingForFutureType	BrokerIDByBank;
	///期货单位帐号
	TFutureFtdcBankAccountType	BankSecuAcc;
	///银行密码标志
	TFutureFtdcPwdFlagType	BankPwdFlag;
	///期货资金密码核对标志
	TFutureFtdcPwdFlagType	SecuPwdFlag;
	///交易柜员
	TFutureFtdcOperNoType	OperNo;
	///请求编号
	TFutureFtdcRequestIDType	RequestID;
	///交易ID
	TFutureFtdcTIDType	TID;
	///转账交易状态
	TFutureFtdcTransferStatusType	TransferStatus;
};

///银行发起银行资金转期货响应
struct CFutureFtdcRspTransferField
{
	///业务功能码
	TFutureFtdcTradeCodeType	TradeCode;
	///银行代码
	TFutureFtdcBankIDType	BankID;
	///银行分支机构代码
	TFutureFtdcBankBrchIDType	BankBranchID;
	///期商代码
	TFutureFtdcBrokerIDType	BrokerID;
	///期商分支机构代码
	TFutureFtdcFutureBranchIDType	BrokerBranchID;
	///交易日期
	TFutureFtdcTradeDateType	TradeDate;
	///交易时间
	TFutureFtdcTradeTimeType	TradeTime;
	///银行流水号
	TFutureFtdcBankSerialType	BankSerial;
	///交易系统日期 
	TFutureFtdcTradeDateType	TradingDay;
	///银期平台消息流水号
	TFutureFtdcSerialType	PlateSerial;
	///最后分片标志
	TFutureFtdcLastFragmentType	LastFragment;
	///会话号
	TFutureFtdcSessionIDType	SessionID;
	///客户姓名
	TFutureFtdcIndividualNameType	CustomerName;
	///证件类型
	TFutureFtdcIdCardTypeType	IdCardType;
	///证件号码
	TFutureFtdcIdentifiedCardNoType	IdentifiedCardNo;
	///客户类型
	TFutureFtdcCustTypeType	CustType;
	///银行帐号
	TFutureFtdcBankAccountType	BankAccount;
	///银行密码
	TFutureFtdcPasswordType	BankPassWord;
	///投资者帐号
	TFutureFtdcAccountIDType	AccountID;
	///期货密码
	TFutureFtdcPasswordType	Password;
	///安装编号
	TFutureFtdcInstallIDType	InstallID;
	///期货公司流水号
	TFutureFtdcFutureSerialType	FutureSerial;
	///用户标识
	TFutureFtdcUserIDType	UserID;
	///验证客户证件号码标志
	TFutureFtdcYesNoIndicatorType	VerifyCertNoFlag;
	///币种代码
	TFutureFtdcCurrencyIDType	CurrencyID;
	///转帐金额
	TFutureFtdcTradeAmountType	TradeAmount;
	///期货可取金额
	TFutureFtdcTradeAmountType	FutureFetchAmount;
	///费用支付标志
	TFutureFtdcFeePayFlagType	FeePayFlag;
	///应收客户费用
	TFutureFtdcCustFeeType	CustFee;
	///应收期货公司费用
	TFutureFtdcFutureFeeType	BrokerFee;
	///发送方给接收方的消息
	TFutureFtdcAddInfoType	Message;
	///摘要
	TFutureFtdcDigestType	Digest;
	///银行帐号类型
	TFutureFtdcBankAccTypeType	BankAccType;
	///渠道标志
	TFutureFtdcDeviceIDType	DeviceID;
	///期货单位帐号类型
	TFutureFtdcBankAccTypeType	BankSecuAccType;
	///期货公司银行编码
	TFutureFtdcBankCodingForFutureType	BrokerIDByBank;
	///期货单位帐号
	TFutureFtdcBankAccountType	BankSecuAcc;
	///银行密码标志
	TFutureFtdcPwdFlagType	BankPwdFlag;
	///期货资金密码核对标志
	TFutureFtdcPwdFlagType	SecuPwdFlag;
	///交易柜员
	TFutureFtdcOperNoType	OperNo;
	///请求编号
	TFutureFtdcRequestIDType	RequestID;
	///交易ID
	TFutureFtdcTIDType	TID;
	///转账交易状态
	TFutureFtdcTransferStatusType	TransferStatus;
	///错误代码
	TFutureFtdcErrorIDType	ErrorID;
	///错误信息
	TFutureFtdcErrorMsgType	ErrorMsg;
};

///冲正请求
struct CFutureFtdcReqRepealField
{
	///冲正时间间隔
	TFutureFtdcRepealTimeIntervalType	RepealTimeInterval;
	///已经冲正次数
	TFutureFtdcRepealedTimesType	RepealedTimes;
	///银行冲正标志
	TFutureFtdcBankRepealFlagType	BankRepealFlag;
	///期商冲正标志
	TFutureFtdcBrokerRepealFlagType	BrokerRepealFlag;
	///被冲正平台流水号
	TFutureFtdcPlateSerialType	PlateRepealSerial;
	///被冲正银行流水号
	TFutureFtdcBankSerialType	BankRepealSerial;
	///被冲正期货流水号
	TFutureFtdcFutureSerialType	FutureRepealSerial;
	///业务功能码
	TFutureFtdcTradeCodeType	TradeCode;
	///银行代码
	TFutureFtdcBankIDType	BankID;
	///银行分支机构代码
	TFutureFtdcBankBrchIDType	BankBranchID;
	///期商代码
	TFutureFtdcBrokerIDType	BrokerID;
	///期商分支机构代码
	TFutureFtdcFutureBranchIDType	BrokerBranchID;
	///交易日期
	TFutureFtdcTradeDateType	TradeDate;
	///交易时间
	TFutureFtdcTradeTimeType	TradeTime;
	///银行流水号
	TFutureFtdcBankSerialType	BankSerial;
	///交易系统日期 
	TFutureFtdcTradeDateType	TradingDay;
	///银期平台消息流水号
	TFutureFtdcSerialType	PlateSerial;
	///最后分片标志
	TFutureFtdcLastFragmentType	LastFragment;
	///会话号
	TFutureFtdcSessionIDType	SessionID;
	///客户姓名
	TFutureFtdcIndividualNameType	CustomerName;
	///证件类型
	TFutureFtdcIdCardTypeType	IdCardType;
	///证件号码
	TFutureFtdcIdentifiedCardNoType	IdentifiedCardNo;
	///客户类型
	TFutureFtdcCustTypeType	CustType;
	///银行帐号
	TFutureFtdcBankAccountType	BankAccount;
	///银行密码
	TFutureFtdcPasswordType	BankPassWord;
	///投资者帐号
	TFutureFtdcAccountIDType	AccountID;
	///期货密码
	TFutureFtdcPasswordType	Password;
	///安装编号
	TFutureFtdcInstallIDType	InstallID;
	///期货公司流水号
	TFutureFtdcFutureSerialType	FutureSerial;
	///用户标识
	TFutureFtdcUserIDType	UserID;
	///验证客户证件号码标志
	TFutureFtdcYesNoIndicatorType	VerifyCertNoFlag;
	///币种代码
	TFutureFtdcCurrencyIDType	CurrencyID;
	///转帐金额
	TFutureFtdcTradeAmountType	TradeAmount;
	///期货可取金额
	TFutureFtdcTradeAmountType	FutureFetchAmount;
	///费用支付标志
	TFutureFtdcFeePayFlagType	FeePayFlag;
	///应收客户费用
	TFutureFtdcCustFeeType	CustFee;
	///应收期货公司费用
	TFutureFtdcFutureFeeType	BrokerFee;
	///发送方给接收方的消息
	TFutureFtdcAddInfoType	Message;
	///摘要
	TFutureFtdcDigestType	Digest;
	///银行帐号类型
	TFutureFtdcBankAccTypeType	BankAccType;
	///渠道标志
	TFutureFtdcDeviceIDType	DeviceID;
	///期货单位帐号类型
	TFutureFtdcBankAccTypeType	BankSecuAccType;
	///期货公司银行编码
	TFutureFtdcBankCodingForFutureType	BrokerIDByBank;
	///期货单位帐号
	TFutureFtdcBankAccountType	BankSecuAcc;
	///银行密码标志
	TFutureFtdcPwdFlagType	BankPwdFlag;
	///期货资金密码核对标志
	TFutureFtdcPwdFlagType	SecuPwdFlag;
	///交易柜员
	TFutureFtdcOperNoType	OperNo;
	///请求编号
	TFutureFtdcRequestIDType	RequestID;
	///交易ID
	TFutureFtdcTIDType	TID;
	///转账交易状态
	TFutureFtdcTransferStatusType	TransferStatus;
};

///冲正响应
struct CFutureFtdcRspRepealField
{
	///冲正时间间隔
	TFutureFtdcRepealTimeIntervalType	RepealTimeInterval;
	///已经冲正次数
	TFutureFtdcRepealedTimesType	RepealedTimes;
	///银行冲正标志
	TFutureFtdcBankRepealFlagType	BankRepealFlag;
	///期商冲正标志
	TFutureFtdcBrokerRepealFlagType	BrokerRepealFlag;
	///被冲正平台流水号
	TFutureFtdcPlateSerialType	PlateRepealSerial;
	///被冲正银行流水号
	TFutureFtdcBankSerialType	BankRepealSerial;
	///被冲正期货流水号
	TFutureFtdcFutureSerialType	FutureRepealSerial;
	///业务功能码
	TFutureFtdcTradeCodeType	TradeCode;
	///银行代码
	TFutureFtdcBankIDType	BankID;
	///银行分支机构代码
	TFutureFtdcBankBrchIDType	BankBranchID;
	///期商代码
	TFutureFtdcBrokerIDType	BrokerID;
	///期商分支机构代码
	TFutureFtdcFutureBranchIDType	BrokerBranchID;
	///交易日期
	TFutureFtdcTradeDateType	TradeDate;
	///交易时间
	TFutureFtdcTradeTimeType	TradeTime;
	///银行流水号
	TFutureFtdcBankSerialType	BankSerial;
	///交易系统日期 
	TFutureFtdcTradeDateType	TradingDay;
	///银期平台消息流水号
	TFutureFtdcSerialType	PlateSerial;
	///最后分片标志
	TFutureFtdcLastFragmentType	LastFragment;
	///会话号
	TFutureFtdcSessionIDType	SessionID;
	///客户姓名
	TFutureFtdcIndividualNameType	CustomerName;
	///证件类型
	TFutureFtdcIdCardTypeType	IdCardType;
	///证件号码
	TFutureFtdcIdentifiedCardNoType	IdentifiedCardNo;
	///客户类型
	TFutureFtdcCustTypeType	CustType;
	///银行帐号
	TFutureFtdcBankAccountType	BankAccount;
	///银行密码
	TFutureFtdcPasswordType	BankPassWord;
	///投资者帐号
	TFutureFtdcAccountIDType	AccountID;
	///期货密码
	TFutureFtdcPasswordType	Password;
	///安装编号
	TFutureFtdcInstallIDType	InstallID;
	///期货公司流水号
	TFutureFtdcFutureSerialType	FutureSerial;
	///用户标识
	TFutureFtdcUserIDType	UserID;
	///验证客户证件号码标志
	TFutureFtdcYesNoIndicatorType	VerifyCertNoFlag;
	///币种代码
	TFutureFtdcCurrencyIDType	CurrencyID;
	///转帐金额
	TFutureFtdcTradeAmountType	TradeAmount;
	///期货可取金额
	TFutureFtdcTradeAmountType	FutureFetchAmount;
	///费用支付标志
	TFutureFtdcFeePayFlagType	FeePayFlag;
	///应收客户费用
	TFutureFtdcCustFeeType	CustFee;
	///应收期货公司费用
	TFutureFtdcFutureFeeType	BrokerFee;
	///发送方给接收方的消息
	TFutureFtdcAddInfoType	Message;
	///摘要
	TFutureFtdcDigestType	Digest;
	///银行帐号类型
	TFutureFtdcBankAccTypeType	BankAccType;
	///渠道标志
	TFutureFtdcDeviceIDType	DeviceID;
	///期货单位帐号类型
	TFutureFtdcBankAccTypeType	BankSecuAccType;
	///期货公司银行编码
	TFutureFtdcBankCodingForFutureType	BrokerIDByBank;
	///期货单位帐号
	TFutureFtdcBankAccountType	BankSecuAcc;
	///银行密码标志
	TFutureFtdcPwdFlagType	BankPwdFlag;
	///期货资金密码核对标志
	TFutureFtdcPwdFlagType	SecuPwdFlag;
	///交易柜员
	TFutureFtdcOperNoType	OperNo;
	///请求编号
	TFutureFtdcRequestIDType	RequestID;
	///交易ID
	TFutureFtdcTIDType	TID;
	///转账交易状态
	TFutureFtdcTransferStatusType	TransferStatus;
	///错误代码
	TFutureFtdcErrorIDType	ErrorID;
	///错误信息
	TFutureFtdcErrorMsgType	ErrorMsg;
};

///查询账户信息请求
struct CFutureFtdcReqQueryAccountField
{
	///业务功能码
	TFutureFtdcTradeCodeType	TradeCode;
	///银行代码
	TFutureFtdcBankIDType	BankID;
	///银行分支机构代码
	TFutureFtdcBankBrchIDType	BankBranchID;
	///期商代码
	TFutureFtdcBrokerIDType	BrokerID;
	///期商分支机构代码
	TFutureFtdcFutureBranchIDType	BrokerBranchID;
	///交易日期
	TFutureFtdcTradeDateType	TradeDate;
	///交易时间
	TFutureFtdcTradeTimeType	TradeTime;
	///银行流水号
	TFutureFtdcBankSerialType	BankSerial;
	///交易系统日期 
	TFutureFtdcTradeDateType	TradingDay;
	///银期平台消息流水号
	TFutureFtdcSerialType	PlateSerial;
	///最后分片标志
	TFutureFtdcLastFragmentType	LastFragment;
	///会话号
	TFutureFtdcSessionIDType	SessionID;
	///客户姓名
	TFutureFtdcIndividualNameType	CustomerName;
	///证件类型
	TFutureFtdcIdCardTypeType	IdCardType;
	///证件号码
	TFutureFtdcIdentifiedCardNoType	IdentifiedCardNo;
	///客户类型
	TFutureFtdcCustTypeType	CustType;
	///银行帐号
	TFutureFtdcBankAccountType	BankAccount;
	///银行密码
	TFutureFtdcPasswordType	BankPassWord;
	///投资者帐号
	TFutureFtdcAccountIDType	AccountID;
	///期货密码
	TFutureFtdcPasswordType	Password;
	///期货公司流水号
	TFutureFtdcFutureSerialType	FutureSerial;
	///安装编号
	TFutureFtdcInstallIDType	InstallID;
	///用户标识
	TFutureFtdcUserIDType	UserID;
	///验证客户证件号码标志
	TFutureFtdcYesNoIndicatorType	VerifyCertNoFlag;
	///币种代码
	TFutureFtdcCurrencyIDType	CurrencyID;
	///摘要
	TFutureFtdcDigestType	Digest;
	///银行帐号类型
	TFutureFtdcBankAccTypeType	BankAccType;
	///渠道标志
	TFutureFtdcDeviceIDType	DeviceID;
	///期货单位帐号类型
	TFutureFtdcBankAccTypeType	BankSecuAccType;
	///期货公司银行编码
	TFutureFtdcBankCodingForFutureType	BrokerIDByBank;
	///期货单位帐号
	TFutureFtdcBankAccountType	BankSecuAcc;
	///银行密码标志
	TFutureFtdcPwdFlagType	BankPwdFlag;
	///期货资金密码核对标志
	TFutureFtdcPwdFlagType	SecuPwdFlag;
	///交易柜员
	TFutureFtdcOperNoType	OperNo;
	///请求编号
	TFutureFtdcRequestIDType	RequestID;
	///交易ID
	TFutureFtdcTIDType	TID;
};

///查询账户信息响应
struct CFutureFtdcRspQueryAccountField
{
	///业务功能码
	TFutureFtdcTradeCodeType	TradeCode;
	///银行代码
	TFutureFtdcBankIDType	BankID;
	///银行分支机构代码
	TFutureFtdcBankBrchIDType	BankBranchID;
	///期商代码
	TFutureFtdcBrokerIDType	BrokerID;
	///期商分支机构代码
	TFutureFtdcFutureBranchIDType	BrokerBranchID;
	///交易日期
	TFutureFtdcTradeDateType	TradeDate;
	///交易时间
	TFutureFtdcTradeTimeType	TradeTime;
	///银行流水号
	TFutureFtdcBankSerialType	BankSerial;
	///交易系统日期 
	TFutureFtdcTradeDateType	TradingDay;
	///银期平台消息流水号
	TFutureFtdcSerialType	PlateSerial;
	///最后分片标志
	TFutureFtdcLastFragmentType	LastFragment;
	///会话号
	TFutureFtdcSessionIDType	SessionID;
	///客户姓名
	TFutureFtdcIndividualNameType	CustomerName;
	///证件类型
	TFutureFtdcIdCardTypeType	IdCardType;
	///证件号码
	TFutureFtdcIdentifiedCardNoType	IdentifiedCardNo;
	///客户类型
	TFutureFtdcCustTypeType	CustType;
	///银行帐号
	TFutureFtdcBankAccountType	BankAccount;
	///银行密码
	TFutureFtdcPasswordType	BankPassWord;
	///投资者帐号
	TFutureFtdcAccountIDType	AccountID;
	///期货密码
	TFutureFtdcPasswordType	Password;
	///期货公司流水号
	TFutureFtdcFutureSerialType	FutureSerial;
	///安装编号
	TFutureFtdcInstallIDType	InstallID;
	///用户标识
	TFutureFtdcUserIDType	UserID;
	///验证客户证件号码标志
	TFutureFtdcYesNoIndicatorType	VerifyCertNoFlag;
	///币种代码
	TFutureFtdcCurrencyIDType	CurrencyID;
	///摘要
	TFutureFtdcDigestType	Digest;
	///银行帐号类型
	TFutureFtdcBankAccTypeType	BankAccType;
	///渠道标志
	TFutureFtdcDeviceIDType	DeviceID;
	///期货单位帐号类型
	TFutureFtdcBankAccTypeType	BankSecuAccType;
	///期货公司银行编码
	TFutureFtdcBankCodingForFutureType	BrokerIDByBank;
	///期货单位帐号
	TFutureFtdcBankAccountType	BankSecuAcc;
	///银行密码标志
	TFutureFtdcPwdFlagType	BankPwdFlag;
	///期货资金密码核对标志
	TFutureFtdcPwdFlagType	SecuPwdFlag;
	///交易柜员
	TFutureFtdcOperNoType	OperNo;
	///请求编号
	TFutureFtdcRequestIDType	RequestID;
	///交易ID
	TFutureFtdcTIDType	TID;
	///银行可用金额
	TFutureFtdcTradeAmountType	BankUseAmount;
	///银行可取金额
	TFutureFtdcTradeAmountType	BankFetchAmount;
};

///期商签到签退
struct CFutureFtdcFutureSignIOField
{
	///业务功能码
	TFutureFtdcTradeCodeType	TradeCode;
	///银行代码
	TFutureFtdcBankIDType	BankID;
	///银行分支机构代码
	TFutureFtdcBankBrchIDType	BankBranchID;
	///期商代码
	TFutureFtdcBrokerIDType	BrokerID;
	///期商分支机构代码
	TFutureFtdcFutureBranchIDType	BrokerBranchID;
	///交易日期
	TFutureFtdcTradeDateType	TradeDate;
	///交易时间
	TFutureFtdcTradeTimeType	TradeTime;
	///银行流水号
	TFutureFtdcBankSerialType	BankSerial;
	///交易系统日期 
	TFutureFtdcTradeDateType	TradingDay;
	///银期平台消息流水号
	TFutureFtdcSerialType	PlateSerial;
	///最后分片标志
	TFutureFtdcLastFragmentType	LastFragment;
	///会话号
	TFutureFtdcSessionIDType	SessionID;
	///安装编号
	TFutureFtdcInstallIDType	InstallID;
	///用户标识
	TFutureFtdcUserIDType	UserID;
	///摘要
	TFutureFtdcDigestType	Digest;
	///币种代码
	TFutureFtdcCurrencyIDType	CurrencyID;
	///渠道标志
	TFutureFtdcDeviceIDType	DeviceID;
	///期货公司银行编码
	TFutureFtdcBankCodingForFutureType	BrokerIDByBank;
	///交易柜员
	TFutureFtdcOperNoType	OperNo;
	///请求编号
	TFutureFtdcRequestIDType	RequestID;
	///交易ID
	TFutureFtdcTIDType	TID;
};

///期商签到响应
struct CFutureFtdcRspFutureSignInField
{
	///业务功能码
	TFutureFtdcTradeCodeType	TradeCode;
	///银行代码
	TFutureFtdcBankIDType	BankID;
	///银行分支机构代码
	TFutureFtdcBankBrchIDType	BankBranchID;
	///期商代码
	TFutureFtdcBrokerIDType	BrokerID;
	///期商分支机构代码
	TFutureFtdcFutureBranchIDType	BrokerBranchID;
	///交易日期
	TFutureFtdcTradeDateType	TradeDate;
	///交易时间
	TFutureFtdcTradeTimeType	TradeTime;
	///银行流水号
	TFutureFtdcBankSerialType	BankSerial;
	///交易系统日期 
	TFutureFtdcTradeDateType	TradingDay;
	///银期平台消息流水号
	TFutureFtdcSerialType	PlateSerial;
	///最后分片标志
	TFutureFtdcLastFragmentType	LastFragment;
	///会话号
	TFutureFtdcSessionIDType	SessionID;
	///安装编号
	TFutureFtdcInstallIDType	InstallID;
	///用户标识
	TFutureFtdcUserIDType	UserID;
	///摘要
	TFutureFtdcDigestType	Digest;
	///币种代码
	TFutureFtdcCurrencyIDType	CurrencyID;
	///渠道标志
	TFutureFtdcDeviceIDType	DeviceID;
	///期货公司银行编码
	TFutureFtdcBankCodingForFutureType	BrokerIDByBank;
	///交易柜员
	TFutureFtdcOperNoType	OperNo;
	///请求编号
	TFutureFtdcRequestIDType	RequestID;
	///交易ID
	TFutureFtdcTIDType	TID;
	///错误代码
	TFutureFtdcErrorIDType	ErrorID;
	///错误信息
	TFutureFtdcErrorMsgType	ErrorMsg;
	///PIN密钥
	TFutureFtdcPasswordKeyType	PinKey;
	///MAC密钥
	TFutureFtdcPasswordKeyType	MacKey;
};

///期商签退请求
struct CFutureFtdcReqFutureSignOutField
{
	///业务功能码
	TFutureFtdcTradeCodeType	TradeCode;
	///银行代码
	TFutureFtdcBankIDType	BankID;
	///银行分支机构代码
	TFutureFtdcBankBrchIDType	BankBranchID;
	///期商代码
	TFutureFtdcBrokerIDType	BrokerID;
	///期商分支机构代码
	TFutureFtdcFutureBranchIDType	BrokerBranchID;
	///交易日期
	TFutureFtdcTradeDateType	TradeDate;
	///交易时间
	TFutureFtdcTradeTimeType	TradeTime;
	///银行流水号
	TFutureFtdcBankSerialType	BankSerial;
	///交易系统日期 
	TFutureFtdcTradeDateType	TradingDay;
	///银期平台消息流水号
	TFutureFtdcSerialType	PlateSerial;
	///最后分片标志
	TFutureFtdcLastFragmentType	LastFragment;
	///会话号
	TFutureFtdcSessionIDType	SessionID;
	///安装编号
	TFutureFtdcInstallIDType	InstallID;
	///用户标识
	TFutureFtdcUserIDType	UserID;
	///摘要
	TFutureFtdcDigestType	Digest;
	///币种代码
	TFutureFtdcCurrencyIDType	CurrencyID;
	///渠道标志
	TFutureFtdcDeviceIDType	DeviceID;
	///期货公司银行编码
	TFutureFtdcBankCodingForFutureType	BrokerIDByBank;
	///交易柜员
	TFutureFtdcOperNoType	OperNo;
	///请求编号
	TFutureFtdcRequestIDType	RequestID;
	///交易ID
	TFutureFtdcTIDType	TID;
};

///期商签退响应
struct CFutureFtdcRspFutureSignOutField
{
	///业务功能码
	TFutureFtdcTradeCodeType	TradeCode;
	///银行代码
	TFutureFtdcBankIDType	BankID;
	///银行分支机构代码
	TFutureFtdcBankBrchIDType	BankBranchID;
	///期商代码
	TFutureFtdcBrokerIDType	BrokerID;
	///期商分支机构代码
	TFutureFtdcFutureBranchIDType	BrokerBranchID;
	///交易日期
	TFutureFtdcTradeDateType	TradeDate;
	///交易时间
	TFutureFtdcTradeTimeType	TradeTime;
	///银行流水号
	TFutureFtdcBankSerialType	BankSerial;
	///交易系统日期 
	TFutureFtdcTradeDateType	TradingDay;
	///银期平台消息流水号
	TFutureFtdcSerialType	PlateSerial;
	///最后分片标志
	TFutureFtdcLastFragmentType	LastFragment;
	///会话号
	TFutureFtdcSessionIDType	SessionID;
	///安装编号
	TFutureFtdcInstallIDType	InstallID;
	///用户标识
	TFutureFtdcUserIDType	UserID;
	///摘要
	TFutureFtdcDigestType	Digest;
	///币种代码
	TFutureFtdcCurrencyIDType	CurrencyID;
	///渠道标志
	TFutureFtdcDeviceIDType	DeviceID;
	///期货公司银行编码
	TFutureFtdcBankCodingForFutureType	BrokerIDByBank;
	///交易柜员
	TFutureFtdcOperNoType	OperNo;
	///请求编号
	TFutureFtdcRequestIDType	RequestID;
	///交易ID
	TFutureFtdcTIDType	TID;
	///错误代码
	TFutureFtdcErrorIDType	ErrorID;
	///错误信息
	TFutureFtdcErrorMsgType	ErrorMsg;
};

///查询指定流水号的交易结果请求
struct CFutureFtdcReqQueryTradeResultBySerialField
{
	///业务功能码
	TFutureFtdcTradeCodeType	TradeCode;
	///银行代码
	TFutureFtdcBankIDType	BankID;
	///银行分支机构代码
	TFutureFtdcBankBrchIDType	BankBranchID;
	///期商代码
	TFutureFtdcBrokerIDType	BrokerID;
	///期商分支机构代码
	TFutureFtdcFutureBranchIDType	BrokerBranchID;
	///交易日期
	TFutureFtdcTradeDateType	TradeDate;
	///交易时间
	TFutureFtdcTradeTimeType	TradeTime;
	///银行流水号
	TFutureFtdcBankSerialType	BankSerial;
	///交易系统日期 
	TFutureFtdcTradeDateType	TradingDay;
	///银期平台消息流水号
	TFutureFtdcSerialType	PlateSerial;
	///最后分片标志
	TFutureFtdcLastFragmentType	LastFragment;
	///会话号
	TFutureFtdcSessionIDType	SessionID;
	///流水号
	TFutureFtdcSerialType	Reference;
	///本流水号发布者的机构类型
	TFutureFtdcInstitutionTypeType	RefrenceIssureType;
	///本流水号发布者机构编码
	TFutureFtdcOrganCodeType	RefrenceIssure;
	///客户姓名
	TFutureFtdcIndividualNameType	CustomerName;
	///证件类型
	TFutureFtdcIdCardTypeType	IdCardType;
	///证件号码
	TFutureFtdcIdentifiedCardNoType	IdentifiedCardNo;
	///客户类型
	TFutureFtdcCustTypeType	CustType;
	///银行帐号
	TFutureFtdcBankAccountType	BankAccount;
	///银行密码
	TFutureFtdcPasswordType	BankPassWord;
	///投资者帐号
	TFutureFtdcAccountIDType	AccountID;
	///期货密码
	TFutureFtdcPasswordType	Password;
	///币种代码
	TFutureFtdcCurrencyIDType	CurrencyID;
	///转帐金额
	TFutureFtdcTradeAmountType	TradeAmount;
	///摘要
	TFutureFtdcDigestType	Digest;
};

///查询指定流水号的交易结果响应
struct CFutureFtdcRspQueryTradeResultBySerialField
{
	///业务功能码
	TFutureFtdcTradeCodeType	TradeCode;
	///银行代码
	TFutureFtdcBankIDType	BankID;
	///银行分支机构代码
	TFutureFtdcBankBrchIDType	BankBranchID;
	///期商代码
	TFutureFtdcBrokerIDType	BrokerID;
	///期商分支机构代码
	TFutureFtdcFutureBranchIDType	BrokerBranchID;
	///交易日期
	TFutureFtdcTradeDateType	TradeDate;
	///交易时间
	TFutureFtdcTradeTimeType	TradeTime;
	///银行流水号
	TFutureFtdcBankSerialType	BankSerial;
	///交易系统日期 
	TFutureFtdcTradeDateType	TradingDay;
	///银期平台消息流水号
	TFutureFtdcSerialType	PlateSerial;
	///最后分片标志
	TFutureFtdcLastFragmentType	LastFragment;
	///会话号
	TFutureFtdcSessionIDType	SessionID;
	///错误代码
	TFutureFtdcErrorIDType	ErrorID;
	///错误信息
	TFutureFtdcErrorMsgType	ErrorMsg;
	///流水号
	TFutureFtdcSerialType	Reference;
	///本流水号发布者的机构类型
	TFutureFtdcInstitutionTypeType	RefrenceIssureType;
	///本流水号发布者机构编码
	TFutureFtdcOrganCodeType	RefrenceIssure;
	///原始返回代码
	TFutureFtdcReturnCodeType	OriginReturnCode;
	///原始返回码描述
	TFutureFtdcDescrInfoForReturnCodeType	OriginDescrInfoForReturnCode;
	///银行帐号
	TFutureFtdcBankAccountType	BankAccount;
	///银行密码
	TFutureFtdcPasswordType	BankPassWord;
	///投资者帐号
	TFutureFtdcAccountIDType	AccountID;
	///期货密码
	TFutureFtdcPasswordType	Password;
	///币种代码
	TFutureFtdcCurrencyIDType	CurrencyID;
	///转帐金额
	TFutureFtdcTradeAmountType	TradeAmount;
	///摘要
	TFutureFtdcDigestType	Digest;
};

///日终文件就绪请求
struct CFutureFtdcReqDayEndFileReadyField
{
	///业务功能码
	TFutureFtdcTradeCodeType	TradeCode;
	///银行代码
	TFutureFtdcBankIDType	BankID;
	///银行分支机构代码
	TFutureFtdcBankBrchIDType	BankBranchID;
	///期商代码
	TFutureFtdcBrokerIDType	BrokerID;
	///期商分支机构代码
	TFutureFtdcFutureBranchIDType	BrokerBranchID;
	///交易日期
	TFutureFtdcTradeDateType	TradeDate;
	///交易时间
	TFutureFtdcTradeTimeType	TradeTime;
	///银行流水号
	TFutureFtdcBankSerialType	BankSerial;
	///交易系统日期 
	TFutureFtdcTradeDateType	TradingDay;
	///银期平台消息流水号
	TFutureFtdcSerialType	PlateSerial;
	///最后分片标志
	TFutureFtdcLastFragmentType	LastFragment;
	///会话号
	TFutureFtdcSessionIDType	SessionID;
	///文件业务功能
	TFutureFtdcFileBusinessCodeType	FileBusinessCode;
	///摘要
	TFutureFtdcDigestType	Digest;
};

///返回结果
struct CFutureFtdcReturnResultField
{
	///返回代码
	TFutureFtdcReturnCodeType	ReturnCode;
	///返回码描述
	TFutureFtdcDescrInfoForReturnCodeType	DescrInfoForReturnCode;
};

///验证期货资金密码
struct CFutureFtdcVerifyFuturePasswordField
{
	///业务功能码
	TFutureFtdcTradeCodeType	TradeCode;
	///银行代码
	TFutureFtdcBankIDType	BankID;
	///银行分支机构代码
	TFutureFtdcBankBrchIDType	BankBranchID;
	///期商代码
	TFutureFtdcBrokerIDType	BrokerID;
	///期商分支机构代码
	TFutureFtdcFutureBranchIDType	BrokerBranchID;
	///交易日期
	TFutureFtdcTradeDateType	TradeDate;
	///交易时间
	TFutureFtdcTradeTimeType	TradeTime;
	///银行流水号
	TFutureFtdcBankSerialType	BankSerial;
	///交易系统日期 
	TFutureFtdcTradeDateType	TradingDay;
	///银期平台消息流水号
	TFutureFtdcSerialType	PlateSerial;
	///最后分片标志
	TFutureFtdcLastFragmentType	LastFragment;
	///会话号
	TFutureFtdcSessionIDType	SessionID;
	///投资者帐号
	TFutureFtdcAccountIDType	AccountID;
	///期货密码
	TFutureFtdcPasswordType	Password;
	///银行帐号
	TFutureFtdcBankAccountType	BankAccount;
	///银行密码
	TFutureFtdcPasswordType	BankPassWord;
	///安装编号
	TFutureFtdcInstallIDType	InstallID;
	///交易ID
	TFutureFtdcTIDType	TID;
};

///验证客户信息
struct CFutureFtdcVerifyCustInfoField
{
	///客户姓名
	TFutureFtdcIndividualNameType	CustomerName;
	///证件类型
	TFutureFtdcIdCardTypeType	IdCardType;
	///证件号码
	TFutureFtdcIdentifiedCardNoType	IdentifiedCardNo;
	///客户类型
	TFutureFtdcCustTypeType	CustType;
};

///验证期货资金密码和客户信息
struct CFutureFtdcVerifyFuturePasswordAndCustInfoField
{
	///客户姓名
	TFutureFtdcIndividualNameType	CustomerName;
	///证件类型
	TFutureFtdcIdCardTypeType	IdCardType;
	///证件号码
	TFutureFtdcIdentifiedCardNoType	IdentifiedCardNo;
	///客户类型
	TFutureFtdcCustTypeType	CustType;
	///投资者帐号
	TFutureFtdcAccountIDType	AccountID;
	///期货密码
	TFutureFtdcPasswordType	Password;
};

///验证期货资金密码和客户信息
struct CFutureFtdcDepositResultInformField
{
	///出入金流水号，该流水号为银期报盘返回的流水号
	TFutureFtdcDepositSeqNoType	DepositSeqNo;
	///经纪公司代码
	TFutureFtdcBrokerIDType	BrokerID;
	///投资者代码
	TFutureFtdcInvestorIDType	InvestorID;
	///入金金额
	TFutureFtdcMoneyType	Deposit;
	///请求编号
	TFutureFtdcRequestIDType	RequestID;
	///返回代码
	TFutureFtdcReturnCodeType	ReturnCode;
	///返回码描述
	TFutureFtdcDescrInfoForReturnCodeType	DescrInfoForReturnCode;
};

///交易核心向银期报盘发出密钥同步请求
struct CFutureFtdcReqSyncKeyField
{
	///业务功能码
	TFutureFtdcTradeCodeType	TradeCode;
	///银行代码
	TFutureFtdcBankIDType	BankID;
	///银行分支机构代码
	TFutureFtdcBankBrchIDType	BankBranchID;
	///期商代码
	TFutureFtdcBrokerIDType	BrokerID;
	///期商分支机构代码
	TFutureFtdcFutureBranchIDType	BrokerBranchID;
	///交易日期
	TFutureFtdcTradeDateType	TradeDate;
	///交易时间
	TFutureFtdcTradeTimeType	TradeTime;
	///银行流水号
	TFutureFtdcBankSerialType	BankSerial;
	///交易系统日期 
	TFutureFtdcTradeDateType	TradingDay;
	///银期平台消息流水号
	TFutureFtdcSerialType	PlateSerial;
	///最后分片标志
	TFutureFtdcLastFragmentType	LastFragment;
	///会话号
	TFutureFtdcSessionIDType	SessionID;
	///安装编号
	TFutureFtdcInstallIDType	InstallID;
	///用户标识
	TFutureFtdcUserIDType	UserID;
	///交易核心给银期报盘的消息
	TFutureFtdcAddInfoType	Message;
	///渠道标志
	TFutureFtdcDeviceIDType	DeviceID;
	///期货公司银行编码
	TFutureFtdcBankCodingForFutureType	BrokerIDByBank;
	///交易柜员
	TFutureFtdcOperNoType	OperNo;
	///请求编号
	TFutureFtdcRequestIDType	RequestID;
	///交易ID
	TFutureFtdcTIDType	TID;
};

///交易核心向银期报盘发出密钥同步响应
struct CFutureFtdcRspSyncKeyField
{
	///业务功能码
	TFutureFtdcTradeCodeType	TradeCode;
	///银行代码
	TFutureFtdcBankIDType	BankID;
	///银行分支机构代码
	TFutureFtdcBankBrchIDType	BankBranchID;
	///期商代码
	TFutureFtdcBrokerIDType	BrokerID;
	///期商分支机构代码
	TFutureFtdcFutureBranchIDType	BrokerBranchID;
	///交易日期
	TFutureFtdcTradeDateType	TradeDate;
	///交易时间
	TFutureFtdcTradeTimeType	TradeTime;
	///银行流水号
	TFutureFtdcBankSerialType	BankSerial;
	///交易系统日期 
	TFutureFtdcTradeDateType	TradingDay;
	///银期平台消息流水号
	TFutureFtdcSerialType	PlateSerial;
	///最后分片标志
	TFutureFtdcLastFragmentType	LastFragment;
	///会话号
	TFutureFtdcSessionIDType	SessionID;
	///安装编号
	TFutureFtdcInstallIDType	InstallID;
	///用户标识
	TFutureFtdcUserIDType	UserID;
	///交易核心给银期报盘的消息
	TFutureFtdcAddInfoType	Message;
	///渠道标志
	TFutureFtdcDeviceIDType	DeviceID;
	///期货公司银行编码
	TFutureFtdcBankCodingForFutureType	BrokerIDByBank;
	///交易柜员
	TFutureFtdcOperNoType	OperNo;
	///请求编号
	TFutureFtdcRequestIDType	RequestID;
	///交易ID
	TFutureFtdcTIDType	TID;
	///错误代码
	TFutureFtdcErrorIDType	ErrorID;
	///错误信息
	TFutureFtdcErrorMsgType	ErrorMsg;
};

///查询账户信息通知
struct CFutureFtdcNotifyQueryAccountField
{
	///业务功能码
	TFutureFtdcTradeCodeType	TradeCode;
	///银行代码
	TFutureFtdcBankIDType	BankID;
	///银行分支机构代码
	TFutureFtdcBankBrchIDType	BankBranchID;
	///期商代码
	TFutureFtdcBrokerIDType	BrokerID;
	///期商分支机构代码
	TFutureFtdcFutureBranchIDType	BrokerBranchID;
	///交易日期
	TFutureFtdcTradeDateType	TradeDate;
	///交易时间
	TFutureFtdcTradeTimeType	TradeTime;
	///银行流水号
	TFutureFtdcBankSerialType	BankSerial;
	///交易系统日期 
	TFutureFtdcTradeDateType	TradingDay;
	///银期平台消息流水号
	TFutureFtdcSerialType	PlateSerial;
	///最后分片标志
	TFutureFtdcLastFragmentType	LastFragment;
	///会话号
	TFutureFtdcSessionIDType	SessionID;
	///客户姓名
	TFutureFtdcIndividualNameType	CustomerName;
	///证件类型
	TFutureFtdcIdCardTypeType	IdCardType;
	///证件号码
	TFutureFtdcIdentifiedCardNoType	IdentifiedCardNo;
	///客户类型
	TFutureFtdcCustTypeType	CustType;
	///银行帐号
	TFutureFtdcBankAccountType	BankAccount;
	///银行密码
	TFutureFtdcPasswordType	BankPassWord;
	///投资者帐号
	TFutureFtdcAccountIDType	AccountID;
	///期货密码
	TFutureFtdcPasswordType	Password;
	///期货公司流水号
	TFutureFtdcFutureSerialType	FutureSerial;
	///安装编号
	TFutureFtdcInstallIDType	InstallID;
	///用户标识
	TFutureFtdcUserIDType	UserID;
	///验证客户证件号码标志
	TFutureFtdcYesNoIndicatorType	VerifyCertNoFlag;
	///币种代码
	TFutureFtdcCurrencyIDType	CurrencyID;
	///摘要
	TFutureFtdcDigestType	Digest;
	///银行帐号类型
	TFutureFtdcBankAccTypeType	BankAccType;
	///渠道标志
	TFutureFtdcDeviceIDType	DeviceID;
	///期货单位帐号类型
	TFutureFtdcBankAccTypeType	BankSecuAccType;
	///期货公司银行编码
	TFutureFtdcBankCodingForFutureType	BrokerIDByBank;
	///期货单位帐号
	TFutureFtdcBankAccountType	BankSecuAcc;
	///银行密码标志
	TFutureFtdcPwdFlagType	BankPwdFlag;
	///期货资金密码核对标志
	TFutureFtdcPwdFlagType	SecuPwdFlag;
	///交易柜员
	TFutureFtdcOperNoType	OperNo;
	///请求编号
	TFutureFtdcRequestIDType	RequestID;
	///交易ID
	TFutureFtdcTIDType	TID;
	///银行可用金额
	TFutureFtdcTradeAmountType	BankUseAmount;
	///银行可取金额
	TFutureFtdcTradeAmountType	BankFetchAmount;
	///错误代码
	TFutureFtdcErrorIDType	ErrorID;
	///错误信息
	TFutureFtdcErrorMsgType	ErrorMsg;
};

///银期转账交易流水表
struct CFutureFtdcTransferSerialField
{
	///平台流水号
	TFutureFtdcPlateSerialType	PlateSerial;
	///交易发起方日期
	TFutureFtdcTradeDateType	TradeDate;
	///交易日期
	TFutureFtdcDateType	TradingDay;
	///交易时间
	TFutureFtdcTradeTimeType	TradeTime;
	///交易代码
	TFutureFtdcTradeCodeType	TradeCode;
	///会话编号
	TFutureFtdcSessionIDType	SessionID;
	///银行编码
	TFutureFtdcBankIDType	BankID;
	///银行分支机构编码
	TFutureFtdcBankBrchIDType	BankBranchID;
	///银行帐号类型
	TFutureFtdcBankAccTypeType	BankAccType;
	///银行帐号
	TFutureFtdcBankAccountType	BankAccount;
	///银行流水号
	TFutureFtdcBankSerialType	BankSerial;
	///期货公司编码
	TFutureFtdcBrokerIDType	BrokerID;
	///期商分支机构代码
	TFutureFtdcFutureBranchIDType	BrokerBranchID;
	///期货公司帐号类型
	TFutureFtdcFutureAccTypeType	FutureAccType;
	///投资者帐号
	TFutureFtdcAccountIDType	AccountID;
	///投资者代码
	TFutureFtdcInvestorIDType	InvestorID;
	///期货公司流水号
	TFutureFtdcFutureSerialType	FutureSerial;
	///证件类型
	TFutureFtdcIdCardTypeType	IdCardType;
	///证件号码
	TFutureFtdcIdentifiedCardNoType	IdentifiedCardNo;
	///币种代码
	TFutureFtdcCurrencyIDType	CurrencyID;
	///交易金额
	TFutureFtdcTradeAmountType	TradeAmount;
	///应收客户费用
	TFutureFtdcCustFeeType	CustFee;
	///应收期货公司费用
	TFutureFtdcFutureFeeType	BrokerFee;
	///有效标志
	TFutureFtdcAvailabilityFlagType	AvailabilityFlag;
	///操作员
	TFutureFtdcOperatorCodeType	OperatorCode;
	///新银行帐号
	TFutureFtdcBankAccountType	BankNewAccount;
	///错误代码
	TFutureFtdcErrorIDType	ErrorID;
	///错误信息
	TFutureFtdcErrorMsgType	ErrorMsg;
};

///请求查询转帐流水
struct CFutureFtdcQryTransferSerialField
{
	///经纪公司代码
	TFutureFtdcBrokerIDType	BrokerID;
	///投资者帐号
	TFutureFtdcAccountIDType	AccountID;
	///银行编码
	TFutureFtdcBankIDType	BankID;
};

///期商签到通知
struct CFutureFtdcNotifyFutureSignInField
{
	///业务功能码
	TFutureFtdcTradeCodeType	TradeCode;
	///银行代码
	TFutureFtdcBankIDType	BankID;
	///银行分支机构代码
	TFutureFtdcBankBrchIDType	BankBranchID;
	///期商代码
	TFutureFtdcBrokerIDType	BrokerID;
	///期商分支机构代码
	TFutureFtdcFutureBranchIDType	BrokerBranchID;
	///交易日期
	TFutureFtdcTradeDateType	TradeDate;
	///交易时间
	TFutureFtdcTradeTimeType	TradeTime;
	///银行流水号
	TFutureFtdcBankSerialType	BankSerial;
	///交易系统日期 
	TFutureFtdcTradeDateType	TradingDay;
	///银期平台消息流水号
	TFutureFtdcSerialType	PlateSerial;
	///最后分片标志
	TFutureFtdcLastFragmentType	LastFragment;
	///会话号
	TFutureFtdcSessionIDType	SessionID;
	///安装编号
	TFutureFtdcInstallIDType	InstallID;
	///用户标识
	TFutureFtdcUserIDType	UserID;
	///摘要
	TFutureFtdcDigestType	Digest;
	///币种代码
	TFutureFtdcCurrencyIDType	CurrencyID;
	///渠道标志
	TFutureFtdcDeviceIDType	DeviceID;
	///期货公司银行编码
	TFutureFtdcBankCodingForFutureType	BrokerIDByBank;
	///交易柜员
	TFutureFtdcOperNoType	OperNo;
	///请求编号
	TFutureFtdcRequestIDType	RequestID;
	///交易ID
	TFutureFtdcTIDType	TID;
	///错误代码
	TFutureFtdcErrorIDType	ErrorID;
	///错误信息
	TFutureFtdcErrorMsgType	ErrorMsg;
	///PIN密钥
	TFutureFtdcPasswordKeyType	PinKey;
	///MAC密钥
	TFutureFtdcPasswordKeyType	MacKey;
};

///期商签退通知
struct CFutureFtdcNotifyFutureSignOutField
{
	///业务功能码
	TFutureFtdcTradeCodeType	TradeCode;
	///银行代码
	TFutureFtdcBankIDType	BankID;
	///银行分支机构代码
	TFutureFtdcBankBrchIDType	BankBranchID;
	///期商代码
	TFutureFtdcBrokerIDType	BrokerID;
	///期商分支机构代码
	TFutureFtdcFutureBranchIDType	BrokerBranchID;
	///交易日期
	TFutureFtdcTradeDateType	TradeDate;
	///交易时间
	TFutureFtdcTradeTimeType	TradeTime;
	///银行流水号
	TFutureFtdcBankSerialType	BankSerial;
	///交易系统日期 
	TFutureFtdcTradeDateType	TradingDay;
	///银期平台消息流水号
	TFutureFtdcSerialType	PlateSerial;
	///最后分片标志
	TFutureFtdcLastFragmentType	LastFragment;
	///会话号
	TFutureFtdcSessionIDType	SessionID;
	///安装编号
	TFutureFtdcInstallIDType	InstallID;
	///用户标识
	TFutureFtdcUserIDType	UserID;
	///摘要
	TFutureFtdcDigestType	Digest;
	///币种代码
	TFutureFtdcCurrencyIDType	CurrencyID;
	///渠道标志
	TFutureFtdcDeviceIDType	DeviceID;
	///期货公司银行编码
	TFutureFtdcBankCodingForFutureType	BrokerIDByBank;
	///交易柜员
	TFutureFtdcOperNoType	OperNo;
	///请求编号
	TFutureFtdcRequestIDType	RequestID;
	///交易ID
	TFutureFtdcTIDType	TID;
	///错误代码
	TFutureFtdcErrorIDType	ErrorID;
	///错误信息
	TFutureFtdcErrorMsgType	ErrorMsg;
};

///交易核心向银期报盘发出密钥同步处理结果的通知
struct CFutureFtdcNotifySyncKeyField
{
	///业务功能码
	TFutureFtdcTradeCodeType	TradeCode;
	///银行代码
	TFutureFtdcBankIDType	BankID;
	///银行分支机构代码
	TFutureFtdcBankBrchIDType	BankBranchID;
	///期商代码
	TFutureFtdcBrokerIDType	BrokerID;
	///期商分支机构代码
	TFutureFtdcFutureBranchIDType	BrokerBranchID;
	///交易日期
	TFutureFtdcTradeDateType	TradeDate;
	///交易时间
	TFutureFtdcTradeTimeType	TradeTime;
	///银行流水号
	TFutureFtdcBankSerialType	BankSerial;
	///交易系统日期 
	TFutureFtdcTradeDateType	TradingDay;
	///银期平台消息流水号
	TFutureFtdcSerialType	PlateSerial;
	///最后分片标志
	TFutureFtdcLastFragmentType	LastFragment;
	///会话号
	TFutureFtdcSessionIDType	SessionID;
	///安装编号
	TFutureFtdcInstallIDType	InstallID;
	///用户标识
	TFutureFtdcUserIDType	UserID;
	///交易核心给银期报盘的消息
	TFutureFtdcAddInfoType	Message;
	///渠道标志
	TFutureFtdcDeviceIDType	DeviceID;
	///期货公司银行编码
	TFutureFtdcBankCodingForFutureType	BrokerIDByBank;
	///交易柜员
	TFutureFtdcOperNoType	OperNo;
	///请求编号
	TFutureFtdcRequestIDType	RequestID;
	///交易ID
	TFutureFtdcTIDType	TID;
	///错误代码
	TFutureFtdcErrorIDType	ErrorID;
	///错误信息
	TFutureFtdcErrorMsgType	ErrorMsg;
};

///请求查询银期签约关系
struct CFutureFtdcQryAccountregisterField
{
	///经纪公司代码
	TFutureFtdcBrokerIDType	BrokerID;
	///投资者帐号
	TFutureFtdcAccountIDType	AccountID;
	///银行编码
	TFutureFtdcBankIDType	BankID;
};

///客户开销户信息表
struct CFutureFtdcAccountregisterField
{
	///交易日期
	TFutureFtdcTradeDateType	TradeDay;
	///银行编码
	TFutureFtdcBankIDType	BankID;
	///银行分支机构编码
	TFutureFtdcBankBrchIDType	BankBranchID;
	///银行帐号
	TFutureFtdcBankAccountType	BankAccount;
	///期货公司编码
	TFutureFtdcBrokerIDType	BrokerID;
	///期货公司分支机构编码
	TFutureFtdcFutureBranchIDType	BrokerBranchID;
	///投资者帐号
	TFutureFtdcAccountIDType	AccountID;
	///证件类型
	TFutureFtdcIdCardTypeType	IdCardType;
	///证件号码
	TFutureFtdcIdentifiedCardNoType	IdentifiedCardNo;
	///客户姓名
	TFutureFtdcIndividualNameType	CustomerName;
	///币种代码
	TFutureFtdcCurrencyIDType	CurrencyID;
	///开销户类别
	TFutureFtdcOpenOrDestroyType	OpenOrDestroy;
	///签约日期
	TFutureFtdcTradeDateType	RegDate;
	///解约日期
	TFutureFtdcTradeDateType	OutDate;
	///交易ID
	TFutureFtdcTIDType	TID;
	///客户类型
	TFutureFtdcCustTypeType	CustType;
	///银行帐号类型
	TFutureFtdcBankAccTypeType	BankAccType;
};

///银期开户信息
struct CFutureFtdcOpenAccountField
{
	///业务功能码
	TFutureFtdcTradeCodeType	TradeCode;
	///银行代码
	TFutureFtdcBankIDType	BankID;
	///银行分支机构代码
	TFutureFtdcBankBrchIDType	BankBranchID;
	///期商代码
	TFutureFtdcBrokerIDType	BrokerID;
	///期商分支机构代码
	TFutureFtdcFutureBranchIDType	BrokerBranchID;
	///交易日期
	TFutureFtdcTradeDateType	TradeDate;
	///交易时间
	TFutureFtdcTradeTimeType	TradeTime;
	///银行流水号
	TFutureFtdcBankSerialType	BankSerial;
	///交易系统日期 
	TFutureFtdcTradeDateType	TradingDay;
	///银期平台消息流水号
	TFutureFtdcSerialType	PlateSerial;
	///最后分片标志
	TFutureFtdcLastFragmentType	LastFragment;
	///会话号
	TFutureFtdcSessionIDType	SessionID;
	///客户姓名
	TFutureFtdcIndividualNameType	CustomerName;
	///证件类型
	TFutureFtdcIdCardTypeType	IdCardType;
	///证件号码
	TFutureFtdcIdentifiedCardNoType	IdentifiedCardNo;
	///性别
	TFutureFtdcGenderType	Gender;
	///国家代码
	TFutureFtdcCountryCodeType	CountryCode;
	///客户类型
	TFutureFtdcCustTypeType	CustType;
	///地址
	TFutureFtdcAddressType	Address;
	///邮编
	TFutureFtdcZipCodeType	ZipCode;
	///电话号码
	TFutureFtdcTelephoneType	Telephone;
	///手机
	TFutureFtdcMobilePhoneType	MobilePhone;
	///传真
	TFutureFtdcFaxType	Fax;
	///电子邮件
	TFutureFtdcEMailType	EMail;
	///资金账户状态
	TFutureFtdcMoneyAccountStatusType	MoneyAccountStatus;
	///银行帐号
	TFutureFtdcBankAccountType	BankAccount;
	///银行密码
	TFutureFtdcPasswordType	BankPassWord;
	///投资者帐号
	TFutureFtdcAccountIDType	AccountID;
	///期货密码
	TFutureFtdcPasswordType	Password;
	///安装编号
	TFutureFtdcInstallIDType	InstallID;
	///验证客户证件号码标志
	TFutureFtdcYesNoIndicatorType	VerifyCertNoFlag;
	///币种代码
	TFutureFtdcCurrencyIDType	CurrencyID;
	///汇钞标志
	TFutureFtdcCashExchangeCodeType	CashExchangeCode;
	///摘要
	TFutureFtdcDigestType	Digest;
	///银行帐号类型
	TFutureFtdcBankAccTypeType	BankAccType;
	///渠道标志
	TFutureFtdcDeviceIDType	DeviceID;
	///期货单位帐号类型
	TFutureFtdcBankAccTypeType	BankSecuAccType;
	///期货公司银行编码
	TFutureFtdcBankCodingForFutureType	BrokerIDByBank;
	///期货单位帐号
	TFutureFtdcBankAccountType	BankSecuAcc;
	///银行密码标志
	TFutureFtdcPwdFlagType	BankPwdFlag;
	///期货资金密码核对标志
	TFutureFtdcPwdFlagType	SecuPwdFlag;
	///交易柜员
	TFutureFtdcOperNoType	OperNo;
	///交易ID
	TFutureFtdcTIDType	TID;
	///用户标识
	TFutureFtdcUserIDType	UserID;
	///错误代码
	TFutureFtdcErrorIDType	ErrorID;
	///错误信息
	TFutureFtdcErrorMsgType	ErrorMsg;
};

///银期销户信息
struct CFutureFtdcCancelAccountField
{
	///业务功能码
	TFutureFtdcTradeCodeType	TradeCode;
	///银行代码
	TFutureFtdcBankIDType	BankID;
	///银行分支机构代码
	TFutureFtdcBankBrchIDType	BankBranchID;
	///期商代码
	TFutureFtdcBrokerIDType	BrokerID;
	///期商分支机构代码
	TFutureFtdcFutureBranchIDType	BrokerBranchID;
	///交易日期
	TFutureFtdcTradeDateType	TradeDate;
	///交易时间
	TFutureFtdcTradeTimeType	TradeTime;
	///银行流水号
	TFutureFtdcBankSerialType	BankSerial;
	///交易系统日期 
	TFutureFtdcTradeDateType	TradingDay;
	///银期平台消息流水号
	TFutureFtdcSerialType	PlateSerial;
	///最后分片标志
	TFutureFtdcLastFragmentType	LastFragment;
	///会话号
	TFutureFtdcSessionIDType	SessionID;
	///客户姓名
	TFutureFtdcIndividualNameType	CustomerName;
	///证件类型
	TFutureFtdcIdCardTypeType	IdCardType;
	///证件号码
	TFutureFtdcIdentifiedCardNoType	IdentifiedCardNo;
	///性别
	TFutureFtdcGenderType	Gender;
	///国家代码
	TFutureFtdcCountryCodeType	CountryCode;
	///客户类型
	TFutureFtdcCustTypeType	CustType;
	///地址
	TFutureFtdcAddressType	Address;
	///邮编
	TFutureFtdcZipCodeType	ZipCode;
	///电话号码
	TFutureFtdcTelephoneType	Telephone;
	///手机
	TFutureFtdcMobilePhoneType	MobilePhone;
	///传真
	TFutureFtdcFaxType	Fax;
	///电子邮件
	TFutureFtdcEMailType	EMail;
	///资金账户状态
	TFutureFtdcMoneyAccountStatusType	MoneyAccountStatus;
	///银行帐号
	TFutureFtdcBankAccountType	BankAccount;
	///银行密码
	TFutureFtdcPasswordType	BankPassWord;
	///投资者帐号
	TFutureFtdcAccountIDType	AccountID;
	///期货密码
	TFutureFtdcPasswordType	Password;
	///安装编号
	TFutureFtdcInstallIDType	InstallID;
	///验证客户证件号码标志
	TFutureFtdcYesNoIndicatorType	VerifyCertNoFlag;
	///币种代码
	TFutureFtdcCurrencyIDType	CurrencyID;
	///汇钞标志
	TFutureFtdcCashExchangeCodeType	CashExchangeCode;
	///摘要
	TFutureFtdcDigestType	Digest;
	///银行帐号类型
	TFutureFtdcBankAccTypeType	BankAccType;
	///渠道标志
	TFutureFtdcDeviceIDType	DeviceID;
	///期货单位帐号类型
	TFutureFtdcBankAccTypeType	BankSecuAccType;
	///期货公司银行编码
	TFutureFtdcBankCodingForFutureType	BrokerIDByBank;
	///期货单位帐号
	TFutureFtdcBankAccountType	BankSecuAcc;
	///银行密码标志
	TFutureFtdcPwdFlagType	BankPwdFlag;
	///期货资金密码核对标志
	TFutureFtdcPwdFlagType	SecuPwdFlag;
	///交易柜员
	TFutureFtdcOperNoType	OperNo;
	///交易ID
	TFutureFtdcTIDType	TID;
	///用户标识
	TFutureFtdcUserIDType	UserID;
	///错误代码
	TFutureFtdcErrorIDType	ErrorID;
	///错误信息
	TFutureFtdcErrorMsgType	ErrorMsg;
};

///银期变更银行账号信息
struct CFutureFtdcChangeAccountField
{
	///业务功能码
	TFutureFtdcTradeCodeType	TradeCode;
	///银行代码
	TFutureFtdcBankIDType	BankID;
	///银行分支机构代码
	TFutureFtdcBankBrchIDType	BankBranchID;
	///期商代码
	TFutureFtdcBrokerIDType	BrokerID;
	///期商分支机构代码
	TFutureFtdcFutureBranchIDType	BrokerBranchID;
	///交易日期
	TFutureFtdcTradeDateType	TradeDate;
	///交易时间
	TFutureFtdcTradeTimeType	TradeTime;
	///银行流水号
	TFutureFtdcBankSerialType	BankSerial;
	///交易系统日期 
	TFutureFtdcTradeDateType	TradingDay;
	///银期平台消息流水号
	TFutureFtdcSerialType	PlateSerial;
	///最后分片标志
	TFutureFtdcLastFragmentType	LastFragment;
	///会话号
	TFutureFtdcSessionIDType	SessionID;
	///客户姓名
	TFutureFtdcIndividualNameType	CustomerName;
	///证件类型
	TFutureFtdcIdCardTypeType	IdCardType;
	///证件号码
	TFutureFtdcIdentifiedCardNoType	IdentifiedCardNo;
	///性别
	TFutureFtdcGenderType	Gender;
	///国家代码
	TFutureFtdcCountryCodeType	CountryCode;
	///客户类型
	TFutureFtdcCustTypeType	CustType;
	///地址
	TFutureFtdcAddressType	Address;
	///邮编
	TFutureFtdcZipCodeType	ZipCode;
	///电话号码
	TFutureFtdcTelephoneType	Telephone;
	///手机
	TFutureFtdcMobilePhoneType	MobilePhone;
	///传真
	TFutureFtdcFaxType	Fax;
	///电子邮件
	TFutureFtdcEMailType	EMail;
	///资金账户状态
	TFutureFtdcMoneyAccountStatusType	MoneyAccountStatus;
	///银行帐号
	TFutureFtdcBankAccountType	BankAccount;
	///银行密码
	TFutureFtdcPasswordType	BankPassWord;
	///新银行帐号
	TFutureFtdcBankAccountType	NewBankAccount;
	///新银行密码
	TFutureFtdcPasswordType	NewBankPassWord;
	///投资者帐号
	TFutureFtdcAccountIDType	AccountID;
	///期货密码
	TFutureFtdcPasswordType	Password;
	///银行帐号类型
	TFutureFtdcBankAccTypeType	BankAccType;
	///安装编号
	TFutureFtdcInstallIDType	InstallID;
	///验证客户证件号码标志
	TFutureFtdcYesNoIndicatorType	VerifyCertNoFlag;
	///币种代码
	TFutureFtdcCurrencyIDType	CurrencyID;
	///期货公司银行编码
	TFutureFtdcBankCodingForFutureType	BrokerIDByBank;
	///银行密码标志
	TFutureFtdcPwdFlagType	BankPwdFlag;
	///期货资金密码核对标志
	TFutureFtdcPwdFlagType	SecuPwdFlag;
	///交易ID
	TFutureFtdcTIDType	TID;
	///摘要
	TFutureFtdcDigestType	Digest;
	///错误代码
	TFutureFtdcErrorIDType	ErrorID;
	///错误信息
	TFutureFtdcErrorMsgType	ErrorMsg;
};

///灾备中心交易权限
struct CFutureFtdcUserRightsAssignField
{
	///应用单元代码
	TFutureFtdcBrokerIDType	BrokerID;
	///用户代码
	TFutureFtdcUserIDType	UserID;
	///交易中心代码
	TFutureFtdcDRIdentityIDType	DRIdentityID;
};

///经济公司是否有在本标示的交易权限
struct CFutureFtdcBrokerUserRightAssignField
{
	///应用单元代码
	TFutureFtdcBrokerIDType	BrokerID;
	///交易中心代码
	TFutureFtdcDRIdentityIDType	DRIdentityID;
	///能否交易
	TFutureFtdcBoolType	Tradeable;
};

///灾备交易转换报文
struct CFutureFtdcDRTransferField
{
	///原交易中心代码
	TFutureFtdcDRIdentityIDType	OrigDRIdentityID;
	///目标交易中心代码
	TFutureFtdcDRIdentityIDType	DestDRIdentityID;
	///原应用单元代码
	TFutureFtdcBrokerIDType	OrigBrokerID;
	///目标易用单元代码
	TFutureFtdcBrokerIDType	DestBrokerID;
};

///询价
struct CFutureFtdcForQuoteField
{
	///交易所代码
	TFutureFtdcExchangeIDType	ExchangeID;
	///经纪公司代码
	TFutureFtdcBrokerIDType	BrokerID;
	///投资者代码
	TFutureFtdcInvestorIDType	InvestorID;
	///合约代码
	TFutureFtdcInstrumentIDType	InstrumentID;
	///会话编号
	TFutureFtdcSessionIDType	SessionID;
	///报单引用
	TFutureFtdcOrderRefType	OrderRef;
	///本地报单编号
	TFutureFtdcOrderLocalIDType	OrderLocalID;
	///用户代码
	TFutureFtdcTraderIDType	TraderID;
	///安装编号
	TFutureFtdcInstallIDType	InstallID;
	///会员代码
	TFutureFtdcParticipantIDType	ParticipantID;
	///客户代码
	TFutureFtdcClientIDType	ClientID;
	///用户代码
	TFutureFtdcUserIDType	UserID;
	///询价时间
	TFutureFtdcTimeType	ReqForQuoteTime;
	///询价编号
	TFutureFtdcOrderSysIDType	ReqForQuoteID;
	///交易日
	TFutureFtdcDateType	TradingDay;
};

///询价输入
struct CFutureFtdcInputForQuoteField
{
	///交易所代码
	TFutureFtdcExchangeIDType	ExchangeID;
	///经纪公司代码
	TFutureFtdcBrokerIDType	BrokerID;
	///投资者代码
	TFutureFtdcInvestorIDType	InvestorID;
	///合约代码
	TFutureFtdcInstrumentIDType	InstrumentID;
	///会话编号
	TFutureFtdcSessionIDType	SessionID;
	///报单引用
	TFutureFtdcOrderRefType	OrderRef;
	///本地报单编号
	TFutureFtdcOrderLocalIDType	OrderLocalID;
	///用户代码
	TFutureFtdcTraderIDType	TraderID;
	///安装编号
	TFutureFtdcInstallIDType	InstallID;
	///会员代码
	TFutureFtdcParticipantIDType	ParticipantID;
	///客户代码
	TFutureFtdcClientIDType	ClientID;
	///用户代码
	TFutureFtdcUserIDType	UserID;
	///询价时间
	TFutureFtdcTimeType	ReqForQuoteTime;
};

///交易所询价输入
struct CFutureFtdcExchRspForQuoteField
{
	///交易所代码
	TFutureFtdcExchangeIDType	ExchangeID;
	///经纪公司代码
	TFutureFtdcBrokerIDType	BrokerID;
	///投资者代码
	TFutureFtdcInvestorIDType	InvestorID;
	///合约代码
	TFutureFtdcInstrumentIDType	InstrumentID;
	///会话编号
	TFutureFtdcSessionIDType	SessionID;
	///报单引用
	TFutureFtdcOrderRefType	OrderRef;
	///本地报单编号
	TFutureFtdcOrderLocalIDType	OrderLocalID;
	///用户代码
	TFutureFtdcTraderIDType	TraderID;
	///安装编号
	TFutureFtdcInstallIDType	InstallID;
	///会员代码
	TFutureFtdcParticipantIDType	ParticipantID;
	///客户代码
	TFutureFtdcClientIDType	ClientID;
	///用户代码
	TFutureFtdcUserIDType	UserID;
	///询价时间
	TFutureFtdcTimeType	ReqForQuoteTime;
};

///交易所询价错误
struct CFutureFtdcErrRtnExchRtnForQuoteField
{
	///交易所代码
	TFutureFtdcExchangeIDType	ExchangeID;
	///经纪公司代码
	TFutureFtdcBrokerIDType	BrokerID;
	///投资者代码
	TFutureFtdcInvestorIDType	InvestorID;
	///合约代码
	TFutureFtdcInstrumentIDType	InstrumentID;
	///会话编号
	TFutureFtdcSessionIDType	SessionID;
	///报单引用
	TFutureFtdcOrderRefType	OrderRef;
	///本地报单编号
	TFutureFtdcOrderLocalIDType	OrderLocalID;
	///用户代码
	TFutureFtdcTraderIDType	TraderID;
	///安装编号
	TFutureFtdcInstallIDType	InstallID;
	///会员代码
	TFutureFtdcParticipantIDType	ParticipantID;
	///客户代码
	TFutureFtdcClientIDType	ClientID;
	///用户代码
	TFutureFtdcUserIDType	UserID;
	///询价时间
	TFutureFtdcTimeType	ReqForQuoteTime;
	///错误代码
	TFutureFtdcErrorIDType	ErrorID;
	///错误信息
	TFutureFtdcErrorMsgType	ErrorMsg;
};

///交易所报价错误
struct CFutureFtdcExchangeQuoteInsertErrorField
{
	///经纪公司代码
	TFutureFtdcBrokerIDType	BrokerID;
	///交易所代码
	TFutureFtdcExchangeIDType	ExchangeID;
	///会员代码
	TFutureFtdcParticipantIDType	ParticipantID;
	///交易所交易员代码
	TFutureFtdcTraderIDType	TraderID;
	///安装编号
	TFutureFtdcInstallIDType	InstallID;
	///本地报单编号
	TFutureFtdcOrderLocalIDType	QuoteLocalID;
	///错误代码
	TFutureFtdcErrorIDType	ErrorID;
	///错误信息
	TFutureFtdcErrorMsgType	ErrorMsg;
	///客户代码
	TFutureFtdcClientIDType	ClientID;
	///投资者代码
	TFutureFtdcInvestorIDType	InvestorID;
	///业务单元
	TFutureFtdcBusinessUnitType	BusinessUnit;
};

///UDP组播组信息
struct CFutureFtdcMulticastGroupInfoField
{
	///组播组IP地址
	TFutureFtdcIPAddressType	GroupIP;
	///组播组IP端口
	TFutureFtdcIPPortType	GroupPort;
	///源地址
	TFutureFtdcIPAddressType	SourceIP;
};


#pragma pack(pop)

#endif
