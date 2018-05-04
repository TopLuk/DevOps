#ifndef CTP_FTDC_STRUCT_PRINT_FUNCTION_H_
#define CTP_FTDC_STRUCT_PRINT_FUNCTION_H_

#include <iostream>
#include <sstream>

inline std::ostream& operator << (std::ostream& os, const CThostFtdcDisseminationField& ftdc_struct) {
  os << "ftdc_struct(CThostFtdcDisseminationField) ---> SequenceSeries:" << ftdc_struct.SequenceSeries;
  os << " SequenceNo:" << ftdc_struct.SequenceNo;
  os << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CThostFtdcReqUserLoginField& ftdc_struct) {
  os << "ftdc_struct(CThostFtdcReqUserLoginField) ---> TradingDay:" << ftdc_struct.TradingDay;
  os << " BrokerID:" << ftdc_struct.BrokerID;
  os << " UserID:" << ftdc_struct.UserID;
  os << " Password:" << "it is a secret"; // ftdc_struct.Password;
  os << " UserProductInfo:" << ftdc_struct.UserProductInfo;
  os << " InterfaceProductInfo:" << ftdc_struct.InterfaceProductInfo;
  os << " ProtocolInfo:" << ftdc_struct.ProtocolInfo;
  os << " MacAddress:" << ftdc_struct.MacAddress;
  os << " OneTimePassword:" << "it is a secret"; // ftdc_struct.OneTimePassword;
  os << " ClientIPAddress:" << ftdc_struct.ClientIPAddress;
  os << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CThostFtdcRspUserLoginField& ftdc_struct) {
  os << "ftdc_struct(CThostFtdcRspUserLoginField) ---> TradingDay:" << ftdc_struct.TradingDay;
  os << " LoginTime:" << ftdc_struct.LoginTime;
  os << " BrokerID:" << ftdc_struct.BrokerID;
  os << " UserID:" << ftdc_struct.UserID;
  os << " SystemName:" << ftdc_struct.SystemName;
  os << " FrontID:" << ftdc_struct.FrontID;
  os << " SessionID:" << ftdc_struct.SessionID;
  os << " MaxOrderRef:" << ftdc_struct.MaxOrderRef;
  os << " SHFETime:" << ftdc_struct.SHFETime;
  os << " DCETime:" << ftdc_struct.DCETime;
  os << " CZCETime:" << ftdc_struct.CZCETime;
  os << " FFEXTime:" << ftdc_struct.FFEXTime;
  os << " INETime:" << ftdc_struct.INETime;
  os << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CThostFtdcUserLogoutField& ftdc_struct) {
  os << "ftdc_struct(CThostFtdcUserLogoutField) ---> BrokerID:" << ftdc_struct.BrokerID;
  os << " UserID:" << ftdc_struct.UserID;
  os << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CThostFtdcForceUserLogoutField& ftdc_struct) {
  os << "ftdc_struct(CThostFtdcForceUserLogoutField) ---> BrokerID:" << ftdc_struct.BrokerID;
  os << " UserID:" << ftdc_struct.UserID;
  os << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CThostFtdcReqAuthenticateField& ftdc_struct) {
  os << "ftdc_struct(CThostFtdcReqAuthenticateField) ---> BrokerID:" << ftdc_struct.BrokerID;
  os << " UserID:" << ftdc_struct.UserID;
  os << " UserProductInfo:" << ftdc_struct.UserProductInfo;
  os << " AuthCode:" << ftdc_struct.AuthCode;
  os << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CThostFtdcRspAuthenticateField& ftdc_struct) {
  os << "ftdc_struct(CThostFtdcRspAuthenticateField) ---> BrokerID:" << ftdc_struct.BrokerID;
  os << " UserID:" << ftdc_struct.UserID;
  os << " UserProductInfo:" << ftdc_struct.UserProductInfo;
  os << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CThostFtdcAuthenticationInfoField& ftdc_struct) {
  os << "ftdc_struct(CThostFtdcAuthenticationInfoField) ---> BrokerID:" << ftdc_struct.BrokerID;
  os << " UserID:" << ftdc_struct.UserID;
  os << " UserProductInfo:" << ftdc_struct.UserProductInfo;
  os << " AuthInfo:" << ftdc_struct.AuthInfo;
  os << " IsResult:" << ftdc_struct.IsResult;
  os << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CThostFtdcTransferHeaderField& ftdc_struct) {
  os << "ftdc_struct(CThostFtdcTransferHeaderField) ---> Version:" << ftdc_struct.Version;
  os << " TradeCode:" << ftdc_struct.TradeCode;
  os << " TradeDate:" << ftdc_struct.TradeDate;
  os << " TradeTime:" << ftdc_struct.TradeTime;
  os << " TradeSerial:" << ftdc_struct.TradeSerial;
  os << " FutureID:" << ftdc_struct.FutureID;
  os << " BankID:" << ftdc_struct.BankID;
  os << " BankBrchID:" << ftdc_struct.BankBrchID;
  os << " OperNo:" << ftdc_struct.OperNo;
  os << " DeviceID:" << ftdc_struct.DeviceID;
  os << " RecordNum:" << ftdc_struct.RecordNum;
  os << " SessionID:" << ftdc_struct.SessionID;
  os << " RequestID:" << ftdc_struct.RequestID;
  os << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CThostFtdcTransferBankToFutureReqField& ftdc_struct) {
  os << "ftdc_struct(CThostFtdcTransferBankToFutureReqField) ---> FutureAccount:" << ftdc_struct.FutureAccount;
  os << " FuturePwdFlag:" << ftdc_struct.FuturePwdFlag;
  os << " FutureAccPwd:" << ftdc_struct.FutureAccPwd;
  os << " TradeAmt:" << ftdc_struct.TradeAmt;
  os << " CustFee:" << ftdc_struct.CustFee;
  os << " CurrencyCode:" << ftdc_struct.CurrencyCode;
  os << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CThostFtdcTransferBankToFutureRspField& ftdc_struct) {
  os << "ftdc_struct(CThostFtdcTransferBankToFutureRspField) ---> RetCode:" << ftdc_struct.RetCode;
  os << " RetInfo:" << ftdc_struct.RetInfo;
  os << " FutureAccount:" << ftdc_struct.FutureAccount;
  os << " TradeAmt:" << ftdc_struct.TradeAmt;
  os << " CustFee:" << ftdc_struct.CustFee;
  os << " CurrencyCode:" << ftdc_struct.CurrencyCode;
  os << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CThostFtdcTransferFutureToBankReqField& ftdc_struct) {
  os << "ftdc_struct(CThostFtdcTransferFutureToBankReqField) ---> FutureAccount:" << ftdc_struct.FutureAccount;
  os << " FuturePwdFlag:" << ftdc_struct.FuturePwdFlag;
  os << " FutureAccPwd:" << ftdc_struct.FutureAccPwd;
  os << " TradeAmt:" << ftdc_struct.TradeAmt;
  os << " CustFee:" << ftdc_struct.CustFee;
  os << " CurrencyCode:" << ftdc_struct.CurrencyCode;
  os << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CThostFtdcTransferFutureToBankRspField& ftdc_struct) {
  os << "ftdc_struct(CThostFtdcTransferFutureToBankRspField) ---> RetCode:" << ftdc_struct.RetCode;
  os << " RetInfo:" << ftdc_struct.RetInfo;
  os << " FutureAccount:" << ftdc_struct.FutureAccount;
  os << " TradeAmt:" << ftdc_struct.TradeAmt;
  os << " CustFee:" << ftdc_struct.CustFee;
  os << " CurrencyCode:" << ftdc_struct.CurrencyCode;
  os << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CThostFtdcTransferQryBankReqField& ftdc_struct) {
  os << "ftdc_struct(CThostFtdcTransferQryBankReqField) ---> FutureAccount:" << ftdc_struct.FutureAccount;
  os << " FuturePwdFlag:" << ftdc_struct.FuturePwdFlag;
  os << " FutureAccPwd:" << ftdc_struct.FutureAccPwd;
  os << " CurrencyCode:" << ftdc_struct.CurrencyCode;
  os << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CThostFtdcTransferQryBankRspField& ftdc_struct) {
  os << "ftdc_struct(CThostFtdcTransferQryBankRspField) ---> RetCode:" << ftdc_struct.RetCode;
  os << " RetInfo:" << ftdc_struct.RetInfo;
  os << " FutureAccount:" << ftdc_struct.FutureAccount;
  os << " TradeAmt:" << ftdc_struct.TradeAmt;
  os << " UseAmt:" << ftdc_struct.UseAmt;
  os << " FetchAmt:" << ftdc_struct.FetchAmt;
  os << " CurrencyCode:" << ftdc_struct.CurrencyCode;
  os << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CThostFtdcTransferQryDetailReqField& ftdc_struct) {
  os << "ftdc_struct(CThostFtdcTransferQryDetailReqField) ---> FutureAccount:" << ftdc_struct.FutureAccount;
  os << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CThostFtdcTransferQryDetailRspField& ftdc_struct) {
  os << "ftdc_struct(CThostFtdcTransferQryDetailRspField) ---> TradeDate:" << ftdc_struct.TradeDate;
  os << " TradeTime:" << ftdc_struct.TradeTime;
  os << " TradeCode:" << ftdc_struct.TradeCode;
  os << " FutureSerial:" << ftdc_struct.FutureSerial;
  os << " FutureID:" << ftdc_struct.FutureID;
  os << " FutureAccount:" << ftdc_struct.FutureAccount;
  os << " BankSerial:" << ftdc_struct.BankSerial;
  os << " BankID:" << ftdc_struct.BankID;
  os << " BankBrchID:" << ftdc_struct.BankBrchID;
  os << " BankAccount:" << ftdc_struct.BankAccount;
  os << " CertCode:" << ftdc_struct.CertCode;
  os << " CurrencyCode:" << ftdc_struct.CurrencyCode;
  os << " TxAmount:" << ftdc_struct.TxAmount;
  os << " Flag:" << ftdc_struct.Flag;
  os << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CThostFtdcRspInfoField& ftdc_struct) {
  if (&ftdc_struct != NULL) {
    os << "ftdc_struct(CThostFtdcRspInfoField) ---> ErrorID:" << ftdc_struct.ErrorID;
    os << " ErrorMsg:" << ftdc_struct.ErrorMsg;
    os << " <--- End";
  }

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CThostFtdcExchangeField& ftdc_struct) {
  os << "ftdc_struct(CThostFtdcExchangeField) ---> ExchangeID:" << ftdc_struct.ExchangeID;
  os << " ExchangeName:" << ftdc_struct.ExchangeName;
  os << " ExchangeProperty:" << ftdc_struct.ExchangeProperty;
  os << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CThostFtdcProductField& ftdc_struct) {
  os << "ftdc_struct(CThostFtdcProductField) ---> ProductID:" << ftdc_struct.ProductID;
  os << " ProductName:" << ftdc_struct.ProductName;
  os << " ExchangeID:" << ftdc_struct.ExchangeID;
  os << " ProductClass:" << ftdc_struct.ProductClass;
  os << " VolumeMultiple:" << ftdc_struct.VolumeMultiple;
  os << " PriceTick:" << ftdc_struct.PriceTick;
  os << " MaxMarketOrderVolume:" << ftdc_struct.MaxMarketOrderVolume;
  os << " MinMarketOrderVolume:" << ftdc_struct.MinMarketOrderVolume;
  os << " MaxLimitOrderVolume:" << ftdc_struct.MaxLimitOrderVolume;
  os << " MinLimitOrderVolume:" << ftdc_struct.MinLimitOrderVolume;
  os << " PositionType:" << ftdc_struct.PositionType;
  os << " PositionDateType:" << ftdc_struct.PositionDateType;
  os << " CloseDealType:" << ftdc_struct.CloseDealType;
  os << " TradeCurrencyID:" << ftdc_struct.TradeCurrencyID;
  os << " MortgageFundUseRange:" << ftdc_struct.MortgageFundUseRange;
  os << " ExchangeProductID:" << ftdc_struct.ExchangeProductID;
  os << " UnderlyingMultiple:" << ftdc_struct.UnderlyingMultiple;
  os << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CThostFtdcInstrumentField& ftdc_struct) {
  os << "ftdc_struct(CThostFtdcInstrumentField) ---> InstrumentID:" << ftdc_struct.InstrumentID;
  os << " ExchangeID:" << ftdc_struct.ExchangeID;
  os << " InstrumentName:" << ftdc_struct.InstrumentName;
  os << " ExchangeInstID:" << ftdc_struct.ExchangeInstID;
  os << " ProductID:" << ftdc_struct.ProductID;
  os << " ProductClass:" << ftdc_struct.ProductClass;
  os << " DeliveryYear:" << ftdc_struct.DeliveryYear;
  os << " DeliveryMonth:" << ftdc_struct.DeliveryMonth;
  os << " MaxMarketOrderVolume:" << ftdc_struct.MaxMarketOrderVolume;
  os << " MinMarketOrderVolume:" << ftdc_struct.MinMarketOrderVolume;
  os << " MaxLimitOrderVolume:" << ftdc_struct.MaxLimitOrderVolume;
  os << " MinLimitOrderVolume:" << ftdc_struct.MinLimitOrderVolume;
  os << " VolumeMultiple:" << ftdc_struct.VolumeMultiple;
  os << " PriceTick:" << ftdc_struct.PriceTick;
  os << " CreateDate:" << ftdc_struct.CreateDate;
  os << " OpenDate:" << ftdc_struct.OpenDate;
  os << " ExpireDate:" << ftdc_struct.ExpireDate;
  os << " StartDelivDate:" << ftdc_struct.StartDelivDate;
  os << " EndDelivDate:" << ftdc_struct.EndDelivDate;
  os << " InstLifePhase:" << ftdc_struct.InstLifePhase;
  os << " IsTrading:" << ftdc_struct.IsTrading;
  os << " PositionType:" << ftdc_struct.PositionType;
  os << " PositionDateType:" << ftdc_struct.PositionDateType;
  os << " LongMarginRatio:" << ftdc_struct.LongMarginRatio;
  os << " ShortMarginRatio:" << ftdc_struct.ShortMarginRatio;
  os << " MaxMarginSideAlgorithm:" << ftdc_struct.MaxMarginSideAlgorithm;
  os << " UnderlyingInstrID:" << ftdc_struct.UnderlyingInstrID;
  os << " StrikePrice:" << ftdc_struct.StrikePrice;
  os << " OptionsType:" << ftdc_struct.OptionsType;
  os << " UnderlyingMultiple:" << ftdc_struct.UnderlyingMultiple;
  os << " CombinationType:" << ftdc_struct.CombinationType;
  os << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CThostFtdcBrokerField& ftdc_struct) {
  os << "ftdc_struct(CThostFtdcBrokerField) ---> BrokerID:" << ftdc_struct.BrokerID;
  os << " BrokerAbbr:" << ftdc_struct.BrokerAbbr;
  os << " BrokerName:" << ftdc_struct.BrokerName;
  os << " IsActive:" << ftdc_struct.IsActive;
  os << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CThostFtdcTraderField& ftdc_struct) {
  os << "ftdc_struct(CThostFtdcTraderField) ---> ExchangeID:" << ftdc_struct.ExchangeID;
  os << " TraderID:" << ftdc_struct.TraderID;
  os << " ParticipantID:" << ftdc_struct.ParticipantID;
  os << " Password:" << "it is a secret"; // ftdc_struct.Password;
  os << " InstallCount:" << ftdc_struct.InstallCount;
  os << " BrokerID:" << ftdc_struct.BrokerID;
  os << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CThostFtdcInvestorField& ftdc_struct) {
  os << "ftdc_struct(CThostFtdcInvestorField) ---> InvestorID:" << ftdc_struct.InvestorID;
  os << " BrokerID:" << ftdc_struct.BrokerID;
  os << " InvestorGroupID:" << ftdc_struct.InvestorGroupID;
  os << " InvestorName:" << ftdc_struct.InvestorName;
  os << " IdentifiedCardType:" << ftdc_struct.IdentifiedCardType;
  os << " IdentifiedCardNo:" << ftdc_struct.IdentifiedCardNo;
  os << " IsActive:" << ftdc_struct.IsActive;
  os << " Telephone:" << ftdc_struct.Telephone;
  os << " Address:" << ftdc_struct.Address;
  os << " OpenDate:" << ftdc_struct.OpenDate;
  os << " Mobile:" << ftdc_struct.Mobile;
  os << " CommModelID:" << ftdc_struct.CommModelID;
  os << " MarginModelID:" << ftdc_struct.MarginModelID;
  os << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CThostFtdcTradingCodeField& ftdc_struct) {
  os << "ftdc_struct(CThostFtdcTradingCodeField) ---> InvestorID:" << ftdc_struct.InvestorID;
  os << " BrokerID:" << ftdc_struct.BrokerID;
  os << " ExchangeID:" << ftdc_struct.ExchangeID;
  os << " ClientID:" << ftdc_struct.ClientID;
  os << " IsActive:" << ftdc_struct.IsActive;
  os << " ClientIDType:" << ftdc_struct.ClientIDType;
  os << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CThostFtdcPartBrokerField& ftdc_struct) {
  os << "ftdc_struct(CThostFtdcPartBrokerField) ---> BrokerID:" << ftdc_struct.BrokerID;
  os << " ExchangeID:" << ftdc_struct.ExchangeID;
  os << " ParticipantID:" << ftdc_struct.ParticipantID;
  os << " IsActive:" << ftdc_struct.IsActive;
  os << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CThostFtdcSuperUserField& ftdc_struct) {
  os << "ftdc_struct(CThostFtdcSuperUserField) ---> UserID:" << ftdc_struct.UserID;
  os << " UserName:" << ftdc_struct.UserName;
  os << " Password:" << "it is a secret"; // ftdc_struct.Password;
  os << " IsActive:" << ftdc_struct.IsActive;
  os << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CThostFtdcSuperUserFunctionField& ftdc_struct) {
  os << "ftdc_struct(CThostFtdcSuperUserFunctionField) ---> UserID:" << ftdc_struct.UserID;
  os << " FunctionCode:" << ftdc_struct.FunctionCode;
  os << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CThostFtdcInvestorGroupField& ftdc_struct) {
  os << "ftdc_struct(CThostFtdcInvestorGroupField) ---> BrokerID:" << ftdc_struct.BrokerID;
  os << " InvestorGroupID:" << ftdc_struct.InvestorGroupID;
  os << " InvestorGroupName:" << ftdc_struct.InvestorGroupName;
  os << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CThostFtdcTradingAccountField& ftdc_struct) {
  os << "ftdc_struct(CThostFtdcTradingAccountField) ---> BrokerID:" << ftdc_struct.BrokerID;
  os << " AccountID:" << ftdc_struct.AccountID;
  os << " PreMortgage:" << ftdc_struct.PreMortgage;
  os << " PreCredit:" << ftdc_struct.PreCredit;
  os << " PreDeposit:" << ftdc_struct.PreDeposit;
  os << " PreBalance:" << ftdc_struct.PreBalance;
  os << " PreMargin:" << ftdc_struct.PreMargin;
  os << " InterestBase:" << ftdc_struct.InterestBase;
  os << " Interest:" << ftdc_struct.Interest;
  os << " Deposit:" << ftdc_struct.Deposit;
  os << " Withdraw:" << ftdc_struct.Withdraw;
  os << " FrozenMargin:" << ftdc_struct.FrozenMargin;
  os << " FrozenCash:" << ftdc_struct.FrozenCash;
  os << " FrozenCommission:" << ftdc_struct.FrozenCommission;
  os << " CurrMargin:" << ftdc_struct.CurrMargin;
  os << " CashIn:" << ftdc_struct.CashIn;
  os << " Commission:" << ftdc_struct.Commission;
  os << " CloseProfit:" << ftdc_struct.CloseProfit;
  os << " PositionProfit:" << ftdc_struct.PositionProfit;
  os << " Balance:" << ftdc_struct.Balance;
  os << " Available:" << ftdc_struct.Available;
  os << " WithdrawQuota:" << ftdc_struct.WithdrawQuota;
  os << " Reserve:" << ftdc_struct.Reserve;
  os << " TradingDay:" << ftdc_struct.TradingDay;
  os << " SettlementID:" << ftdc_struct.SettlementID;
  os << " Credit:" << ftdc_struct.Credit;
  os << " Mortgage:" << ftdc_struct.Mortgage;
  os << " ExchangeMargin:" << ftdc_struct.ExchangeMargin;
  os << " DeliveryMargin:" << ftdc_struct.DeliveryMargin;
  os << " ExchangeDeliveryMargin:" << ftdc_struct.ExchangeDeliveryMargin;
  os << " ReserveBalance:" << ftdc_struct.ReserveBalance;
  os << " CurrencyID:" << ftdc_struct.CurrencyID;
  os << " PreFundMortgageIn:" << ftdc_struct.PreFundMortgageIn;
  os << " PreFundMortgageOut:" << ftdc_struct.PreFundMortgageOut;
  os << " FundMortgageIn:" << ftdc_struct.FundMortgageIn;
  os << " FundMortgageOut:" << ftdc_struct.FundMortgageOut;
  os << " FundMortgageAvailable:" << ftdc_struct.FundMortgageAvailable;
  os << " MortgageableFund:" << ftdc_struct.MortgageableFund;
  os << " SpecProductMargin:" << ftdc_struct.SpecProductMargin;
  os << " SpecProductFrozenMargin:" << ftdc_struct.SpecProductFrozenMargin;
  os << " SpecProductCommission:" << ftdc_struct.SpecProductCommission;
  os << " SpecProductFrozenCommission:" << ftdc_struct.SpecProductFrozenCommission;
  os << " SpecProductPositionProfit:" << ftdc_struct.SpecProductPositionProfit;
  os << " SpecProductCloseProfit:" << ftdc_struct.SpecProductCloseProfit;
  os << " SpecProductPositionProfitByAlg:" << ftdc_struct.SpecProductPositionProfitByAlg;
  os << " SpecProductExchangeMargin:" << ftdc_struct.SpecProductExchangeMargin;
  os << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CThostFtdcInvestorPositionField& ftdc_struct) {
  os << "ftdc_struct(CThostFtdcInvestorPositionField) ---> InstrumentID:" << ftdc_struct.InstrumentID;
  os << " BrokerID:" << ftdc_struct.BrokerID;
  os << " InvestorID:" << ftdc_struct.InvestorID;
  os << " PosiDirection:" << ftdc_struct.PosiDirection;
  os << " HedgeFlag:" << ftdc_struct.HedgeFlag;
  os << " PositionDate:" << ftdc_struct.PositionDate;
  os << " YdPosition:" << ftdc_struct.YdPosition;
  os << " Position:" << ftdc_struct.Position;
  os << " LongFrozen:" << ftdc_struct.LongFrozen;
  os << " ShortFrozen:" << ftdc_struct.ShortFrozen;
  os << " LongFrozenAmount:" << ftdc_struct.LongFrozenAmount;
  os << " ShortFrozenAmount:" << ftdc_struct.ShortFrozenAmount;
  os << " OpenVolume:" << ftdc_struct.OpenVolume;
  os << " CloseVolume:" << ftdc_struct.CloseVolume;
  os << " OpenAmount:" << ftdc_struct.OpenAmount;
  os << " CloseAmount:" << ftdc_struct.CloseAmount;
  os << " PositionCost:" << ftdc_struct.PositionCost;
  os << " PreMargin:" << ftdc_struct.PreMargin;
  os << " UseMargin:" << ftdc_struct.UseMargin;
  os << " FrozenMargin:" << ftdc_struct.FrozenMargin;
  os << " FrozenCash:" << ftdc_struct.FrozenCash;
  os << " FrozenCommission:" << ftdc_struct.FrozenCommission;
  os << " CashIn:" << ftdc_struct.CashIn;
  os << " Commission:" << ftdc_struct.Commission;
  os << " CloseProfit:" << ftdc_struct.CloseProfit;
  os << " PositionProfit:" << ftdc_struct.PositionProfit;
  os << " PreSettlementPrice:" << ftdc_struct.PreSettlementPrice;
  os << " SettlementPrice:" << ftdc_struct.SettlementPrice;
  os << " TradingDay:" << ftdc_struct.TradingDay;
  os << " SettlementID:" << ftdc_struct.SettlementID;
  os << " OpenCost:" << ftdc_struct.OpenCost;
  os << " ExchangeMargin:" << ftdc_struct.ExchangeMargin;
  os << " CombPosition:" << ftdc_struct.CombPosition;
  os << " CombLongFrozen:" << ftdc_struct.CombLongFrozen;
  os << " CombShortFrozen:" << ftdc_struct.CombShortFrozen;
  os << " CloseProfitByDate:" << ftdc_struct.CloseProfitByDate;
  os << " CloseProfitByTrade:" << ftdc_struct.CloseProfitByTrade;
  os << " TodayPosition:" << ftdc_struct.TodayPosition;
  os << " MarginRateByMoney:" << ftdc_struct.MarginRateByMoney;
  os << " MarginRateByVolume:" << ftdc_struct.MarginRateByVolume;
  os << " StrikeFrozen:" << ftdc_struct.StrikeFrozen;
  os << " StrikeFrozenAmount:" << ftdc_struct.StrikeFrozenAmount;
  os << " AbandonFrozen:" << ftdc_struct.AbandonFrozen;
  os << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CThostFtdcInstrumentMarginRateField& ftdc_struct) {
  os << "ftdc_struct(CThostFtdcInstrumentMarginRateField) ---> InstrumentID:" << ftdc_struct.InstrumentID;
  os << " InvestorRange:" << ftdc_struct.InvestorRange;
  os << " BrokerID:" << ftdc_struct.BrokerID;
  os << " InvestorID:" << ftdc_struct.InvestorID;
  os << " HedgeFlag:" << ftdc_struct.HedgeFlag;
  os << " LongMarginRatioByMoney:" << ftdc_struct.LongMarginRatioByMoney;
  os << " LongMarginRatioByVolume:" << ftdc_struct.LongMarginRatioByVolume;
  os << " ShortMarginRatioByMoney:" << ftdc_struct.ShortMarginRatioByMoney;
  os << " ShortMarginRatioByVolume:" << ftdc_struct.ShortMarginRatioByVolume;
  os << " IsRelative:" << ftdc_struct.IsRelative;
  os << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CThostFtdcInstrumentCommissionRateField& ftdc_struct) {
  os << "ftdc_struct(CThostFtdcInstrumentCommissionRateField) ---> InstrumentID:" << ftdc_struct.InstrumentID;
  os << " InvestorRange:" << ftdc_struct.InvestorRange;
  os << " BrokerID:" << ftdc_struct.BrokerID;
  os << " InvestorID:" << ftdc_struct.InvestorID;
  os << " OpenRatioByMoney:" << ftdc_struct.OpenRatioByMoney;
  os << " OpenRatioByVolume:" << ftdc_struct.OpenRatioByVolume;
  os << " CloseRatioByMoney:" << ftdc_struct.CloseRatioByMoney;
  os << " CloseRatioByVolume:" << ftdc_struct.CloseRatioByVolume;
  os << " CloseTodayRatioByMoney:" << ftdc_struct.CloseTodayRatioByMoney;
  os << " CloseTodayRatioByVolume:" << ftdc_struct.CloseTodayRatioByVolume;
  os << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CThostFtdcDepthMarketDataField& ftdc_struct) {
  os << "ftdc_struct(CThostFtdcDepthMarketDataField) ---> TradingDay:" << ftdc_struct.TradingDay;
  os << " InstrumentID:" << ftdc_struct.InstrumentID;
  os << " ExchangeID:" << ftdc_struct.ExchangeID;
  os << " ExchangeInstID:" << ftdc_struct.ExchangeInstID;
  os << " LastPrice:" << ftdc_struct.LastPrice;
  os << " PreSettlementPrice:" << ftdc_struct.PreSettlementPrice;
  os << " PreClosePrice:" << ftdc_struct.PreClosePrice;
  os << " PreOpenInterest:" << ftdc_struct.PreOpenInterest;
  os << " OpenPrice:" << ftdc_struct.OpenPrice;
  os << " HighestPrice:" << ftdc_struct.HighestPrice;
  os << " LowestPrice:" << ftdc_struct.LowestPrice;
  os << " Volume:" << ftdc_struct.Volume;
  os << " Turnover:" << ftdc_struct.Turnover;
  os << " OpenInterest:" << ftdc_struct.OpenInterest;
  os << " ClosePrice:" << ftdc_struct.ClosePrice;
  os << " SettlementPrice:" << ftdc_struct.SettlementPrice;
  os << " UpperLimitPrice:" << ftdc_struct.UpperLimitPrice;
  os << " LowerLimitPrice:" << ftdc_struct.LowerLimitPrice;
  os << " PreDelta:" << ftdc_struct.PreDelta;
  os << " CurrDelta:" << ftdc_struct.CurrDelta;
  os << " UpdateTime:" << ftdc_struct.UpdateTime;
  os << " UpdateMillisec:" << ftdc_struct.UpdateMillisec;
  os << " BidPrice1:" << ftdc_struct.BidPrice1;
  os << " BidVolume1:" << ftdc_struct.BidVolume1;
  os << " AskPrice1:" << ftdc_struct.AskPrice1;
  os << " AskVolume1:" << ftdc_struct.AskVolume1;
  os << " BidPrice2:" << ftdc_struct.BidPrice2;
  os << " BidVolume2:" << ftdc_struct.BidVolume2;
  os << " AskPrice2:" << ftdc_struct.AskPrice2;
  os << " AskVolume2:" << ftdc_struct.AskVolume2;
  os << " BidPrice3:" << ftdc_struct.BidPrice3;
  os << " BidVolume3:" << ftdc_struct.BidVolume3;
  os << " AskPrice3:" << ftdc_struct.AskPrice3;
  os << " AskVolume3:" << ftdc_struct.AskVolume3;
  os << " BidPrice4:" << ftdc_struct.BidPrice4;
  os << " BidVolume4:" << ftdc_struct.BidVolume4;
  os << " AskPrice4:" << ftdc_struct.AskPrice4;
  os << " AskVolume4:" << ftdc_struct.AskVolume4;
  os << " BidPrice5:" << ftdc_struct.BidPrice5;
  os << " BidVolume5:" << ftdc_struct.BidVolume5;
  os << " AskPrice5:" << ftdc_struct.AskPrice5;
  os << " AskVolume5:" << ftdc_struct.AskVolume5;
  os << " AveragePrice:" << ftdc_struct.AveragePrice;
  os << " ActionDay:" << ftdc_struct.ActionDay;
  os << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CThostFtdcInstrumentTradingRightField& ftdc_struct) {
  os << "ftdc_struct(CThostFtdcInstrumentTradingRightField) ---> InstrumentID:" << ftdc_struct.InstrumentID;
  os << " InvestorRange:" << ftdc_struct.InvestorRange;
  os << " BrokerID:" << ftdc_struct.BrokerID;
  os << " InvestorID:" << ftdc_struct.InvestorID;
  os << " TradingRight:" << ftdc_struct.TradingRight;
  os << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CThostFtdcBrokerUserField& ftdc_struct) {
  os << "ftdc_struct(CThostFtdcBrokerUserField) ---> BrokerID:" << ftdc_struct.BrokerID;
  os << " UserID:" << ftdc_struct.UserID;
  os << " UserName:" << ftdc_struct.UserName;
  os << " UserType:" << ftdc_struct.UserType;
  os << " IsActive:" << ftdc_struct.IsActive;
  os << " IsUsingOTP:" << ftdc_struct.IsUsingOTP;
  os << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CThostFtdcBrokerUserPasswordField& ftdc_struct) {
  os << "ftdc_struct(CThostFtdcBrokerUserPasswordField) ---> BrokerID:" << ftdc_struct.BrokerID;
  os << " UserID:" << ftdc_struct.UserID;
  os << " Password:" << "it is a secret"; // ftdc_struct.Password;
  os << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CThostFtdcBrokerUserFunctionField& ftdc_struct) {
  os << "ftdc_struct(CThostFtdcBrokerUserFunctionField) ---> BrokerID:" << ftdc_struct.BrokerID;
  os << " UserID:" << ftdc_struct.UserID;
  os << " BrokerFunctionCode:" << ftdc_struct.BrokerFunctionCode;
  os << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CThostFtdcTraderOfferField& ftdc_struct) {
  os << "ftdc_struct(CThostFtdcTraderOfferField) ---> ExchangeID:" << ftdc_struct.ExchangeID;
  os << " TraderID:" << ftdc_struct.TraderID;
  os << " ParticipantID:" << ftdc_struct.ParticipantID;
  os << " Password:" << "it is a secret"; // ftdc_struct.Password;
  os << " InstallID:" << ftdc_struct.InstallID;
  os << " OrderLocalID:" << ftdc_struct.OrderLocalID;
  os << " TraderConnectStatus:" << ftdc_struct.TraderConnectStatus;
  os << " ConnectRequestDate:" << ftdc_struct.ConnectRequestDate;
  os << " ConnectRequestTime:" << ftdc_struct.ConnectRequestTime;
  os << " LastReportDate:" << ftdc_struct.LastReportDate;
  os << " LastReportTime:" << ftdc_struct.LastReportTime;
  os << " ConnectDate:" << ftdc_struct.ConnectDate;
  os << " ConnectTime:" << ftdc_struct.ConnectTime;
  os << " StartDate:" << ftdc_struct.StartDate;
  os << " StartTime:" << ftdc_struct.StartTime;
  os << " TradingDay:" << ftdc_struct.TradingDay;
  os << " BrokerID:" << ftdc_struct.BrokerID;
  os << " MaxTradeID:" << ftdc_struct.MaxTradeID;
  os << " MaxOrderMessageReference:" << ftdc_struct.MaxOrderMessageReference;
  os << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CThostFtdcSettlementInfoField& ftdc_struct) {
  os << "ftdc_struct(CThostFtdcSettlementInfoField) ---> TradingDay:" << ftdc_struct.TradingDay;
  os << " SettlementID:" << ftdc_struct.SettlementID;
  os << " BrokerID:" << ftdc_struct.BrokerID;
  os << " InvestorID:" << ftdc_struct.InvestorID;
  os << " SequenceNo:" << ftdc_struct.SequenceNo;
  os << " Content:" << ftdc_struct.Content;
  os << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CThostFtdcInstrumentMarginRateAdjustField& ftdc_struct) {
  os << "ftdc_struct(CThostFtdcInstrumentMarginRateAdjustField) ---> InstrumentID:" << ftdc_struct.InstrumentID;
  os << " InvestorRange:" << ftdc_struct.InvestorRange;
  os << " BrokerID:" << ftdc_struct.BrokerID;
  os << " InvestorID:" << ftdc_struct.InvestorID;
  os << " HedgeFlag:" << ftdc_struct.HedgeFlag;
  os << " LongMarginRatioByMoney:" << ftdc_struct.LongMarginRatioByMoney;
  os << " LongMarginRatioByVolume:" << ftdc_struct.LongMarginRatioByVolume;
  os << " ShortMarginRatioByMoney:" << ftdc_struct.ShortMarginRatioByMoney;
  os << " ShortMarginRatioByVolume:" << ftdc_struct.ShortMarginRatioByVolume;
  os << " IsRelative:" << ftdc_struct.IsRelative;
  os << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CThostFtdcExchangeMarginRateField& ftdc_struct) {
  os << "ftdc_struct(CThostFtdcExchangeMarginRateField) ---> BrokerID:" << ftdc_struct.BrokerID;
  os << " InstrumentID:" << ftdc_struct.InstrumentID;
  os << " HedgeFlag:" << ftdc_struct.HedgeFlag;
  os << " LongMarginRatioByMoney:" << ftdc_struct.LongMarginRatioByMoney;
  os << " LongMarginRatioByVolume:" << ftdc_struct.LongMarginRatioByVolume;
  os << " ShortMarginRatioByMoney:" << ftdc_struct.ShortMarginRatioByMoney;
  os << " ShortMarginRatioByVolume:" << ftdc_struct.ShortMarginRatioByVolume;
  os << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CThostFtdcExchangeMarginRateAdjustField& ftdc_struct) {
  os << "ftdc_struct(CThostFtdcExchangeMarginRateAdjustField) ---> BrokerID:" << ftdc_struct.BrokerID;
  os << " InstrumentID:" << ftdc_struct.InstrumentID;
  os << " HedgeFlag:" << ftdc_struct.HedgeFlag;
  os << " LongMarginRatioByMoney:" << ftdc_struct.LongMarginRatioByMoney;
  os << " LongMarginRatioByVolume:" << ftdc_struct.LongMarginRatioByVolume;
  os << " ShortMarginRatioByMoney:" << ftdc_struct.ShortMarginRatioByMoney;
  os << " ShortMarginRatioByVolume:" << ftdc_struct.ShortMarginRatioByVolume;
  os << " ExchLongMarginRatioByMoney:" << ftdc_struct.ExchLongMarginRatioByMoney;
  os << " ExchLongMarginRatioByVolume:" << ftdc_struct.ExchLongMarginRatioByVolume;
  os << " ExchShortMarginRatioByMoney:" << ftdc_struct.ExchShortMarginRatioByMoney;
  os << " ExchShortMarginRatioByVolume:" << ftdc_struct.ExchShortMarginRatioByVolume;
  os << " NoLongMarginRatioByMoney:" << ftdc_struct.NoLongMarginRatioByMoney;
  os << " NoLongMarginRatioByVolume:" << ftdc_struct.NoLongMarginRatioByVolume;
  os << " NoShortMarginRatioByMoney:" << ftdc_struct.NoShortMarginRatioByMoney;
  os << " NoShortMarginRatioByVolume:" << ftdc_struct.NoShortMarginRatioByVolume;
  os << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CThostFtdcExchangeRateField& ftdc_struct) {
  os << "ftdc_struct(CThostFtdcExchangeRateField) ---> BrokerID:" << ftdc_struct.BrokerID;
  os << " FromCurrencyID:" << ftdc_struct.FromCurrencyID;
  os << " FromCurrencyUnit:" << ftdc_struct.FromCurrencyUnit;
  os << " ToCurrencyID:" << ftdc_struct.ToCurrencyID;
  os << " ExchangeRate:" << ftdc_struct.ExchangeRate;
  os << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CThostFtdcSettlementRefField& ftdc_struct) {
  os << "ftdc_struct(CThostFtdcSettlementRefField) ---> TradingDay:" << ftdc_struct.TradingDay;
  os << " SettlementID:" << ftdc_struct.SettlementID;
  os << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CThostFtdcCurrentTimeField& ftdc_struct) {
  os << "ftdc_struct(CThostFtdcCurrentTimeField) ---> CurrDate:" << ftdc_struct.CurrDate;
  os << " CurrTime:" << ftdc_struct.CurrTime;
  os << " CurrMillisec:" << ftdc_struct.CurrMillisec;
  os << " ActionDay:" << ftdc_struct.ActionDay;
  os << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CThostFtdcCommPhaseField& ftdc_struct) {
  os << "ftdc_struct(CThostFtdcCommPhaseField) ---> TradingDay:" << ftdc_struct.TradingDay;
  os << " CommPhaseNo:" << ftdc_struct.CommPhaseNo;
  os << " SystemID:" << ftdc_struct.SystemID;
  os << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CThostFtdcLoginInfoField& ftdc_struct) {
  os << "ftdc_struct(CThostFtdcLoginInfoField) ---> FrontID:" << ftdc_struct.FrontID;
  os << " SessionID:" << ftdc_struct.SessionID;
  os << " BrokerID:" << ftdc_struct.BrokerID;
  os << " UserID:" << ftdc_struct.UserID;
  os << " LoginDate:" << ftdc_struct.LoginDate;
  os << " LoginTime:" << ftdc_struct.LoginTime;
  os << " IPAddress:" << ftdc_struct.IPAddress;
  os << " UserProductInfo:" << ftdc_struct.UserProductInfo;
  os << " InterfaceProductInfo:" << ftdc_struct.InterfaceProductInfo;
  os << " ProtocolInfo:" << ftdc_struct.ProtocolInfo;
  os << " SystemName:" << ftdc_struct.SystemName;
  os << " Password:" << "it is a secret"; // ftdc_struct.Password;
  os << " MaxOrderRef:" << ftdc_struct.MaxOrderRef;
  os << " SHFETime:" << ftdc_struct.SHFETime;
  os << " DCETime:" << ftdc_struct.DCETime;
  os << " CZCETime:" << ftdc_struct.CZCETime;
  os << " FFEXTime:" << ftdc_struct.FFEXTime;
  os << " MacAddress:" << ftdc_struct.MacAddress;
  os << " OneTimePassword:" << "it is a secret"; // ftdc_struct.OneTimePassword;
  os << " INETime:" << ftdc_struct.INETime;
  os << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CThostFtdcLogoutAllField& ftdc_struct) {
  os << "ftdc_struct(CThostFtdcLogoutAllField) ---> FrontID:" << ftdc_struct.FrontID;
  os << " SessionID:" << ftdc_struct.SessionID;
  os << " SystemName:" << ftdc_struct.SystemName;
  os << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CThostFtdcFrontStatusField& ftdc_struct) {
  os << "ftdc_struct(CThostFtdcFrontStatusField) ---> FrontID:" << ftdc_struct.FrontID;
  os << " LastReportDate:" << ftdc_struct.LastReportDate;
  os << " LastReportTime:" << ftdc_struct.LastReportTime;
  os << " IsActive:" << ftdc_struct.IsActive;
  os << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CThostFtdcUserPasswordUpdateField& ftdc_struct) {
  os << "ftdc_struct(CThostFtdcUserPasswordUpdateField) ---> BrokerID:" << ftdc_struct.BrokerID;
  os << " UserID:" << ftdc_struct.UserID;
  os << " OldPassword:" << "it is a secret"; // ftdc_struct.OldPassword;
  os << " NewPassword:" << "it is a secret"; // ftdc_struct.NewPassword;
  os << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CThostFtdcInputOrderField& ftdc_struct) {
  os << "ftdc_struct(CThostFtdcInputOrderField) ---> BrokerID:" << ftdc_struct.BrokerID;
  os << " InvestorID:" << ftdc_struct.InvestorID;
  os << " InstrumentID:" << ftdc_struct.InstrumentID;
  os << " OrderRef:" << ftdc_struct.OrderRef;
  os << " UserID:" << ftdc_struct.UserID;
  os << " OrderPriceType:" << ftdc_struct.OrderPriceType;
  os << " Direction:" << ftdc_struct.Direction;
  os << " CombOffsetFlag:" << ftdc_struct.CombOffsetFlag;
  os << " CombHedgeFlag:" << ftdc_struct.CombHedgeFlag;
  os << " LimitPrice:" << ftdc_struct.LimitPrice;
  os << " VolumeTotalOriginal:" << ftdc_struct.VolumeTotalOriginal;
  os << " TimeCondition:" << ftdc_struct.TimeCondition;
  os << " GTDDate:" << ftdc_struct.GTDDate;
  os << " VolumeCondition:" << ftdc_struct.VolumeCondition;
  os << " MinVolume:" << ftdc_struct.MinVolume;
  os << " ContingentCondition:" << ftdc_struct.ContingentCondition;
  os << " StopPrice:" << ftdc_struct.StopPrice;
  os << " ForceCloseReason:" << ftdc_struct.ForceCloseReason;
  os << " IsAutoSuspend:" << ftdc_struct.IsAutoSuspend;
  os << " BusinessUnit:" << ftdc_struct.BusinessUnit;
  os << " RequestID:" << ftdc_struct.RequestID;
  os << " UserForceClose:" << ftdc_struct.UserForceClose;
  os << " IsSwapOrder:" << ftdc_struct.IsSwapOrder;
  os << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CThostFtdcOrderField& ftdc_struct) {
  os << "ftdc_struct(CThostFtdcOrderField) ---> BrokerID:" << ftdc_struct.BrokerID;
  os << " InvestorID:" << ftdc_struct.InvestorID;
  os << " InstrumentID:" << ftdc_struct.InstrumentID;
  os << " OrderRef:" << ftdc_struct.OrderRef;
  os << " UserID:" << ftdc_struct.UserID;
  os << " OrderPriceType:" << ftdc_struct.OrderPriceType;
  os << " Direction:" << ftdc_struct.Direction;
  os << " CombOffsetFlag:" << ftdc_struct.CombOffsetFlag;
  os << " CombHedgeFlag:" << ftdc_struct.CombHedgeFlag;
  os << " LimitPrice:" << ftdc_struct.LimitPrice;
  os << " VolumeTotalOriginal:" << ftdc_struct.VolumeTotalOriginal;
  os << " TimeCondition:" << ftdc_struct.TimeCondition;
  os << " GTDDate:" << ftdc_struct.GTDDate;
  os << " VolumeCondition:" << ftdc_struct.VolumeCondition;
  os << " MinVolume:" << ftdc_struct.MinVolume;
  os << " ContingentCondition:" << ftdc_struct.ContingentCondition;
  os << " StopPrice:" << ftdc_struct.StopPrice;
  os << " ForceCloseReason:" << ftdc_struct.ForceCloseReason;
  os << " IsAutoSuspend:" << ftdc_struct.IsAutoSuspend;
  os << " BusinessUnit:" << ftdc_struct.BusinessUnit;
  os << " RequestID:" << ftdc_struct.RequestID;
  os << " OrderLocalID:" << ftdc_struct.OrderLocalID;
  os << " ExchangeID:" << ftdc_struct.ExchangeID;
  os << " ParticipantID:" << ftdc_struct.ParticipantID;
  os << " ClientID:" << ftdc_struct.ClientID;
  os << " ExchangeInstID:" << ftdc_struct.ExchangeInstID;
  os << " TraderID:" << ftdc_struct.TraderID;
  os << " InstallID:" << ftdc_struct.InstallID;
  os << " OrderSubmitStatus:" << ftdc_struct.OrderSubmitStatus;
  os << " NotifySequence:" << ftdc_struct.NotifySequence;
  os << " TradingDay:" << ftdc_struct.TradingDay;
  os << " SettlementID:" << ftdc_struct.SettlementID;
  os << " OrderSysID:" << ftdc_struct.OrderSysID;
  os << " OrderSource:" << ftdc_struct.OrderSource;
  os << " OrderStatus:" << ftdc_struct.OrderStatus;
  os << " OrderType:" << ftdc_struct.OrderType;
  os << " VolumeTraded:" << ftdc_struct.VolumeTraded;
  os << " VolumeTotal:" << ftdc_struct.VolumeTotal;
  os << " InsertDate:" << ftdc_struct.InsertDate;
  os << " InsertTime:" << ftdc_struct.InsertTime;
  os << " ActiveTime:" << ftdc_struct.ActiveTime;
  os << " SuspendTime:" << ftdc_struct.SuspendTime;
  os << " UpdateTime:" << ftdc_struct.UpdateTime;
  os << " CancelTime:" << ftdc_struct.CancelTime;
  os << " ActiveTraderID:" << ftdc_struct.ActiveTraderID;
  os << " ClearingPartID:" << ftdc_struct.ClearingPartID;
  os << " SequenceNo:" << ftdc_struct.SequenceNo;
  os << " FrontID:" << ftdc_struct.FrontID;
  os << " SessionID:" << ftdc_struct.SessionID;
  os << " UserProductInfo:" << ftdc_struct.UserProductInfo;
  os << " StatusMsg:" << ftdc_struct.StatusMsg;
  os << " UserForceClose:" << ftdc_struct.UserForceClose;
  os << " ActiveUserID:" << ftdc_struct.ActiveUserID;
  os << " BrokerOrderSeq:" << ftdc_struct.BrokerOrderSeq;
  os << " RelativeOrderSysID:" << ftdc_struct.RelativeOrderSysID;
  os << " ZCETotalTradedVolume:" << ftdc_struct.ZCETotalTradedVolume;
  os << " IsSwapOrder:" << ftdc_struct.IsSwapOrder;
  os << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CThostFtdcExchangeOrderField& ftdc_struct) {
  os << "ftdc_struct(CThostFtdcExchangeOrderField) ---> OrderPriceType:" << ftdc_struct.OrderPriceType;
  os << " Direction:" << ftdc_struct.Direction;
  os << " CombOffsetFlag:" << ftdc_struct.CombOffsetFlag;
  os << " CombHedgeFlag:" << ftdc_struct.CombHedgeFlag;
  os << " LimitPrice:" << ftdc_struct.LimitPrice;
  os << " VolumeTotalOriginal:" << ftdc_struct.VolumeTotalOriginal;
  os << " TimeCondition:" << ftdc_struct.TimeCondition;
  os << " GTDDate:" << ftdc_struct.GTDDate;
  os << " VolumeCondition:" << ftdc_struct.VolumeCondition;
  os << " MinVolume:" << ftdc_struct.MinVolume;
  os << " ContingentCondition:" << ftdc_struct.ContingentCondition;
  os << " StopPrice:" << ftdc_struct.StopPrice;
  os << " ForceCloseReason:" << ftdc_struct.ForceCloseReason;
  os << " IsAutoSuspend:" << ftdc_struct.IsAutoSuspend;
  os << " BusinessUnit:" << ftdc_struct.BusinessUnit;
  os << " RequestID:" << ftdc_struct.RequestID;
  os << " OrderLocalID:" << ftdc_struct.OrderLocalID;
  os << " ExchangeID:" << ftdc_struct.ExchangeID;
  os << " ParticipantID:" << ftdc_struct.ParticipantID;
  os << " ClientID:" << ftdc_struct.ClientID;
  os << " ExchangeInstID:" << ftdc_struct.ExchangeInstID;
  os << " TraderID:" << ftdc_struct.TraderID;
  os << " InstallID:" << ftdc_struct.InstallID;
  os << " OrderSubmitStatus:" << ftdc_struct.OrderSubmitStatus;
  os << " NotifySequence:" << ftdc_struct.NotifySequence;
  os << " TradingDay:" << ftdc_struct.TradingDay;
  os << " SettlementID:" << ftdc_struct.SettlementID;
  os << " OrderSysID:" << ftdc_struct.OrderSysID;
  os << " OrderSource:" << ftdc_struct.OrderSource;
  os << " OrderStatus:" << ftdc_struct.OrderStatus;
  os << " OrderType:" << ftdc_struct.OrderType;
  os << " VolumeTraded:" << ftdc_struct.VolumeTraded;
  os << " VolumeTotal:" << ftdc_struct.VolumeTotal;
  os << " InsertDate:" << ftdc_struct.InsertDate;
  os << " InsertTime:" << ftdc_struct.InsertTime;
  os << " ActiveTime:" << ftdc_struct.ActiveTime;
  os << " SuspendTime:" << ftdc_struct.SuspendTime;
  os << " UpdateTime:" << ftdc_struct.UpdateTime;
  os << " CancelTime:" << ftdc_struct.CancelTime;
  os << " ActiveTraderID:" << ftdc_struct.ActiveTraderID;
  os << " ClearingPartID:" << ftdc_struct.ClearingPartID;
  os << " SequenceNo:" << ftdc_struct.SequenceNo;
  os << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CThostFtdcExchangeOrderInsertErrorField& ftdc_struct) {
  os << "ftdc_struct(CThostFtdcExchangeOrderInsertErrorField) ---> ExchangeID:" << ftdc_struct.ExchangeID;
  os << " ParticipantID:" << ftdc_struct.ParticipantID;
  os << " TraderID:" << ftdc_struct.TraderID;
  os << " InstallID:" << ftdc_struct.InstallID;
  os << " OrderLocalID:" << ftdc_struct.OrderLocalID;
  os << " ErrorID:" << ftdc_struct.ErrorID;
  os << " ErrorMsg:" << ftdc_struct.ErrorMsg;
  os << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CThostFtdcInputOrderActionField& ftdc_struct) {
  os << "ftdc_struct(CThostFtdcInputOrderActionField) ---> BrokerID:" << ftdc_struct.BrokerID;
  os << " InvestorID:" << ftdc_struct.InvestorID;
  os << " OrderActionRef:" << ftdc_struct.OrderActionRef;
  os << " OrderRef:" << ftdc_struct.OrderRef;
  os << " RequestID:" << ftdc_struct.RequestID;
  os << " FrontID:" << ftdc_struct.FrontID;
  os << " SessionID:" << ftdc_struct.SessionID;
  os << " ExchangeID:" << ftdc_struct.ExchangeID;
  os << " OrderSysID:" << ftdc_struct.OrderSysID;
  os << " ActionFlag:" << ftdc_struct.ActionFlag;
  os << " LimitPrice:" << ftdc_struct.LimitPrice;
  os << " VolumeChange:" << ftdc_struct.VolumeChange;
  os << " UserID:" << ftdc_struct.UserID;
  os << " InstrumentID:" << ftdc_struct.InstrumentID;
  os << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CThostFtdcOrderActionField& ftdc_struct) {
  os << "ftdc_struct(CThostFtdcOrderActionField) ---> BrokerID:" << ftdc_struct.BrokerID;
  os << " InvestorID:" << ftdc_struct.InvestorID;
  os << " OrderActionRef:" << ftdc_struct.OrderActionRef;
  os << " OrderRef:" << ftdc_struct.OrderRef;
  os << " RequestID:" << ftdc_struct.RequestID;
  os << " FrontID:" << ftdc_struct.FrontID;
  os << " SessionID:" << ftdc_struct.SessionID;
  os << " ExchangeID:" << ftdc_struct.ExchangeID;
  os << " OrderSysID:" << ftdc_struct.OrderSysID;
  os << " ActionFlag:" << ftdc_struct.ActionFlag;
  os << " LimitPrice:" << ftdc_struct.LimitPrice;
  os << " VolumeChange:" << ftdc_struct.VolumeChange;
  os << " ActionDate:" << ftdc_struct.ActionDate;
  os << " ActionTime:" << ftdc_struct.ActionTime;
  os << " TraderID:" << ftdc_struct.TraderID;
  os << " InstallID:" << ftdc_struct.InstallID;
  os << " OrderLocalID:" << ftdc_struct.OrderLocalID;
  os << " ActionLocalID:" << ftdc_struct.ActionLocalID;
  os << " ParticipantID:" << ftdc_struct.ParticipantID;
  os << " ClientID:" << ftdc_struct.ClientID;
  os << " BusinessUnit:" << ftdc_struct.BusinessUnit;
  os << " OrderActionStatus:" << ftdc_struct.OrderActionStatus;
  os << " UserID:" << ftdc_struct.UserID;
  os << " StatusMsg:" << ftdc_struct.StatusMsg;
  os << " InstrumentID:" << ftdc_struct.InstrumentID;
  os << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CThostFtdcExchangeOrderActionField& ftdc_struct) {
  os << "ftdc_struct(CThostFtdcExchangeOrderActionField) ---> ExchangeID:" << ftdc_struct.ExchangeID;
  os << " OrderSysID:" << ftdc_struct.OrderSysID;
  os << " ActionFlag:" << ftdc_struct.ActionFlag;
  os << " LimitPrice:" << ftdc_struct.LimitPrice;
  os << " VolumeChange:" << ftdc_struct.VolumeChange;
  os << " ActionDate:" << ftdc_struct.ActionDate;
  os << " ActionTime:" << ftdc_struct.ActionTime;
  os << " TraderID:" << ftdc_struct.TraderID;
  os << " InstallID:" << ftdc_struct.InstallID;
  os << " OrderLocalID:" << ftdc_struct.OrderLocalID;
  os << " ActionLocalID:" << ftdc_struct.ActionLocalID;
  os << " ParticipantID:" << ftdc_struct.ParticipantID;
  os << " ClientID:" << ftdc_struct.ClientID;
  os << " BusinessUnit:" << ftdc_struct.BusinessUnit;
  os << " OrderActionStatus:" << ftdc_struct.OrderActionStatus;
  os << " UserID:" << ftdc_struct.UserID;
  os << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CThostFtdcExchangeOrderActionErrorField& ftdc_struct) {
  os << "ftdc_struct(CThostFtdcExchangeOrderActionErrorField) ---> ExchangeID:" << ftdc_struct.ExchangeID;
  os << " OrderSysID:" << ftdc_struct.OrderSysID;
  os << " TraderID:" << ftdc_struct.TraderID;
  os << " InstallID:" << ftdc_struct.InstallID;
  os << " OrderLocalID:" << ftdc_struct.OrderLocalID;
  os << " ActionLocalID:" << ftdc_struct.ActionLocalID;
  os << " ErrorID:" << ftdc_struct.ErrorID;
  os << " ErrorMsg:" << ftdc_struct.ErrorMsg;
  os << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CThostFtdcExchangeTradeField& ftdc_struct) {
  os << "ftdc_struct(CThostFtdcExchangeTradeField) ---> ExchangeID:" << ftdc_struct.ExchangeID;
  os << " TradeID:" << ftdc_struct.TradeID;
  os << " Direction:" << ftdc_struct.Direction;
  os << " OrderSysID:" << ftdc_struct.OrderSysID;
  os << " ParticipantID:" << ftdc_struct.ParticipantID;
  os << " ClientID:" << ftdc_struct.ClientID;
  os << " TradingRole:" << ftdc_struct.TradingRole;
  os << " ExchangeInstID:" << ftdc_struct.ExchangeInstID;
  os << " OffsetFlag:" << ftdc_struct.OffsetFlag;
  os << " HedgeFlag:" << ftdc_struct.HedgeFlag;
  os << " Price:" << ftdc_struct.Price;
  os << " Volume:" << ftdc_struct.Volume;
  os << " TradeDate:" << ftdc_struct.TradeDate;
  os << " TradeTime:" << ftdc_struct.TradeTime;
  os << " TradeType:" << ftdc_struct.TradeType;
  os << " PriceSource:" << ftdc_struct.PriceSource;
  os << " TraderID:" << ftdc_struct.TraderID;
  os << " OrderLocalID:" << ftdc_struct.OrderLocalID;
  os << " ClearingPartID:" << ftdc_struct.ClearingPartID;
  os << " BusinessUnit:" << ftdc_struct.BusinessUnit;
  os << " SequenceNo:" << ftdc_struct.SequenceNo;
  os << " TradeSource:" << ftdc_struct.TradeSource;
  os << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CThostFtdcTradeField& ftdc_struct) {
  os << "ftdc_struct(CThostFtdcTradeField) ---> BrokerID:" << ftdc_struct.BrokerID;
  os << " InvestorID:" << ftdc_struct.InvestorID;
  os << " InstrumentID:" << ftdc_struct.InstrumentID;
  os << " OrderRef:" << ftdc_struct.OrderRef;
  os << " UserID:" << ftdc_struct.UserID;
  os << " ExchangeID:" << ftdc_struct.ExchangeID;
  os << " TradeID:" << ftdc_struct.TradeID;
  os << " Direction:" << ftdc_struct.Direction;
  os << " OrderSysID:" << ftdc_struct.OrderSysID;
  os << " ParticipantID:" << ftdc_struct.ParticipantID;
  os << " ClientID:" << ftdc_struct.ClientID;
  os << " TradingRole:" << ftdc_struct.TradingRole;
  os << " ExchangeInstID:" << ftdc_struct.ExchangeInstID;
  os << " OffsetFlag:" << ftdc_struct.OffsetFlag;
  os << " HedgeFlag:" << ftdc_struct.HedgeFlag;
  os << " Price:" << ftdc_struct.Price;
  os << " Volume:" << ftdc_struct.Volume;
  os << " TradeDate:" << ftdc_struct.TradeDate;
  os << " TradeTime:" << ftdc_struct.TradeTime;
  os << " TradeType:" << ftdc_struct.TradeType;
  os << " PriceSource:" << ftdc_struct.PriceSource;
  os << " TraderID:" << ftdc_struct.TraderID;
  os << " OrderLocalID:" << ftdc_struct.OrderLocalID;
  os << " ClearingPartID:" << ftdc_struct.ClearingPartID;
  os << " BusinessUnit:" << ftdc_struct.BusinessUnit;
  os << " SequenceNo:" << ftdc_struct.SequenceNo;
  os << " TradingDay:" << ftdc_struct.TradingDay;
  os << " SettlementID:" << ftdc_struct.SettlementID;
  os << " BrokerOrderSeq:" << ftdc_struct.BrokerOrderSeq;
  os << " TradeSource:" << ftdc_struct.TradeSource;
  os << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CThostFtdcUserSessionField& ftdc_struct) {
  os << "ftdc_struct(CThostFtdcUserSessionField) ---> FrontID:" << ftdc_struct.FrontID;
  os << " SessionID:" << ftdc_struct.SessionID;
  os << " BrokerID:" << ftdc_struct.BrokerID;
  os << " UserID:" << ftdc_struct.UserID;
  os << " LoginDate:" << ftdc_struct.LoginDate;
  os << " LoginTime:" << ftdc_struct.LoginTime;
  os << " IPAddress:" << ftdc_struct.IPAddress;
  os << " UserProductInfo:" << ftdc_struct.UserProductInfo;
  os << " InterfaceProductInfo:" << ftdc_struct.InterfaceProductInfo;
  os << " ProtocolInfo:" << ftdc_struct.ProtocolInfo;
  os << " MacAddress:" << ftdc_struct.MacAddress;
  os << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CThostFtdcQueryMaxOrderVolumeField& ftdc_struct) {
  os << "ftdc_struct(CThostFtdcQueryMaxOrderVolumeField) ---> BrokerID:" << ftdc_struct.BrokerID;
  os << " InvestorID:" << ftdc_struct.InvestorID;
  os << " InstrumentID:" << ftdc_struct.InstrumentID;
  os << " Direction:" << ftdc_struct.Direction;
  os << " OffsetFlag:" << ftdc_struct.OffsetFlag;
  os << " HedgeFlag:" << ftdc_struct.HedgeFlag;
  os << " MaxVolume:" << ftdc_struct.MaxVolume;
  os << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CThostFtdcSettlementInfoConfirmField& ftdc_struct) {
  os << "ftdc_struct(CThostFtdcSettlementInfoConfirmField) ---> BrokerID:" << ftdc_struct.BrokerID;
  os << " InvestorID:" << ftdc_struct.InvestorID;
  os << " ConfirmDate:" << ftdc_struct.ConfirmDate;
  os << " ConfirmTime:" << ftdc_struct.ConfirmTime;
  os << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CThostFtdcSyncDepositField& ftdc_struct) {
  os << "ftdc_struct(CThostFtdcSyncDepositField) ---> DepositSeqNo:" << ftdc_struct.DepositSeqNo;
  os << " BrokerID:" << ftdc_struct.BrokerID;
  os << " InvestorID:" << ftdc_struct.InvestorID;
  os << " Deposit:" << ftdc_struct.Deposit;
  os << " IsForce:" << ftdc_struct.IsForce;
  os << " CurrencyID:" << ftdc_struct.CurrencyID;
  os << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CThostFtdcSyncFundMortgageField& ftdc_struct) {
  os << "ftdc_struct(CThostFtdcSyncFundMortgageField) ---> MortgageSeqNo:" << ftdc_struct.MortgageSeqNo;
  os << " BrokerID:" << ftdc_struct.BrokerID;
  os << " InvestorID:" << ftdc_struct.InvestorID;
  os << " FromCurrencyID:" << ftdc_struct.FromCurrencyID;
  os << " MortgageAmount:" << ftdc_struct.MortgageAmount;
  os << " ToCurrencyID:" << ftdc_struct.ToCurrencyID;
  os << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CThostFtdcBrokerSyncField& ftdc_struct) {
  os << "ftdc_struct(CThostFtdcBrokerSyncField) ---> BrokerID:" << ftdc_struct.BrokerID;
  os << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CThostFtdcSyncingInvestorField& ftdc_struct) {
  os << "ftdc_struct(CThostFtdcSyncingInvestorField) ---> InvestorID:" << ftdc_struct.InvestorID;
  os << " BrokerID:" << ftdc_struct.BrokerID;
  os << " InvestorGroupID:" << ftdc_struct.InvestorGroupID;
  os << " InvestorName:" << ftdc_struct.InvestorName;
  os << " IdentifiedCardType:" << ftdc_struct.IdentifiedCardType;
  os << " IdentifiedCardNo:" << ftdc_struct.IdentifiedCardNo;
  os << " IsActive:" << ftdc_struct.IsActive;
  os << " Telephone:" << ftdc_struct.Telephone;
  os << " Address:" << ftdc_struct.Address;
  os << " OpenDate:" << ftdc_struct.OpenDate;
  os << " Mobile:" << ftdc_struct.Mobile;
  os << " CommModelID:" << ftdc_struct.CommModelID;
  os << " MarginModelID:" << ftdc_struct.MarginModelID;
  os << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CThostFtdcSyncingTradingCodeField& ftdc_struct) {
  os << "ftdc_struct(CThostFtdcSyncingTradingCodeField) ---> InvestorID:" << ftdc_struct.InvestorID;
  os << " BrokerID:" << ftdc_struct.BrokerID;
  os << " ExchangeID:" << ftdc_struct.ExchangeID;
  os << " ClientID:" << ftdc_struct.ClientID;
  os << " IsActive:" << ftdc_struct.IsActive;
  os << " ClientIDType:" << ftdc_struct.ClientIDType;
  os << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CThostFtdcSyncingInvestorGroupField& ftdc_struct) {
  os << "ftdc_struct(CThostFtdcSyncingInvestorGroupField) ---> BrokerID:" << ftdc_struct.BrokerID;
  os << " InvestorGroupID:" << ftdc_struct.InvestorGroupID;
  os << " InvestorGroupName:" << ftdc_struct.InvestorGroupName;
  os << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CThostFtdcSyncingTradingAccountField& ftdc_struct) {
  os << "ftdc_struct(CThostFtdcSyncingTradingAccountField) ---> BrokerID:" << ftdc_struct.BrokerID;
  os << " AccountID:" << ftdc_struct.AccountID;
  os << " PreMortgage:" << ftdc_struct.PreMortgage;
  os << " PreCredit:" << ftdc_struct.PreCredit;
  os << " PreDeposit:" << ftdc_struct.PreDeposit;
  os << " PreBalance:" << ftdc_struct.PreBalance;
  os << " PreMargin:" << ftdc_struct.PreMargin;
  os << " InterestBase:" << ftdc_struct.InterestBase;
  os << " Interest:" << ftdc_struct.Interest;
  os << " Deposit:" << ftdc_struct.Deposit;
  os << " Withdraw:" << ftdc_struct.Withdraw;
  os << " FrozenMargin:" << ftdc_struct.FrozenMargin;
  os << " FrozenCash:" << ftdc_struct.FrozenCash;
  os << " FrozenCommission:" << ftdc_struct.FrozenCommission;
  os << " CurrMargin:" << ftdc_struct.CurrMargin;
  os << " CashIn:" << ftdc_struct.CashIn;
  os << " Commission:" << ftdc_struct.Commission;
  os << " CloseProfit:" << ftdc_struct.CloseProfit;
  os << " PositionProfit:" << ftdc_struct.PositionProfit;
  os << " Balance:" << ftdc_struct.Balance;
  os << " Available:" << ftdc_struct.Available;
  os << " WithdrawQuota:" << ftdc_struct.WithdrawQuota;
  os << " Reserve:" << ftdc_struct.Reserve;
  os << " TradingDay:" << ftdc_struct.TradingDay;
  os << " SettlementID:" << ftdc_struct.SettlementID;
  os << " Credit:" << ftdc_struct.Credit;
  os << " Mortgage:" << ftdc_struct.Mortgage;
  os << " ExchangeMargin:" << ftdc_struct.ExchangeMargin;
  os << " DeliveryMargin:" << ftdc_struct.DeliveryMargin;
  os << " ExchangeDeliveryMargin:" << ftdc_struct.ExchangeDeliveryMargin;
  os << " ReserveBalance:" << ftdc_struct.ReserveBalance;
  os << " CurrencyID:" << ftdc_struct.CurrencyID;
  os << " PreFundMortgageIn:" << ftdc_struct.PreFundMortgageIn;
  os << " PreFundMortgageOut:" << ftdc_struct.PreFundMortgageOut;
  os << " FundMortgageIn:" << ftdc_struct.FundMortgageIn;
  os << " FundMortgageOut:" << ftdc_struct.FundMortgageOut;
  os << " FundMortgageAvailable:" << ftdc_struct.FundMortgageAvailable;
  os << " MortgageableFund:" << ftdc_struct.MortgageableFund;
  os << " SpecProductMargin:" << ftdc_struct.SpecProductMargin;
  os << " SpecProductFrozenMargin:" << ftdc_struct.SpecProductFrozenMargin;
  os << " SpecProductCommission:" << ftdc_struct.SpecProductCommission;
  os << " SpecProductFrozenCommission:" << ftdc_struct.SpecProductFrozenCommission;
  os << " SpecProductPositionProfit:" << ftdc_struct.SpecProductPositionProfit;
  os << " SpecProductCloseProfit:" << ftdc_struct.SpecProductCloseProfit;
  os << " SpecProductPositionProfitByAlg:" << ftdc_struct.SpecProductPositionProfitByAlg;
  os << " SpecProductExchangeMargin:" << ftdc_struct.SpecProductExchangeMargin;
  os << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CThostFtdcSyncingInvestorPositionField& ftdc_struct) {
  os << "ftdc_struct(CThostFtdcSyncingInvestorPositionField) ---> InstrumentID:" << ftdc_struct.InstrumentID;
  os << " BrokerID:" << ftdc_struct.BrokerID;
  os << " InvestorID:" << ftdc_struct.InvestorID;
  os << " PosiDirection:" << ftdc_struct.PosiDirection;
  os << " HedgeFlag:" << ftdc_struct.HedgeFlag;
  os << " PositionDate:" << ftdc_struct.PositionDate;
  os << " YdPosition:" << ftdc_struct.YdPosition;
  os << " Position:" << ftdc_struct.Position;
  os << " LongFrozen:" << ftdc_struct.LongFrozen;
  os << " ShortFrozen:" << ftdc_struct.ShortFrozen;
  os << " LongFrozenAmount:" << ftdc_struct.LongFrozenAmount;
  os << " ShortFrozenAmount:" << ftdc_struct.ShortFrozenAmount;
  os << " OpenVolume:" << ftdc_struct.OpenVolume;
  os << " CloseVolume:" << ftdc_struct.CloseVolume;
  os << " OpenAmount:" << ftdc_struct.OpenAmount;
  os << " CloseAmount:" << ftdc_struct.CloseAmount;
  os << " PositionCost:" << ftdc_struct.PositionCost;
  os << " PreMargin:" << ftdc_struct.PreMargin;
  os << " UseMargin:" << ftdc_struct.UseMargin;
  os << " FrozenMargin:" << ftdc_struct.FrozenMargin;
  os << " FrozenCash:" << ftdc_struct.FrozenCash;
  os << " FrozenCommission:" << ftdc_struct.FrozenCommission;
  os << " CashIn:" << ftdc_struct.CashIn;
  os << " Commission:" << ftdc_struct.Commission;
  os << " CloseProfit:" << ftdc_struct.CloseProfit;
  os << " PositionProfit:" << ftdc_struct.PositionProfit;
  os << " PreSettlementPrice:" << ftdc_struct.PreSettlementPrice;
  os << " SettlementPrice:" << ftdc_struct.SettlementPrice;
  os << " TradingDay:" << ftdc_struct.TradingDay;
  os << " SettlementID:" << ftdc_struct.SettlementID;
  os << " OpenCost:" << ftdc_struct.OpenCost;
  os << " ExchangeMargin:" << ftdc_struct.ExchangeMargin;
  os << " CombPosition:" << ftdc_struct.CombPosition;
  os << " CombLongFrozen:" << ftdc_struct.CombLongFrozen;
  os << " CombShortFrozen:" << ftdc_struct.CombShortFrozen;
  os << " CloseProfitByDate:" << ftdc_struct.CloseProfitByDate;
  os << " CloseProfitByTrade:" << ftdc_struct.CloseProfitByTrade;
  os << " TodayPosition:" << ftdc_struct.TodayPosition;
  os << " MarginRateByMoney:" << ftdc_struct.MarginRateByMoney;
  os << " MarginRateByVolume:" << ftdc_struct.MarginRateByVolume;
  os << " StrikeFrozen:" << ftdc_struct.StrikeFrozen;
  os << " StrikeFrozenAmount:" << ftdc_struct.StrikeFrozenAmount;
  os << " AbandonFrozen:" << ftdc_struct.AbandonFrozen;
  os << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CThostFtdcSyncingInstrumentMarginRateField& ftdc_struct) {
  os << "ftdc_struct(CThostFtdcSyncingInstrumentMarginRateField) ---> InstrumentID:" << ftdc_struct.InstrumentID;
  os << " InvestorRange:" << ftdc_struct.InvestorRange;
  os << " BrokerID:" << ftdc_struct.BrokerID;
  os << " InvestorID:" << ftdc_struct.InvestorID;
  os << " HedgeFlag:" << ftdc_struct.HedgeFlag;
  os << " LongMarginRatioByMoney:" << ftdc_struct.LongMarginRatioByMoney;
  os << " LongMarginRatioByVolume:" << ftdc_struct.LongMarginRatioByVolume;
  os << " ShortMarginRatioByMoney:" << ftdc_struct.ShortMarginRatioByMoney;
  os << " ShortMarginRatioByVolume:" << ftdc_struct.ShortMarginRatioByVolume;
  os << " IsRelative:" << ftdc_struct.IsRelative;
  os << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CThostFtdcSyncingInstrumentCommissionRateField& ftdc_struct) {
  os << "ftdc_struct(CThostFtdcSyncingInstrumentCommissionRateField) ---> InstrumentID:" << ftdc_struct.InstrumentID;
  os << " InvestorRange:" << ftdc_struct.InvestorRange;
  os << " BrokerID:" << ftdc_struct.BrokerID;
  os << " InvestorID:" << ftdc_struct.InvestorID;
  os << " OpenRatioByMoney:" << ftdc_struct.OpenRatioByMoney;
  os << " OpenRatioByVolume:" << ftdc_struct.OpenRatioByVolume;
  os << " CloseRatioByMoney:" << ftdc_struct.CloseRatioByMoney;
  os << " CloseRatioByVolume:" << ftdc_struct.CloseRatioByVolume;
  os << " CloseTodayRatioByMoney:" << ftdc_struct.CloseTodayRatioByMoney;
  os << " CloseTodayRatioByVolume:" << ftdc_struct.CloseTodayRatioByVolume;
  os << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CThostFtdcSyncingInstrumentTradingRightField& ftdc_struct) {
  os << "ftdc_struct(CThostFtdcSyncingInstrumentTradingRightField) ---> InstrumentID:" << ftdc_struct.InstrumentID;
  os << " InvestorRange:" << ftdc_struct.InvestorRange;
  os << " BrokerID:" << ftdc_struct.BrokerID;
  os << " InvestorID:" << ftdc_struct.InvestorID;
  os << " TradingRight:" << ftdc_struct.TradingRight;
  os << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CThostFtdcQryOrderField& ftdc_struct) {
  os << "ftdc_struct(CThostFtdcQryOrderField) ---> BrokerID:" << ftdc_struct.BrokerID;
  os << " InvestorID:" << ftdc_struct.InvestorID;
  os << " InstrumentID:" << ftdc_struct.InstrumentID;
  os << " ExchangeID:" << ftdc_struct.ExchangeID;
  os << " OrderSysID:" << ftdc_struct.OrderSysID;
  os << " InsertTimeStart:" << ftdc_struct.InsertTimeStart;
  os << " InsertTimeEnd:" << ftdc_struct.InsertTimeEnd;
  os << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CThostFtdcQryTradeField& ftdc_struct) {
  os << "ftdc_struct(CThostFtdcQryTradeField) ---> BrokerID:" << ftdc_struct.BrokerID;
  os << " InvestorID:" << ftdc_struct.InvestorID;
  os << " InstrumentID:" << ftdc_struct.InstrumentID;
  os << " ExchangeID:" << ftdc_struct.ExchangeID;
  os << " TradeID:" << ftdc_struct.TradeID;
  os << " TradeTimeStart:" << ftdc_struct.TradeTimeStart;
  os << " TradeTimeEnd:" << ftdc_struct.TradeTimeEnd;
  os << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CThostFtdcQryInvestorPositionField& ftdc_struct) {
  os << "ftdc_struct(CThostFtdcQryInvestorPositionField) ---> BrokerID:" << ftdc_struct.BrokerID;
  os << " InvestorID:" << ftdc_struct.InvestorID;
  os << " InstrumentID:" << ftdc_struct.InstrumentID;
  os << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CThostFtdcQryTradingAccountField& ftdc_struct) {
  os << "ftdc_struct(CThostFtdcQryTradingAccountField) ---> BrokerID:" << ftdc_struct.BrokerID;
  os << " InvestorID:" << ftdc_struct.InvestorID;
  os << " CurrencyID:" << ftdc_struct.CurrencyID;
  os << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CThostFtdcQryInvestorField& ftdc_struct) {
  os << "ftdc_struct(CThostFtdcQryInvestorField) ---> BrokerID:" << ftdc_struct.BrokerID;
  os << " InvestorID:" << ftdc_struct.InvestorID;
  os << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CThostFtdcQryTradingCodeField& ftdc_struct) {
  os << "ftdc_struct(CThostFtdcQryTradingCodeField) ---> BrokerID:" << ftdc_struct.BrokerID;
  os << " InvestorID:" << ftdc_struct.InvestorID;
  os << " ExchangeID:" << ftdc_struct.ExchangeID;
  os << " ClientID:" << ftdc_struct.ClientID;
  os << " ClientIDType:" << ftdc_struct.ClientIDType;
  os << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CThostFtdcQryInvestorGroupField& ftdc_struct) {
  os << "ftdc_struct(CThostFtdcQryInvestorGroupField) ---> BrokerID:" << ftdc_struct.BrokerID;
  os << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CThostFtdcQryInstrumentMarginRateField& ftdc_struct) {
  os << "ftdc_struct(CThostFtdcQryInstrumentMarginRateField) ---> BrokerID:" << ftdc_struct.BrokerID;
  os << " InvestorID:" << ftdc_struct.InvestorID;
  os << " InstrumentID:" << ftdc_struct.InstrumentID;
  os << " HedgeFlag:" << ftdc_struct.HedgeFlag;
  os << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CThostFtdcQryInstrumentCommissionRateField& ftdc_struct) {
  os << "ftdc_struct(CThostFtdcQryInstrumentCommissionRateField) ---> BrokerID:" << ftdc_struct.BrokerID;
  os << " InvestorID:" << ftdc_struct.InvestorID;
  os << " InstrumentID:" << ftdc_struct.InstrumentID;
  os << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CThostFtdcQryInstrumentTradingRightField& ftdc_struct) {
  os << "ftdc_struct(CThostFtdcQryInstrumentTradingRightField) ---> BrokerID:" << ftdc_struct.BrokerID;
  os << " InvestorID:" << ftdc_struct.InvestorID;
  os << " InstrumentID:" << ftdc_struct.InstrumentID;
  os << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CThostFtdcQryBrokerField& ftdc_struct) {
  os << "ftdc_struct(CThostFtdcQryBrokerField) ---> BrokerID:" << ftdc_struct.BrokerID;
  os << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CThostFtdcQryTraderField& ftdc_struct) {
  os << "ftdc_struct(CThostFtdcQryTraderField) ---> ExchangeID:" << ftdc_struct.ExchangeID;
  os << " ParticipantID:" << ftdc_struct.ParticipantID;
  os << " TraderID:" << ftdc_struct.TraderID;
  os << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CThostFtdcQrySuperUserFunctionField& ftdc_struct) {
  os << "ftdc_struct(CThostFtdcQrySuperUserFunctionField) ---> UserID:" << ftdc_struct.UserID;
  os << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CThostFtdcQryUserSessionField& ftdc_struct) {
  os << "ftdc_struct(CThostFtdcQryUserSessionField) ---> FrontID:" << ftdc_struct.FrontID;
  os << " SessionID:" << ftdc_struct.SessionID;
  os << " BrokerID:" << ftdc_struct.BrokerID;
  os << " UserID:" << ftdc_struct.UserID;
  os << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CThostFtdcQryPartBrokerField& ftdc_struct) {
  os << "ftdc_struct(CThostFtdcQryPartBrokerField) ---> ExchangeID:" << ftdc_struct.ExchangeID;
  os << " BrokerID:" << ftdc_struct.BrokerID;
  os << " ParticipantID:" << ftdc_struct.ParticipantID;
  os << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CThostFtdcQryFrontStatusField& ftdc_struct) {
  os << "ftdc_struct(CThostFtdcQryFrontStatusField) ---> FrontID:" << ftdc_struct.FrontID;
  os << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CThostFtdcQryExchangeOrderField& ftdc_struct) {
  os << "ftdc_struct(CThostFtdcQryExchangeOrderField) ---> ParticipantID:" << ftdc_struct.ParticipantID;
  os << " ClientID:" << ftdc_struct.ClientID;
  os << " ExchangeInstID:" << ftdc_struct.ExchangeInstID;
  os << " ExchangeID:" << ftdc_struct.ExchangeID;
  os << " TraderID:" << ftdc_struct.TraderID;
  os << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CThostFtdcQryOrderActionField& ftdc_struct) {
  os << "ftdc_struct(CThostFtdcQryOrderActionField) ---> BrokerID:" << ftdc_struct.BrokerID;
  os << " InvestorID:" << ftdc_struct.InvestorID;
  os << " ExchangeID:" << ftdc_struct.ExchangeID;
  os << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CThostFtdcQryExchangeOrderActionField& ftdc_struct) {
  os << "ftdc_struct(CThostFtdcQryExchangeOrderActionField) ---> ParticipantID:" << ftdc_struct.ParticipantID;
  os << " ClientID:" << ftdc_struct.ClientID;
  os << " ExchangeID:" << ftdc_struct.ExchangeID;
  os << " TraderID:" << ftdc_struct.TraderID;
  os << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CThostFtdcQrySuperUserField& ftdc_struct) {
  os << "ftdc_struct(CThostFtdcQrySuperUserField) ---> UserID:" << ftdc_struct.UserID;
  os << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CThostFtdcQryExchangeField& ftdc_struct) {
  os << "ftdc_struct(CThostFtdcQryExchangeField) ---> ExchangeID:" << ftdc_struct.ExchangeID;
  os << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CThostFtdcQryProductField& ftdc_struct) {
  os << "ftdc_struct(CThostFtdcQryProductField) ---> ProductID:" << ftdc_struct.ProductID;
  os << " ProductClass:" << ftdc_struct.ProductClass;
  os << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CThostFtdcQryInstrumentField& ftdc_struct) {
  os << "ftdc_struct(CThostFtdcQryInstrumentField) ---> InstrumentID:" << ftdc_struct.InstrumentID;
  os << " ExchangeID:" << ftdc_struct.ExchangeID;
  os << " ExchangeInstID:" << ftdc_struct.ExchangeInstID;
  os << " ProductID:" << ftdc_struct.ProductID;
  os << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CThostFtdcQryDepthMarketDataField& ftdc_struct) {
  os << "ftdc_struct(CThostFtdcQryDepthMarketDataField) ---> InstrumentID:" << ftdc_struct.InstrumentID;
  os << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CThostFtdcQryBrokerUserField& ftdc_struct) {
  os << "ftdc_struct(CThostFtdcQryBrokerUserField) ---> BrokerID:" << ftdc_struct.BrokerID;
  os << " UserID:" << ftdc_struct.UserID;
  os << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CThostFtdcQryBrokerUserFunctionField& ftdc_struct) {
  os << "ftdc_struct(CThostFtdcQryBrokerUserFunctionField) ---> BrokerID:" << ftdc_struct.BrokerID;
  os << " UserID:" << ftdc_struct.UserID;
  os << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CThostFtdcQryTraderOfferField& ftdc_struct) {
  os << "ftdc_struct(CThostFtdcQryTraderOfferField) ---> ExchangeID:" << ftdc_struct.ExchangeID;
  os << " ParticipantID:" << ftdc_struct.ParticipantID;
  os << " TraderID:" << ftdc_struct.TraderID;
  os << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CThostFtdcQrySyncDepositField& ftdc_struct) {
  os << "ftdc_struct(CThostFtdcQrySyncDepositField) ---> BrokerID:" << ftdc_struct.BrokerID;
  os << " DepositSeqNo:" << ftdc_struct.DepositSeqNo;
  os << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CThostFtdcQrySettlementInfoField& ftdc_struct) {
  os << "ftdc_struct(CThostFtdcQrySettlementInfoField) ---> BrokerID:" << ftdc_struct.BrokerID;
  os << " InvestorID:" << ftdc_struct.InvestorID;
  os << " TradingDay:" << ftdc_struct.TradingDay;
  os << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CThostFtdcQryExchangeMarginRateField& ftdc_struct) {
  os << "ftdc_struct(CThostFtdcQryExchangeMarginRateField) ---> BrokerID:" << ftdc_struct.BrokerID;
  os << " InstrumentID:" << ftdc_struct.InstrumentID;
  os << " HedgeFlag:" << ftdc_struct.HedgeFlag;
  os << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CThostFtdcQryExchangeMarginRateAdjustField& ftdc_struct) {
  os << "ftdc_struct(CThostFtdcQryExchangeMarginRateAdjustField) ---> BrokerID:" << ftdc_struct.BrokerID;
  os << " InstrumentID:" << ftdc_struct.InstrumentID;
  os << " HedgeFlag:" << ftdc_struct.HedgeFlag;
  os << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CThostFtdcQryExchangeRateField& ftdc_struct) {
  os << "ftdc_struct(CThostFtdcQryExchangeRateField) ---> BrokerID:" << ftdc_struct.BrokerID;
  os << " FromCurrencyID:" << ftdc_struct.FromCurrencyID;
  os << " ToCurrencyID:" << ftdc_struct.ToCurrencyID;
  os << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CThostFtdcQrySyncFundMortgageField& ftdc_struct) {
  os << "ftdc_struct(CThostFtdcQrySyncFundMortgageField) ---> BrokerID:" << ftdc_struct.BrokerID;
  os << " MortgageSeqNo:" << ftdc_struct.MortgageSeqNo;
  os << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CThostFtdcQryHisOrderField& ftdc_struct) {
  os << "ftdc_struct(CThostFtdcQryHisOrderField) ---> BrokerID:" << ftdc_struct.BrokerID;
  os << " InvestorID:" << ftdc_struct.InvestorID;
  os << " InstrumentID:" << ftdc_struct.InstrumentID;
  os << " ExchangeID:" << ftdc_struct.ExchangeID;
  os << " OrderSysID:" << ftdc_struct.OrderSysID;
  os << " InsertTimeStart:" << ftdc_struct.InsertTimeStart;
  os << " InsertTimeEnd:" << ftdc_struct.InsertTimeEnd;
  os << " TradingDay:" << ftdc_struct.TradingDay;
  os << " SettlementID:" << ftdc_struct.SettlementID;
  os << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CThostFtdcOptionInstrMiniMarginField& ftdc_struct) {
  os << "ftdc_struct(CThostFtdcOptionInstrMiniMarginField) ---> InstrumentID:" << ftdc_struct.InstrumentID;
  os << " InvestorRange:" << ftdc_struct.InvestorRange;
  os << " BrokerID:" << ftdc_struct.BrokerID;
  os << " InvestorID:" << ftdc_struct.InvestorID;
  os << " MinMargin:" << ftdc_struct.MinMargin;
  os << " ValueMethod:" << ftdc_struct.ValueMethod;
  os << " IsRelative:" << ftdc_struct.IsRelative;
  os << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CThostFtdcOptionInstrMarginAdjustField& ftdc_struct) {
  os << "ftdc_struct(CThostFtdcOptionInstrMarginAdjustField) ---> InstrumentID:" << ftdc_struct.InstrumentID;
  os << " InvestorRange:" << ftdc_struct.InvestorRange;
  os << " BrokerID:" << ftdc_struct.BrokerID;
  os << " InvestorID:" << ftdc_struct.InvestorID;
  os << " SShortMarginRatioByMoney:" << ftdc_struct.SShortMarginRatioByMoney;
  os << " SShortMarginRatioByVolume:" << ftdc_struct.SShortMarginRatioByVolume;
  os << " HShortMarginRatioByMoney:" << ftdc_struct.HShortMarginRatioByMoney;
  os << " HShortMarginRatioByVolume:" << ftdc_struct.HShortMarginRatioByVolume;
  os << " AShortMarginRatioByMoney:" << ftdc_struct.AShortMarginRatioByMoney;
  os << " AShortMarginRatioByVolume:" << ftdc_struct.AShortMarginRatioByVolume;
  os << " IsRelative:" << ftdc_struct.IsRelative;
  os << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CThostFtdcOptionInstrCommRateField& ftdc_struct) {
  os << "ftdc_struct(CThostFtdcOptionInstrCommRateField) ---> InstrumentID:" << ftdc_struct.InstrumentID;
  os << " InvestorRange:" << ftdc_struct.InvestorRange;
  os << " BrokerID:" << ftdc_struct.BrokerID;
  os << " InvestorID:" << ftdc_struct.InvestorID;
  os << " OpenRatioByMoney:" << ftdc_struct.OpenRatioByMoney;
  os << " OpenRatioByVolume:" << ftdc_struct.OpenRatioByVolume;
  os << " CloseRatioByMoney:" << ftdc_struct.CloseRatioByMoney;
  os << " CloseRatioByVolume:" << ftdc_struct.CloseRatioByVolume;
  os << " CloseTodayRatioByMoney:" << ftdc_struct.CloseTodayRatioByMoney;
  os << " CloseTodayRatioByVolume:" << ftdc_struct.CloseTodayRatioByVolume;
  os << " StrikeRatioByMoney:" << ftdc_struct.StrikeRatioByMoney;
  os << " StrikeRatioByVolume:" << ftdc_struct.StrikeRatioByVolume;
  os << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CThostFtdcOptionInstrTradeCostField& ftdc_struct) {
  os << "ftdc_struct(CThostFtdcOptionInstrTradeCostField) ---> BrokerID:" << ftdc_struct.BrokerID;
  os << " InvestorID:" << ftdc_struct.InvestorID;
  os << " InstrumentID:" << ftdc_struct.InstrumentID;
  os << " HedgeFlag:" << ftdc_struct.HedgeFlag;
  os << " FixedMargin:" << ftdc_struct.FixedMargin;
  os << " MiniMargin:" << ftdc_struct.MiniMargin;
  os << " Royalty:" << ftdc_struct.Royalty;
  os << " ExchFixedMargin:" << ftdc_struct.ExchFixedMargin;
  os << " ExchMiniMargin:" << ftdc_struct.ExchMiniMargin;
  os << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CThostFtdcQryOptionInstrTradeCostField& ftdc_struct) {
  os << "ftdc_struct(CThostFtdcQryOptionInstrTradeCostField) ---> BrokerID:" << ftdc_struct.BrokerID;
  os << " InvestorID:" << ftdc_struct.InvestorID;
  os << " InstrumentID:" << ftdc_struct.InstrumentID;
  os << " HedgeFlag:" << ftdc_struct.HedgeFlag;
  os << " InputPrice:" << ftdc_struct.InputPrice;
  os << " UnderlyingPrice:" << ftdc_struct.UnderlyingPrice;
  os << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CThostFtdcQryOptionInstrCommRateField& ftdc_struct) {
  os << "ftdc_struct(CThostFtdcQryOptionInstrCommRateField) ---> BrokerID:" << ftdc_struct.BrokerID;
  os << " InvestorID:" << ftdc_struct.InvestorID;
  os << " InstrumentID:" << ftdc_struct.InstrumentID;
  os << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CThostFtdcIndexPriceField& ftdc_struct) {
  os << "ftdc_struct(CThostFtdcIndexPriceField) ---> BrokerID:" << ftdc_struct.BrokerID;
  os << " InstrumentID:" << ftdc_struct.InstrumentID;
  os << " ClosePrice:" << ftdc_struct.ClosePrice;
  os << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CThostFtdcInputExecOrderField& ftdc_struct) {
  os << "ftdc_struct(CThostFtdcInputExecOrderField) ---> BrokerID:" << ftdc_struct.BrokerID;
  os << " InvestorID:" << ftdc_struct.InvestorID;
  os << " InstrumentID:" << ftdc_struct.InstrumentID;
  os << " ExecOrderRef:" << ftdc_struct.ExecOrderRef;
  os << " UserID:" << ftdc_struct.UserID;
  os << " Volume:" << ftdc_struct.Volume;
  os << " RequestID:" << ftdc_struct.RequestID;
  os << " BusinessUnit:" << ftdc_struct.BusinessUnit;
  os << " OffsetFlag:" << ftdc_struct.OffsetFlag;
  os << " HedgeFlag:" << ftdc_struct.HedgeFlag;
  os << " ActionType:" << ftdc_struct.ActionType;
  os << " PosiDirection:" << ftdc_struct.PosiDirection;
  os << " ReservePositionFlag:" << ftdc_struct.ReservePositionFlag;
  os << " CloseFlag:" << ftdc_struct.CloseFlag;
  os << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CThostFtdcInputExecOrderActionField& ftdc_struct) {
  os << "ftdc_struct(CThostFtdcInputExecOrderActionField) ---> BrokerID:" << ftdc_struct.BrokerID;
  os << " InvestorID:" << ftdc_struct.InvestorID;
  os << " ExecOrderActionRef:" << ftdc_struct.ExecOrderActionRef;
  os << " ExecOrderRef:" << ftdc_struct.ExecOrderRef;
  os << " RequestID:" << ftdc_struct.RequestID;
  os << " FrontID:" << ftdc_struct.FrontID;
  os << " SessionID:" << ftdc_struct.SessionID;
  os << " ExchangeID:" << ftdc_struct.ExchangeID;
  os << " ExecOrderSysID:" << ftdc_struct.ExecOrderSysID;
  os << " ActionFlag:" << ftdc_struct.ActionFlag;
  os << " UserID:" << ftdc_struct.UserID;
  os << " InstrumentID:" << ftdc_struct.InstrumentID;
  os << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CThostFtdcExecOrderField& ftdc_struct) {
  os << "ftdc_struct(CThostFtdcExecOrderField) ---> BrokerID:" << ftdc_struct.BrokerID;
  os << " InvestorID:" << ftdc_struct.InvestorID;
  os << " InstrumentID:" << ftdc_struct.InstrumentID;
  os << " ExecOrderRef:" << ftdc_struct.ExecOrderRef;
  os << " UserID:" << ftdc_struct.UserID;
  os << " Volume:" << ftdc_struct.Volume;
  os << " RequestID:" << ftdc_struct.RequestID;
  os << " BusinessUnit:" << ftdc_struct.BusinessUnit;
  os << " OffsetFlag:" << ftdc_struct.OffsetFlag;
  os << " HedgeFlag:" << ftdc_struct.HedgeFlag;
  os << " ActionType:" << ftdc_struct.ActionType;
  os << " PosiDirection:" << ftdc_struct.PosiDirection;
  os << " ReservePositionFlag:" << ftdc_struct.ReservePositionFlag;
  os << " CloseFlag:" << ftdc_struct.CloseFlag;
  os << " ExecOrderLocalID:" << ftdc_struct.ExecOrderLocalID;
  os << " ExchangeID:" << ftdc_struct.ExchangeID;
  os << " ParticipantID:" << ftdc_struct.ParticipantID;
  os << " ClientID:" << ftdc_struct.ClientID;
  os << " ExchangeInstID:" << ftdc_struct.ExchangeInstID;
  os << " TraderID:" << ftdc_struct.TraderID;
  os << " InstallID:" << ftdc_struct.InstallID;
  os << " OrderSubmitStatus:" << ftdc_struct.OrderSubmitStatus;
  os << " NotifySequence:" << ftdc_struct.NotifySequence;
  os << " TradingDay:" << ftdc_struct.TradingDay;
  os << " SettlementID:" << ftdc_struct.SettlementID;
  os << " ExecOrderSysID:" << ftdc_struct.ExecOrderSysID;
  os << " InsertDate:" << ftdc_struct.InsertDate;
  os << " InsertTime:" << ftdc_struct.InsertTime;
  os << " CancelTime:" << ftdc_struct.CancelTime;
  os << " ExecResult:" << ftdc_struct.ExecResult;
  os << " ClearingPartID:" << ftdc_struct.ClearingPartID;
  os << " SequenceNo:" << ftdc_struct.SequenceNo;
  os << " FrontID:" << ftdc_struct.FrontID;
  os << " SessionID:" << ftdc_struct.SessionID;
  os << " UserProductInfo:" << ftdc_struct.UserProductInfo;
  os << " StatusMsg:" << ftdc_struct.StatusMsg;
  os << " ActiveUserID:" << ftdc_struct.ActiveUserID;
  os << " BrokerExecOrderSeq:" << ftdc_struct.BrokerExecOrderSeq;
  os << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CThostFtdcExecOrderActionField& ftdc_struct) {
  os << "ftdc_struct(CThostFtdcExecOrderActionField) ---> BrokerID:" << ftdc_struct.BrokerID;
  os << " InvestorID:" << ftdc_struct.InvestorID;
  os << " ExecOrderActionRef:" << ftdc_struct.ExecOrderActionRef;
  os << " ExecOrderRef:" << ftdc_struct.ExecOrderRef;
  os << " RequestID:" << ftdc_struct.RequestID;
  os << " FrontID:" << ftdc_struct.FrontID;
  os << " SessionID:" << ftdc_struct.SessionID;
  os << " ExchangeID:" << ftdc_struct.ExchangeID;
  os << " ExecOrderSysID:" << ftdc_struct.ExecOrderSysID;
  os << " ActionFlag:" << ftdc_struct.ActionFlag;
  os << " ActionDate:" << ftdc_struct.ActionDate;
  os << " ActionTime:" << ftdc_struct.ActionTime;
  os << " TraderID:" << ftdc_struct.TraderID;
  os << " InstallID:" << ftdc_struct.InstallID;
  os << " ExecOrderLocalID:" << ftdc_struct.ExecOrderLocalID;
  os << " ActionLocalID:" << ftdc_struct.ActionLocalID;
  os << " ParticipantID:" << ftdc_struct.ParticipantID;
  os << " ClientID:" << ftdc_struct.ClientID;
  os << " BusinessUnit:" << ftdc_struct.BusinessUnit;
  os << " OrderActionStatus:" << ftdc_struct.OrderActionStatus;
  os << " UserID:" << ftdc_struct.UserID;
  os << " ActionType:" << ftdc_struct.ActionType;
  os << " StatusMsg:" << ftdc_struct.StatusMsg;
  os << " InstrumentID:" << ftdc_struct.InstrumentID;
  os << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CThostFtdcQryExecOrderField& ftdc_struct) {
  os << "ftdc_struct(CThostFtdcQryExecOrderField) ---> BrokerID:" << ftdc_struct.BrokerID;
  os << " InvestorID:" << ftdc_struct.InvestorID;
  os << " InstrumentID:" << ftdc_struct.InstrumentID;
  os << " ExchangeID:" << ftdc_struct.ExchangeID;
  os << " ExecOrderSysID:" << ftdc_struct.ExecOrderSysID;
  os << " InsertTimeStart:" << ftdc_struct.InsertTimeStart;
  os << " InsertTimeEnd:" << ftdc_struct.InsertTimeEnd;
  os << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CThostFtdcExchangeExecOrderField& ftdc_struct) {
  os << "ftdc_struct(CThostFtdcExchangeExecOrderField) ---> Volume:" << ftdc_struct.Volume;
  os << " RequestID:" << ftdc_struct.RequestID;
  os << " BusinessUnit:" << ftdc_struct.BusinessUnit;
  os << " OffsetFlag:" << ftdc_struct.OffsetFlag;
  os << " HedgeFlag:" << ftdc_struct.HedgeFlag;
  os << " ActionType:" << ftdc_struct.ActionType;
  os << " PosiDirection:" << ftdc_struct.PosiDirection;
  os << " ReservePositionFlag:" << ftdc_struct.ReservePositionFlag;
  os << " CloseFlag:" << ftdc_struct.CloseFlag;
  os << " ExecOrderLocalID:" << ftdc_struct.ExecOrderLocalID;
  os << " ExchangeID:" << ftdc_struct.ExchangeID;
  os << " ParticipantID:" << ftdc_struct.ParticipantID;
  os << " ClientID:" << ftdc_struct.ClientID;
  os << " ExchangeInstID:" << ftdc_struct.ExchangeInstID;
  os << " TraderID:" << ftdc_struct.TraderID;
  os << " InstallID:" << ftdc_struct.InstallID;
  os << " OrderSubmitStatus:" << ftdc_struct.OrderSubmitStatus;
  os << " NotifySequence:" << ftdc_struct.NotifySequence;
  os << " TradingDay:" << ftdc_struct.TradingDay;
  os << " SettlementID:" << ftdc_struct.SettlementID;
  os << " ExecOrderSysID:" << ftdc_struct.ExecOrderSysID;
  os << " InsertDate:" << ftdc_struct.InsertDate;
  os << " InsertTime:" << ftdc_struct.InsertTime;
  os << " CancelTime:" << ftdc_struct.CancelTime;
  os << " ExecResult:" << ftdc_struct.ExecResult;
  os << " ClearingPartID:" << ftdc_struct.ClearingPartID;
  os << " SequenceNo:" << ftdc_struct.SequenceNo;
  os << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CThostFtdcQryExchangeExecOrderField& ftdc_struct) {
  os << "ftdc_struct(CThostFtdcQryExchangeExecOrderField) ---> ParticipantID:" << ftdc_struct.ParticipantID;
  os << " ClientID:" << ftdc_struct.ClientID;
  os << " ExchangeInstID:" << ftdc_struct.ExchangeInstID;
  os << " ExchangeID:" << ftdc_struct.ExchangeID;
  os << " TraderID:" << ftdc_struct.TraderID;
  os << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CThostFtdcQryExecOrderActionField& ftdc_struct) {
  os << "ftdc_struct(CThostFtdcQryExecOrderActionField) ---> BrokerID:" << ftdc_struct.BrokerID;
  os << " InvestorID:" << ftdc_struct.InvestorID;
  os << " ExchangeID:" << ftdc_struct.ExchangeID;
  os << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CThostFtdcExchangeExecOrderActionField& ftdc_struct) {
  os << "ftdc_struct(CThostFtdcExchangeExecOrderActionField) ---> ExchangeID:" << ftdc_struct.ExchangeID;
  os << " ExecOrderSysID:" << ftdc_struct.ExecOrderSysID;
  os << " ActionFlag:" << ftdc_struct.ActionFlag;
  os << " ActionDate:" << ftdc_struct.ActionDate;
  os << " ActionTime:" << ftdc_struct.ActionTime;
  os << " TraderID:" << ftdc_struct.TraderID;
  os << " InstallID:" << ftdc_struct.InstallID;
  os << " ExecOrderLocalID:" << ftdc_struct.ExecOrderLocalID;
  os << " ActionLocalID:" << ftdc_struct.ActionLocalID;
  os << " ParticipantID:" << ftdc_struct.ParticipantID;
  os << " ClientID:" << ftdc_struct.ClientID;
  os << " BusinessUnit:" << ftdc_struct.BusinessUnit;
  os << " OrderActionStatus:" << ftdc_struct.OrderActionStatus;
  os << " UserID:" << ftdc_struct.UserID;
  os << " ActionType:" << ftdc_struct.ActionType;
  os << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CThostFtdcQryExchangeExecOrderActionField& ftdc_struct) {
  os << "ftdc_struct(CThostFtdcQryExchangeExecOrderActionField) ---> ParticipantID:" << ftdc_struct.ParticipantID;
  os << " ClientID:" << ftdc_struct.ClientID;
  os << " ExchangeID:" << ftdc_struct.ExchangeID;
  os << " TraderID:" << ftdc_struct.TraderID;
  os << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CThostFtdcErrExecOrderField& ftdc_struct) {
  os << "ftdc_struct(CThostFtdcErrExecOrderField) ---> BrokerID:" << ftdc_struct.BrokerID;
  os << " InvestorID:" << ftdc_struct.InvestorID;
  os << " InstrumentID:" << ftdc_struct.InstrumentID;
  os << " ExecOrderRef:" << ftdc_struct.ExecOrderRef;
  os << " UserID:" << ftdc_struct.UserID;
  os << " Volume:" << ftdc_struct.Volume;
  os << " RequestID:" << ftdc_struct.RequestID;
  os << " BusinessUnit:" << ftdc_struct.BusinessUnit;
  os << " OffsetFlag:" << ftdc_struct.OffsetFlag;
  os << " HedgeFlag:" << ftdc_struct.HedgeFlag;
  os << " ActionType:" << ftdc_struct.ActionType;
  os << " PosiDirection:" << ftdc_struct.PosiDirection;
  os << " ReservePositionFlag:" << ftdc_struct.ReservePositionFlag;
  os << " CloseFlag:" << ftdc_struct.CloseFlag;
  os << " ErrorID:" << ftdc_struct.ErrorID;
  os << " ErrorMsg:" << ftdc_struct.ErrorMsg;
  os << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CThostFtdcQryErrExecOrderField& ftdc_struct) {
  os << "ftdc_struct(CThostFtdcQryErrExecOrderField) ---> BrokerID:" << ftdc_struct.BrokerID;
  os << " InvestorID:" << ftdc_struct.InvestorID;
  os << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CThostFtdcErrExecOrderActionField& ftdc_struct) {
  os << "ftdc_struct(CThostFtdcErrExecOrderActionField) ---> BrokerID:" << ftdc_struct.BrokerID;
  os << " InvestorID:" << ftdc_struct.InvestorID;
  os << " ExecOrderActionRef:" << ftdc_struct.ExecOrderActionRef;
  os << " ExecOrderRef:" << ftdc_struct.ExecOrderRef;
  os << " RequestID:" << ftdc_struct.RequestID;
  os << " FrontID:" << ftdc_struct.FrontID;
  os << " SessionID:" << ftdc_struct.SessionID;
  os << " ExchangeID:" << ftdc_struct.ExchangeID;
  os << " ExecOrderSysID:" << ftdc_struct.ExecOrderSysID;
  os << " ActionFlag:" << ftdc_struct.ActionFlag;
  os << " UserID:" << ftdc_struct.UserID;
  os << " InstrumentID:" << ftdc_struct.InstrumentID;
  os << " ErrorID:" << ftdc_struct.ErrorID;
  os << " ErrorMsg:" << ftdc_struct.ErrorMsg;
  os << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CThostFtdcQryErrExecOrderActionField& ftdc_struct) {
  os << "ftdc_struct(CThostFtdcQryErrExecOrderActionField) ---> BrokerID:" << ftdc_struct.BrokerID;
  os << " InvestorID:" << ftdc_struct.InvestorID;
  os << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CThostFtdcOptionInstrTradingRightField& ftdc_struct) {
  os << "ftdc_struct(CThostFtdcOptionInstrTradingRightField) ---> InstrumentID:" << ftdc_struct.InstrumentID;
  os << " InvestorRange:" << ftdc_struct.InvestorRange;
  os << " BrokerID:" << ftdc_struct.BrokerID;
  os << " InvestorID:" << ftdc_struct.InvestorID;
  os << " Direction:" << ftdc_struct.Direction;
  os << " TradingRight:" << ftdc_struct.TradingRight;
  os << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CThostFtdcQryOptionInstrTradingRightField& ftdc_struct) {
  os << "ftdc_struct(CThostFtdcQryOptionInstrTradingRightField) ---> BrokerID:" << ftdc_struct.BrokerID;
  os << " InvestorID:" << ftdc_struct.InvestorID;
  os << " InstrumentID:" << ftdc_struct.InstrumentID;
  os << " Direction:" << ftdc_struct.Direction;
  os << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CThostFtdcInputForQuoteField& ftdc_struct) {
  os << "ftdc_struct(CThostFtdcInputForQuoteField) ---> BrokerID:" << ftdc_struct.BrokerID;
  os << " InvestorID:" << ftdc_struct.InvestorID;
  os << " InstrumentID:" << ftdc_struct.InstrumentID;
  os << " ForQuoteRef:" << ftdc_struct.ForQuoteRef;
  os << " UserID:" << ftdc_struct.UserID;
  os << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CThostFtdcForQuoteField& ftdc_struct) {
  os << "ftdc_struct(CThostFtdcForQuoteField) ---> BrokerID:" << ftdc_struct.BrokerID;
  os << " InvestorID:" << ftdc_struct.InvestorID;
  os << " InstrumentID:" << ftdc_struct.InstrumentID;
  os << " ForQuoteRef:" << ftdc_struct.ForQuoteRef;
  os << " UserID:" << ftdc_struct.UserID;
  os << " ForQuoteLocalID:" << ftdc_struct.ForQuoteLocalID;
  os << " ExchangeID:" << ftdc_struct.ExchangeID;
  os << " ParticipantID:" << ftdc_struct.ParticipantID;
  os << " ClientID:" << ftdc_struct.ClientID;
  os << " ExchangeInstID:" << ftdc_struct.ExchangeInstID;
  os << " TraderID:" << ftdc_struct.TraderID;
  os << " InstallID:" << ftdc_struct.InstallID;
  os << " InsertDate:" << ftdc_struct.InsertDate;
  os << " InsertTime:" << ftdc_struct.InsertTime;
  os << " ForQuoteStatus:" << ftdc_struct.ForQuoteStatus;
  os << " FrontID:" << ftdc_struct.FrontID;
  os << " SessionID:" << ftdc_struct.SessionID;
  os << " StatusMsg:" << ftdc_struct.StatusMsg;
  os << " ActiveUserID:" << ftdc_struct.ActiveUserID;
  os << " BrokerForQutoSeq:" << ftdc_struct.BrokerForQutoSeq;
  os << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CThostFtdcQryForQuoteField& ftdc_struct) {
  os << "ftdc_struct(CThostFtdcQryForQuoteField) ---> BrokerID:" << ftdc_struct.BrokerID;
  os << " InvestorID:" << ftdc_struct.InvestorID;
  os << " InstrumentID:" << ftdc_struct.InstrumentID;
  os << " ExchangeID:" << ftdc_struct.ExchangeID;
  os << " InsertTimeStart:" << ftdc_struct.InsertTimeStart;
  os << " InsertTimeEnd:" << ftdc_struct.InsertTimeEnd;
  os << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CThostFtdcExchangeForQuoteField& ftdc_struct) {
  os << "ftdc_struct(CThostFtdcExchangeForQuoteField) ---> ForQuoteLocalID:" << ftdc_struct.ForQuoteLocalID;
  os << " ExchangeID:" << ftdc_struct.ExchangeID;
  os << " ParticipantID:" << ftdc_struct.ParticipantID;
  os << " ClientID:" << ftdc_struct.ClientID;
  os << " ExchangeInstID:" << ftdc_struct.ExchangeInstID;
  os << " TraderID:" << ftdc_struct.TraderID;
  os << " InstallID:" << ftdc_struct.InstallID;
  os << " InsertDate:" << ftdc_struct.InsertDate;
  os << " InsertTime:" << ftdc_struct.InsertTime;
  os << " ForQuoteStatus:" << ftdc_struct.ForQuoteStatus;
  os << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CThostFtdcQryExchangeForQuoteField& ftdc_struct) {
  os << "ftdc_struct(CThostFtdcQryExchangeForQuoteField) ---> ParticipantID:" << ftdc_struct.ParticipantID;
  os << " ClientID:" << ftdc_struct.ClientID;
  os << " ExchangeInstID:" << ftdc_struct.ExchangeInstID;
  os << " ExchangeID:" << ftdc_struct.ExchangeID;
  os << " TraderID:" << ftdc_struct.TraderID;
  os << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CThostFtdcInputQuoteField& ftdc_struct) {
  os << "ftdc_struct(CThostFtdcInputQuoteField) ---> BrokerID:" << ftdc_struct.BrokerID;
  os << " InvestorID:" << ftdc_struct.InvestorID;
  os << " InstrumentID:" << ftdc_struct.InstrumentID;
  os << " QuoteRef:" << ftdc_struct.QuoteRef;
  os << " UserID:" << ftdc_struct.UserID;
  os << " AskPrice:" << ftdc_struct.AskPrice;
  os << " BidPrice:" << ftdc_struct.BidPrice;
  os << " AskVolume:" << ftdc_struct.AskVolume;
  os << " BidVolume:" << ftdc_struct.BidVolume;
  os << " RequestID:" << ftdc_struct.RequestID;
  os << " BusinessUnit:" << ftdc_struct.BusinessUnit;
  os << " AskOffsetFlag:" << ftdc_struct.AskOffsetFlag;
  os << " BidOffsetFlag:" << ftdc_struct.BidOffsetFlag;
  os << " AskHedgeFlag:" << ftdc_struct.AskHedgeFlag;
  os << " BidHedgeFlag:" << ftdc_struct.BidHedgeFlag;
  os << " AskOrderRef:" << ftdc_struct.AskOrderRef;
  os << " BidOrderRef:" << ftdc_struct.BidOrderRef;
  os << " ForQuoteSysID:" << ftdc_struct.ForQuoteSysID;
  os << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CThostFtdcInputQuoteActionField& ftdc_struct) {
  os << "ftdc_struct(CThostFtdcInputQuoteActionField) ---> BrokerID:" << ftdc_struct.BrokerID;
  os << " InvestorID:" << ftdc_struct.InvestorID;
  os << " QuoteActionRef:" << ftdc_struct.QuoteActionRef;
  os << " QuoteRef:" << ftdc_struct.QuoteRef;
  os << " RequestID:" << ftdc_struct.RequestID;
  os << " FrontID:" << ftdc_struct.FrontID;
  os << " SessionID:" << ftdc_struct.SessionID;
  os << " ExchangeID:" << ftdc_struct.ExchangeID;
  os << " QuoteSysID:" << ftdc_struct.QuoteSysID;
  os << " ActionFlag:" << ftdc_struct.ActionFlag;
  os << " UserID:" << ftdc_struct.UserID;
  os << " InstrumentID:" << ftdc_struct.InstrumentID;
  os << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CThostFtdcQuoteField& ftdc_struct) {
  os << "ftdc_struct(CThostFtdcQuoteField) ---> BrokerID:" << ftdc_struct.BrokerID;
  os << " InvestorID:" << ftdc_struct.InvestorID;
  os << " InstrumentID:" << ftdc_struct.InstrumentID;
  os << " QuoteRef:" << ftdc_struct.QuoteRef;
  os << " UserID:" << ftdc_struct.UserID;
  os << " AskPrice:" << ftdc_struct.AskPrice;
  os << " BidPrice:" << ftdc_struct.BidPrice;
  os << " AskVolume:" << ftdc_struct.AskVolume;
  os << " BidVolume:" << ftdc_struct.BidVolume;
  os << " RequestID:" << ftdc_struct.RequestID;
  os << " BusinessUnit:" << ftdc_struct.BusinessUnit;
  os << " AskOffsetFlag:" << ftdc_struct.AskOffsetFlag;
  os << " BidOffsetFlag:" << ftdc_struct.BidOffsetFlag;
  os << " AskHedgeFlag:" << ftdc_struct.AskHedgeFlag;
  os << " BidHedgeFlag:" << ftdc_struct.BidHedgeFlag;
  os << " QuoteLocalID:" << ftdc_struct.QuoteLocalID;
  os << " ExchangeID:" << ftdc_struct.ExchangeID;
  os << " ParticipantID:" << ftdc_struct.ParticipantID;
  os << " ClientID:" << ftdc_struct.ClientID;
  os << " ExchangeInstID:" << ftdc_struct.ExchangeInstID;
  os << " TraderID:" << ftdc_struct.TraderID;
  os << " InstallID:" << ftdc_struct.InstallID;
  os << " NotifySequence:" << ftdc_struct.NotifySequence;
  os << " OrderSubmitStatus:" << ftdc_struct.OrderSubmitStatus;
  os << " TradingDay:" << ftdc_struct.TradingDay;
  os << " SettlementID:" << ftdc_struct.SettlementID;
  os << " QuoteSysID:" << ftdc_struct.QuoteSysID;
  os << " InsertDate:" << ftdc_struct.InsertDate;
  os << " InsertTime:" << ftdc_struct.InsertTime;
  os << " CancelTime:" << ftdc_struct.CancelTime;
  os << " QuoteStatus:" << ftdc_struct.QuoteStatus;
  os << " ClearingPartID:" << ftdc_struct.ClearingPartID;
  os << " SequenceNo:" << ftdc_struct.SequenceNo;
  os << " AskOrderSysID:" << ftdc_struct.AskOrderSysID;
  os << " BidOrderSysID:" << ftdc_struct.BidOrderSysID;
  os << " FrontID:" << ftdc_struct.FrontID;
  os << " SessionID:" << ftdc_struct.SessionID;
  os << " UserProductInfo:" << ftdc_struct.UserProductInfo;
  os << " StatusMsg:" << ftdc_struct.StatusMsg;
  os << " ActiveUserID:" << ftdc_struct.ActiveUserID;
  os << " BrokerQuoteSeq:" << ftdc_struct.BrokerQuoteSeq;
  os << " AskOrderRef:" << ftdc_struct.AskOrderRef;
  os << " BidOrderRef:" << ftdc_struct.BidOrderRef;
  os << " ForQuoteSysID:" << ftdc_struct.ForQuoteSysID;
  os << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CThostFtdcQuoteActionField& ftdc_struct) {
  os << "ftdc_struct(CThostFtdcQuoteActionField) ---> BrokerID:" << ftdc_struct.BrokerID;
  os << " InvestorID:" << ftdc_struct.InvestorID;
  os << " QuoteActionRef:" << ftdc_struct.QuoteActionRef;
  os << " QuoteRef:" << ftdc_struct.QuoteRef;
  os << " RequestID:" << ftdc_struct.RequestID;
  os << " FrontID:" << ftdc_struct.FrontID;
  os << " SessionID:" << ftdc_struct.SessionID;
  os << " ExchangeID:" << ftdc_struct.ExchangeID;
  os << " QuoteSysID:" << ftdc_struct.QuoteSysID;
  os << " ActionFlag:" << ftdc_struct.ActionFlag;
  os << " ActionDate:" << ftdc_struct.ActionDate;
  os << " ActionTime:" << ftdc_struct.ActionTime;
  os << " TraderID:" << ftdc_struct.TraderID;
  os << " InstallID:" << ftdc_struct.InstallID;
  os << " QuoteLocalID:" << ftdc_struct.QuoteLocalID;
  os << " ActionLocalID:" << ftdc_struct.ActionLocalID;
  os << " ParticipantID:" << ftdc_struct.ParticipantID;
  os << " ClientID:" << ftdc_struct.ClientID;
  os << " BusinessUnit:" << ftdc_struct.BusinessUnit;
  os << " OrderActionStatus:" << ftdc_struct.OrderActionStatus;
  os << " UserID:" << ftdc_struct.UserID;
  os << " StatusMsg:" << ftdc_struct.StatusMsg;
  os << " InstrumentID:" << ftdc_struct.InstrumentID;
  os << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CThostFtdcQryQuoteField& ftdc_struct) {
  os << "ftdc_struct(CThostFtdcQryQuoteField) ---> BrokerID:" << ftdc_struct.BrokerID;
  os << " InvestorID:" << ftdc_struct.InvestorID;
  os << " InstrumentID:" << ftdc_struct.InstrumentID;
  os << " ExchangeID:" << ftdc_struct.ExchangeID;
  os << " QuoteSysID:" << ftdc_struct.QuoteSysID;
  os << " InsertTimeStart:" << ftdc_struct.InsertTimeStart;
  os << " InsertTimeEnd:" << ftdc_struct.InsertTimeEnd;
  os << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CThostFtdcExchangeQuoteField& ftdc_struct) {
  os << "ftdc_struct(CThostFtdcExchangeQuoteField) ---> AskPrice:" << ftdc_struct.AskPrice;
  os << " BidPrice:" << ftdc_struct.BidPrice;
  os << " AskVolume:" << ftdc_struct.AskVolume;
  os << " BidVolume:" << ftdc_struct.BidVolume;
  os << " RequestID:" << ftdc_struct.RequestID;
  os << " BusinessUnit:" << ftdc_struct.BusinessUnit;
  os << " AskOffsetFlag:" << ftdc_struct.AskOffsetFlag;
  os << " BidOffsetFlag:" << ftdc_struct.BidOffsetFlag;
  os << " AskHedgeFlag:" << ftdc_struct.AskHedgeFlag;
  os << " BidHedgeFlag:" << ftdc_struct.BidHedgeFlag;
  os << " QuoteLocalID:" << ftdc_struct.QuoteLocalID;
  os << " ExchangeID:" << ftdc_struct.ExchangeID;
  os << " ParticipantID:" << ftdc_struct.ParticipantID;
  os << " ClientID:" << ftdc_struct.ClientID;
  os << " ExchangeInstID:" << ftdc_struct.ExchangeInstID;
  os << " TraderID:" << ftdc_struct.TraderID;
  os << " InstallID:" << ftdc_struct.InstallID;
  os << " NotifySequence:" << ftdc_struct.NotifySequence;
  os << " OrderSubmitStatus:" << ftdc_struct.OrderSubmitStatus;
  os << " TradingDay:" << ftdc_struct.TradingDay;
  os << " SettlementID:" << ftdc_struct.SettlementID;
  os << " QuoteSysID:" << ftdc_struct.QuoteSysID;
  os << " InsertDate:" << ftdc_struct.InsertDate;
  os << " InsertTime:" << ftdc_struct.InsertTime;
  os << " CancelTime:" << ftdc_struct.CancelTime;
  os << " QuoteStatus:" << ftdc_struct.QuoteStatus;
  os << " ClearingPartID:" << ftdc_struct.ClearingPartID;
  os << " SequenceNo:" << ftdc_struct.SequenceNo;
  os << " AskOrderSysID:" << ftdc_struct.AskOrderSysID;
  os << " BidOrderSysID:" << ftdc_struct.BidOrderSysID;
  os << " ForQuoteSysID:" << ftdc_struct.ForQuoteSysID;
  os << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CThostFtdcQryExchangeQuoteField& ftdc_struct) {
  os << "ftdc_struct(CThostFtdcQryExchangeQuoteField) ---> ParticipantID:" << ftdc_struct.ParticipantID;
  os << " ClientID:" << ftdc_struct.ClientID;
  os << " ExchangeInstID:" << ftdc_struct.ExchangeInstID;
  os << " ExchangeID:" << ftdc_struct.ExchangeID;
  os << " TraderID:" << ftdc_struct.TraderID;
  os << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CThostFtdcQryQuoteActionField& ftdc_struct) {
  os << "ftdc_struct(CThostFtdcQryQuoteActionField) ---> BrokerID:" << ftdc_struct.BrokerID;
  os << " InvestorID:" << ftdc_struct.InvestorID;
  os << " ExchangeID:" << ftdc_struct.ExchangeID;
  os << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CThostFtdcExchangeQuoteActionField& ftdc_struct) {
  os << "ftdc_struct(CThostFtdcExchangeQuoteActionField) ---> ExchangeID:" << ftdc_struct.ExchangeID;
  os << " QuoteSysID:" << ftdc_struct.QuoteSysID;
  os << " ActionFlag:" << ftdc_struct.ActionFlag;
  os << " ActionDate:" << ftdc_struct.ActionDate;
  os << " ActionTime:" << ftdc_struct.ActionTime;
  os << " TraderID:" << ftdc_struct.TraderID;
  os << " InstallID:" << ftdc_struct.InstallID;
  os << " QuoteLocalID:" << ftdc_struct.QuoteLocalID;
  os << " ActionLocalID:" << ftdc_struct.ActionLocalID;
  os << " ParticipantID:" << ftdc_struct.ParticipantID;
  os << " ClientID:" << ftdc_struct.ClientID;
  os << " BusinessUnit:" << ftdc_struct.BusinessUnit;
  os << " OrderActionStatus:" << ftdc_struct.OrderActionStatus;
  os << " UserID:" << ftdc_struct.UserID;
  os << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CThostFtdcQryExchangeQuoteActionField& ftdc_struct) {
  os << "ftdc_struct(CThostFtdcQryExchangeQuoteActionField) ---> ParticipantID:" << ftdc_struct.ParticipantID;
  os << " ClientID:" << ftdc_struct.ClientID;
  os << " ExchangeID:" << ftdc_struct.ExchangeID;
  os << " TraderID:" << ftdc_struct.TraderID;
  os << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CThostFtdcOptionInstrDeltaField& ftdc_struct) {
  os << "ftdc_struct(CThostFtdcOptionInstrDeltaField) ---> InstrumentID:" << ftdc_struct.InstrumentID;
  os << " InvestorRange:" << ftdc_struct.InvestorRange;
  os << " BrokerID:" << ftdc_struct.BrokerID;
  os << " InvestorID:" << ftdc_struct.InvestorID;
  os << " Delta:" << ftdc_struct.Delta;
  os << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CThostFtdcForQuoteRspField& ftdc_struct) {
  os << "ftdc_struct(CThostFtdcForQuoteRspField) ---> TradingDay:" << ftdc_struct.TradingDay;
  os << " InstrumentID:" << ftdc_struct.InstrumentID;
  os << " ForQuoteSysID:" << ftdc_struct.ForQuoteSysID;
  os << " ForQuoteTime:" << ftdc_struct.ForQuoteTime;
  os << " ActionDay:" << ftdc_struct.ActionDay;
  os << " ExchangeID:" << ftdc_struct.ExchangeID;
  os << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CThostFtdcStrikeOffsetField& ftdc_struct) {
  os << "ftdc_struct(CThostFtdcStrikeOffsetField) ---> InstrumentID:" << ftdc_struct.InstrumentID;
  os << " InvestorRange:" << ftdc_struct.InvestorRange;
  os << " BrokerID:" << ftdc_struct.BrokerID;
  os << " InvestorID:" << ftdc_struct.InvestorID;
  os << " Offset:" << ftdc_struct.Offset;
  os << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CThostFtdcQryStrikeOffsetField& ftdc_struct) {
  os << "ftdc_struct(CThostFtdcQryStrikeOffsetField) ---> BrokerID:" << ftdc_struct.BrokerID;
  os << " InvestorID:" << ftdc_struct.InvestorID;
  os << " InstrumentID:" << ftdc_struct.InstrumentID;
  os << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CThostFtdcCombInstrumentGuardField& ftdc_struct) {
  os << "ftdc_struct(CThostFtdcCombInstrumentGuardField) ---> BrokerID:" << ftdc_struct.BrokerID;
  os << " InstrumentID:" << ftdc_struct.InstrumentID;
  os << " GuarantRatio:" << ftdc_struct.GuarantRatio;
  os << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CThostFtdcQryCombInstrumentGuardField& ftdc_struct) {
  os << "ftdc_struct(CThostFtdcQryCombInstrumentGuardField) ---> BrokerID:" << ftdc_struct.BrokerID;
  os << " InstrumentID:" << ftdc_struct.InstrumentID;
  os << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CThostFtdcInputCombActionField& ftdc_struct) {
  os << "ftdc_struct(CThostFtdcInputCombActionField) ---> BrokerID:" << ftdc_struct.BrokerID;
  os << " InvestorID:" << ftdc_struct.InvestorID;
  os << " InstrumentID:" << ftdc_struct.InstrumentID;
  os << " CombActionRef:" << ftdc_struct.CombActionRef;
  os << " UserID:" << ftdc_struct.UserID;
  os << " Direction:" << ftdc_struct.Direction;
  os << " Volume:" << ftdc_struct.Volume;
  os << " CombDirection:" << ftdc_struct.CombDirection;
  os << " HedgeFlag:" << ftdc_struct.HedgeFlag;
  os << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CThostFtdcCombActionField& ftdc_struct) {
  os << "ftdc_struct(CThostFtdcCombActionField) ---> BrokerID:" << ftdc_struct.BrokerID;
  os << " InvestorID:" << ftdc_struct.InvestorID;
  os << " InstrumentID:" << ftdc_struct.InstrumentID;
  os << " CombActionRef:" << ftdc_struct.CombActionRef;
  os << " UserID:" << ftdc_struct.UserID;
  os << " Direction:" << ftdc_struct.Direction;
  os << " Volume:" << ftdc_struct.Volume;
  os << " CombDirection:" << ftdc_struct.CombDirection;
  os << " HedgeFlag:" << ftdc_struct.HedgeFlag;
  os << " ActionLocalID:" << ftdc_struct.ActionLocalID;
  os << " ExchangeID:" << ftdc_struct.ExchangeID;
  os << " ParticipantID:" << ftdc_struct.ParticipantID;
  os << " ClientID:" << ftdc_struct.ClientID;
  os << " ExchangeInstID:" << ftdc_struct.ExchangeInstID;
  os << " TraderID:" << ftdc_struct.TraderID;
  os << " InstallID:" << ftdc_struct.InstallID;
  os << " ActionStatus:" << ftdc_struct.ActionStatus;
  os << " NotifySequence:" << ftdc_struct.NotifySequence;
  os << " TradingDay:" << ftdc_struct.TradingDay;
  os << " SettlementID:" << ftdc_struct.SettlementID;
  os << " SequenceNo:" << ftdc_struct.SequenceNo;
  os << " FrontID:" << ftdc_struct.FrontID;
  os << " SessionID:" << ftdc_struct.SessionID;
  os << " UserProductInfo:" << ftdc_struct.UserProductInfo;
  os << " StatusMsg:" << ftdc_struct.StatusMsg;
  os << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CThostFtdcQryCombActionField& ftdc_struct) {
  os << "ftdc_struct(CThostFtdcQryCombActionField) ---> BrokerID:" << ftdc_struct.BrokerID;
  os << " InvestorID:" << ftdc_struct.InvestorID;
  os << " InstrumentID:" << ftdc_struct.InstrumentID;
  os << " ExchangeID:" << ftdc_struct.ExchangeID;
  os << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CThostFtdcExchangeCombActionField& ftdc_struct) {
  os << "ftdc_struct(CThostFtdcExchangeCombActionField) ---> Direction:" << ftdc_struct.Direction;
  os << " Volume:" << ftdc_struct.Volume;
  os << " CombDirection:" << ftdc_struct.CombDirection;
  os << " HedgeFlag:" << ftdc_struct.HedgeFlag;
  os << " ActionLocalID:" << ftdc_struct.ActionLocalID;
  os << " ExchangeID:" << ftdc_struct.ExchangeID;
  os << " ParticipantID:" << ftdc_struct.ParticipantID;
  os << " ClientID:" << ftdc_struct.ClientID;
  os << " ExchangeInstID:" << ftdc_struct.ExchangeInstID;
  os << " TraderID:" << ftdc_struct.TraderID;
  os << " InstallID:" << ftdc_struct.InstallID;
  os << " ActionStatus:" << ftdc_struct.ActionStatus;
  os << " NotifySequence:" << ftdc_struct.NotifySequence;
  os << " TradingDay:" << ftdc_struct.TradingDay;
  os << " SettlementID:" << ftdc_struct.SettlementID;
  os << " SequenceNo:" << ftdc_struct.SequenceNo;
  os << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CThostFtdcQryExchangeCombActionField& ftdc_struct) {
  os << "ftdc_struct(CThostFtdcQryExchangeCombActionField) ---> ParticipantID:" << ftdc_struct.ParticipantID;
  os << " ClientID:" << ftdc_struct.ClientID;
  os << " ExchangeInstID:" << ftdc_struct.ExchangeInstID;
  os << " ExchangeID:" << ftdc_struct.ExchangeID;
  os << " TraderID:" << ftdc_struct.TraderID;
  os << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CThostFtdcProductExchRateField& ftdc_struct) {
  os << "ftdc_struct(CThostFtdcProductExchRateField) ---> ProductID:" << ftdc_struct.ProductID;
  os << " QuoteCurrencyID:" << ftdc_struct.QuoteCurrencyID;
  os << " ExchangeRate:" << ftdc_struct.ExchangeRate;
  os << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CThostFtdcQryProductExchRateField& ftdc_struct) {
  os << "ftdc_struct(CThostFtdcQryProductExchRateField) ---> ProductID:" << ftdc_struct.ProductID;
  os << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CThostFtdcMarketDataField& ftdc_struct) {
  os << "ftdc_struct(CThostFtdcMarketDataField) ---> TradingDay:" << ftdc_struct.TradingDay;
  os << " InstrumentID:" << ftdc_struct.InstrumentID;
  os << " ExchangeID:" << ftdc_struct.ExchangeID;
  os << " ExchangeInstID:" << ftdc_struct.ExchangeInstID;
  os << " LastPrice:" << ftdc_struct.LastPrice;
  os << " PreSettlementPrice:" << ftdc_struct.PreSettlementPrice;
  os << " PreClosePrice:" << ftdc_struct.PreClosePrice;
  os << " PreOpenInterest:" << ftdc_struct.PreOpenInterest;
  os << " OpenPrice:" << ftdc_struct.OpenPrice;
  os << " HighestPrice:" << ftdc_struct.HighestPrice;
  os << " LowestPrice:" << ftdc_struct.LowestPrice;
  os << " Volume:" << ftdc_struct.Volume;
  os << " Turnover:" << ftdc_struct.Turnover;
  os << " OpenInterest:" << ftdc_struct.OpenInterest;
  os << " ClosePrice:" << ftdc_struct.ClosePrice;
  os << " SettlementPrice:" << ftdc_struct.SettlementPrice;
  os << " UpperLimitPrice:" << ftdc_struct.UpperLimitPrice;
  os << " LowerLimitPrice:" << ftdc_struct.LowerLimitPrice;
  os << " PreDelta:" << ftdc_struct.PreDelta;
  os << " CurrDelta:" << ftdc_struct.CurrDelta;
  os << " UpdateTime:" << ftdc_struct.UpdateTime;
  os << " UpdateMillisec:" << ftdc_struct.UpdateMillisec;
  os << " ActionDay:" << ftdc_struct.ActionDay;
  os << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CThostFtdcMarketDataBaseField& ftdc_struct) {
  os << "ftdc_struct(CThostFtdcMarketDataBaseField) ---> TradingDay:" << ftdc_struct.TradingDay;
  os << " PreSettlementPrice:" << ftdc_struct.PreSettlementPrice;
  os << " PreClosePrice:" << ftdc_struct.PreClosePrice;
  os << " PreOpenInterest:" << ftdc_struct.PreOpenInterest;
  os << " PreDelta:" << ftdc_struct.PreDelta;
  os << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CThostFtdcMarketDataStaticField& ftdc_struct) {
  os << "ftdc_struct(CThostFtdcMarketDataStaticField) ---> OpenPrice:" << ftdc_struct.OpenPrice;
  os << " HighestPrice:" << ftdc_struct.HighestPrice;
  os << " LowestPrice:" << ftdc_struct.LowestPrice;
  os << " ClosePrice:" << ftdc_struct.ClosePrice;
  os << " UpperLimitPrice:" << ftdc_struct.UpperLimitPrice;
  os << " LowerLimitPrice:" << ftdc_struct.LowerLimitPrice;
  os << " SettlementPrice:" << ftdc_struct.SettlementPrice;
  os << " CurrDelta:" << ftdc_struct.CurrDelta;
  os << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CThostFtdcMarketDataLastMatchField& ftdc_struct) {
  os << "ftdc_struct(CThostFtdcMarketDataLastMatchField) ---> LastPrice:" << ftdc_struct.LastPrice;
  os << " Volume:" << ftdc_struct.Volume;
  os << " Turnover:" << ftdc_struct.Turnover;
  os << " OpenInterest:" << ftdc_struct.OpenInterest;
  os << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CThostFtdcMarketDataBestPriceField& ftdc_struct) {
  os << "ftdc_struct(CThostFtdcMarketDataBestPriceField) ---> BidPrice1:" << ftdc_struct.BidPrice1;
  os << " BidVolume1:" << ftdc_struct.BidVolume1;
  os << " AskPrice1:" << ftdc_struct.AskPrice1;
  os << " AskVolume1:" << ftdc_struct.AskVolume1;
  os << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CThostFtdcMarketDataBid23Field& ftdc_struct) {
  os << "ftdc_struct(CThostFtdcMarketDataBid23Field) ---> BidPrice2:" << ftdc_struct.BidPrice2;
  os << " BidVolume2:" << ftdc_struct.BidVolume2;
  os << " BidPrice3:" << ftdc_struct.BidPrice3;
  os << " BidVolume3:" << ftdc_struct.BidVolume3;
  os << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CThostFtdcMarketDataAsk23Field& ftdc_struct) {
  os << "ftdc_struct(CThostFtdcMarketDataAsk23Field) ---> AskPrice2:" << ftdc_struct.AskPrice2;
  os << " AskVolume2:" << ftdc_struct.AskVolume2;
  os << " AskPrice3:" << ftdc_struct.AskPrice3;
  os << " AskVolume3:" << ftdc_struct.AskVolume3;
  os << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CThostFtdcMarketDataBid45Field& ftdc_struct) {
  os << "ftdc_struct(CThostFtdcMarketDataBid45Field) ---> BidPrice4:" << ftdc_struct.BidPrice4;
  os << " BidVolume4:" << ftdc_struct.BidVolume4;
  os << " BidPrice5:" << ftdc_struct.BidPrice5;
  os << " BidVolume5:" << ftdc_struct.BidVolume5;
  os << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CThostFtdcMarketDataAsk45Field& ftdc_struct) {
  os << "ftdc_struct(CThostFtdcMarketDataAsk45Field) ---> AskPrice4:" << ftdc_struct.AskPrice4;
  os << " AskVolume4:" << ftdc_struct.AskVolume4;
  os << " AskPrice5:" << ftdc_struct.AskPrice5;
  os << " AskVolume5:" << ftdc_struct.AskVolume5;
  os << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CThostFtdcMarketDataUpdateTimeField& ftdc_struct) {
  os << "ftdc_struct(CThostFtdcMarketDataUpdateTimeField) ---> InstrumentID:" << ftdc_struct.InstrumentID;
  os << " UpdateTime:" << ftdc_struct.UpdateTime;
  os << " UpdateMillisec:" << ftdc_struct.UpdateMillisec;
  os << " ActionDay:" << ftdc_struct.ActionDay;
  os << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CThostFtdcMarketDataExchangeField& ftdc_struct) {
  os << "ftdc_struct(CThostFtdcMarketDataExchangeField) ---> ExchangeID:" << ftdc_struct.ExchangeID;
  os << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CThostFtdcSpecificInstrumentField& ftdc_struct) {
  os << "ftdc_struct(CThostFtdcSpecificInstrumentField) ---> InstrumentID:" << ftdc_struct.InstrumentID;
  os << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CThostFtdcInstrumentStatusField& ftdc_struct) {
  os << "ftdc_struct(CThostFtdcInstrumentStatusField) ---> ExchangeID:" << ftdc_struct.ExchangeID;
  os << " ExchangeInstID:" << ftdc_struct.ExchangeInstID;
  os << " SettlementGroupID:" << ftdc_struct.SettlementGroupID;
  os << " InstrumentID:" << ftdc_struct.InstrumentID;
  os << " InstrumentStatus:" << ftdc_struct.InstrumentStatus;
  os << " TradingSegmentSN:" << ftdc_struct.TradingSegmentSN;
  os << " EnterTime:" << ftdc_struct.EnterTime;
  os << " EnterReason:" << ftdc_struct.EnterReason;
  os << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CThostFtdcQryInstrumentStatusField& ftdc_struct) {
  os << "ftdc_struct(CThostFtdcQryInstrumentStatusField) ---> ExchangeID:" << ftdc_struct.ExchangeID;
  os << " ExchangeInstID:" << ftdc_struct.ExchangeInstID;
  os << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CThostFtdcInvestorAccountField& ftdc_struct) {
  os << "ftdc_struct(CThostFtdcInvestorAccountField) ---> BrokerID:" << ftdc_struct.BrokerID;
  os << " InvestorID:" << ftdc_struct.InvestorID;
  os << " AccountID:" << ftdc_struct.AccountID;
  os << " CurrencyID:" << ftdc_struct.CurrencyID;
  os << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CThostFtdcPositionProfitAlgorithmField& ftdc_struct) {
  os << "ftdc_struct(CThostFtdcPositionProfitAlgorithmField) ---> BrokerID:" << ftdc_struct.BrokerID;
  os << " AccountID:" << ftdc_struct.AccountID;
  os << " Algorithm:" << ftdc_struct.Algorithm;
  os << " Memo:" << ftdc_struct.Memo;
  os << " CurrencyID:" << ftdc_struct.CurrencyID;
  os << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CThostFtdcDiscountField& ftdc_struct) {
  os << "ftdc_struct(CThostFtdcDiscountField) ---> BrokerID:" << ftdc_struct.BrokerID;
  os << " InvestorRange:" << ftdc_struct.InvestorRange;
  os << " InvestorID:" << ftdc_struct.InvestorID;
  os << " Discount:" << ftdc_struct.Discount;
  os << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CThostFtdcQryTransferBankField& ftdc_struct) {
  os << "ftdc_struct(CThostFtdcQryTransferBankField) ---> BankID:" << ftdc_struct.BankID;
  os << " BankBrchID:" << ftdc_struct.BankBrchID;
  os << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CThostFtdcTransferBankField& ftdc_struct) {
  os << "ftdc_struct(CThostFtdcTransferBankField) ---> BankID:" << ftdc_struct.BankID;
  os << " BankBrchID:" << ftdc_struct.BankBrchID;
  os << " BankName:" << ftdc_struct.BankName;
  os << " IsActive:" << ftdc_struct.IsActive;
  os << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CThostFtdcQryInvestorPositionDetailField& ftdc_struct) {
  os << "ftdc_struct(CThostFtdcQryInvestorPositionDetailField) ---> BrokerID:" << ftdc_struct.BrokerID;
  os << " InvestorID:" << ftdc_struct.InvestorID;
  os << " InstrumentID:" << ftdc_struct.InstrumentID;
  os << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CThostFtdcInvestorPositionDetailField& ftdc_struct) {
  os << "ftdc_struct(CThostFtdcInvestorPositionDetailField) ---> InstrumentID:" << ftdc_struct.InstrumentID;
  os << " BrokerID:" << ftdc_struct.BrokerID;
  os << " InvestorID:" << ftdc_struct.InvestorID;
  os << " HedgeFlag:" << ftdc_struct.HedgeFlag;
  os << " Direction:" << ftdc_struct.Direction;
  os << " OpenDate:" << ftdc_struct.OpenDate;
  os << " TradeID:" << ftdc_struct.TradeID;
  os << " Volume:" << ftdc_struct.Volume;
  os << " OpenPrice:" << ftdc_struct.OpenPrice;
  os << " TradingDay:" << ftdc_struct.TradingDay;
  os << " SettlementID:" << ftdc_struct.SettlementID;
  os << " TradeType:" << ftdc_struct.TradeType;
  os << " CombInstrumentID:" << ftdc_struct.CombInstrumentID;
  os << " ExchangeID:" << ftdc_struct.ExchangeID;
  os << " CloseProfitByDate:" << ftdc_struct.CloseProfitByDate;
  os << " CloseProfitByTrade:" << ftdc_struct.CloseProfitByTrade;
  os << " PositionProfitByDate:" << ftdc_struct.PositionProfitByDate;
  os << " PositionProfitByTrade:" << ftdc_struct.PositionProfitByTrade;
  os << " Margin:" << ftdc_struct.Margin;
  os << " ExchMargin:" << ftdc_struct.ExchMargin;
  os << " MarginRateByMoney:" << ftdc_struct.MarginRateByMoney;
  os << " MarginRateByVolume:" << ftdc_struct.MarginRateByVolume;
  os << " LastSettlementPrice:" << ftdc_struct.LastSettlementPrice;
  os << " SettlementPrice:" << ftdc_struct.SettlementPrice;
  os << " CloseVolume:" << ftdc_struct.CloseVolume;
  os << " CloseAmount:" << ftdc_struct.CloseAmount;
  os << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CThostFtdcTradingAccountPasswordField& ftdc_struct) {
  os << "ftdc_struct(CThostFtdcTradingAccountPasswordField) ---> BrokerID:" << ftdc_struct.BrokerID;
  os << " AccountID:" << ftdc_struct.AccountID;
  os << " Password:" << "it is a secret"; // ftdc_struct.Password;
  os << " CurrencyID:" << ftdc_struct.CurrencyID;
  os << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CThostFtdcMDTraderOfferField& ftdc_struct) {
  os << "ftdc_struct(CThostFtdcMDTraderOfferField) ---> ExchangeID:" << ftdc_struct.ExchangeID;
  os << " TraderID:" << ftdc_struct.TraderID;
  os << " ParticipantID:" << ftdc_struct.ParticipantID;
  os << " Password:" << "it is a secret"; // ftdc_struct.Password;
  os << " InstallID:" << ftdc_struct.InstallID;
  os << " OrderLocalID:" << ftdc_struct.OrderLocalID;
  os << " TraderConnectStatus:" << ftdc_struct.TraderConnectStatus;
  os << " ConnectRequestDate:" << ftdc_struct.ConnectRequestDate;
  os << " ConnectRequestTime:" << ftdc_struct.ConnectRequestTime;
  os << " LastReportDate:" << ftdc_struct.LastReportDate;
  os << " LastReportTime:" << ftdc_struct.LastReportTime;
  os << " ConnectDate:" << ftdc_struct.ConnectDate;
  os << " ConnectTime:" << ftdc_struct.ConnectTime;
  os << " StartDate:" << ftdc_struct.StartDate;
  os << " StartTime:" << ftdc_struct.StartTime;
  os << " TradingDay:" << ftdc_struct.TradingDay;
  os << " BrokerID:" << ftdc_struct.BrokerID;
  os << " MaxTradeID:" << ftdc_struct.MaxTradeID;
  os << " MaxOrderMessageReference:" << ftdc_struct.MaxOrderMessageReference;
  os << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CThostFtdcQryMDTraderOfferField& ftdc_struct) {
  os << "ftdc_struct(CThostFtdcQryMDTraderOfferField) ---> ExchangeID:" << ftdc_struct.ExchangeID;
  os << " ParticipantID:" << ftdc_struct.ParticipantID;
  os << " TraderID:" << ftdc_struct.TraderID;
  os << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CThostFtdcQryNoticeField& ftdc_struct) {
  os << "ftdc_struct(CThostFtdcQryNoticeField) ---> BrokerID:" << ftdc_struct.BrokerID;
  os << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CThostFtdcNoticeField& ftdc_struct) {
  os << "ftdc_struct(CThostFtdcNoticeField) ---> BrokerID:" << ftdc_struct.BrokerID;
  os << " Content:" << ftdc_struct.Content;
  os << " SequenceLabel:" << ftdc_struct.SequenceLabel;
  os << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CThostFtdcUserRightField& ftdc_struct) {
  os << "ftdc_struct(CThostFtdcUserRightField) ---> BrokerID:" << ftdc_struct.BrokerID;
  os << " UserID:" << ftdc_struct.UserID;
  os << " UserRightType:" << ftdc_struct.UserRightType;
  os << " IsForbidden:" << ftdc_struct.IsForbidden;
  os << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CThostFtdcQrySettlementInfoConfirmField& ftdc_struct) {
  os << "ftdc_struct(CThostFtdcQrySettlementInfoConfirmField) ---> BrokerID:" << ftdc_struct.BrokerID;
  os << " InvestorID:" << ftdc_struct.InvestorID;
  os << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CThostFtdcLoadSettlementInfoField& ftdc_struct) {
  os << "ftdc_struct(CThostFtdcLoadSettlementInfoField) ---> BrokerID:" << ftdc_struct.BrokerID;
  os << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CThostFtdcBrokerWithdrawAlgorithmField& ftdc_struct) {
  os << "ftdc_struct(CThostFtdcBrokerWithdrawAlgorithmField) ---> BrokerID:" << ftdc_struct.BrokerID;
  os << " WithdrawAlgorithm:" << ftdc_struct.WithdrawAlgorithm;
  os << " UsingRatio:" << ftdc_struct.UsingRatio;
  os << " IncludeCloseProfit:" << ftdc_struct.IncludeCloseProfit;
  os << " AllWithoutTrade:" << ftdc_struct.AllWithoutTrade;
  os << " AvailIncludeCloseProfit:" << ftdc_struct.AvailIncludeCloseProfit;
  os << " IsBrokerUserEvent:" << ftdc_struct.IsBrokerUserEvent;
  os << " CurrencyID:" << ftdc_struct.CurrencyID;
  os << " FundMortgageRatio:" << ftdc_struct.FundMortgageRatio;
  os << " BalanceAlgorithm:" << ftdc_struct.BalanceAlgorithm;
  os << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CThostFtdcTradingAccountPasswordUpdateV1Field& ftdc_struct) {
  os << "ftdc_struct(CThostFtdcTradingAccountPasswordUpdateV1Field) ---> BrokerID:" << ftdc_struct.BrokerID;
  os << " InvestorID:" << ftdc_struct.InvestorID;
  os << " OldPassword:" << "it is a secret"; // ftdc_struct.OldPassword;
  os << " NewPassword:" << "it is a secret"; // ftdc_struct.NewPassword;
  os << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CThostFtdcTradingAccountPasswordUpdateField& ftdc_struct) {
  os << "ftdc_struct(CThostFtdcTradingAccountPasswordUpdateField) ---> BrokerID:" << ftdc_struct.BrokerID;
  os << " AccountID:" << ftdc_struct.AccountID;
  os << " OldPassword:" << "it is a secret"; // ftdc_struct.OldPassword;
  os << " NewPassword:" << "it is a secret"; // ftdc_struct.NewPassword;
  os << " CurrencyID:" << ftdc_struct.CurrencyID;
  os << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CThostFtdcQryCombinationLegField& ftdc_struct) {
  os << "ftdc_struct(CThostFtdcQryCombinationLegField) ---> CombInstrumentID:" << ftdc_struct.CombInstrumentID;
  os << " LegID:" << ftdc_struct.LegID;
  os << " LegInstrumentID:" << ftdc_struct.LegInstrumentID;
  os << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CThostFtdcQrySyncStatusField& ftdc_struct) {
  os << "ftdc_struct(CThostFtdcQrySyncStatusField) ---> TradingDay:" << ftdc_struct.TradingDay;
  os << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CThostFtdcCombinationLegField& ftdc_struct) {
  os << "ftdc_struct(CThostFtdcCombinationLegField) ---> CombInstrumentID:" << ftdc_struct.CombInstrumentID;
  os << " LegID:" << ftdc_struct.LegID;
  os << " LegInstrumentID:" << ftdc_struct.LegInstrumentID;
  os << " Direction:" << ftdc_struct.Direction;
  os << " LegMultiple:" << ftdc_struct.LegMultiple;
  os << " ImplyLevel:" << ftdc_struct.ImplyLevel;
  os << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CThostFtdcSyncStatusField& ftdc_struct) {
  os << "ftdc_struct(CThostFtdcSyncStatusField) ---> TradingDay:" << ftdc_struct.TradingDay;
  os << " DataSyncStatus:" << ftdc_struct.DataSyncStatus;
  os << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CThostFtdcQryLinkManField& ftdc_struct) {
  os << "ftdc_struct(CThostFtdcQryLinkManField) ---> BrokerID:" << ftdc_struct.BrokerID;
  os << " InvestorID:" << ftdc_struct.InvestorID;
  os << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CThostFtdcLinkManField& ftdc_struct) {
  os << "ftdc_struct(CThostFtdcLinkManField) ---> BrokerID:" << ftdc_struct.BrokerID;
  os << " InvestorID:" << ftdc_struct.InvestorID;
  os << " PersonType:" << ftdc_struct.PersonType;
  os << " IdentifiedCardType:" << ftdc_struct.IdentifiedCardType;
  os << " IdentifiedCardNo:" << ftdc_struct.IdentifiedCardNo;
  os << " PersonName:" << ftdc_struct.PersonName;
  os << " Telephone:" << ftdc_struct.Telephone;
  os << " Address:" << ftdc_struct.Address;
  os << " ZipCode:" << ftdc_struct.ZipCode;
  os << " Priority:" << ftdc_struct.Priority;
  os << " UOAZipCode:" << ftdc_struct.UOAZipCode;
  os << " PersonFullName:" << ftdc_struct.PersonFullName;
  os << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CThostFtdcQryBrokerUserEventField& ftdc_struct) {
  os << "ftdc_struct(CThostFtdcQryBrokerUserEventField) ---> BrokerID:" << ftdc_struct.BrokerID;
  os << " UserID:" << ftdc_struct.UserID;
  os << " UserEventType:" << ftdc_struct.UserEventType;
  os << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CThostFtdcBrokerUserEventField& ftdc_struct) {
  os << "ftdc_struct(CThostFtdcBrokerUserEventField) ---> BrokerID:" << ftdc_struct.BrokerID;
  os << " UserID:" << ftdc_struct.UserID;
  os << " UserEventType:" << ftdc_struct.UserEventType;
  os << " EventSequenceNo:" << ftdc_struct.EventSequenceNo;
  os << " EventDate:" << ftdc_struct.EventDate;
  os << " EventTime:" << ftdc_struct.EventTime;
  os << " UserEventInfo:" << ftdc_struct.UserEventInfo;
  os << " InvestorID:" << ftdc_struct.InvestorID;
  os << " InstrumentID:" << ftdc_struct.InstrumentID;
  os << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CThostFtdcQryContractBankField& ftdc_struct) {
  os << "ftdc_struct(CThostFtdcQryContractBankField) ---> BrokerID:" << ftdc_struct.BrokerID;
  os << " BankID:" << ftdc_struct.BankID;
  os << " BankBrchID:" << ftdc_struct.BankBrchID;
  os << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CThostFtdcContractBankField& ftdc_struct) {
  os << "ftdc_struct(CThostFtdcContractBankField) ---> BrokerID:" << ftdc_struct.BrokerID;
  os << " BankID:" << ftdc_struct.BankID;
  os << " BankBrchID:" << ftdc_struct.BankBrchID;
  os << " BankName:" << ftdc_struct.BankName;
  os << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CThostFtdcInvestorPositionCombineDetailField& ftdc_struct) {
  os << "ftdc_struct(CThostFtdcInvestorPositionCombineDetailField) ---> TradingDay:" << ftdc_struct.TradingDay;
  os << " OpenDate:" << ftdc_struct.OpenDate;
  os << " ExchangeID:" << ftdc_struct.ExchangeID;
  os << " SettlementID:" << ftdc_struct.SettlementID;
  os << " BrokerID:" << ftdc_struct.BrokerID;
  os << " InvestorID:" << ftdc_struct.InvestorID;
  os << " ComTradeID:" << ftdc_struct.ComTradeID;
  os << " TradeID:" << ftdc_struct.TradeID;
  os << " InstrumentID:" << ftdc_struct.InstrumentID;
  os << " HedgeFlag:" << ftdc_struct.HedgeFlag;
  os << " Direction:" << ftdc_struct.Direction;
  os << " TotalAmt:" << ftdc_struct.TotalAmt;
  os << " Margin:" << ftdc_struct.Margin;
  os << " ExchMargin:" << ftdc_struct.ExchMargin;
  os << " MarginRateByMoney:" << ftdc_struct.MarginRateByMoney;
  os << " MarginRateByVolume:" << ftdc_struct.MarginRateByVolume;
  os << " LegID:" << ftdc_struct.LegID;
  os << " LegMultiple:" << ftdc_struct.LegMultiple;
  os << " CombInstrumentID:" << ftdc_struct.CombInstrumentID;
  os << " TradeGroupID:" << ftdc_struct.TradeGroupID;
  os << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CThostFtdcParkedOrderField& ftdc_struct) {
  os << "ftdc_struct(CThostFtdcParkedOrderField) ---> BrokerID:" << ftdc_struct.BrokerID;
  os << " InvestorID:" << ftdc_struct.InvestorID;
  os << " InstrumentID:" << ftdc_struct.InstrumentID;
  os << " OrderRef:" << ftdc_struct.OrderRef;
  os << " UserID:" << ftdc_struct.UserID;
  os << " OrderPriceType:" << ftdc_struct.OrderPriceType;
  os << " Direction:" << ftdc_struct.Direction;
  os << " CombOffsetFlag:" << ftdc_struct.CombOffsetFlag;
  os << " CombHedgeFlag:" << ftdc_struct.CombHedgeFlag;
  os << " LimitPrice:" << ftdc_struct.LimitPrice;
  os << " VolumeTotalOriginal:" << ftdc_struct.VolumeTotalOriginal;
  os << " TimeCondition:" << ftdc_struct.TimeCondition;
  os << " GTDDate:" << ftdc_struct.GTDDate;
  os << " VolumeCondition:" << ftdc_struct.VolumeCondition;
  os << " MinVolume:" << ftdc_struct.MinVolume;
  os << " ContingentCondition:" << ftdc_struct.ContingentCondition;
  os << " StopPrice:" << ftdc_struct.StopPrice;
  os << " ForceCloseReason:" << ftdc_struct.ForceCloseReason;
  os << " IsAutoSuspend:" << ftdc_struct.IsAutoSuspend;
  os << " BusinessUnit:" << ftdc_struct.BusinessUnit;
  os << " RequestID:" << ftdc_struct.RequestID;
  os << " UserForceClose:" << ftdc_struct.UserForceClose;
  os << " ExchangeID:" << ftdc_struct.ExchangeID;
  os << " ParkedOrderID:" << ftdc_struct.ParkedOrderID;
  os << " UserType:" << ftdc_struct.UserType;
  os << " Status:" << ftdc_struct.Status;
  os << " ErrorID:" << ftdc_struct.ErrorID;
  os << " ErrorMsg:" << ftdc_struct.ErrorMsg;
  os << " IsSwapOrder:" << ftdc_struct.IsSwapOrder;
  os << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CThostFtdcParkedOrderActionField& ftdc_struct) {
  os << "ftdc_struct(CThostFtdcParkedOrderActionField) ---> BrokerID:" << ftdc_struct.BrokerID;
  os << " InvestorID:" << ftdc_struct.InvestorID;
  os << " OrderActionRef:" << ftdc_struct.OrderActionRef;
  os << " OrderRef:" << ftdc_struct.OrderRef;
  os << " RequestID:" << ftdc_struct.RequestID;
  os << " FrontID:" << ftdc_struct.FrontID;
  os << " SessionID:" << ftdc_struct.SessionID;
  os << " ExchangeID:" << ftdc_struct.ExchangeID;
  os << " OrderSysID:" << ftdc_struct.OrderSysID;
  os << " ActionFlag:" << ftdc_struct.ActionFlag;
  os << " LimitPrice:" << ftdc_struct.LimitPrice;
  os << " VolumeChange:" << ftdc_struct.VolumeChange;
  os << " UserID:" << ftdc_struct.UserID;
  os << " InstrumentID:" << ftdc_struct.InstrumentID;
  os << " ParkedOrderActionID:" << ftdc_struct.ParkedOrderActionID;
  os << " UserType:" << ftdc_struct.UserType;
  os << " Status:" << ftdc_struct.Status;
  os << " ErrorID:" << ftdc_struct.ErrorID;
  os << " ErrorMsg:" << ftdc_struct.ErrorMsg;
  os << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CThostFtdcQryParkedOrderField& ftdc_struct) {
  os << "ftdc_struct(CThostFtdcQryParkedOrderField) ---> BrokerID:" << ftdc_struct.BrokerID;
  os << " InvestorID:" << ftdc_struct.InvestorID;
  os << " InstrumentID:" << ftdc_struct.InstrumentID;
  os << " ExchangeID:" << ftdc_struct.ExchangeID;
  os << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CThostFtdcQryParkedOrderActionField& ftdc_struct) {
  os << "ftdc_struct(CThostFtdcQryParkedOrderActionField) ---> BrokerID:" << ftdc_struct.BrokerID;
  os << " InvestorID:" << ftdc_struct.InvestorID;
  os << " InstrumentID:" << ftdc_struct.InstrumentID;
  os << " ExchangeID:" << ftdc_struct.ExchangeID;
  os << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CThostFtdcRemoveParkedOrderField& ftdc_struct) {
  os << "ftdc_struct(CThostFtdcRemoveParkedOrderField) ---> BrokerID:" << ftdc_struct.BrokerID;
  os << " InvestorID:" << ftdc_struct.InvestorID;
  os << " ParkedOrderID:" << ftdc_struct.ParkedOrderID;
  os << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CThostFtdcRemoveParkedOrderActionField& ftdc_struct) {
  os << "ftdc_struct(CThostFtdcRemoveParkedOrderActionField) ---> BrokerID:" << ftdc_struct.BrokerID;
  os << " InvestorID:" << ftdc_struct.InvestorID;
  os << " ParkedOrderActionID:" << ftdc_struct.ParkedOrderActionID;
  os << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CThostFtdcInvestorWithdrawAlgorithmField& ftdc_struct) {
  os << "ftdc_struct(CThostFtdcInvestorWithdrawAlgorithmField) ---> BrokerID:" << ftdc_struct.BrokerID;
  os << " InvestorRange:" << ftdc_struct.InvestorRange;
  os << " InvestorID:" << ftdc_struct.InvestorID;
  os << " UsingRatio:" << ftdc_struct.UsingRatio;
  os << " CurrencyID:" << ftdc_struct.CurrencyID;
  os << " FundMortgageRatio:" << ftdc_struct.FundMortgageRatio;
  os << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CThostFtdcQryInvestorPositionCombineDetailField& ftdc_struct) {
  os << "ftdc_struct(CThostFtdcQryInvestorPositionCombineDetailField) ---> BrokerID:" << ftdc_struct.BrokerID;
  os << " InvestorID:" << ftdc_struct.InvestorID;
  os << " CombInstrumentID:" << ftdc_struct.CombInstrumentID;
  os << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CThostFtdcMarketDataAveragePriceField& ftdc_struct) {
  os << "ftdc_struct(CThostFtdcMarketDataAveragePriceField) ---> AveragePrice:" << ftdc_struct.AveragePrice;
  os << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CThostFtdcVerifyInvestorPasswordField& ftdc_struct) {
  os << "ftdc_struct(CThostFtdcVerifyInvestorPasswordField) ---> BrokerID:" << ftdc_struct.BrokerID;
  os << " InvestorID:" << ftdc_struct.InvestorID;
  os << " Password:" << "it is a secret"; // ftdc_struct.Password;
  os << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CThostFtdcUserIPField& ftdc_struct) {
  os << "ftdc_struct(CThostFtdcUserIPField) ---> BrokerID:" << ftdc_struct.BrokerID;
  os << " UserID:" << ftdc_struct.UserID;
  os << " IPAddress:" << ftdc_struct.IPAddress;
  os << " IPMask:" << ftdc_struct.IPMask;
  os << " MacAddress:" << ftdc_struct.MacAddress;
  os << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CThostFtdcTradingNoticeInfoField& ftdc_struct) {
  os << "ftdc_struct(CThostFtdcTradingNoticeInfoField) ---> BrokerID:" << ftdc_struct.BrokerID;
  os << " InvestorID:" << ftdc_struct.InvestorID;
  os << " SendTime:" << ftdc_struct.SendTime;
  os << " FieldContent:" << ftdc_struct.FieldContent;
  os << " SequenceSeries:" << ftdc_struct.SequenceSeries;
  os << " SequenceNo:" << ftdc_struct.SequenceNo;
  os << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CThostFtdcTradingNoticeField& ftdc_struct) {
  os << "ftdc_struct(CThostFtdcTradingNoticeField) ---> BrokerID:" << ftdc_struct.BrokerID;
  os << " InvestorRange:" << ftdc_struct.InvestorRange;
  os << " InvestorID:" << ftdc_struct.InvestorID;
  os << " SequenceSeries:" << ftdc_struct.SequenceSeries;
  os << " UserID:" << ftdc_struct.UserID;
  os << " SendTime:" << ftdc_struct.SendTime;
  os << " SequenceNo:" << ftdc_struct.SequenceNo;
  os << " FieldContent:" << ftdc_struct.FieldContent;
  os << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CThostFtdcQryTradingNoticeField& ftdc_struct) {
  os << "ftdc_struct(CThostFtdcQryTradingNoticeField) ---> BrokerID:" << ftdc_struct.BrokerID;
  os << " InvestorID:" << ftdc_struct.InvestorID;
  os << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CThostFtdcQryErrOrderField& ftdc_struct) {
  os << "ftdc_struct(CThostFtdcQryErrOrderField) ---> BrokerID:" << ftdc_struct.BrokerID;
  os << " InvestorID:" << ftdc_struct.InvestorID;
  os << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CThostFtdcErrOrderField& ftdc_struct) {
  os << "ftdc_struct(CThostFtdcErrOrderField) ---> BrokerID:" << ftdc_struct.BrokerID;
  os << " InvestorID:" << ftdc_struct.InvestorID;
  os << " InstrumentID:" << ftdc_struct.InstrumentID;
  os << " OrderRef:" << ftdc_struct.OrderRef;
  os << " UserID:" << ftdc_struct.UserID;
  os << " OrderPriceType:" << ftdc_struct.OrderPriceType;
  os << " Direction:" << ftdc_struct.Direction;
  os << " CombOffsetFlag:" << ftdc_struct.CombOffsetFlag;
  os << " CombHedgeFlag:" << ftdc_struct.CombHedgeFlag;
  os << " LimitPrice:" << ftdc_struct.LimitPrice;
  os << " VolumeTotalOriginal:" << ftdc_struct.VolumeTotalOriginal;
  os << " TimeCondition:" << ftdc_struct.TimeCondition;
  os << " GTDDate:" << ftdc_struct.GTDDate;
  os << " VolumeCondition:" << ftdc_struct.VolumeCondition;
  os << " MinVolume:" << ftdc_struct.MinVolume;
  os << " ContingentCondition:" << ftdc_struct.ContingentCondition;
  os << " StopPrice:" << ftdc_struct.StopPrice;
  os << " ForceCloseReason:" << ftdc_struct.ForceCloseReason;
  os << " IsAutoSuspend:" << ftdc_struct.IsAutoSuspend;
  os << " BusinessUnit:" << ftdc_struct.BusinessUnit;
  os << " RequestID:" << ftdc_struct.RequestID;
  os << " UserForceClose:" << ftdc_struct.UserForceClose;
  os << " ErrorID:" << ftdc_struct.ErrorID;
  os << " ErrorMsg:" << ftdc_struct.ErrorMsg;
  os << " IsSwapOrder:" << ftdc_struct.IsSwapOrder;
  os << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CThostFtdcErrorConditionalOrderField& ftdc_struct) {
  os << "ftdc_struct(CThostFtdcErrorConditionalOrderField) ---> BrokerID:" << ftdc_struct.BrokerID;
  os << " InvestorID:" << ftdc_struct.InvestorID;
  os << " InstrumentID:" << ftdc_struct.InstrumentID;
  os << " OrderRef:" << ftdc_struct.OrderRef;
  os << " UserID:" << ftdc_struct.UserID;
  os << " OrderPriceType:" << ftdc_struct.OrderPriceType;
  os << " Direction:" << ftdc_struct.Direction;
  os << " CombOffsetFlag:" << ftdc_struct.CombOffsetFlag;
  os << " CombHedgeFlag:" << ftdc_struct.CombHedgeFlag;
  os << " LimitPrice:" << ftdc_struct.LimitPrice;
  os << " VolumeTotalOriginal:" << ftdc_struct.VolumeTotalOriginal;
  os << " TimeCondition:" << ftdc_struct.TimeCondition;
  os << " GTDDate:" << ftdc_struct.GTDDate;
  os << " VolumeCondition:" << ftdc_struct.VolumeCondition;
  os << " MinVolume:" << ftdc_struct.MinVolume;
  os << " ContingentCondition:" << ftdc_struct.ContingentCondition;
  os << " StopPrice:" << ftdc_struct.StopPrice;
  os << " ForceCloseReason:" << ftdc_struct.ForceCloseReason;
  os << " IsAutoSuspend:" << ftdc_struct.IsAutoSuspend;
  os << " BusinessUnit:" << ftdc_struct.BusinessUnit;
  os << " RequestID:" << ftdc_struct.RequestID;
  os << " OrderLocalID:" << ftdc_struct.OrderLocalID;
  os << " ExchangeID:" << ftdc_struct.ExchangeID;
  os << " ParticipantID:" << ftdc_struct.ParticipantID;
  os << " ClientID:" << ftdc_struct.ClientID;
  os << " ExchangeInstID:" << ftdc_struct.ExchangeInstID;
  os << " TraderID:" << ftdc_struct.TraderID;
  os << " InstallID:" << ftdc_struct.InstallID;
  os << " OrderSubmitStatus:" << ftdc_struct.OrderSubmitStatus;
  os << " NotifySequence:" << ftdc_struct.NotifySequence;
  os << " TradingDay:" << ftdc_struct.TradingDay;
  os << " SettlementID:" << ftdc_struct.SettlementID;
  os << " OrderSysID:" << ftdc_struct.OrderSysID;
  os << " OrderSource:" << ftdc_struct.OrderSource;
  os << " OrderStatus:" << ftdc_struct.OrderStatus;
  os << " OrderType:" << ftdc_struct.OrderType;
  os << " VolumeTraded:" << ftdc_struct.VolumeTraded;
  os << " VolumeTotal:" << ftdc_struct.VolumeTotal;
  os << " InsertDate:" << ftdc_struct.InsertDate;
  os << " InsertTime:" << ftdc_struct.InsertTime;
  os << " ActiveTime:" << ftdc_struct.ActiveTime;
  os << " SuspendTime:" << ftdc_struct.SuspendTime;
  os << " UpdateTime:" << ftdc_struct.UpdateTime;
  os << " CancelTime:" << ftdc_struct.CancelTime;
  os << " ActiveTraderID:" << ftdc_struct.ActiveTraderID;
  os << " ClearingPartID:" << ftdc_struct.ClearingPartID;
  os << " SequenceNo:" << ftdc_struct.SequenceNo;
  os << " FrontID:" << ftdc_struct.FrontID;
  os << " SessionID:" << ftdc_struct.SessionID;
  os << " UserProductInfo:" << ftdc_struct.UserProductInfo;
  os << " StatusMsg:" << ftdc_struct.StatusMsg;
  os << " UserForceClose:" << ftdc_struct.UserForceClose;
  os << " ActiveUserID:" << ftdc_struct.ActiveUserID;
  os << " BrokerOrderSeq:" << ftdc_struct.BrokerOrderSeq;
  os << " RelativeOrderSysID:" << ftdc_struct.RelativeOrderSysID;
  os << " ZCETotalTradedVolume:" << ftdc_struct.ZCETotalTradedVolume;
  os << " ErrorID:" << ftdc_struct.ErrorID;
  os << " ErrorMsg:" << ftdc_struct.ErrorMsg;
  os << " IsSwapOrder:" << ftdc_struct.IsSwapOrder;
  os << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CThostFtdcQryErrOrderActionField& ftdc_struct) {
  os << "ftdc_struct(CThostFtdcQryErrOrderActionField) ---> BrokerID:" << ftdc_struct.BrokerID;
  os << " InvestorID:" << ftdc_struct.InvestorID;
  os << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CThostFtdcErrOrderActionField& ftdc_struct) {
  os << "ftdc_struct(CThostFtdcErrOrderActionField) ---> BrokerID:" << ftdc_struct.BrokerID;
  os << " InvestorID:" << ftdc_struct.InvestorID;
  os << " OrderActionRef:" << ftdc_struct.OrderActionRef;
  os << " OrderRef:" << ftdc_struct.OrderRef;
  os << " RequestID:" << ftdc_struct.RequestID;
  os << " FrontID:" << ftdc_struct.FrontID;
  os << " SessionID:" << ftdc_struct.SessionID;
  os << " ExchangeID:" << ftdc_struct.ExchangeID;
  os << " OrderSysID:" << ftdc_struct.OrderSysID;
  os << " ActionFlag:" << ftdc_struct.ActionFlag;
  os << " LimitPrice:" << ftdc_struct.LimitPrice;
  os << " VolumeChange:" << ftdc_struct.VolumeChange;
  os << " ActionDate:" << ftdc_struct.ActionDate;
  os << " ActionTime:" << ftdc_struct.ActionTime;
  os << " TraderID:" << ftdc_struct.TraderID;
  os << " InstallID:" << ftdc_struct.InstallID;
  os << " OrderLocalID:" << ftdc_struct.OrderLocalID;
  os << " ActionLocalID:" << ftdc_struct.ActionLocalID;
  os << " ParticipantID:" << ftdc_struct.ParticipantID;
  os << " ClientID:" << ftdc_struct.ClientID;
  os << " BusinessUnit:" << ftdc_struct.BusinessUnit;
  os << " OrderActionStatus:" << ftdc_struct.OrderActionStatus;
  os << " UserID:" << ftdc_struct.UserID;
  os << " StatusMsg:" << ftdc_struct.StatusMsg;
  os << " InstrumentID:" << ftdc_struct.InstrumentID;
  os << " ErrorID:" << ftdc_struct.ErrorID;
  os << " ErrorMsg:" << ftdc_struct.ErrorMsg;
  os << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CThostFtdcQryExchangeSequenceField& ftdc_struct) {
  os << "ftdc_struct(CThostFtdcQryExchangeSequenceField) ---> ExchangeID:" << ftdc_struct.ExchangeID;
  os << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CThostFtdcExchangeSequenceField& ftdc_struct) {
  os << "ftdc_struct(CThostFtdcExchangeSequenceField) ---> ExchangeID:" << ftdc_struct.ExchangeID;
  os << " SequenceNo:" << ftdc_struct.SequenceNo;
  os << " MarketStatus:" << ftdc_struct.MarketStatus;
  os << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CThostFtdcQueryMaxOrderVolumeWithPriceField& ftdc_struct) {
  os << "ftdc_struct(CThostFtdcQueryMaxOrderVolumeWithPriceField) ---> BrokerID:" << ftdc_struct.BrokerID;
  os << " InvestorID:" << ftdc_struct.InvestorID;
  os << " InstrumentID:" << ftdc_struct.InstrumentID;
  os << " Direction:" << ftdc_struct.Direction;
  os << " OffsetFlag:" << ftdc_struct.OffsetFlag;
  os << " HedgeFlag:" << ftdc_struct.HedgeFlag;
  os << " MaxVolume:" << ftdc_struct.MaxVolume;
  os << " Price:" << ftdc_struct.Price;
  os << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CThostFtdcQryBrokerTradingParamsField& ftdc_struct) {
  os << "ftdc_struct(CThostFtdcQryBrokerTradingParamsField) ---> BrokerID:" << ftdc_struct.BrokerID;
  os << " InvestorID:" << ftdc_struct.InvestorID;
  os << " CurrencyID:" << ftdc_struct.CurrencyID;
  os << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CThostFtdcBrokerTradingParamsField& ftdc_struct) {
  os << "ftdc_struct(CThostFtdcBrokerTradingParamsField) ---> BrokerID:" << ftdc_struct.BrokerID;
  os << " InvestorID:" << ftdc_struct.InvestorID;
  os << " MarginPriceType:" << ftdc_struct.MarginPriceType;
  os << " Algorithm:" << ftdc_struct.Algorithm;
  os << " AvailIncludeCloseProfit:" << ftdc_struct.AvailIncludeCloseProfit;
  os << " CurrencyID:" << ftdc_struct.CurrencyID;
  os << " OptionRoyaltyPriceType:" << ftdc_struct.OptionRoyaltyPriceType;
  os << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CThostFtdcQryBrokerTradingAlgosField& ftdc_struct) {
  os << "ftdc_struct(CThostFtdcQryBrokerTradingAlgosField) ---> BrokerID:" << ftdc_struct.BrokerID;
  os << " ExchangeID:" << ftdc_struct.ExchangeID;
  os << " InstrumentID:" << ftdc_struct.InstrumentID;
  os << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CThostFtdcBrokerTradingAlgosField& ftdc_struct) {
  os << "ftdc_struct(CThostFtdcBrokerTradingAlgosField) ---> BrokerID:" << ftdc_struct.BrokerID;
  os << " ExchangeID:" << ftdc_struct.ExchangeID;
  os << " InstrumentID:" << ftdc_struct.InstrumentID;
  os << " HandlePositionAlgoID:" << ftdc_struct.HandlePositionAlgoID;
  os << " FindMarginRateAlgoID:" << ftdc_struct.FindMarginRateAlgoID;
  os << " HandleTradingAccountAlgoID:" << ftdc_struct.HandleTradingAccountAlgoID;
  os << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CThostFtdcQueryBrokerDepositField& ftdc_struct) {
  os << "ftdc_struct(CThostFtdcQueryBrokerDepositField) ---> BrokerID:" << ftdc_struct.BrokerID;
  os << " ExchangeID:" << ftdc_struct.ExchangeID;
  os << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CThostFtdcBrokerDepositField& ftdc_struct) {
  os << "ftdc_struct(CThostFtdcBrokerDepositField) ---> TradingDay:" << ftdc_struct.TradingDay;
  os << " BrokerID:" << ftdc_struct.BrokerID;
  os << " ParticipantID:" << ftdc_struct.ParticipantID;
  os << " ExchangeID:" << ftdc_struct.ExchangeID;
  os << " PreBalance:" << ftdc_struct.PreBalance;
  os << " CurrMargin:" << ftdc_struct.CurrMargin;
  os << " CloseProfit:" << ftdc_struct.CloseProfit;
  os << " Balance:" << ftdc_struct.Balance;
  os << " Deposit:" << ftdc_struct.Deposit;
  os << " Withdraw:" << ftdc_struct.Withdraw;
  os << " Available:" << ftdc_struct.Available;
  os << " Reserve:" << ftdc_struct.Reserve;
  os << " FrozenMargin:" << ftdc_struct.FrozenMargin;
  os << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CThostFtdcQryCFMMCBrokerKeyField& ftdc_struct) {
  os << "ftdc_struct(CThostFtdcQryCFMMCBrokerKeyField) ---> BrokerID:" << ftdc_struct.BrokerID;
  os << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CThostFtdcCFMMCBrokerKeyField& ftdc_struct) {
  os << "ftdc_struct(CThostFtdcCFMMCBrokerKeyField) ---> BrokerID:" << ftdc_struct.BrokerID;
  os << " ParticipantID:" << ftdc_struct.ParticipantID;
  os << " CreateDate:" << ftdc_struct.CreateDate;
  os << " CreateTime:" << ftdc_struct.CreateTime;
  os << " KeyID:" << ftdc_struct.KeyID;
  os << " CurrentKey:" << ftdc_struct.CurrentKey;
  os << " KeyKind:" << ftdc_struct.KeyKind;
  os << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CThostFtdcCFMMCTradingAccountKeyField& ftdc_struct) {
  os << "ftdc_struct(CThostFtdcCFMMCTradingAccountKeyField) ---> BrokerID:" << ftdc_struct.BrokerID;
  os << " ParticipantID:" << ftdc_struct.ParticipantID;
  os << " AccountID:" << ftdc_struct.AccountID;
  os << " KeyID:" << ftdc_struct.KeyID;
  os << " CurrentKey:" << ftdc_struct.CurrentKey;
  os << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CThostFtdcQryCFMMCTradingAccountKeyField& ftdc_struct) {
  os << "ftdc_struct(CThostFtdcQryCFMMCTradingAccountKeyField) ---> BrokerID:" << ftdc_struct.BrokerID;
  os << " InvestorID:" << ftdc_struct.InvestorID;
  os << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CThostFtdcBrokerUserOTPParamField& ftdc_struct) {
  os << "ftdc_struct(CThostFtdcBrokerUserOTPParamField) ---> BrokerID:" << ftdc_struct.BrokerID;
  os << " UserID:" << ftdc_struct.UserID;
  os << " OTPVendorsID:" << ftdc_struct.OTPVendorsID;
  os << " SerialNumber:" << ftdc_struct.SerialNumber;
  os << " AuthKey:" << ftdc_struct.AuthKey;
  os << " LastDrift:" << ftdc_struct.LastDrift;
  os << " LastSuccess:" << ftdc_struct.LastSuccess;
  os << " OTPType:" << ftdc_struct.OTPType;
  os << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CThostFtdcManualSyncBrokerUserOTPField& ftdc_struct) {
  os << "ftdc_struct(CThostFtdcManualSyncBrokerUserOTPField) ---> BrokerID:" << ftdc_struct.BrokerID;
  os << " UserID:" << ftdc_struct.UserID;
  os << " OTPType:" << ftdc_struct.OTPType;
  os << " FirstOTP:" << ftdc_struct.FirstOTP;
  os << " SecondOTP:" << ftdc_struct.SecondOTP;
  os << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CThostFtdcCommRateModelField& ftdc_struct) {
  os << "ftdc_struct(CThostFtdcCommRateModelField) ---> BrokerID:" << ftdc_struct.BrokerID;
  os << " CommModelID:" << ftdc_struct.CommModelID;
  os << " CommModelName:" << ftdc_struct.CommModelName;
  os << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CThostFtdcQryCommRateModelField& ftdc_struct) {
  os << "ftdc_struct(CThostFtdcQryCommRateModelField) ---> BrokerID:" << ftdc_struct.BrokerID;
  os << " CommModelID:" << ftdc_struct.CommModelID;
  os << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CThostFtdcMarginModelField& ftdc_struct) {
  os << "ftdc_struct(CThostFtdcMarginModelField) ---> BrokerID:" << ftdc_struct.BrokerID;
  os << " MarginModelID:" << ftdc_struct.MarginModelID;
  os << " MarginModelName:" << ftdc_struct.MarginModelName;
  os << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CThostFtdcQryMarginModelField& ftdc_struct) {
  os << "ftdc_struct(CThostFtdcQryMarginModelField) ---> BrokerID:" << ftdc_struct.BrokerID;
  os << " MarginModelID:" << ftdc_struct.MarginModelID;
  os << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CThostFtdcEWarrantOffsetField& ftdc_struct) {
  os << "ftdc_struct(CThostFtdcEWarrantOffsetField) ---> TradingDay:" << ftdc_struct.TradingDay;
  os << " BrokerID:" << ftdc_struct.BrokerID;
  os << " InvestorID:" << ftdc_struct.InvestorID;
  os << " ExchangeID:" << ftdc_struct.ExchangeID;
  os << " InstrumentID:" << ftdc_struct.InstrumentID;
  os << " Direction:" << ftdc_struct.Direction;
  os << " HedgeFlag:" << ftdc_struct.HedgeFlag;
  os << " Volume:" << ftdc_struct.Volume;
  os << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CThostFtdcQryEWarrantOffsetField& ftdc_struct) {
  os << "ftdc_struct(CThostFtdcQryEWarrantOffsetField) ---> BrokerID:" << ftdc_struct.BrokerID;
  os << " InvestorID:" << ftdc_struct.InvestorID;
  os << " ExchangeID:" << ftdc_struct.ExchangeID;
  os << " InstrumentID:" << ftdc_struct.InstrumentID;
  os << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CThostFtdcQryInvestorProductGroupMarginField& ftdc_struct) {
  os << "ftdc_struct(CThostFtdcQryInvestorProductGroupMarginField) ---> BrokerID:" << ftdc_struct.BrokerID;
  os << " InvestorID:" << ftdc_struct.InvestorID;
  os << " ProductGroupID:" << ftdc_struct.ProductGroupID;
  os << " HedgeFlag:" << ftdc_struct.HedgeFlag;
  os << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CThostFtdcInvestorProductGroupMarginField& ftdc_struct) {
  os << "ftdc_struct(CThostFtdcInvestorProductGroupMarginField) ---> ProductGroupID:" << ftdc_struct.ProductGroupID;
  os << " BrokerID:" << ftdc_struct.BrokerID;
  os << " InvestorID:" << ftdc_struct.InvestorID;
  os << " TradingDay:" << ftdc_struct.TradingDay;
  os << " SettlementID:" << ftdc_struct.SettlementID;
  os << " FrozenMargin:" << ftdc_struct.FrozenMargin;
  os << " LongFrozenMargin:" << ftdc_struct.LongFrozenMargin;
  os << " ShortFrozenMargin:" << ftdc_struct.ShortFrozenMargin;
  os << " UseMargin:" << ftdc_struct.UseMargin;
  os << " LongUseMargin:" << ftdc_struct.LongUseMargin;
  os << " ShortUseMargin:" << ftdc_struct.ShortUseMargin;
  os << " ExchMargin:" << ftdc_struct.ExchMargin;
  os << " LongExchMargin:" << ftdc_struct.LongExchMargin;
  os << " ShortExchMargin:" << ftdc_struct.ShortExchMargin;
  os << " CloseProfit:" << ftdc_struct.CloseProfit;
  os << " FrozenCommission:" << ftdc_struct.FrozenCommission;
  os << " Commission:" << ftdc_struct.Commission;
  os << " FrozenCash:" << ftdc_struct.FrozenCash;
  os << " CashIn:" << ftdc_struct.CashIn;
  os << " PositionProfit:" << ftdc_struct.PositionProfit;
  os << " OffsetAmount:" << ftdc_struct.OffsetAmount;
  os << " LongOffsetAmount:" << ftdc_struct.LongOffsetAmount;
  os << " ShortOffsetAmount:" << ftdc_struct.ShortOffsetAmount;
  os << " ExchOffsetAmount:" << ftdc_struct.ExchOffsetAmount;
  os << " LongExchOffsetAmount:" << ftdc_struct.LongExchOffsetAmount;
  os << " ShortExchOffsetAmount:" << ftdc_struct.ShortExchOffsetAmount;
  os << " HedgeFlag:" << ftdc_struct.HedgeFlag;
  os << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CThostFtdcQueryCFMMCTradingAccountTokenField& ftdc_struct) {
  os << "ftdc_struct(CThostFtdcQueryCFMMCTradingAccountTokenField) ---> BrokerID:" << ftdc_struct.BrokerID;
  os << " InvestorID:" << ftdc_struct.InvestorID;
  os << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CThostFtdcCFMMCTradingAccountTokenField& ftdc_struct) {
  os << "ftdc_struct(CThostFtdcCFMMCTradingAccountTokenField) ---> BrokerID:" << ftdc_struct.BrokerID;
  os << " ParticipantID:" << ftdc_struct.ParticipantID;
  os << " AccountID:" << ftdc_struct.AccountID;
  os << " KeyID:" << ftdc_struct.KeyID;
  os << " Token:" << ftdc_struct.Token;
  os << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CThostFtdcReqOpenAccountField& ftdc_struct) {
  os << "ftdc_struct(CThostFtdcReqOpenAccountField) ---> TradeCode:" << ftdc_struct.TradeCode;
  os << " BankID:" << ftdc_struct.BankID;
  os << " BankBranchID:" << ftdc_struct.BankBranchID;
  os << " BrokerID:" << ftdc_struct.BrokerID;
  os << " BrokerBranchID:" << ftdc_struct.BrokerBranchID;
  os << " TradeDate:" << ftdc_struct.TradeDate;
  os << " TradeTime:" << ftdc_struct.TradeTime;
  os << " BankSerial:" << ftdc_struct.BankSerial;
  os << " TradingDay:" << ftdc_struct.TradingDay;
  os << " PlateSerial:" << ftdc_struct.PlateSerial;
  os << " LastFragment:" << ftdc_struct.LastFragment;
  os << " SessionID:" << ftdc_struct.SessionID;
  os << " CustomerName:" << ftdc_struct.CustomerName;
  os << " IdCardType:" << ftdc_struct.IdCardType;
  os << " IdentifiedCardNo:" << ftdc_struct.IdentifiedCardNo;
  os << " Gender:" << ftdc_struct.Gender;
  os << " CountryCode:" << ftdc_struct.CountryCode;
  os << " CustType:" << ftdc_struct.CustType;
  os << " Address:" << ftdc_struct.Address;
  os << " ZipCode:" << ftdc_struct.ZipCode;
  os << " Telephone:" << ftdc_struct.Telephone;
  os << " MobilePhone:" << ftdc_struct.MobilePhone;
  os << " Fax:" << ftdc_struct.Fax;
  os << " EMail:" << ftdc_struct.EMail;
  os << " MoneyAccountStatus:" << ftdc_struct.MoneyAccountStatus;
  os << " BankAccount:" << ftdc_struct.BankAccount;
  os << " BankPassWord:" << "it is a secret"; // ftdc_struct.BankPassWord;
  os << " AccountID:" << ftdc_struct.AccountID;
  os << " Password:" << "it is a secret"; // ftdc_struct.Password;
  os << " InstallID:" << ftdc_struct.InstallID;
  os << " VerifyCertNoFlag:" << ftdc_struct.VerifyCertNoFlag;
  os << " CurrencyID:" << ftdc_struct.CurrencyID;
  os << " CashExchangeCode:" << ftdc_struct.CashExchangeCode;
  os << " Digest:" << ftdc_struct.Digest;
  os << " BankAccType:" << ftdc_struct.BankAccType;
  os << " DeviceID:" << ftdc_struct.DeviceID;
  os << " BankSecuAccType:" << ftdc_struct.BankSecuAccType;
  os << " BrokerIDByBank:" << ftdc_struct.BrokerIDByBank;
  os << " BankSecuAcc:" << ftdc_struct.BankSecuAcc;
  os << " BankPwdFlag:" << ftdc_struct.BankPwdFlag;
  os << " SecuPwdFlag:" << ftdc_struct.SecuPwdFlag;
  os << " OperNo:" << ftdc_struct.OperNo;
  os << " TID:" << ftdc_struct.TID;
  os << " UserID:" << ftdc_struct.UserID;
  os << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CThostFtdcReqCancelAccountField& ftdc_struct) {
  os << "ftdc_struct(CThostFtdcReqCancelAccountField) ---> TradeCode:" << ftdc_struct.TradeCode;
  os << " BankID:" << ftdc_struct.BankID;
  os << " BankBranchID:" << ftdc_struct.BankBranchID;
  os << " BrokerID:" << ftdc_struct.BrokerID;
  os << " BrokerBranchID:" << ftdc_struct.BrokerBranchID;
  os << " TradeDate:" << ftdc_struct.TradeDate;
  os << " TradeTime:" << ftdc_struct.TradeTime;
  os << " BankSerial:" << ftdc_struct.BankSerial;
  os << " TradingDay:" << ftdc_struct.TradingDay;
  os << " PlateSerial:" << ftdc_struct.PlateSerial;
  os << " LastFragment:" << ftdc_struct.LastFragment;
  os << " SessionID:" << ftdc_struct.SessionID;
  os << " CustomerName:" << ftdc_struct.CustomerName;
  os << " IdCardType:" << ftdc_struct.IdCardType;
  os << " IdentifiedCardNo:" << ftdc_struct.IdentifiedCardNo;
  os << " Gender:" << ftdc_struct.Gender;
  os << " CountryCode:" << ftdc_struct.CountryCode;
  os << " CustType:" << ftdc_struct.CustType;
  os << " Address:" << ftdc_struct.Address;
  os << " ZipCode:" << ftdc_struct.ZipCode;
  os << " Telephone:" << ftdc_struct.Telephone;
  os << " MobilePhone:" << ftdc_struct.MobilePhone;
  os << " Fax:" << ftdc_struct.Fax;
  os << " EMail:" << ftdc_struct.EMail;
  os << " MoneyAccountStatus:" << ftdc_struct.MoneyAccountStatus;
  os << " BankAccount:" << ftdc_struct.BankAccount;
  os << " BankPassWord:" << "it is a secret"; // ftdc_struct.BankPassWord;
  os << " AccountID:" << ftdc_struct.AccountID;
  os << " Password:" << "it is a secret"; // ftdc_struct.Password;
  os << " InstallID:" << ftdc_struct.InstallID;
  os << " VerifyCertNoFlag:" << ftdc_struct.VerifyCertNoFlag;
  os << " CurrencyID:" << ftdc_struct.CurrencyID;
  os << " CashExchangeCode:" << ftdc_struct.CashExchangeCode;
  os << " Digest:" << ftdc_struct.Digest;
  os << " BankAccType:" << ftdc_struct.BankAccType;
  os << " DeviceID:" << ftdc_struct.DeviceID;
  os << " BankSecuAccType:" << ftdc_struct.BankSecuAccType;
  os << " BrokerIDByBank:" << ftdc_struct.BrokerIDByBank;
  os << " BankSecuAcc:" << ftdc_struct.BankSecuAcc;
  os << " BankPwdFlag:" << ftdc_struct.BankPwdFlag;
  os << " SecuPwdFlag:" << ftdc_struct.SecuPwdFlag;
  os << " OperNo:" << ftdc_struct.OperNo;
  os << " TID:" << ftdc_struct.TID;
  os << " UserID:" << ftdc_struct.UserID;
  os << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CThostFtdcReqChangeAccountField& ftdc_struct) {
  os << "ftdc_struct(CThostFtdcReqChangeAccountField) ---> TradeCode:" << ftdc_struct.TradeCode;
  os << " BankID:" << ftdc_struct.BankID;
  os << " BankBranchID:" << ftdc_struct.BankBranchID;
  os << " BrokerID:" << ftdc_struct.BrokerID;
  os << " BrokerBranchID:" << ftdc_struct.BrokerBranchID;
  os << " TradeDate:" << ftdc_struct.TradeDate;
  os << " TradeTime:" << ftdc_struct.TradeTime;
  os << " BankSerial:" << ftdc_struct.BankSerial;
  os << " TradingDay:" << ftdc_struct.TradingDay;
  os << " PlateSerial:" << ftdc_struct.PlateSerial;
  os << " LastFragment:" << ftdc_struct.LastFragment;
  os << " SessionID:" << ftdc_struct.SessionID;
  os << " CustomerName:" << ftdc_struct.CustomerName;
  os << " IdCardType:" << ftdc_struct.IdCardType;
  os << " IdentifiedCardNo:" << ftdc_struct.IdentifiedCardNo;
  os << " Gender:" << ftdc_struct.Gender;
  os << " CountryCode:" << ftdc_struct.CountryCode;
  os << " CustType:" << ftdc_struct.CustType;
  os << " Address:" << ftdc_struct.Address;
  os << " ZipCode:" << ftdc_struct.ZipCode;
  os << " Telephone:" << ftdc_struct.Telephone;
  os << " MobilePhone:" << ftdc_struct.MobilePhone;
  os << " Fax:" << ftdc_struct.Fax;
  os << " EMail:" << ftdc_struct.EMail;
  os << " MoneyAccountStatus:" << ftdc_struct.MoneyAccountStatus;
  os << " BankAccount:" << ftdc_struct.BankAccount;
  os << " BankPassWord:" << "it is a secret"; // ftdc_struct.BankPassWord;
  os << " NewBankAccount:" << ftdc_struct.NewBankAccount;
  os << " NewBankPassWord:" << "it is a secret"; // ftdc_struct.NewBankPassWord;
  os << " AccountID:" << ftdc_struct.AccountID;
  os << " Password:" << "it is a secret"; // ftdc_struct.Password;
  os << " BankAccType:" << ftdc_struct.BankAccType;
  os << " InstallID:" << ftdc_struct.InstallID;
  os << " VerifyCertNoFlag:" << ftdc_struct.VerifyCertNoFlag;
  os << " CurrencyID:" << ftdc_struct.CurrencyID;
  os << " BrokerIDByBank:" << ftdc_struct.BrokerIDByBank;
  os << " BankPwdFlag:" << ftdc_struct.BankPwdFlag;
  os << " SecuPwdFlag:" << ftdc_struct.SecuPwdFlag;
  os << " TID:" << ftdc_struct.TID;
  os << " Digest:" << ftdc_struct.Digest;
  os << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CThostFtdcReqTransferField& ftdc_struct) {
  os << "ftdc_struct(CThostFtdcReqTransferField) ---> TradeCode:" << ftdc_struct.TradeCode;
  os << " BankID:" << ftdc_struct.BankID;
  os << " BankBranchID:" << ftdc_struct.BankBranchID;
  os << " BrokerID:" << ftdc_struct.BrokerID;
  os << " BrokerBranchID:" << ftdc_struct.BrokerBranchID;
  os << " TradeDate:" << ftdc_struct.TradeDate;
  os << " TradeTime:" << ftdc_struct.TradeTime;
  os << " BankSerial:" << ftdc_struct.BankSerial;
  os << " TradingDay:" << ftdc_struct.TradingDay;
  os << " PlateSerial:" << ftdc_struct.PlateSerial;
  os << " LastFragment:" << ftdc_struct.LastFragment;
  os << " SessionID:" << ftdc_struct.SessionID;
  os << " CustomerName:" << ftdc_struct.CustomerName;
  os << " IdCardType:" << ftdc_struct.IdCardType;
  os << " IdentifiedCardNo:" << ftdc_struct.IdentifiedCardNo;
  os << " CustType:" << ftdc_struct.CustType;
  os << " BankAccount:" << ftdc_struct.BankAccount;
  os << " BankPassWord:" << "it is a secret"; // ftdc_struct.BankPassWord;
  os << " AccountID:" << ftdc_struct.AccountID;
  os << " Password:" << "it is a secret"; // ftdc_struct.Password;
  os << " InstallID:" << ftdc_struct.InstallID;
  os << " FutureSerial:" << ftdc_struct.FutureSerial;
  os << " UserID:" << ftdc_struct.UserID;
  os << " VerifyCertNoFlag:" << ftdc_struct.VerifyCertNoFlag;
  os << " CurrencyID:" << ftdc_struct.CurrencyID;
  os << " TradeAmount:" << ftdc_struct.TradeAmount;
  os << " FutureFetchAmount:" << ftdc_struct.FutureFetchAmount;
  os << " FeePayFlag:" << ftdc_struct.FeePayFlag;
  os << " CustFee:" << ftdc_struct.CustFee;
  os << " BrokerFee:" << ftdc_struct.BrokerFee;
  os << " Message:" << ftdc_struct.Message;
  os << " Digest:" << ftdc_struct.Digest;
  os << " BankAccType:" << ftdc_struct.BankAccType;
  os << " DeviceID:" << ftdc_struct.DeviceID;
  os << " BankSecuAccType:" << ftdc_struct.BankSecuAccType;
  os << " BrokerIDByBank:" << ftdc_struct.BrokerIDByBank;
  os << " BankSecuAcc:" << ftdc_struct.BankSecuAcc;
  os << " BankPwdFlag:" << ftdc_struct.BankPwdFlag;
  os << " SecuPwdFlag:" << ftdc_struct.SecuPwdFlag;
  os << " OperNo:" << ftdc_struct.OperNo;
  os << " RequestID:" << ftdc_struct.RequestID;
  os << " TID:" << ftdc_struct.TID;
  os << " TransferStatus:" << ftdc_struct.TransferStatus;
  os << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CThostFtdcRspTransferField& ftdc_struct) {
  os << "ftdc_struct(CThostFtdcRspTransferField) ---> TradeCode:" << ftdc_struct.TradeCode;
  os << " BankID:" << ftdc_struct.BankID;
  os << " BankBranchID:" << ftdc_struct.BankBranchID;
  os << " BrokerID:" << ftdc_struct.BrokerID;
  os << " BrokerBranchID:" << ftdc_struct.BrokerBranchID;
  os << " TradeDate:" << ftdc_struct.TradeDate;
  os << " TradeTime:" << ftdc_struct.TradeTime;
  os << " BankSerial:" << ftdc_struct.BankSerial;
  os << " TradingDay:" << ftdc_struct.TradingDay;
  os << " PlateSerial:" << ftdc_struct.PlateSerial;
  os << " LastFragment:" << ftdc_struct.LastFragment;
  os << " SessionID:" << ftdc_struct.SessionID;
  os << " CustomerName:" << ftdc_struct.CustomerName;
  os << " IdCardType:" << ftdc_struct.IdCardType;
  os << " IdentifiedCardNo:" << ftdc_struct.IdentifiedCardNo;
  os << " CustType:" << ftdc_struct.CustType;
  os << " BankAccount:" << ftdc_struct.BankAccount;
  os << " BankPassWord:" << "it is a secret"; // ftdc_struct.BankPassWord;
  os << " AccountID:" << ftdc_struct.AccountID;
  os << " Password:" << "it is a secret"; // ftdc_struct.Password;
  os << " InstallID:" << ftdc_struct.InstallID;
  os << " FutureSerial:" << ftdc_struct.FutureSerial;
  os << " UserID:" << ftdc_struct.UserID;
  os << " VerifyCertNoFlag:" << ftdc_struct.VerifyCertNoFlag;
  os << " CurrencyID:" << ftdc_struct.CurrencyID;
  os << " TradeAmount:" << ftdc_struct.TradeAmount;
  os << " FutureFetchAmount:" << ftdc_struct.FutureFetchAmount;
  os << " FeePayFlag:" << ftdc_struct.FeePayFlag;
  os << " CustFee:" << ftdc_struct.CustFee;
  os << " BrokerFee:" << ftdc_struct.BrokerFee;
  os << " Message:" << ftdc_struct.Message;
  os << " Digest:" << ftdc_struct.Digest;
  os << " BankAccType:" << ftdc_struct.BankAccType;
  os << " DeviceID:" << ftdc_struct.DeviceID;
  os << " BankSecuAccType:" << ftdc_struct.BankSecuAccType;
  os << " BrokerIDByBank:" << ftdc_struct.BrokerIDByBank;
  os << " BankSecuAcc:" << ftdc_struct.BankSecuAcc;
  os << " BankPwdFlag:" << ftdc_struct.BankPwdFlag;
  os << " SecuPwdFlag:" << ftdc_struct.SecuPwdFlag;
  os << " OperNo:" << ftdc_struct.OperNo;
  os << " RequestID:" << ftdc_struct.RequestID;
  os << " TID:" << ftdc_struct.TID;
  os << " TransferStatus:" << ftdc_struct.TransferStatus;
  os << " ErrorID:" << ftdc_struct.ErrorID;
  os << " ErrorMsg:" << ftdc_struct.ErrorMsg;
  os << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CThostFtdcReqRepealField& ftdc_struct) {
  os << "ftdc_struct(CThostFtdcReqRepealField) ---> RepealTimeInterval:" << ftdc_struct.RepealTimeInterval;
  os << " RepealedTimes:" << ftdc_struct.RepealedTimes;
  os << " BankRepealFlag:" << ftdc_struct.BankRepealFlag;
  os << " BrokerRepealFlag:" << ftdc_struct.BrokerRepealFlag;
  os << " PlateRepealSerial:" << ftdc_struct.PlateRepealSerial;
  os << " BankRepealSerial:" << ftdc_struct.BankRepealSerial;
  os << " FutureRepealSerial:" << ftdc_struct.FutureRepealSerial;
  os << " TradeCode:" << ftdc_struct.TradeCode;
  os << " BankID:" << ftdc_struct.BankID;
  os << " BankBranchID:" << ftdc_struct.BankBranchID;
  os << " BrokerID:" << ftdc_struct.BrokerID;
  os << " BrokerBranchID:" << ftdc_struct.BrokerBranchID;
  os << " TradeDate:" << ftdc_struct.TradeDate;
  os << " TradeTime:" << ftdc_struct.TradeTime;
  os << " BankSerial:" << ftdc_struct.BankSerial;
  os << " TradingDay:" << ftdc_struct.TradingDay;
  os << " PlateSerial:" << ftdc_struct.PlateSerial;
  os << " LastFragment:" << ftdc_struct.LastFragment;
  os << " SessionID:" << ftdc_struct.SessionID;
  os << " CustomerName:" << ftdc_struct.CustomerName;
  os << " IdCardType:" << ftdc_struct.IdCardType;
  os << " IdentifiedCardNo:" << ftdc_struct.IdentifiedCardNo;
  os << " CustType:" << ftdc_struct.CustType;
  os << " BankAccount:" << ftdc_struct.BankAccount;
  os << " BankPassWord:" << "it is a secret"; // ftdc_struct.BankPassWord;
  os << " AccountID:" << ftdc_struct.AccountID;
  os << " Password:" << "it is a secret"; // ftdc_struct.Password;
  os << " InstallID:" << ftdc_struct.InstallID;
  os << " FutureSerial:" << ftdc_struct.FutureSerial;
  os << " UserID:" << ftdc_struct.UserID;
  os << " VerifyCertNoFlag:" << ftdc_struct.VerifyCertNoFlag;
  os << " CurrencyID:" << ftdc_struct.CurrencyID;
  os << " TradeAmount:" << ftdc_struct.TradeAmount;
  os << " FutureFetchAmount:" << ftdc_struct.FutureFetchAmount;
  os << " FeePayFlag:" << ftdc_struct.FeePayFlag;
  os << " CustFee:" << ftdc_struct.CustFee;
  os << " BrokerFee:" << ftdc_struct.BrokerFee;
  os << " Message:" << ftdc_struct.Message;
  os << " Digest:" << ftdc_struct.Digest;
  os << " BankAccType:" << ftdc_struct.BankAccType;
  os << " DeviceID:" << ftdc_struct.DeviceID;
  os << " BankSecuAccType:" << ftdc_struct.BankSecuAccType;
  os << " BrokerIDByBank:" << ftdc_struct.BrokerIDByBank;
  os << " BankSecuAcc:" << ftdc_struct.BankSecuAcc;
  os << " BankPwdFlag:" << ftdc_struct.BankPwdFlag;
  os << " SecuPwdFlag:" << ftdc_struct.SecuPwdFlag;
  os << " OperNo:" << ftdc_struct.OperNo;
  os << " RequestID:" << ftdc_struct.RequestID;
  os << " TID:" << ftdc_struct.TID;
  os << " TransferStatus:" << ftdc_struct.TransferStatus;
  os << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CThostFtdcRspRepealField& ftdc_struct) {
  os << "ftdc_struct(CThostFtdcRspRepealField) ---> RepealTimeInterval:" << ftdc_struct.RepealTimeInterval;
  os << " RepealedTimes:" << ftdc_struct.RepealedTimes;
  os << " BankRepealFlag:" << ftdc_struct.BankRepealFlag;
  os << " BrokerRepealFlag:" << ftdc_struct.BrokerRepealFlag;
  os << " PlateRepealSerial:" << ftdc_struct.PlateRepealSerial;
  os << " BankRepealSerial:" << ftdc_struct.BankRepealSerial;
  os << " FutureRepealSerial:" << ftdc_struct.FutureRepealSerial;
  os << " TradeCode:" << ftdc_struct.TradeCode;
  os << " BankID:" << ftdc_struct.BankID;
  os << " BankBranchID:" << ftdc_struct.BankBranchID;
  os << " BrokerID:" << ftdc_struct.BrokerID;
  os << " BrokerBranchID:" << ftdc_struct.BrokerBranchID;
  os << " TradeDate:" << ftdc_struct.TradeDate;
  os << " TradeTime:" << ftdc_struct.TradeTime;
  os << " BankSerial:" << ftdc_struct.BankSerial;
  os << " TradingDay:" << ftdc_struct.TradingDay;
  os << " PlateSerial:" << ftdc_struct.PlateSerial;
  os << " LastFragment:" << ftdc_struct.LastFragment;
  os << " SessionID:" << ftdc_struct.SessionID;
  os << " CustomerName:" << ftdc_struct.CustomerName;
  os << " IdCardType:" << ftdc_struct.IdCardType;
  os << " IdentifiedCardNo:" << ftdc_struct.IdentifiedCardNo;
  os << " CustType:" << ftdc_struct.CustType;
  os << " BankAccount:" << ftdc_struct.BankAccount;
  os << " BankPassWord:" << "it is a secret"; // ftdc_struct.BankPassWord;
  os << " AccountID:" << ftdc_struct.AccountID;
  os << " Password:" << "it is a secret"; // ftdc_struct.Password;
  os << " InstallID:" << ftdc_struct.InstallID;
  os << " FutureSerial:" << ftdc_struct.FutureSerial;
  os << " UserID:" << ftdc_struct.UserID;
  os << " VerifyCertNoFlag:" << ftdc_struct.VerifyCertNoFlag;
  os << " CurrencyID:" << ftdc_struct.CurrencyID;
  os << " TradeAmount:" << ftdc_struct.TradeAmount;
  os << " FutureFetchAmount:" << ftdc_struct.FutureFetchAmount;
  os << " FeePayFlag:" << ftdc_struct.FeePayFlag;
  os << " CustFee:" << ftdc_struct.CustFee;
  os << " BrokerFee:" << ftdc_struct.BrokerFee;
  os << " Message:" << ftdc_struct.Message;
  os << " Digest:" << ftdc_struct.Digest;
  os << " BankAccType:" << ftdc_struct.BankAccType;
  os << " DeviceID:" << ftdc_struct.DeviceID;
  os << " BankSecuAccType:" << ftdc_struct.BankSecuAccType;
  os << " BrokerIDByBank:" << ftdc_struct.BrokerIDByBank;
  os << " BankSecuAcc:" << ftdc_struct.BankSecuAcc;
  os << " BankPwdFlag:" << ftdc_struct.BankPwdFlag;
  os << " SecuPwdFlag:" << ftdc_struct.SecuPwdFlag;
  os << " OperNo:" << ftdc_struct.OperNo;
  os << " RequestID:" << ftdc_struct.RequestID;
  os << " TID:" << ftdc_struct.TID;
  os << " TransferStatus:" << ftdc_struct.TransferStatus;
  os << " ErrorID:" << ftdc_struct.ErrorID;
  os << " ErrorMsg:" << ftdc_struct.ErrorMsg;
  os << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CThostFtdcReqQueryAccountField& ftdc_struct) {
  os << "ftdc_struct(CThostFtdcReqQueryAccountField) ---> TradeCode:" << ftdc_struct.TradeCode;
  os << " BankID:" << ftdc_struct.BankID;
  os << " BankBranchID:" << ftdc_struct.BankBranchID;
  os << " BrokerID:" << ftdc_struct.BrokerID;
  os << " BrokerBranchID:" << ftdc_struct.BrokerBranchID;
  os << " TradeDate:" << ftdc_struct.TradeDate;
  os << " TradeTime:" << ftdc_struct.TradeTime;
  os << " BankSerial:" << ftdc_struct.BankSerial;
  os << " TradingDay:" << ftdc_struct.TradingDay;
  os << " PlateSerial:" << ftdc_struct.PlateSerial;
  os << " LastFragment:" << ftdc_struct.LastFragment;
  os << " SessionID:" << ftdc_struct.SessionID;
  os << " CustomerName:" << ftdc_struct.CustomerName;
  os << " IdCardType:" << ftdc_struct.IdCardType;
  os << " IdentifiedCardNo:" << ftdc_struct.IdentifiedCardNo;
  os << " CustType:" << ftdc_struct.CustType;
  os << " BankAccount:" << ftdc_struct.BankAccount;
  os << " BankPassWord:" << "it is a secret"; // ftdc_struct.BankPassWord;
  os << " AccountID:" << ftdc_struct.AccountID;
  os << " Password:" << "it is a secret"; // ftdc_struct.Password;
  os << " FutureSerial:" << ftdc_struct.FutureSerial;
  os << " InstallID:" << ftdc_struct.InstallID;
  os << " UserID:" << ftdc_struct.UserID;
  os << " VerifyCertNoFlag:" << ftdc_struct.VerifyCertNoFlag;
  os << " CurrencyID:" << ftdc_struct.CurrencyID;
  os << " Digest:" << ftdc_struct.Digest;
  os << " BankAccType:" << ftdc_struct.BankAccType;
  os << " DeviceID:" << ftdc_struct.DeviceID;
  os << " BankSecuAccType:" << ftdc_struct.BankSecuAccType;
  os << " BrokerIDByBank:" << ftdc_struct.BrokerIDByBank;
  os << " BankSecuAcc:" << ftdc_struct.BankSecuAcc;
  os << " BankPwdFlag:" << ftdc_struct.BankPwdFlag;
  os << " SecuPwdFlag:" << ftdc_struct.SecuPwdFlag;
  os << " OperNo:" << ftdc_struct.OperNo;
  os << " RequestID:" << ftdc_struct.RequestID;
  os << " TID:" << ftdc_struct.TID;
  os << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CThostFtdcRspQueryAccountField& ftdc_struct) {
  os << "ftdc_struct(CThostFtdcRspQueryAccountField) ---> TradeCode:" << ftdc_struct.TradeCode;
  os << " BankID:" << ftdc_struct.BankID;
  os << " BankBranchID:" << ftdc_struct.BankBranchID;
  os << " BrokerID:" << ftdc_struct.BrokerID;
  os << " BrokerBranchID:" << ftdc_struct.BrokerBranchID;
  os << " TradeDate:" << ftdc_struct.TradeDate;
  os << " TradeTime:" << ftdc_struct.TradeTime;
  os << " BankSerial:" << ftdc_struct.BankSerial;
  os << " TradingDay:" << ftdc_struct.TradingDay;
  os << " PlateSerial:" << ftdc_struct.PlateSerial;
  os << " LastFragment:" << ftdc_struct.LastFragment;
  os << " SessionID:" << ftdc_struct.SessionID;
  os << " CustomerName:" << ftdc_struct.CustomerName;
  os << " IdCardType:" << ftdc_struct.IdCardType;
  os << " IdentifiedCardNo:" << ftdc_struct.IdentifiedCardNo;
  os << " CustType:" << ftdc_struct.CustType;
  os << " BankAccount:" << ftdc_struct.BankAccount;
  os << " BankPassWord:" << "it is a secret"; // ftdc_struct.BankPassWord;
  os << " AccountID:" << ftdc_struct.AccountID;
  os << " Password:" << "it is a secret"; // ftdc_struct.Password;
  os << " FutureSerial:" << ftdc_struct.FutureSerial;
  os << " InstallID:" << ftdc_struct.InstallID;
  os << " UserID:" << ftdc_struct.UserID;
  os << " VerifyCertNoFlag:" << ftdc_struct.VerifyCertNoFlag;
  os << " CurrencyID:" << ftdc_struct.CurrencyID;
  os << " Digest:" << ftdc_struct.Digest;
  os << " BankAccType:" << ftdc_struct.BankAccType;
  os << " DeviceID:" << ftdc_struct.DeviceID;
  os << " BankSecuAccType:" << ftdc_struct.BankSecuAccType;
  os << " BrokerIDByBank:" << ftdc_struct.BrokerIDByBank;
  os << " BankSecuAcc:" << ftdc_struct.BankSecuAcc;
  os << " BankPwdFlag:" << ftdc_struct.BankPwdFlag;
  os << " SecuPwdFlag:" << ftdc_struct.SecuPwdFlag;
  os << " OperNo:" << ftdc_struct.OperNo;
  os << " RequestID:" << ftdc_struct.RequestID;
  os << " TID:" << ftdc_struct.TID;
  os << " BankUseAmount:" << ftdc_struct.BankUseAmount;
  os << " BankFetchAmount:" << ftdc_struct.BankFetchAmount;
  os << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CThostFtdcFutureSignIOField& ftdc_struct) {
  os << "ftdc_struct(CThostFtdcFutureSignIOField) ---> TradeCode:" << ftdc_struct.TradeCode;
  os << " BankID:" << ftdc_struct.BankID;
  os << " BankBranchID:" << ftdc_struct.BankBranchID;
  os << " BrokerID:" << ftdc_struct.BrokerID;
  os << " BrokerBranchID:" << ftdc_struct.BrokerBranchID;
  os << " TradeDate:" << ftdc_struct.TradeDate;
  os << " TradeTime:" << ftdc_struct.TradeTime;
  os << " BankSerial:" << ftdc_struct.BankSerial;
  os << " TradingDay:" << ftdc_struct.TradingDay;
  os << " PlateSerial:" << ftdc_struct.PlateSerial;
  os << " LastFragment:" << ftdc_struct.LastFragment;
  os << " SessionID:" << ftdc_struct.SessionID;
  os << " InstallID:" << ftdc_struct.InstallID;
  os << " UserID:" << ftdc_struct.UserID;
  os << " Digest:" << ftdc_struct.Digest;
  os << " CurrencyID:" << ftdc_struct.CurrencyID;
  os << " DeviceID:" << ftdc_struct.DeviceID;
  os << " BrokerIDByBank:" << ftdc_struct.BrokerIDByBank;
  os << " OperNo:" << ftdc_struct.OperNo;
  os << " RequestID:" << ftdc_struct.RequestID;
  os << " TID:" << ftdc_struct.TID;
  os << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CThostFtdcRspFutureSignInField& ftdc_struct) {
  os << "ftdc_struct(CThostFtdcRspFutureSignInField) ---> TradeCode:" << ftdc_struct.TradeCode;
  os << " BankID:" << ftdc_struct.BankID;
  os << " BankBranchID:" << ftdc_struct.BankBranchID;
  os << " BrokerID:" << ftdc_struct.BrokerID;
  os << " BrokerBranchID:" << ftdc_struct.BrokerBranchID;
  os << " TradeDate:" << ftdc_struct.TradeDate;
  os << " TradeTime:" << ftdc_struct.TradeTime;
  os << " BankSerial:" << ftdc_struct.BankSerial;
  os << " TradingDay:" << ftdc_struct.TradingDay;
  os << " PlateSerial:" << ftdc_struct.PlateSerial;
  os << " LastFragment:" << ftdc_struct.LastFragment;
  os << " SessionID:" << ftdc_struct.SessionID;
  os << " InstallID:" << ftdc_struct.InstallID;
  os << " UserID:" << ftdc_struct.UserID;
  os << " Digest:" << ftdc_struct.Digest;
  os << " CurrencyID:" << ftdc_struct.CurrencyID;
  os << " DeviceID:" << ftdc_struct.DeviceID;
  os << " BrokerIDByBank:" << ftdc_struct.BrokerIDByBank;
  os << " OperNo:" << ftdc_struct.OperNo;
  os << " RequestID:" << ftdc_struct.RequestID;
  os << " TID:" << ftdc_struct.TID;
  os << " ErrorID:" << ftdc_struct.ErrorID;
  os << " ErrorMsg:" << ftdc_struct.ErrorMsg;
  os << " PinKey:" << ftdc_struct.PinKey;
  os << " MacKey:" << ftdc_struct.MacKey;
  os << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CThostFtdcReqFutureSignOutField& ftdc_struct) {
  os << "ftdc_struct(CThostFtdcReqFutureSignOutField) ---> TradeCode:" << ftdc_struct.TradeCode;
  os << " BankID:" << ftdc_struct.BankID;
  os << " BankBranchID:" << ftdc_struct.BankBranchID;
  os << " BrokerID:" << ftdc_struct.BrokerID;
  os << " BrokerBranchID:" << ftdc_struct.BrokerBranchID;
  os << " TradeDate:" << ftdc_struct.TradeDate;
  os << " TradeTime:" << ftdc_struct.TradeTime;
  os << " BankSerial:" << ftdc_struct.BankSerial;
  os << " TradingDay:" << ftdc_struct.TradingDay;
  os << " PlateSerial:" << ftdc_struct.PlateSerial;
  os << " LastFragment:" << ftdc_struct.LastFragment;
  os << " SessionID:" << ftdc_struct.SessionID;
  os << " InstallID:" << ftdc_struct.InstallID;
  os << " UserID:" << ftdc_struct.UserID;
  os << " Digest:" << ftdc_struct.Digest;
  os << " CurrencyID:" << ftdc_struct.CurrencyID;
  os << " DeviceID:" << ftdc_struct.DeviceID;
  os << " BrokerIDByBank:" << ftdc_struct.BrokerIDByBank;
  os << " OperNo:" << ftdc_struct.OperNo;
  os << " RequestID:" << ftdc_struct.RequestID;
  os << " TID:" << ftdc_struct.TID;
  os << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CThostFtdcRspFutureSignOutField& ftdc_struct) {
  os << "ftdc_struct(CThostFtdcRspFutureSignOutField) ---> TradeCode:" << ftdc_struct.TradeCode;
  os << " BankID:" << ftdc_struct.BankID;
  os << " BankBranchID:" << ftdc_struct.BankBranchID;
  os << " BrokerID:" << ftdc_struct.BrokerID;
  os << " BrokerBranchID:" << ftdc_struct.BrokerBranchID;
  os << " TradeDate:" << ftdc_struct.TradeDate;
  os << " TradeTime:" << ftdc_struct.TradeTime;
  os << " BankSerial:" << ftdc_struct.BankSerial;
  os << " TradingDay:" << ftdc_struct.TradingDay;
  os << " PlateSerial:" << ftdc_struct.PlateSerial;
  os << " LastFragment:" << ftdc_struct.LastFragment;
  os << " SessionID:" << ftdc_struct.SessionID;
  os << " InstallID:" << ftdc_struct.InstallID;
  os << " UserID:" << ftdc_struct.UserID;
  os << " Digest:" << ftdc_struct.Digest;
  os << " CurrencyID:" << ftdc_struct.CurrencyID;
  os << " DeviceID:" << ftdc_struct.DeviceID;
  os << " BrokerIDByBank:" << ftdc_struct.BrokerIDByBank;
  os << " OperNo:" << ftdc_struct.OperNo;
  os << " RequestID:" << ftdc_struct.RequestID;
  os << " TID:" << ftdc_struct.TID;
  os << " ErrorID:" << ftdc_struct.ErrorID;
  os << " ErrorMsg:" << ftdc_struct.ErrorMsg;
  os << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CThostFtdcReqQueryTradeResultBySerialField& ftdc_struct) {
  os << "ftdc_struct(CThostFtdcReqQueryTradeResultBySerialField) ---> TradeCode:" << ftdc_struct.TradeCode;
  os << " BankID:" << ftdc_struct.BankID;
  os << " BankBranchID:" << ftdc_struct.BankBranchID;
  os << " BrokerID:" << ftdc_struct.BrokerID;
  os << " BrokerBranchID:" << ftdc_struct.BrokerBranchID;
  os << " TradeDate:" << ftdc_struct.TradeDate;
  os << " TradeTime:" << ftdc_struct.TradeTime;
  os << " BankSerial:" << ftdc_struct.BankSerial;
  os << " TradingDay:" << ftdc_struct.TradingDay;
  os << " PlateSerial:" << ftdc_struct.PlateSerial;
  os << " LastFragment:" << ftdc_struct.LastFragment;
  os << " SessionID:" << ftdc_struct.SessionID;
  os << " Reference:" << ftdc_struct.Reference;
  os << " RefrenceIssureType:" << ftdc_struct.RefrenceIssureType;
  os << " RefrenceIssure:" << ftdc_struct.RefrenceIssure;
  os << " CustomerName:" << ftdc_struct.CustomerName;
  os << " IdCardType:" << ftdc_struct.IdCardType;
  os << " IdentifiedCardNo:" << ftdc_struct.IdentifiedCardNo;
  os << " CustType:" << ftdc_struct.CustType;
  os << " BankAccount:" << ftdc_struct.BankAccount;
  os << " BankPassWord:" << "it is a secret"; // ftdc_struct.BankPassWord;
  os << " AccountID:" << ftdc_struct.AccountID;
  os << " Password:" << "it is a secret"; // ftdc_struct.Password;
  os << " CurrencyID:" << ftdc_struct.CurrencyID;
  os << " TradeAmount:" << ftdc_struct.TradeAmount;
  os << " Digest:" << ftdc_struct.Digest;
  os << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CThostFtdcRspQueryTradeResultBySerialField& ftdc_struct) {
  os << "ftdc_struct(CThostFtdcRspQueryTradeResultBySerialField) ---> TradeCode:" << ftdc_struct.TradeCode;
  os << " BankID:" << ftdc_struct.BankID;
  os << " BankBranchID:" << ftdc_struct.BankBranchID;
  os << " BrokerID:" << ftdc_struct.BrokerID;
  os << " BrokerBranchID:" << ftdc_struct.BrokerBranchID;
  os << " TradeDate:" << ftdc_struct.TradeDate;
  os << " TradeTime:" << ftdc_struct.TradeTime;
  os << " BankSerial:" << ftdc_struct.BankSerial;
  os << " TradingDay:" << ftdc_struct.TradingDay;
  os << " PlateSerial:" << ftdc_struct.PlateSerial;
  os << " LastFragment:" << ftdc_struct.LastFragment;
  os << " SessionID:" << ftdc_struct.SessionID;
  os << " ErrorID:" << ftdc_struct.ErrorID;
  os << " ErrorMsg:" << ftdc_struct.ErrorMsg;
  os << " Reference:" << ftdc_struct.Reference;
  os << " RefrenceIssureType:" << ftdc_struct.RefrenceIssureType;
  os << " RefrenceIssure:" << ftdc_struct.RefrenceIssure;
  os << " OriginReturnCode:" << ftdc_struct.OriginReturnCode;
  os << " OriginDescrInfoForReturnCode:" << ftdc_struct.OriginDescrInfoForReturnCode;
  os << " BankAccount:" << ftdc_struct.BankAccount;
  os << " BankPassWord:" << "it is a secret"; // ftdc_struct.BankPassWord;
  os << " AccountID:" << ftdc_struct.AccountID;
  os << " Password:" << "it is a secret"; // ftdc_struct.Password;
  os << " CurrencyID:" << ftdc_struct.CurrencyID;
  os << " TradeAmount:" << ftdc_struct.TradeAmount;
  os << " Digest:" << ftdc_struct.Digest;
  os << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CThostFtdcReqDayEndFileReadyField& ftdc_struct) {
  os << "ftdc_struct(CThostFtdcReqDayEndFileReadyField) ---> TradeCode:" << ftdc_struct.TradeCode;
  os << " BankID:" << ftdc_struct.BankID;
  os << " BankBranchID:" << ftdc_struct.BankBranchID;
  os << " BrokerID:" << ftdc_struct.BrokerID;
  os << " BrokerBranchID:" << ftdc_struct.BrokerBranchID;
  os << " TradeDate:" << ftdc_struct.TradeDate;
  os << " TradeTime:" << ftdc_struct.TradeTime;
  os << " BankSerial:" << ftdc_struct.BankSerial;
  os << " TradingDay:" << ftdc_struct.TradingDay;
  os << " PlateSerial:" << ftdc_struct.PlateSerial;
  os << " LastFragment:" << ftdc_struct.LastFragment;
  os << " SessionID:" << ftdc_struct.SessionID;
  os << " FileBusinessCode:" << ftdc_struct.FileBusinessCode;
  os << " Digest:" << ftdc_struct.Digest;
  os << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CThostFtdcReturnResultField& ftdc_struct) {
  os << "ftdc_struct(CThostFtdcReturnResultField) ---> ReturnCode:" << ftdc_struct.ReturnCode;
  os << " DescrInfoForReturnCode:" << ftdc_struct.DescrInfoForReturnCode;
  os << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CThostFtdcVerifyFuturePasswordField& ftdc_struct) {
  os << "ftdc_struct(CThostFtdcVerifyFuturePasswordField) ---> TradeCode:" << ftdc_struct.TradeCode;
  os << " BankID:" << ftdc_struct.BankID;
  os << " BankBranchID:" << ftdc_struct.BankBranchID;
  os << " BrokerID:" << ftdc_struct.BrokerID;
  os << " BrokerBranchID:" << ftdc_struct.BrokerBranchID;
  os << " TradeDate:" << ftdc_struct.TradeDate;
  os << " TradeTime:" << ftdc_struct.TradeTime;
  os << " BankSerial:" << ftdc_struct.BankSerial;
  os << " TradingDay:" << ftdc_struct.TradingDay;
  os << " PlateSerial:" << ftdc_struct.PlateSerial;
  os << " LastFragment:" << ftdc_struct.LastFragment;
  os << " SessionID:" << ftdc_struct.SessionID;
  os << " AccountID:" << ftdc_struct.AccountID;
  os << " Password:" << "it is a secret"; // ftdc_struct.Password;
  os << " BankAccount:" << ftdc_struct.BankAccount;
  os << " BankPassWord:" << "it is a secret"; // ftdc_struct.BankPassWord;
  os << " InstallID:" << ftdc_struct.InstallID;
  os << " TID:" << ftdc_struct.TID;
  os << " CurrencyID:" << ftdc_struct.CurrencyID;
  os << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CThostFtdcVerifyCustInfoField& ftdc_struct) {
  os << "ftdc_struct(CThostFtdcVerifyCustInfoField) ---> CustomerName:" << ftdc_struct.CustomerName;
  os << " IdCardType:" << ftdc_struct.IdCardType;
  os << " IdentifiedCardNo:" << ftdc_struct.IdentifiedCardNo;
  os << " CustType:" << ftdc_struct.CustType;
  os << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CThostFtdcVerifyFuturePasswordAndCustInfoField& ftdc_struct) {
  os << "ftdc_struct(CThostFtdcVerifyFuturePasswordAndCustInfoField) ---> CustomerName:" << ftdc_struct.CustomerName;
  os << " IdCardType:" << ftdc_struct.IdCardType;
  os << " IdentifiedCardNo:" << ftdc_struct.IdentifiedCardNo;
  os << " CustType:" << ftdc_struct.CustType;
  os << " AccountID:" << ftdc_struct.AccountID;
  os << " Password:" << "it is a secret"; // ftdc_struct.Password;
  os << " CurrencyID:" << ftdc_struct.CurrencyID;
  os << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CThostFtdcDepositResultInformField& ftdc_struct) {
  os << "ftdc_struct(CThostFtdcDepositResultInformField) ---> DepositSeqNo:" << ftdc_struct.DepositSeqNo;
  os << " BrokerID:" << ftdc_struct.BrokerID;
  os << " InvestorID:" << ftdc_struct.InvestorID;
  os << " Deposit:" << ftdc_struct.Deposit;
  os << " RequestID:" << ftdc_struct.RequestID;
  os << " ReturnCode:" << ftdc_struct.ReturnCode;
  os << " DescrInfoForReturnCode:" << ftdc_struct.DescrInfoForReturnCode;
  os << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CThostFtdcReqSyncKeyField& ftdc_struct) {
  os << "ftdc_struct(CThostFtdcReqSyncKeyField) ---> TradeCode:" << ftdc_struct.TradeCode;
  os << " BankID:" << ftdc_struct.BankID;
  os << " BankBranchID:" << ftdc_struct.BankBranchID;
  os << " BrokerID:" << ftdc_struct.BrokerID;
  os << " BrokerBranchID:" << ftdc_struct.BrokerBranchID;
  os << " TradeDate:" << ftdc_struct.TradeDate;
  os << " TradeTime:" << ftdc_struct.TradeTime;
  os << " BankSerial:" << ftdc_struct.BankSerial;
  os << " TradingDay:" << ftdc_struct.TradingDay;
  os << " PlateSerial:" << ftdc_struct.PlateSerial;
  os << " LastFragment:" << ftdc_struct.LastFragment;
  os << " SessionID:" << ftdc_struct.SessionID;
  os << " InstallID:" << ftdc_struct.InstallID;
  os << " UserID:" << ftdc_struct.UserID;
  os << " Message:" << ftdc_struct.Message;
  os << " DeviceID:" << ftdc_struct.DeviceID;
  os << " BrokerIDByBank:" << ftdc_struct.BrokerIDByBank;
  os << " OperNo:" << ftdc_struct.OperNo;
  os << " RequestID:" << ftdc_struct.RequestID;
  os << " TID:" << ftdc_struct.TID;
  os << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CThostFtdcRspSyncKeyField& ftdc_struct) {
  os << "ftdc_struct(CThostFtdcRspSyncKeyField) ---> TradeCode:" << ftdc_struct.TradeCode;
  os << " BankID:" << ftdc_struct.BankID;
  os << " BankBranchID:" << ftdc_struct.BankBranchID;
  os << " BrokerID:" << ftdc_struct.BrokerID;
  os << " BrokerBranchID:" << ftdc_struct.BrokerBranchID;
  os << " TradeDate:" << ftdc_struct.TradeDate;
  os << " TradeTime:" << ftdc_struct.TradeTime;
  os << " BankSerial:" << ftdc_struct.BankSerial;
  os << " TradingDay:" << ftdc_struct.TradingDay;
  os << " PlateSerial:" << ftdc_struct.PlateSerial;
  os << " LastFragment:" << ftdc_struct.LastFragment;
  os << " SessionID:" << ftdc_struct.SessionID;
  os << " InstallID:" << ftdc_struct.InstallID;
  os << " UserID:" << ftdc_struct.UserID;
  os << " Message:" << ftdc_struct.Message;
  os << " DeviceID:" << ftdc_struct.DeviceID;
  os << " BrokerIDByBank:" << ftdc_struct.BrokerIDByBank;
  os << " OperNo:" << ftdc_struct.OperNo;
  os << " RequestID:" << ftdc_struct.RequestID;
  os << " TID:" << ftdc_struct.TID;
  os << " ErrorID:" << ftdc_struct.ErrorID;
  os << " ErrorMsg:" << ftdc_struct.ErrorMsg;
  os << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CThostFtdcNotifyQueryAccountField& ftdc_struct) {
  os << "ftdc_struct(CThostFtdcNotifyQueryAccountField) ---> TradeCode:" << ftdc_struct.TradeCode;
  os << " BankID:" << ftdc_struct.BankID;
  os << " BankBranchID:" << ftdc_struct.BankBranchID;
  os << " BrokerID:" << ftdc_struct.BrokerID;
  os << " BrokerBranchID:" << ftdc_struct.BrokerBranchID;
  os << " TradeDate:" << ftdc_struct.TradeDate;
  os << " TradeTime:" << ftdc_struct.TradeTime;
  os << " BankSerial:" << ftdc_struct.BankSerial;
  os << " TradingDay:" << ftdc_struct.TradingDay;
  os << " PlateSerial:" << ftdc_struct.PlateSerial;
  os << " LastFragment:" << ftdc_struct.LastFragment;
  os << " SessionID:" << ftdc_struct.SessionID;
  os << " CustomerName:" << ftdc_struct.CustomerName;
  os << " IdCardType:" << ftdc_struct.IdCardType;
  os << " IdentifiedCardNo:" << ftdc_struct.IdentifiedCardNo;
  os << " CustType:" << ftdc_struct.CustType;
  os << " BankAccount:" << ftdc_struct.BankAccount;
  os << " BankPassWord:" << "it is a secret"; // ftdc_struct.BankPassWord;
  os << " AccountID:" << ftdc_struct.AccountID;
  os << " Password:" << "it is a secret"; // ftdc_struct.Password;
  os << " FutureSerial:" << ftdc_struct.FutureSerial;
  os << " InstallID:" << ftdc_struct.InstallID;
  os << " UserID:" << ftdc_struct.UserID;
  os << " VerifyCertNoFlag:" << ftdc_struct.VerifyCertNoFlag;
  os << " CurrencyID:" << ftdc_struct.CurrencyID;
  os << " Digest:" << ftdc_struct.Digest;
  os << " BankAccType:" << ftdc_struct.BankAccType;
  os << " DeviceID:" << ftdc_struct.DeviceID;
  os << " BankSecuAccType:" << ftdc_struct.BankSecuAccType;
  os << " BrokerIDByBank:" << ftdc_struct.BrokerIDByBank;
  os << " BankSecuAcc:" << ftdc_struct.BankSecuAcc;
  os << " BankPwdFlag:" << ftdc_struct.BankPwdFlag;
  os << " SecuPwdFlag:" << ftdc_struct.SecuPwdFlag;
  os << " OperNo:" << ftdc_struct.OperNo;
  os << " RequestID:" << ftdc_struct.RequestID;
  os << " TID:" << ftdc_struct.TID;
  os << " BankUseAmount:" << ftdc_struct.BankUseAmount;
  os << " BankFetchAmount:" << ftdc_struct.BankFetchAmount;
  os << " ErrorID:" << ftdc_struct.ErrorID;
  os << " ErrorMsg:" << ftdc_struct.ErrorMsg;
  os << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CThostFtdcTransferSerialField& ftdc_struct) {
  os << "ftdc_struct(CThostFtdcTransferSerialField) ---> PlateSerial:" << ftdc_struct.PlateSerial;
  os << " TradeDate:" << ftdc_struct.TradeDate;
  os << " TradingDay:" << ftdc_struct.TradingDay;
  os << " TradeTime:" << ftdc_struct.TradeTime;
  os << " TradeCode:" << ftdc_struct.TradeCode;
  os << " SessionID:" << ftdc_struct.SessionID;
  os << " BankID:" << ftdc_struct.BankID;
  os << " BankBranchID:" << ftdc_struct.BankBranchID;
  os << " BankAccType:" << ftdc_struct.BankAccType;
  os << " BankAccount:" << ftdc_struct.BankAccount;
  os << " BankSerial:" << ftdc_struct.BankSerial;
  os << " BrokerID:" << ftdc_struct.BrokerID;
  os << " BrokerBranchID:" << ftdc_struct.BrokerBranchID;
  os << " FutureAccType:" << ftdc_struct.FutureAccType;
  os << " AccountID:" << ftdc_struct.AccountID;
  os << " InvestorID:" << ftdc_struct.InvestorID;
  os << " FutureSerial:" << ftdc_struct.FutureSerial;
  os << " IdCardType:" << ftdc_struct.IdCardType;
  os << " IdentifiedCardNo:" << ftdc_struct.IdentifiedCardNo;
  os << " CurrencyID:" << ftdc_struct.CurrencyID;
  os << " TradeAmount:" << ftdc_struct.TradeAmount;
  os << " CustFee:" << ftdc_struct.CustFee;
  os << " BrokerFee:" << ftdc_struct.BrokerFee;
  os << " AvailabilityFlag:" << ftdc_struct.AvailabilityFlag;
  os << " OperatorCode:" << ftdc_struct.OperatorCode;
  os << " BankNewAccount:" << ftdc_struct.BankNewAccount;
  os << " ErrorID:" << ftdc_struct.ErrorID;
  os << " ErrorMsg:" << ftdc_struct.ErrorMsg;
  os << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CThostFtdcQryTransferSerialField& ftdc_struct) {
  os << "ftdc_struct(CThostFtdcQryTransferSerialField) ---> BrokerID:" << ftdc_struct.BrokerID;
  os << " AccountID:" << ftdc_struct.AccountID;
  os << " BankID:" << ftdc_struct.BankID;
  os << " CurrencyID:" << ftdc_struct.CurrencyID;
  os << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CThostFtdcNotifyFutureSignInField& ftdc_struct) {
  os << "ftdc_struct(CThostFtdcNotifyFutureSignInField) ---> TradeCode:" << ftdc_struct.TradeCode;
  os << " BankID:" << ftdc_struct.BankID;
  os << " BankBranchID:" << ftdc_struct.BankBranchID;
  os << " BrokerID:" << ftdc_struct.BrokerID;
  os << " BrokerBranchID:" << ftdc_struct.BrokerBranchID;
  os << " TradeDate:" << ftdc_struct.TradeDate;
  os << " TradeTime:" << ftdc_struct.TradeTime;
  os << " BankSerial:" << ftdc_struct.BankSerial;
  os << " TradingDay:" << ftdc_struct.TradingDay;
  os << " PlateSerial:" << ftdc_struct.PlateSerial;
  os << " LastFragment:" << ftdc_struct.LastFragment;
  os << " SessionID:" << ftdc_struct.SessionID;
  os << " InstallID:" << ftdc_struct.InstallID;
  os << " UserID:" << ftdc_struct.UserID;
  os << " Digest:" << ftdc_struct.Digest;
  os << " CurrencyID:" << ftdc_struct.CurrencyID;
  os << " DeviceID:" << ftdc_struct.DeviceID;
  os << " BrokerIDByBank:" << ftdc_struct.BrokerIDByBank;
  os << " OperNo:" << ftdc_struct.OperNo;
  os << " RequestID:" << ftdc_struct.RequestID;
  os << " TID:" << ftdc_struct.TID;
  os << " ErrorID:" << ftdc_struct.ErrorID;
  os << " ErrorMsg:" << ftdc_struct.ErrorMsg;
  os << " PinKey:" << ftdc_struct.PinKey;
  os << " MacKey:" << ftdc_struct.MacKey;
  os << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CThostFtdcNotifyFutureSignOutField& ftdc_struct) {
  os << "ftdc_struct(CThostFtdcNotifyFutureSignOutField) ---> TradeCode:" << ftdc_struct.TradeCode;
  os << " BankID:" << ftdc_struct.BankID;
  os << " BankBranchID:" << ftdc_struct.BankBranchID;
  os << " BrokerID:" << ftdc_struct.BrokerID;
  os << " BrokerBranchID:" << ftdc_struct.BrokerBranchID;
  os << " TradeDate:" << ftdc_struct.TradeDate;
  os << " TradeTime:" << ftdc_struct.TradeTime;
  os << " BankSerial:" << ftdc_struct.BankSerial;
  os << " TradingDay:" << ftdc_struct.TradingDay;
  os << " PlateSerial:" << ftdc_struct.PlateSerial;
  os << " LastFragment:" << ftdc_struct.LastFragment;
  os << " SessionID:" << ftdc_struct.SessionID;
  os << " InstallID:" << ftdc_struct.InstallID;
  os << " UserID:" << ftdc_struct.UserID;
  os << " Digest:" << ftdc_struct.Digest;
  os << " CurrencyID:" << ftdc_struct.CurrencyID;
  os << " DeviceID:" << ftdc_struct.DeviceID;
  os << " BrokerIDByBank:" << ftdc_struct.BrokerIDByBank;
  os << " OperNo:" << ftdc_struct.OperNo;
  os << " RequestID:" << ftdc_struct.RequestID;
  os << " TID:" << ftdc_struct.TID;
  os << " ErrorID:" << ftdc_struct.ErrorID;
  os << " ErrorMsg:" << ftdc_struct.ErrorMsg;
  os << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CThostFtdcNotifySyncKeyField& ftdc_struct) {
  os << "ftdc_struct(CThostFtdcNotifySyncKeyField) ---> TradeCode:" << ftdc_struct.TradeCode;
  os << " BankID:" << ftdc_struct.BankID;
  os << " BankBranchID:" << ftdc_struct.BankBranchID;
  os << " BrokerID:" << ftdc_struct.BrokerID;
  os << " BrokerBranchID:" << ftdc_struct.BrokerBranchID;
  os << " TradeDate:" << ftdc_struct.TradeDate;
  os << " TradeTime:" << ftdc_struct.TradeTime;
  os << " BankSerial:" << ftdc_struct.BankSerial;
  os << " TradingDay:" << ftdc_struct.TradingDay;
  os << " PlateSerial:" << ftdc_struct.PlateSerial;
  os << " LastFragment:" << ftdc_struct.LastFragment;
  os << " SessionID:" << ftdc_struct.SessionID;
  os << " InstallID:" << ftdc_struct.InstallID;
  os << " UserID:" << ftdc_struct.UserID;
  os << " Message:" << ftdc_struct.Message;
  os << " DeviceID:" << ftdc_struct.DeviceID;
  os << " BrokerIDByBank:" << ftdc_struct.BrokerIDByBank;
  os << " OperNo:" << ftdc_struct.OperNo;
  os << " RequestID:" << ftdc_struct.RequestID;
  os << " TID:" << ftdc_struct.TID;
  os << " ErrorID:" << ftdc_struct.ErrorID;
  os << " ErrorMsg:" << ftdc_struct.ErrorMsg;
  os << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CThostFtdcQryAccountregisterField& ftdc_struct) {
  os << "ftdc_struct(CThostFtdcQryAccountregisterField) ---> BrokerID:" << ftdc_struct.BrokerID;
  os << " AccountID:" << ftdc_struct.AccountID;
  os << " BankID:" << ftdc_struct.BankID;
  os << " BankBranchID:" << ftdc_struct.BankBranchID;
  os << " CurrencyID:" << ftdc_struct.CurrencyID;
  os << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CThostFtdcAccountregisterField& ftdc_struct) {
  os << "ftdc_struct(CThostFtdcAccountregisterField) ---> TradeDay:" << ftdc_struct.TradeDay;
  os << " BankID:" << ftdc_struct.BankID;
  os << " BankBranchID:" << ftdc_struct.BankBranchID;
  os << " BankAccount:" << ftdc_struct.BankAccount;
  os << " BrokerID:" << ftdc_struct.BrokerID;
  os << " BrokerBranchID:" << ftdc_struct.BrokerBranchID;
  os << " AccountID:" << ftdc_struct.AccountID;
  os << " IdCardType:" << ftdc_struct.IdCardType;
  os << " IdentifiedCardNo:" << ftdc_struct.IdentifiedCardNo;
  os << " CustomerName:" << ftdc_struct.CustomerName;
  os << " CurrencyID:" << ftdc_struct.CurrencyID;
  os << " OpenOrDestroy:" << ftdc_struct.OpenOrDestroy;
  os << " RegDate:" << ftdc_struct.RegDate;
  os << " OutDate:" << ftdc_struct.OutDate;
  os << " TID:" << ftdc_struct.TID;
  os << " CustType:" << ftdc_struct.CustType;
  os << " BankAccType:" << ftdc_struct.BankAccType;
  os << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CThostFtdcOpenAccountField& ftdc_struct) {
  os << "ftdc_struct(CThostFtdcOpenAccountField) ---> TradeCode:" << ftdc_struct.TradeCode;
  os << " BankID:" << ftdc_struct.BankID;
  os << " BankBranchID:" << ftdc_struct.BankBranchID;
  os << " BrokerID:" << ftdc_struct.BrokerID;
  os << " BrokerBranchID:" << ftdc_struct.BrokerBranchID;
  os << " TradeDate:" << ftdc_struct.TradeDate;
  os << " TradeTime:" << ftdc_struct.TradeTime;
  os << " BankSerial:" << ftdc_struct.BankSerial;
  os << " TradingDay:" << ftdc_struct.TradingDay;
  os << " PlateSerial:" << ftdc_struct.PlateSerial;
  os << " LastFragment:" << ftdc_struct.LastFragment;
  os << " SessionID:" << ftdc_struct.SessionID;
  os << " CustomerName:" << ftdc_struct.CustomerName;
  os << " IdCardType:" << ftdc_struct.IdCardType;
  os << " IdentifiedCardNo:" << ftdc_struct.IdentifiedCardNo;
  os << " Gender:" << ftdc_struct.Gender;
  os << " CountryCode:" << ftdc_struct.CountryCode;
  os << " CustType:" << ftdc_struct.CustType;
  os << " Address:" << ftdc_struct.Address;
  os << " ZipCode:" << ftdc_struct.ZipCode;
  os << " Telephone:" << ftdc_struct.Telephone;
  os << " MobilePhone:" << ftdc_struct.MobilePhone;
  os << " Fax:" << ftdc_struct.Fax;
  os << " EMail:" << ftdc_struct.EMail;
  os << " MoneyAccountStatus:" << ftdc_struct.MoneyAccountStatus;
  os << " BankAccount:" << ftdc_struct.BankAccount;
  os << " BankPassWord:" << "it is a secret"; // ftdc_struct.BankPassWord;
  os << " AccountID:" << ftdc_struct.AccountID;
  os << " Password:" << "it is a secret"; // ftdc_struct.Password;
  os << " InstallID:" << ftdc_struct.InstallID;
  os << " VerifyCertNoFlag:" << ftdc_struct.VerifyCertNoFlag;
  os << " CurrencyID:" << ftdc_struct.CurrencyID;
  os << " CashExchangeCode:" << ftdc_struct.CashExchangeCode;
  os << " Digest:" << ftdc_struct.Digest;
  os << " BankAccType:" << ftdc_struct.BankAccType;
  os << " DeviceID:" << ftdc_struct.DeviceID;
  os << " BankSecuAccType:" << ftdc_struct.BankSecuAccType;
  os << " BrokerIDByBank:" << ftdc_struct.BrokerIDByBank;
  os << " BankSecuAcc:" << ftdc_struct.BankSecuAcc;
  os << " BankPwdFlag:" << ftdc_struct.BankPwdFlag;
  os << " SecuPwdFlag:" << ftdc_struct.SecuPwdFlag;
  os << " OperNo:" << ftdc_struct.OperNo;
  os << " TID:" << ftdc_struct.TID;
  os << " UserID:" << ftdc_struct.UserID;
  os << " ErrorID:" << ftdc_struct.ErrorID;
  os << " ErrorMsg:" << ftdc_struct.ErrorMsg;
  os << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CThostFtdcCancelAccountField& ftdc_struct) {
  os << "ftdc_struct(CThostFtdcCancelAccountField) ---> TradeCode:" << ftdc_struct.TradeCode;
  os << " BankID:" << ftdc_struct.BankID;
  os << " BankBranchID:" << ftdc_struct.BankBranchID;
  os << " BrokerID:" << ftdc_struct.BrokerID;
  os << " BrokerBranchID:" << ftdc_struct.BrokerBranchID;
  os << " TradeDate:" << ftdc_struct.TradeDate;
  os << " TradeTime:" << ftdc_struct.TradeTime;
  os << " BankSerial:" << ftdc_struct.BankSerial;
  os << " TradingDay:" << ftdc_struct.TradingDay;
  os << " PlateSerial:" << ftdc_struct.PlateSerial;
  os << " LastFragment:" << ftdc_struct.LastFragment;
  os << " SessionID:" << ftdc_struct.SessionID;
  os << " CustomerName:" << ftdc_struct.CustomerName;
  os << " IdCardType:" << ftdc_struct.IdCardType;
  os << " IdentifiedCardNo:" << ftdc_struct.IdentifiedCardNo;
  os << " Gender:" << ftdc_struct.Gender;
  os << " CountryCode:" << ftdc_struct.CountryCode;
  os << " CustType:" << ftdc_struct.CustType;
  os << " Address:" << ftdc_struct.Address;
  os << " ZipCode:" << ftdc_struct.ZipCode;
  os << " Telephone:" << ftdc_struct.Telephone;
  os << " MobilePhone:" << ftdc_struct.MobilePhone;
  os << " Fax:" << ftdc_struct.Fax;
  os << " EMail:" << ftdc_struct.EMail;
  os << " MoneyAccountStatus:" << ftdc_struct.MoneyAccountStatus;
  os << " BankAccount:" << ftdc_struct.BankAccount;
  os << " BankPassWord:" << "it is a secret"; // ftdc_struct.BankPassWord;
  os << " AccountID:" << ftdc_struct.AccountID;
  os << " Password:" << "it is a secret"; // ftdc_struct.Password;
  os << " InstallID:" << ftdc_struct.InstallID;
  os << " VerifyCertNoFlag:" << ftdc_struct.VerifyCertNoFlag;
  os << " CurrencyID:" << ftdc_struct.CurrencyID;
  os << " CashExchangeCode:" << ftdc_struct.CashExchangeCode;
  os << " Digest:" << ftdc_struct.Digest;
  os << " BankAccType:" << ftdc_struct.BankAccType;
  os << " DeviceID:" << ftdc_struct.DeviceID;
  os << " BankSecuAccType:" << ftdc_struct.BankSecuAccType;
  os << " BrokerIDByBank:" << ftdc_struct.BrokerIDByBank;
  os << " BankSecuAcc:" << ftdc_struct.BankSecuAcc;
  os << " BankPwdFlag:" << ftdc_struct.BankPwdFlag;
  os << " SecuPwdFlag:" << ftdc_struct.SecuPwdFlag;
  os << " OperNo:" << ftdc_struct.OperNo;
  os << " TID:" << ftdc_struct.TID;
  os << " UserID:" << ftdc_struct.UserID;
  os << " ErrorID:" << ftdc_struct.ErrorID;
  os << " ErrorMsg:" << ftdc_struct.ErrorMsg;
  os << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CThostFtdcChangeAccountField& ftdc_struct) {
  os << "ftdc_struct(CThostFtdcChangeAccountField) ---> TradeCode:" << ftdc_struct.TradeCode;
  os << " BankID:" << ftdc_struct.BankID;
  os << " BankBranchID:" << ftdc_struct.BankBranchID;
  os << " BrokerID:" << ftdc_struct.BrokerID;
  os << " BrokerBranchID:" << ftdc_struct.BrokerBranchID;
  os << " TradeDate:" << ftdc_struct.TradeDate;
  os << " TradeTime:" << ftdc_struct.TradeTime;
  os << " BankSerial:" << ftdc_struct.BankSerial;
  os << " TradingDay:" << ftdc_struct.TradingDay;
  os << " PlateSerial:" << ftdc_struct.PlateSerial;
  os << " LastFragment:" << ftdc_struct.LastFragment;
  os << " SessionID:" << ftdc_struct.SessionID;
  os << " CustomerName:" << ftdc_struct.CustomerName;
  os << " IdCardType:" << ftdc_struct.IdCardType;
  os << " IdentifiedCardNo:" << ftdc_struct.IdentifiedCardNo;
  os << " Gender:" << ftdc_struct.Gender;
  os << " CountryCode:" << ftdc_struct.CountryCode;
  os << " CustType:" << ftdc_struct.CustType;
  os << " Address:" << ftdc_struct.Address;
  os << " ZipCode:" << ftdc_struct.ZipCode;
  os << " Telephone:" << ftdc_struct.Telephone;
  os << " MobilePhone:" << ftdc_struct.MobilePhone;
  os << " Fax:" << ftdc_struct.Fax;
  os << " EMail:" << ftdc_struct.EMail;
  os << " MoneyAccountStatus:" << ftdc_struct.MoneyAccountStatus;
  os << " BankAccount:" << ftdc_struct.BankAccount;
  os << " BankPassWord:" << "it is a secret"; // ftdc_struct.BankPassWord;
  os << " NewBankAccount:" << ftdc_struct.NewBankAccount;
  os << " NewBankPassWord:" << "it is a secret"; // ftdc_struct.NewBankPassWord;
  os << " AccountID:" << ftdc_struct.AccountID;
  os << " Password:" << "it is a secret"; // ftdc_struct.Password;
  os << " BankAccType:" << ftdc_struct.BankAccType;
  os << " InstallID:" << ftdc_struct.InstallID;
  os << " VerifyCertNoFlag:" << ftdc_struct.VerifyCertNoFlag;
  os << " CurrencyID:" << ftdc_struct.CurrencyID;
  os << " BrokerIDByBank:" << ftdc_struct.BrokerIDByBank;
  os << " BankPwdFlag:" << ftdc_struct.BankPwdFlag;
  os << " SecuPwdFlag:" << ftdc_struct.SecuPwdFlag;
  os << " TID:" << ftdc_struct.TID;
  os << " Digest:" << ftdc_struct.Digest;
  os << " ErrorID:" << ftdc_struct.ErrorID;
  os << " ErrorMsg:" << ftdc_struct.ErrorMsg;
  os << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CThostFtdcSecAgentACIDMapField& ftdc_struct) {
  os << "ftdc_struct(CThostFtdcSecAgentACIDMapField) ---> BrokerID:" << ftdc_struct.BrokerID;
  os << " UserID:" << ftdc_struct.UserID;
  os << " AccountID:" << ftdc_struct.AccountID;
  os << " CurrencyID:" << ftdc_struct.CurrencyID;
  os << " BrokerSecAgentID:" << ftdc_struct.BrokerSecAgentID;
  os << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CThostFtdcQrySecAgentACIDMapField& ftdc_struct) {
  os << "ftdc_struct(CThostFtdcQrySecAgentACIDMapField) ---> BrokerID:" << ftdc_struct.BrokerID;
  os << " UserID:" << ftdc_struct.UserID;
  os << " AccountID:" << ftdc_struct.AccountID;
  os << " CurrencyID:" << ftdc_struct.CurrencyID;
  os << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CThostFtdcUserRightsAssignField& ftdc_struct) {
  os << "ftdc_struct(CThostFtdcUserRightsAssignField) ---> BrokerID:" << ftdc_struct.BrokerID;
  os << " UserID:" << ftdc_struct.UserID;
  os << " DRIdentityID:" << ftdc_struct.DRIdentityID;
  os << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CThostFtdcBrokerUserRightAssignField& ftdc_struct) {
  os << "ftdc_struct(CThostFtdcBrokerUserRightAssignField) ---> BrokerID:" << ftdc_struct.BrokerID;
  os << " DRIdentityID:" << ftdc_struct.DRIdentityID;
  os << " Tradeable:" << ftdc_struct.Tradeable;
  os << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CThostFtdcDRTransferField& ftdc_struct) {
  os << "ftdc_struct(CThostFtdcDRTransferField) ---> OrigDRIdentityID:" << ftdc_struct.OrigDRIdentityID;
  os << " DestDRIdentityID:" << ftdc_struct.DestDRIdentityID;
  os << " OrigBrokerID:" << ftdc_struct.OrigBrokerID;
  os << " DestBrokerID:" << ftdc_struct.DestBrokerID;
  os << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CThostFtdcFensUserInfoField& ftdc_struct) {
  os << "ftdc_struct(CThostFtdcFensUserInfoField) ---> BrokerID:" << ftdc_struct.BrokerID;
  os << " UserID:" << ftdc_struct.UserID;
  os << " LoginMode:" << ftdc_struct.LoginMode;
  os << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CThostFtdcCurrTransferIdentityField& ftdc_struct) {
  os << "ftdc_struct(CThostFtdcCurrTransferIdentityField) ---> IdentityID:" << ftdc_struct.IdentityID;
  os << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CThostFtdcLoginForbiddenUserField& ftdc_struct) {
  os << "ftdc_struct(CThostFtdcLoginForbiddenUserField) ---> BrokerID:" << ftdc_struct.BrokerID;
  os << " UserID:" << ftdc_struct.UserID;
  os << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CThostFtdcQryLoginForbiddenUserField& ftdc_struct) {
  os << "ftdc_struct(CThostFtdcQryLoginForbiddenUserField) ---> BrokerID:" << ftdc_struct.BrokerID;
  os << " UserID:" << ftdc_struct.UserID;
  os << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CThostFtdcMulticastGroupInfoField& ftdc_struct) {
  os << "ftdc_struct(CThostFtdcMulticastGroupInfoField) ---> GroupIP:" << ftdc_struct.GroupIP;
  os << " GroupPort:" << ftdc_struct.GroupPort;
  os << " SourceIP:" << ftdc_struct.SourceIP;
  os << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CThostFtdcTradingAccountReserveField& ftdc_struct) {
  os << "ftdc_struct(CThostFtdcTradingAccountReserveField) ---> BrokerID:" << ftdc_struct.BrokerID;
  os << " AccountID:" << ftdc_struct.AccountID;
  os << " Reserve:" << ftdc_struct.Reserve;
  os << " CurrencyID:" << ftdc_struct.CurrencyID;
  os << " <--- End";

  return os;
}


#endif //CTP_FTDC_STRUCT_PRINT_FUNCTION_H_
