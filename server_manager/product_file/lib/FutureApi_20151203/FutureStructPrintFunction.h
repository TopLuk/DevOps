#ifndef FUTURE_FTDC_STRUCT_PRINT_FUNCTION_H_
#define FUTURE_FTDC_STRUCT_PRINT_FUNCTION_H_

#include <iostream>
#include <sstream>

inline std::ostream& operator << (std::ostream& os, const CFutureFtdcDisseminationField& ftdc_struct) {
  os << "ftdc_struct(CFutureFtdcDisseminationField) ---> SequenceSeries:" << ftdc_struct.SequenceSeries
    << " SequenceNo:" << ftdc_struct.SequenceNo
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CFutureFtdcReqUserLoginField& ftdc_struct) {
  os << "ftdc_struct(CFutureFtdcReqUserLoginField) ---> TradingDay:" << ftdc_struct.TradingDay
    << " BrokerID:" << ftdc_struct.BrokerID
    << " UserID:" << ftdc_struct.UserID
    << " Password:" << "it is a secret" // ftdc_struct.Password
    << " UserProductInfo:" << ftdc_struct.UserProductInfo
    << " InterfaceProductInfo:" << ftdc_struct.InterfaceProductInfo
    << " ProtocolInfo:" << ftdc_struct.ProtocolInfo
    << " MacAddress:" << ftdc_struct.MacAddress
    << " OneTimePassword:" << "it is a secret" // ftdc_struct.OneTimePassword
    << " ClientIPAddress:" << ftdc_struct.ClientIPAddress
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CFutureFtdcRspUserLoginField& ftdc_struct) {
  os << "ftdc_struct(CFutureFtdcRspUserLoginField) ---> TradingDay:" << ftdc_struct.TradingDay
    << " LoginTime:" << ftdc_struct.LoginTime
    << " BrokerID:" << ftdc_struct.BrokerID
    << " UserID:" << ftdc_struct.UserID
    << " SystemName:" << ftdc_struct.SystemName
    << " FrontID:" << ftdc_struct.FrontID
    << " SessionID:" << ftdc_struct.SessionID
    << " MaxOrderRef:" << ftdc_struct.MaxOrderRef
    << " SHFETime:" << ftdc_struct.SHFETime
    << " DCETime:" << ftdc_struct.DCETime
    << " CZCETime:" << ftdc_struct.CZCETime
    << " FFEXTime:" << ftdc_struct.FFEXTime
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CFutureFtdcUserLogoutField& ftdc_struct) {
  os << "ftdc_struct(CFutureFtdcUserLogoutField) ---> BrokerID:" << ftdc_struct.BrokerID
    << " UserID:" << ftdc_struct.UserID
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CFutureFtdcForceUserLogoutField& ftdc_struct) {
  os << "ftdc_struct(CFutureFtdcForceUserLogoutField) ---> BrokerID:" << ftdc_struct.BrokerID
    << " UserID:" << ftdc_struct.UserID
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CFutureFtdcReqAuthenticateField& ftdc_struct) {
  os << "ftdc_struct(CFutureFtdcReqAuthenticateField) ---> BrokerID:" << ftdc_struct.BrokerID
    << " UserID:" << ftdc_struct.UserID
    << " UserProductInfo:" << ftdc_struct.UserProductInfo
    << " AuthCode:" << ftdc_struct.AuthCode
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CFutureFtdcRspAuthenticateField& ftdc_struct) {
  os << "ftdc_struct(CFutureFtdcRspAuthenticateField) ---> BrokerID:" << ftdc_struct.BrokerID
    << " UserID:" << ftdc_struct.UserID
    << " UserProductInfo:" << ftdc_struct.UserProductInfo
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CFutureFtdcAuthenticationInfoField& ftdc_struct) {
  os << "ftdc_struct(CFutureFtdcAuthenticationInfoField) ---> BrokerID:" << ftdc_struct.BrokerID
    << " UserID:" << ftdc_struct.UserID
    << " UserProductInfo:" << ftdc_struct.UserProductInfo
    << " AuthInfo:" << ftdc_struct.AuthInfo
    << " IsResult:" << ftdc_struct.IsResult
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CFutureFtdcTransferHeaderField& ftdc_struct) {
  os << "ftdc_struct(CFutureFtdcTransferHeaderField) ---> Version:" << ftdc_struct.Version
    << " TradeCode:" << ftdc_struct.TradeCode
    << " TradeDate:" << ftdc_struct.TradeDate
    << " TradeTime:" << ftdc_struct.TradeTime
    << " TradeSerial:" << ftdc_struct.TradeSerial
    << " FutureID:" << ftdc_struct.FutureID
    << " BankID:" << ftdc_struct.BankID
    << " BankBrchID:" << ftdc_struct.BankBrchID
    << " OperNo:" << ftdc_struct.OperNo
    << " DeviceID:" << ftdc_struct.DeviceID
    << " RecordNum:" << ftdc_struct.RecordNum
    << " SessionID:" << ftdc_struct.SessionID
    << " RequestID:" << ftdc_struct.RequestID
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CFutureFtdcTransferBankToFutureReqField& ftdc_struct) {
  os << "ftdc_struct(CFutureFtdcTransferBankToFutureReqField) ---> FutureAccount:" << ftdc_struct.FutureAccount
    << " FuturePwdFlag:" << ftdc_struct.FuturePwdFlag
    << " FutureAccPwd:" << ftdc_struct.FutureAccPwd
    << " TradeAmt:" << ftdc_struct.TradeAmt
    << " CustFee:" << ftdc_struct.CustFee
    << " CurrencyCode:" << ftdc_struct.CurrencyCode
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CFutureFtdcTransferBankToFutureRspField& ftdc_struct) {
  os << "ftdc_struct(CFutureFtdcTransferBankToFutureRspField) ---> RetCode:" << ftdc_struct.RetCode
    << " RetInfo:" << ftdc_struct.RetInfo
    << " FutureAccount:" << ftdc_struct.FutureAccount
    << " TradeAmt:" << ftdc_struct.TradeAmt
    << " CustFee:" << ftdc_struct.CustFee
    << " CurrencyCode:" << ftdc_struct.CurrencyCode
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CFutureFtdcTransferFutureToBankReqField& ftdc_struct) {
  os << "ftdc_struct(CFutureFtdcTransferFutureToBankReqField) ---> FutureAccount:" << ftdc_struct.FutureAccount
    << " FuturePwdFlag:" << ftdc_struct.FuturePwdFlag
    << " FutureAccPwd:" << ftdc_struct.FutureAccPwd
    << " TradeAmt:" << ftdc_struct.TradeAmt
    << " CustFee:" << ftdc_struct.CustFee
    << " CurrencyCode:" << ftdc_struct.CurrencyCode
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CFutureFtdcTransferFutureToBankRspField& ftdc_struct) {
  os << "ftdc_struct(CFutureFtdcTransferFutureToBankRspField) ---> RetCode:" << ftdc_struct.RetCode
    << " RetInfo:" << ftdc_struct.RetInfo
    << " FutureAccount:" << ftdc_struct.FutureAccount
    << " TradeAmt:" << ftdc_struct.TradeAmt
    << " CustFee:" << ftdc_struct.CustFee
    << " CurrencyCode:" << ftdc_struct.CurrencyCode
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CFutureFtdcTransferQryBankReqField& ftdc_struct) {
  os << "ftdc_struct(CFutureFtdcTransferQryBankReqField) ---> FutureAccount:" << ftdc_struct.FutureAccount
    << " FuturePwdFlag:" << ftdc_struct.FuturePwdFlag
    << " FutureAccPwd:" << ftdc_struct.FutureAccPwd
    << " CurrencyCode:" << ftdc_struct.CurrencyCode
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CFutureFtdcTransferQryBankRspField& ftdc_struct) {
  os << "ftdc_struct(CFutureFtdcTransferQryBankRspField) ---> RetCode:" << ftdc_struct.RetCode
    << " RetInfo:" << ftdc_struct.RetInfo
    << " FutureAccount:" << ftdc_struct.FutureAccount
    << " TradeAmt:" << ftdc_struct.TradeAmt
    << " UseAmt:" << ftdc_struct.UseAmt
    << " FetchAmt:" << ftdc_struct.FetchAmt
    << " CurrencyCode:" << ftdc_struct.CurrencyCode
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CFutureFtdcTransferQryDetailReqField& ftdc_struct) {
  os << "ftdc_struct(CFutureFtdcTransferQryDetailReqField) ---> FutureAccount:" << ftdc_struct.FutureAccount
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CFutureFtdcTransferQryDetailRspField& ftdc_struct) {
  os << "ftdc_struct(CFutureFtdcTransferQryDetailRspField) ---> TradeDate:" << ftdc_struct.TradeDate
    << " TradeTime:" << ftdc_struct.TradeTime
    << " TradeCode:" << ftdc_struct.TradeCode
    << " FutureSerial:" << ftdc_struct.FutureSerial
    << " FutureID:" << ftdc_struct.FutureID
    << " FutureAccount:" << ftdc_struct.FutureAccount
    << " BankSerial:" << ftdc_struct.BankSerial
    << " BankID:" << ftdc_struct.BankID
    << " BankBrchID:" << ftdc_struct.BankBrchID
    << " BankAccount:" << ftdc_struct.BankAccount
    << " CertCode:" << ftdc_struct.CertCode
    << " CurrencyCode:" << ftdc_struct.CurrencyCode
    << " TxAmount:" << ftdc_struct.TxAmount
    << " Flag:" << ftdc_struct.Flag
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CFutureFtdcRspInfoField& ftdc_struct) {
  if (&ftdc_struct != NULL) {
    os << "ftdc_struct(CFutureFtdcRspInfoField) ---> ErrorID:" << ftdc_struct.ErrorID
      << " ErrorMsg:" << ftdc_struct.ErrorMsg
      << " <--- End";
  }

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CFutureFtdcExchangeField& ftdc_struct) {
  os << "ftdc_struct(CFutureFtdcExchangeField) ---> ExchangeID:" << ftdc_struct.ExchangeID
    << " ExchangeName:" << ftdc_struct.ExchangeName
    << " ExchangeProperty:" << ftdc_struct.ExchangeProperty
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CFutureFtdcProductField& ftdc_struct) {
  os << "ftdc_struct(CFutureFtdcProductField) ---> ProductID:" << ftdc_struct.ProductID
    << " ProductName:" << ftdc_struct.ProductName
    << " ExchangeID:" << ftdc_struct.ExchangeID
    << " ProductClass:" << ftdc_struct.ProductClass
    << " VolumeMultiple:" << ftdc_struct.VolumeMultiple
    << " PriceTick:" << ftdc_struct.PriceTick
    << " MaxMarketOrderVolume:" << ftdc_struct.MaxMarketOrderVolume
    << " MinMarketOrderVolume:" << ftdc_struct.MinMarketOrderVolume
    << " MaxLimitOrderVolume:" << ftdc_struct.MaxLimitOrderVolume
    << " MinLimitOrderVolume:" << ftdc_struct.MinLimitOrderVolume
    << " PositionType:" << ftdc_struct.PositionType
    << " PositionDateType:" << ftdc_struct.PositionDateType
    << " CloseDealType:" << ftdc_struct.CloseDealType
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CFutureFtdcInstrumentField& ftdc_struct) {
  os << "ftdc_struct(CFutureFtdcInstrumentField) ---> ExchangeID:" << ftdc_struct.ExchangeID
    << " InstrumentID:" << ftdc_struct.InstrumentID
    << " InstrumentName:" << ftdc_struct.InstrumentName
    << " ExchangeInstID:" << ftdc_struct.ExchangeInstID
    << " ProductID:" << ftdc_struct.ProductID
    << " ProductClass:" << ftdc_struct.ProductClass
    << " DeliveryYear:" << ftdc_struct.DeliveryYear
    << " DeliveryMonth:" << ftdc_struct.DeliveryMonth
    << " MaxMarketOrderVolume:" << ftdc_struct.MaxMarketOrderVolume
    << " MinMarketOrderVolume:" << ftdc_struct.MinMarketOrderVolume
    << " MaxLimitOrderVolume:" << ftdc_struct.MaxLimitOrderVolume
    << " MinLimitOrderVolume:" << ftdc_struct.MinLimitOrderVolume
    << " VolumeMultiple:" << ftdc_struct.VolumeMultiple
    << " PriceTick:" << ftdc_struct.PriceTick
    << " CreateDate:" << ftdc_struct.CreateDate
    << " OpenDate:" << ftdc_struct.OpenDate
    << " ExpireDate:" << ftdc_struct.ExpireDate
    << " StartDelivDate:" << ftdc_struct.StartDelivDate
    << " EndDelivDate:" << ftdc_struct.EndDelivDate
    << " InstLifePhase:" << ftdc_struct.InstLifePhase
    << " IsTrading:" << ftdc_struct.IsTrading
    << " PositionType:" << ftdc_struct.PositionType
    << " PositionDateType:" << ftdc_struct.PositionDateType
    << " MaxMarginSideAlgorithm:" << ftdc_struct.MaxMarginSideAlgorithm
    << " UnderlyingInstrID:" << ftdc_struct.UnderlyingInstrID
    << " StrikePrice:" << ftdc_struct.StrikePrice
    << " OptionsType:" << ftdc_struct.OptionsType
    << " UnderlyingMultiple:" << ftdc_struct.UnderlyingMultiple
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CFutureFtdcBrokerField& ftdc_struct) {
  os << "ftdc_struct(CFutureFtdcBrokerField) ---> BrokerID:" << ftdc_struct.BrokerID
    << " BrokerAbbr:" << ftdc_struct.BrokerAbbr
    << " BrokerName:" << ftdc_struct.BrokerName
    << " IsActive:" << ftdc_struct.IsActive
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CFutureFtdcTraderField& ftdc_struct) {
  os << "ftdc_struct(CFutureFtdcTraderField) ---> ExchangeID:" << ftdc_struct.ExchangeID
    << " TraderID:" << ftdc_struct.TraderID
    << " ParticipantID:" << ftdc_struct.ParticipantID
    << " Password:" << "it is a secret" // ftdc_struct.Password
    << " InstallCount:" << ftdc_struct.InstallCount
    << " BrokerID:" << ftdc_struct.BrokerID
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CFutureFtdcInvestorField& ftdc_struct) {
  os << "ftdc_struct(CFutureFtdcInvestorField) ---> InvestorID:" << ftdc_struct.InvestorID
    << " BrokerID:" << ftdc_struct.BrokerID
    << " InvestorGroupID:" << ftdc_struct.InvestorGroupID
    << " InvestorName:" << ftdc_struct.InvestorName
    << " IdentifiedCardType:" << ftdc_struct.IdentifiedCardType
    << " IdentifiedCardNo:" << ftdc_struct.IdentifiedCardNo
    << " IsActive:" << ftdc_struct.IsActive
    << " Telephone:" << ftdc_struct.Telephone
    << " Address:" << ftdc_struct.Address
    << " OpenDate:" << ftdc_struct.OpenDate
    << " Mobile:" << ftdc_struct.Mobile
    << " CommModelID:" << ftdc_struct.CommModelID
    << " PadField:" << ftdc_struct.PadField
    << " MarginModelID:" << ftdc_struct.MarginModelID
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CFutureFtdcTradingCodeField& ftdc_struct) {
  os << "ftdc_struct(CFutureFtdcTradingCodeField) ---> InvestorID:" << ftdc_struct.InvestorID
    << " BrokerID:" << ftdc_struct.BrokerID
    << " ExchangeID:" << ftdc_struct.ExchangeID
    << " ClientID:" << ftdc_struct.ClientID
    << " IsActive:" << ftdc_struct.IsActive
    << " ClientIDType:" << ftdc_struct.ClientIDType
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CFutureFtdcPartBrokerField& ftdc_struct) {
  os << "ftdc_struct(CFutureFtdcPartBrokerField) ---> BrokerID:" << ftdc_struct.BrokerID
    << " ExchangeID:" << ftdc_struct.ExchangeID
    << " ParticipantID:" << ftdc_struct.ParticipantID
    << " IsActive:" << ftdc_struct.IsActive
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CFutureFtdcSuperUserField& ftdc_struct) {
  os << "ftdc_struct(CFutureFtdcSuperUserField) ---> UserID:" << ftdc_struct.UserID
    << " UserName:" << ftdc_struct.UserName
    << " Password:" << "it is a secret" // ftdc_struct.Password
    << " IsActive:" << ftdc_struct.IsActive
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CFutureFtdcSuperUserFunctionField& ftdc_struct) {
  os << "ftdc_struct(CFutureFtdcSuperUserFunctionField) ---> UserID:" << ftdc_struct.UserID
    << " FunctionCode:" << ftdc_struct.FunctionCode
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CFutureFtdcInvestorGroupField& ftdc_struct) {
  os << "ftdc_struct(CFutureFtdcInvestorGroupField) ---> BrokerID:" << ftdc_struct.BrokerID
    << " InvestorGroupID:" << ftdc_struct.InvestorGroupID
    << " InvestorGroupName:" << ftdc_struct.InvestorGroupName
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CFutureFtdcTradingAccountField& ftdc_struct) {
  os << "ftdc_struct(CFutureFtdcTradingAccountField) ---> BrokerID:" << ftdc_struct.BrokerID
    << " AccountID:" << ftdc_struct.AccountID
    << " PreMortgage:" << ftdc_struct.PreMortgage
    << " PreCredit:" << ftdc_struct.PreCredit
    << " PreDeposit:" << ftdc_struct.PreDeposit
    << " PreBalance:" << ftdc_struct.PreBalance
    << " PreMargin:" << ftdc_struct.PreMargin
    << " InterestBase:" << ftdc_struct.InterestBase
    << " Interest:" << ftdc_struct.Interest
    << " Deposit:" << ftdc_struct.Deposit
    << " Withdraw:" << ftdc_struct.Withdraw
    << " FrozenMargin:" << ftdc_struct.FrozenMargin
    << " FrozenCash:" << ftdc_struct.FrozenCash
    << " FrozenCommission:" << ftdc_struct.FrozenCommission
    << " CurrMargin:" << ftdc_struct.CurrMargin
    << " CashIn:" << ftdc_struct.CashIn
    << " Commission:" << ftdc_struct.Commission
    << " CloseProfit:" << ftdc_struct.CloseProfit
    << " PositionProfit:" << ftdc_struct.PositionProfit
    << " Balance:" << ftdc_struct.Balance
    << " Available:" << ftdc_struct.Available
    << " WithdrawQuota:" << ftdc_struct.WithdrawQuota
    << " Reserve:" << ftdc_struct.Reserve
    << " TradingDay:" << ftdc_struct.TradingDay
    << " SettlementID:" << ftdc_struct.SettlementID
    << " Credit:" << ftdc_struct.Credit
    << " Mortgage:" << ftdc_struct.Mortgage
    << " ExchangeMargin:" << ftdc_struct.ExchangeMargin
    << " DeliveryMargin:" << ftdc_struct.DeliveryMargin
    << " ExchangeDeliveryMargin:" << ftdc_struct.ExchangeDeliveryMargin
    << " ReserveBalance:" << ftdc_struct.ReserveBalance
    << " OptionCloseProfit:" << ftdc_struct.OptionCloseProfit
    << " AccountLevel:" << ftdc_struct.AccountLevel
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CFutureFtdcInvestorPositionField& ftdc_struct) {
  os << "ftdc_struct(CFutureFtdcInvestorPositionField) ---> ExchangeID:" << ftdc_struct.ExchangeID
    << " InstrumentID:" << ftdc_struct.InstrumentID
    << " BrokerID:" << ftdc_struct.BrokerID
    << " InvestorID:" << ftdc_struct.InvestorID
    << " PosiDirection:" << ftdc_struct.PosiDirection
    << " HedgeFlag:" << ftdc_struct.HedgeFlag
    << " PositionDate:" << ftdc_struct.PositionDate
    << " YdPosition:" << ftdc_struct.YdPosition
    << " Position:" << ftdc_struct.Position
    << " LongFrozen:" << ftdc_struct.LongFrozen
    << " ShortFrozen:" << ftdc_struct.ShortFrozen
    << " LongFrozenAmount:" << ftdc_struct.LongFrozenAmount
    << " ShortFrozenAmount:" << ftdc_struct.ShortFrozenAmount
    << " OpenVolume:" << ftdc_struct.OpenVolume
    << " CloseVolume:" << ftdc_struct.CloseVolume
    << " OpenAmount:" << ftdc_struct.OpenAmount
    << " CloseAmount:" << ftdc_struct.CloseAmount
    << " YdCloseAmount:" << ftdc_struct.YdCloseAmount
    << " YdCloseVolume:" << ftdc_struct.YdCloseVolume
    << " PositionCost:" << ftdc_struct.PositionCost
    << " PreMargin:" << ftdc_struct.PreMargin
    << " UseMargin:" << ftdc_struct.UseMargin
    << " FrozenMargin:" << ftdc_struct.FrozenMargin
    << " FrozenCash:" << ftdc_struct.FrozenCash
    << " FrozenCommission:" << ftdc_struct.FrozenCommission
    << " CashIn:" << ftdc_struct.CashIn
    << " Commission:" << ftdc_struct.Commission
    << " CloseProfit:" << ftdc_struct.CloseProfit
    << " PositionProfit:" << ftdc_struct.PositionProfit
    << " PreSettlementPrice:" << ftdc_struct.PreSettlementPrice
    << " SettlementPrice:" << ftdc_struct.SettlementPrice
    << " TradingDay:" << ftdc_struct.TradingDay
    << " SettlementID:" << ftdc_struct.SettlementID
    << " OpenCost:" << ftdc_struct.OpenCost
    << " ExchangeMargin:" << ftdc_struct.ExchangeMargin
    << " CombPosition:" << ftdc_struct.CombPosition
    << " CombLongFrozen:" << ftdc_struct.CombLongFrozen
    << " CombShortFrozen:" << ftdc_struct.CombShortFrozen
    << " CloseProfitByDate:" << ftdc_struct.CloseProfitByDate
    << " CloseProfitByTrade:" << ftdc_struct.CloseProfitByTrade
    << " TodayPosition:" << ftdc_struct.TodayPosition
    << " MarginRateByMoney:" << ftdc_struct.MarginRateByMoney
    << " MarginRateByVolume:" << ftdc_struct.MarginRateByVolume
    << " StrikeFrozen:" << ftdc_struct.StrikeFrozen
    << " StrikeFrozenAmount:" << ftdc_struct.StrikeFrozenAmount
    << " AbandonFrozen:" << ftdc_struct.AbandonFrozen
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CFutureFtdcInstrumentMarginRateField& ftdc_struct) {
  os << "ftdc_struct(CFutureFtdcInstrumentMarginRateField) ---> ExchangeID:" << ftdc_struct.ExchangeID
    << " InstrumentID:" << ftdc_struct.InstrumentID
    << " InvestorRange:" << ftdc_struct.InvestorRange
    << " BrokerID:" << ftdc_struct.BrokerID
    << " InvestorID:" << ftdc_struct.InvestorID
    << " HedgeFlag:" << ftdc_struct.HedgeFlag
    << " LongMarginRatioByMoney:" << ftdc_struct.LongMarginRatioByMoney
    << " LongMarginRatioByVolume:" << ftdc_struct.LongMarginRatioByVolume
    << " ShortMarginRatioByMoney:" << ftdc_struct.ShortMarginRatioByMoney
    << " ShortMarginRatioByVolume:" << ftdc_struct.ShortMarginRatioByVolume
    << " IsRelative:" << ftdc_struct.IsRelative
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CFutureFtdcInstrumentCommissionRateField& ftdc_struct) {
  os << "ftdc_struct(CFutureFtdcInstrumentCommissionRateField) ---> ExchangeID:" << ftdc_struct.ExchangeID
    << " InstrumentID:" << ftdc_struct.InstrumentID
    << " InvestorRange:" << ftdc_struct.InvestorRange
    << " BrokerID:" << ftdc_struct.BrokerID
    << " InvestorID:" << ftdc_struct.InvestorID
    << " HedgeFlag:" << ftdc_struct.HedgeFlag
    << " OpenRatioByMoney:" << ftdc_struct.OpenRatioByMoney
    << " OpenRatioByVolume:" << ftdc_struct.OpenRatioByVolume
    << " CloseRatioByMoney:" << ftdc_struct.CloseRatioByMoney
    << " CloseRatioByVolume:" << ftdc_struct.CloseRatioByVolume
    << " CloseTodayRatioByMoney:" << ftdc_struct.CloseTodayRatioByMoney
    << " CloseTodayRatioByVolume:" << ftdc_struct.CloseTodayRatioByVolume
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CFutureFtdcDepthMarketDataField& ftdc_struct) {
  os << "ftdc_struct(CFutureFtdcDepthMarketDataField) ---> TradingDay:" << ftdc_struct.TradingDay
    << " InstrumentID:" << ftdc_struct.InstrumentID
    << " ExchangeID:" << ftdc_struct.ExchangeID
    << " ExchangeInstID:" << ftdc_struct.ExchangeInstID
    << " LastPrice:" << ftdc_struct.LastPrice
    << " PreSettlementPrice:" << ftdc_struct.PreSettlementPrice
    << " PreClosePrice:" << ftdc_struct.PreClosePrice
    << " PreOpenInterest:" << ftdc_struct.PreOpenInterest
    << " OpenPrice:" << ftdc_struct.OpenPrice
    << " HighestPrice:" << ftdc_struct.HighestPrice
    << " LowestPrice:" << ftdc_struct.LowestPrice
    << " Volume:" << ftdc_struct.Volume
    << " Turnover:" << ftdc_struct.Turnover
    << " OpenInterest:" << ftdc_struct.OpenInterest
    << " ClosePrice:" << ftdc_struct.ClosePrice
    << " SettlementPrice:" << ftdc_struct.SettlementPrice
    << " UpperLimitPrice:" << ftdc_struct.UpperLimitPrice
    << " LowerLimitPrice:" << ftdc_struct.LowerLimitPrice
    << " PreDelta:" << ftdc_struct.PreDelta
    << " CurrDelta:" << ftdc_struct.CurrDelta
    << " UpdateTime:" << ftdc_struct.UpdateTime
    << " UpdateMillisec:" << ftdc_struct.UpdateMillisec
    << " BidPrice1:" << ftdc_struct.BidPrice1
    << " BidVolume1:" << ftdc_struct.BidVolume1
    << " AskPrice1:" << ftdc_struct.AskPrice1
    << " AskVolume1:" << ftdc_struct.AskVolume1
    << " BidPrice2:" << ftdc_struct.BidPrice2
    << " BidVolume2:" << ftdc_struct.BidVolume2
    << " AskPrice2:" << ftdc_struct.AskPrice2
    << " AskVolume2:" << ftdc_struct.AskVolume2
    << " BidPrice3:" << ftdc_struct.BidPrice3
    << " BidVolume3:" << ftdc_struct.BidVolume3
    << " AskPrice3:" << ftdc_struct.AskPrice3
    << " AskVolume3:" << ftdc_struct.AskVolume3
    << " BidPrice4:" << ftdc_struct.BidPrice4
    << " BidVolume4:" << ftdc_struct.BidVolume4
    << " AskPrice4:" << ftdc_struct.AskPrice4
    << " AskVolume4:" << ftdc_struct.AskVolume4
    << " BidPrice5:" << ftdc_struct.BidPrice5
    << " BidVolume5:" << ftdc_struct.BidVolume5
    << " AskPrice5:" << ftdc_struct.AskPrice5
    << " AskVolume5:" << ftdc_struct.AskVolume5
    << " AveragePrice:" << ftdc_struct.AveragePrice
    << " ActionDay:" << ftdc_struct.ActionDay
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CFutureFtdcInstrumentTradingRightField& ftdc_struct) {
  os << "ftdc_struct(CFutureFtdcInstrumentTradingRightField) ---> ExchangeID:" << ftdc_struct.ExchangeID
    << " InstrumentID:" << ftdc_struct.InstrumentID
    << " InvestorRange:" << ftdc_struct.InvestorRange
    << " BrokerID:" << ftdc_struct.BrokerID
    << " InvestorID:" << ftdc_struct.InvestorID
    << " TradingRight:" << ftdc_struct.TradingRight
    << " QuoteTradingRight:" << ftdc_struct.QuoteTradingRight
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CFutureFtdcBrokerUserField& ftdc_struct) {
  os << "ftdc_struct(CFutureFtdcBrokerUserField) ---> BrokerID:" << ftdc_struct.BrokerID
    << " UserID:" << ftdc_struct.UserID
    << " UserName:" << ftdc_struct.UserName
    << " UserType:" << ftdc_struct.UserType
    << " IsActive:" << ftdc_struct.IsActive
    << " IsUsingOTP:" << ftdc_struct.IsUsingOTP
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CFutureFtdcBrokerUserPasswordField& ftdc_struct) {
  os << "ftdc_struct(CFutureFtdcBrokerUserPasswordField) ---> BrokerID:" << ftdc_struct.BrokerID
    << " UserID:" << ftdc_struct.UserID
    << " Password:" << "it is a secret" // ftdc_struct.Password
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CFutureFtdcBrokerUserFunctionField& ftdc_struct) {
  os << "ftdc_struct(CFutureFtdcBrokerUserFunctionField) ---> BrokerID:" << ftdc_struct.BrokerID
    << " UserID:" << ftdc_struct.UserID
    << " BrokerFunctionCode:" << ftdc_struct.BrokerFunctionCode
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CFutureFtdcTraderOfferField& ftdc_struct) {
  os << "ftdc_struct(CFutureFtdcTraderOfferField) ---> ExchangeID:" << ftdc_struct.ExchangeID
    << " TraderID:" << ftdc_struct.TraderID
    << " ParticipantID:" << ftdc_struct.ParticipantID
    << " Password:" << "it is a secret" // ftdc_struct.Password
    << " InstallID:" << ftdc_struct.InstallID
    << " OrderLocalID:" << ftdc_struct.OrderLocalID
    << " TraderConnectStatus:" << ftdc_struct.TraderConnectStatus
    << " ConnectRequestDate:" << ftdc_struct.ConnectRequestDate
    << " ConnectRequestTime:" << ftdc_struct.ConnectRequestTime
    << " LastReportDate:" << ftdc_struct.LastReportDate
    << " LastReportTime:" << ftdc_struct.LastReportTime
    << " ConnectDate:" << ftdc_struct.ConnectDate
    << " ConnectTime:" << ftdc_struct.ConnectTime
    << " StartDate:" << ftdc_struct.StartDate
    << " StartTime:" << ftdc_struct.StartTime
    << " TradingDay:" << ftdc_struct.TradingDay
    << " BrokerID:" << ftdc_struct.BrokerID
    << " MaxTradeID:" << ftdc_struct.MaxTradeID
    << " MaxOrderMessageReference:" << ftdc_struct.MaxOrderMessageReference
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CFutureFtdcSettlementInfoField& ftdc_struct) {
  os << "ftdc_struct(CFutureFtdcSettlementInfoField) ---> TradingDay:" << ftdc_struct.TradingDay
    << " SettlementID:" << ftdc_struct.SettlementID
    << " BrokerID:" << ftdc_struct.BrokerID
    << " InvestorID:" << ftdc_struct.InvestorID
    << " SequenceNo:" << ftdc_struct.SequenceNo
    << " Content:" << ftdc_struct.Content
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CFutureFtdcInstrumentMarginRateAdjustField& ftdc_struct) {
  os << "ftdc_struct(CFutureFtdcInstrumentMarginRateAdjustField) ---> ExchangeID:" << ftdc_struct.ExchangeID
    << " InstrumentID:" << ftdc_struct.InstrumentID
    << " InvestorRange:" << ftdc_struct.InvestorRange
    << " BrokerID:" << ftdc_struct.BrokerID
    << " InvestorID:" << ftdc_struct.InvestorID
    << " HedgeFlag:" << ftdc_struct.HedgeFlag
    << " LongMarginRatioByMoney:" << ftdc_struct.LongMarginRatioByMoney
    << " LongMarginRatioByVolume:" << ftdc_struct.LongMarginRatioByVolume
    << " ShortMarginRatioByMoney:" << ftdc_struct.ShortMarginRatioByMoney
    << " ShortMarginRatioByVolume:" << ftdc_struct.ShortMarginRatioByVolume
    << " IsRelative:" << ftdc_struct.IsRelative
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CFutureFtdcExchangeMarginRateField& ftdc_struct) {
  os << "ftdc_struct(CFutureFtdcExchangeMarginRateField) ---> BrokerID:" << ftdc_struct.BrokerID
    << " ExchangeID:" << ftdc_struct.ExchangeID
    << " InstrumentID:" << ftdc_struct.InstrumentID
    << " HedgeFlag:" << ftdc_struct.HedgeFlag
    << " LongMarginRatioByMoney:" << ftdc_struct.LongMarginRatioByMoney
    << " LongMarginRatioByVolume:" << ftdc_struct.LongMarginRatioByVolume
    << " ShortMarginRatioByMoney:" << ftdc_struct.ShortMarginRatioByMoney
    << " ShortMarginRatioByVolume:" << ftdc_struct.ShortMarginRatioByVolume
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CFutureFtdcExchangeMarginRateAdjustField& ftdc_struct) {
  os << "ftdc_struct(CFutureFtdcExchangeMarginRateAdjustField) ---> BrokerID:" << ftdc_struct.BrokerID
    << " ExchangeID:" << ftdc_struct.ExchangeID
    << " InstrumentID:" << ftdc_struct.InstrumentID
    << " HedgeFlag:" << ftdc_struct.HedgeFlag
    << " LongMarginRatioByMoney:" << ftdc_struct.LongMarginRatioByMoney
    << " LongMarginRatioByVolume:" << ftdc_struct.LongMarginRatioByVolume
    << " ShortMarginRatioByMoney:" << ftdc_struct.ShortMarginRatioByMoney
    << " ShortMarginRatioByVolume:" << ftdc_struct.ShortMarginRatioByVolume
    << " ExchLongMarginRatioByMoney:" << ftdc_struct.ExchLongMarginRatioByMoney
    << " ExchLongMarginRatioByVolume:" << ftdc_struct.ExchLongMarginRatioByVolume
    << " ExchShortMarginRatioByMoney:" << ftdc_struct.ExchShortMarginRatioByMoney
    << " ExchShortMarginRatioByVolume:" << ftdc_struct.ExchShortMarginRatioByVolume
    << " NoLongMarginRatioByMoney:" << ftdc_struct.NoLongMarginRatioByMoney
    << " NoLongMarginRatioByVolume:" << ftdc_struct.NoLongMarginRatioByVolume
    << " NoShortMarginRatioByMoney:" << ftdc_struct.NoShortMarginRatioByMoney
    << " NoShortMarginRatioByVolume:" << ftdc_struct.NoShortMarginRatioByVolume
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CFutureFtdcSettlementRefField& ftdc_struct) {
  os << "ftdc_struct(CFutureFtdcSettlementRefField) ---> TradingDay:" << ftdc_struct.TradingDay
    << " SettlementID:" << ftdc_struct.SettlementID
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CFutureFtdcCurrentTimeField& ftdc_struct) {
  os << "ftdc_struct(CFutureFtdcCurrentTimeField) ---> CurrDate:" << ftdc_struct.CurrDate
    << " CurrTime:" << ftdc_struct.CurrTime
    << " CurrMillisec:" << ftdc_struct.CurrMillisec
    << " ActionDay:" << ftdc_struct.ActionDay
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CFutureFtdcCommPhaseField& ftdc_struct) {
  os << "ftdc_struct(CFutureFtdcCommPhaseField) ---> TradingDay:" << ftdc_struct.TradingDay
    << " CommPhaseNo:" << ftdc_struct.CommPhaseNo
    << " SystemID:" << ftdc_struct.SystemID
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CFutureFtdcLoginInfoField& ftdc_struct) {
  os << "ftdc_struct(CFutureFtdcLoginInfoField) ---> FrontID:" << ftdc_struct.FrontID
    << " SessionID:" << ftdc_struct.SessionID
    << " BrokerID:" << ftdc_struct.BrokerID
    << " UserID:" << ftdc_struct.UserID
    << " LoginDate:" << ftdc_struct.LoginDate
    << " LoginTime:" << ftdc_struct.LoginTime
    << " IPAddress:" << ftdc_struct.IPAddress
    << " UserProductInfo:" << ftdc_struct.UserProductInfo
    << " InterfaceProductInfo:" << ftdc_struct.InterfaceProductInfo
    << " ProtocolInfo:" << ftdc_struct.ProtocolInfo
    << " SystemName:" << ftdc_struct.SystemName
    << " Password:" << "it is a secret" // ftdc_struct.Password
    << " MaxOrderRef:" << ftdc_struct.MaxOrderRef
    << " SHFETime:" << ftdc_struct.SHFETime
    << " DCETime:" << ftdc_struct.DCETime
    << " CZCETime:" << ftdc_struct.CZCETime
    << " FFEXTime:" << ftdc_struct.FFEXTime
    << " MacAddress:" << ftdc_struct.MacAddress
    << " OneTimePassword:" << "it is a secret" // ftdc_struct.OneTimePassword
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CFutureFtdcLogoutAllField& ftdc_struct) {
  os << "ftdc_struct(CFutureFtdcLogoutAllField) ---> FrontID:" << ftdc_struct.FrontID
    << " SessionID:" << ftdc_struct.SessionID
    << " SystemName:" << ftdc_struct.SystemName
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CFutureFtdcFrontStatusField& ftdc_struct) {
  os << "ftdc_struct(CFutureFtdcFrontStatusField) ---> FrontID:" << ftdc_struct.FrontID
    << " LastReportDate:" << ftdc_struct.LastReportDate
    << " LastReportTime:" << ftdc_struct.LastReportTime
    << " IsActive:" << ftdc_struct.IsActive
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CFutureFtdcUserPasswordUpdateField& ftdc_struct) {
  os << "ftdc_struct(CFutureFtdcUserPasswordUpdateField) ---> BrokerID:" << ftdc_struct.BrokerID
    << " UserID:" << ftdc_struct.UserID
    << " OldPassword:" << "it is a secret" // ftdc_struct.OldPassword
    << " NewPassword:" << "it is a secret" // ftdc_struct.NewPassword
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CFutureFtdcInputOrderField& ftdc_struct) {
  os << "ftdc_struct(CFutureFtdcInputOrderField) ---> BrokerID:" << ftdc_struct.BrokerID
    << " InvestorID:" << ftdc_struct.InvestorID
    << " InstrumentID:" << ftdc_struct.InstrumentID
    << " OrderRef:" << ftdc_struct.OrderRef
    << " UserID:" << ftdc_struct.UserID
    << " OrderPriceType:" << ftdc_struct.OrderPriceType
    << " Direction:" << ftdc_struct.Direction
    << " CombOffsetFlag:" << ftdc_struct.CombOffsetFlag
    << " CombHedgeFlag:" << ftdc_struct.CombHedgeFlag
    << " LimitPrice:" << ftdc_struct.LimitPrice
    << " VolumeTotalOriginal:" << ftdc_struct.VolumeTotalOriginal
    << " TimeCondition:" << ftdc_struct.TimeCondition
    << " GTDDate:" << ftdc_struct.GTDDate
    << " VolumeCondition:" << ftdc_struct.VolumeCondition
    << " MinVolume:" << ftdc_struct.MinVolume
    << " ContingentCondition:" << ftdc_struct.ContingentCondition
    << " StopPrice:" << ftdc_struct.StopPrice
    << " ForceCloseReason:" << ftdc_struct.ForceCloseReason
    << " IsAutoSuspend:" << ftdc_struct.IsAutoSuspend
    << " BusinessUnit:" << ftdc_struct.BusinessUnit
    << " RequestID:" << ftdc_struct.RequestID
    << " UserForceClose:" << ftdc_struct.UserForceClose
    << " IsSwapOrder:" << ftdc_struct.IsSwapOrder
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CFutureFtdcOrderField& ftdc_struct) {
  os << "ftdc_struct(CFutureFtdcOrderField) ---> BrokerID:" << ftdc_struct.BrokerID
    << " InvestorID:" << ftdc_struct.InvestorID
    << " InstrumentID:" << ftdc_struct.InstrumentID
    << " OrderRef:" << ftdc_struct.OrderRef
    << " UserID:" << ftdc_struct.UserID
    << " OrderPriceType:" << ftdc_struct.OrderPriceType
    << " Direction:" << ftdc_struct.Direction
    << " CombOffsetFlag:" << ftdc_struct.CombOffsetFlag
    << " CombHedgeFlag:" << ftdc_struct.CombHedgeFlag
    << " LimitPrice:" << ftdc_struct.LimitPrice
    << " VolumeTotalOriginal:" << ftdc_struct.VolumeTotalOriginal
    << " TimeCondition:" << ftdc_struct.TimeCondition
    << " GTDDate:" << ftdc_struct.GTDDate
    << " VolumeCondition:" << ftdc_struct.VolumeCondition
    << " MinVolume:" << ftdc_struct.MinVolume
    << " ContingentCondition:" << ftdc_struct.ContingentCondition
    << " StopPrice:" << ftdc_struct.StopPrice
    << " ForceCloseReason:" << ftdc_struct.ForceCloseReason
    << " IsAutoSuspend:" << ftdc_struct.IsAutoSuspend
    << " BusinessUnit:" << ftdc_struct.BusinessUnit
    << " RequestID:" << ftdc_struct.RequestID
    << " OrderLocalID:" << ftdc_struct.OrderLocalID
    << " ExchangeID:" << ftdc_struct.ExchangeID
    << " ParticipantID:" << ftdc_struct.ParticipantID
    << " ClientID:" << ftdc_struct.ClientID
    << " ExchangeInstID:" << ftdc_struct.ExchangeInstID
    << " TraderID:" << ftdc_struct.TraderID
    << " InstallID:" << ftdc_struct.InstallID
    << " OrderSubmitStatus:" << ftdc_struct.OrderSubmitStatus
    << " NotifySequence:" << ftdc_struct.NotifySequence
    << " TradingDay:" << ftdc_struct.TradingDay
    << " SettlementID:" << ftdc_struct.SettlementID
    << " OrderSysID:" << ftdc_struct.OrderSysID
    << " OrderSource:" << ftdc_struct.OrderSource
    << " OrderStatus:" << ftdc_struct.OrderStatus
    << " OrderType:" << ftdc_struct.OrderType
    << " VolumeTraded:" << ftdc_struct.VolumeTraded
    << " VolumeTotal:" << ftdc_struct.VolumeTotal
    << " InsertDate:" << ftdc_struct.InsertDate
    << " InsertTime:" << ftdc_struct.InsertTime
    << " ActiveTime:" << ftdc_struct.ActiveTime
    << " SuspendTime:" << ftdc_struct.SuspendTime
    << " UpdateTime:" << ftdc_struct.UpdateTime
    << " CancelTime:" << ftdc_struct.CancelTime
    << " ActiveTraderID:" << ftdc_struct.ActiveTraderID
    << " ClearingPartID:" << ftdc_struct.ClearingPartID
    << " SequenceNo:" << ftdc_struct.SequenceNo
    << " FrontID:" << ftdc_struct.FrontID
    << " SessionID:" << ftdc_struct.SessionID
    << " UserProductInfo:" << ftdc_struct.UserProductInfo
    << " StatusMsg:" << ftdc_struct.StatusMsg
    << " UserForceClose:" << ftdc_struct.UserForceClose
    << " ActiveUserID:" << ftdc_struct.ActiveUserID
    << " BrokerOrderSeq:" << ftdc_struct.BrokerOrderSeq
    << " RelativeOrderSysID:" << ftdc_struct.RelativeOrderSysID
    << " ZCETotalTradedVolume:" << ftdc_struct.ZCETotalTradedVolume
    << " IsSwapOrder:" << ftdc_struct.IsSwapOrder
    << " ClientIDType:" << ftdc_struct.ClientIDType
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CFutureFtdcExchangeOrderField& ftdc_struct) {
  os << "ftdc_struct(CFutureFtdcExchangeOrderField) ---> OrderPriceType:" << ftdc_struct.OrderPriceType
    << " Direction:" << ftdc_struct.Direction
    << " CombOffsetFlag:" << ftdc_struct.CombOffsetFlag
    << " CombHedgeFlag:" << ftdc_struct.CombHedgeFlag
    << " LimitPrice:" << ftdc_struct.LimitPrice
    << " VolumeTotalOriginal:" << ftdc_struct.VolumeTotalOriginal
    << " TimeCondition:" << ftdc_struct.TimeCondition
    << " GTDDate:" << ftdc_struct.GTDDate
    << " VolumeCondition:" << ftdc_struct.VolumeCondition
    << " MinVolume:" << ftdc_struct.MinVolume
    << " ContingentCondition:" << ftdc_struct.ContingentCondition
    << " StopPrice:" << ftdc_struct.StopPrice
    << " ForceCloseReason:" << ftdc_struct.ForceCloseReason
    << " IsAutoSuspend:" << ftdc_struct.IsAutoSuspend
    << " BusinessUnit:" << ftdc_struct.BusinessUnit
    << " RequestID:" << ftdc_struct.RequestID
    << " OrderLocalID:" << ftdc_struct.OrderLocalID
    << " ExchangeID:" << ftdc_struct.ExchangeID
    << " ParticipantID:" << ftdc_struct.ParticipantID
    << " ClientID:" << ftdc_struct.ClientID
    << " ExchangeInstID:" << ftdc_struct.ExchangeInstID
    << " TraderID:" << ftdc_struct.TraderID
    << " InstallID:" << ftdc_struct.InstallID
    << " OrderSubmitStatus:" << ftdc_struct.OrderSubmitStatus
    << " NotifySequence:" << ftdc_struct.NotifySequence
    << " TradingDay:" << ftdc_struct.TradingDay
    << " SettlementID:" << ftdc_struct.SettlementID
    << " OrderSysID:" << ftdc_struct.OrderSysID
    << " OrderSource:" << ftdc_struct.OrderSource
    << " OrderStatus:" << ftdc_struct.OrderStatus
    << " OrderType:" << ftdc_struct.OrderType
    << " VolumeTraded:" << ftdc_struct.VolumeTraded
    << " VolumeTotal:" << ftdc_struct.VolumeTotal
    << " InsertDate:" << ftdc_struct.InsertDate
    << " InsertTime:" << ftdc_struct.InsertTime
    << " ActiveTime:" << ftdc_struct.ActiveTime
    << " SuspendTime:" << ftdc_struct.SuspendTime
    << " UpdateTime:" << ftdc_struct.UpdateTime
    << " CancelTime:" << ftdc_struct.CancelTime
    << " ActiveTraderID:" << ftdc_struct.ActiveTraderID
    << " ClearingPartID:" << ftdc_struct.ClearingPartID
    << " SequenceNo:" << ftdc_struct.SequenceNo
    << " InvestorID:" << ftdc_struct.InvestorID
    << " BrokerID:" << ftdc_struct.BrokerID
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CFutureFtdcExchangeOrderInsertErrorField& ftdc_struct) {
  os << "ftdc_struct(CFutureFtdcExchangeOrderInsertErrorField) ---> ExchangeID:" << ftdc_struct.ExchangeID
    << " ParticipantID:" << ftdc_struct.ParticipantID
    << " TraderID:" << ftdc_struct.TraderID
    << " InstallID:" << ftdc_struct.InstallID
    << " OrderLocalID:" << ftdc_struct.OrderLocalID
    << " ErrorID:" << ftdc_struct.ErrorID
    << " ErrorMsg:" << ftdc_struct.ErrorMsg
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CFutureFtdcInputOrderActionField& ftdc_struct) {
  os << "ftdc_struct(CFutureFtdcInputOrderActionField) ---> BrokerID:" << ftdc_struct.BrokerID
    << " InvestorID:" << ftdc_struct.InvestorID
    << " OrderActionRef:" << ftdc_struct.OrderActionRef
    << " OrderRef:" << ftdc_struct.OrderRef
    << " RequestID:" << ftdc_struct.RequestID
    << " Direction:" << ftdc_struct.Direction
    << " FrontID:" << ftdc_struct.FrontID
    << " SessionID:" << ftdc_struct.SessionID
    << " ExchangeID:" << ftdc_struct.ExchangeID
    << " OrderSysID:" << ftdc_struct.OrderSysID
    << " ActionFlag:" << ftdc_struct.ActionFlag
    << " LimitPrice:" << ftdc_struct.LimitPrice
    << " VolumeChange:" << ftdc_struct.VolumeChange
    << " UserID:" << ftdc_struct.UserID
    << " InstrumentID:" << ftdc_struct.InstrumentID
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CFutureFtdcOrderActionField& ftdc_struct) {
  os << "ftdc_struct(CFutureFtdcOrderActionField) ---> BrokerID:" << ftdc_struct.BrokerID
    << " InvestorID:" << ftdc_struct.InvestorID
    << " OrderActionRef:" << ftdc_struct.OrderActionRef
    << " OrderRef:" << ftdc_struct.OrderRef
    << " RequestID:" << ftdc_struct.RequestID
    << " Direction:" << ftdc_struct.Direction
    << " FrontID:" << ftdc_struct.FrontID
    << " SessionID:" << ftdc_struct.SessionID
    << " ExchangeID:" << ftdc_struct.ExchangeID
    << " OrderSysID:" << ftdc_struct.OrderSysID
    << " ActionFlag:" << ftdc_struct.ActionFlag
    << " LimitPrice:" << ftdc_struct.LimitPrice
    << " VolumeChange:" << ftdc_struct.VolumeChange
    << " ActionDate:" << ftdc_struct.ActionDate
    << " ActionTime:" << ftdc_struct.ActionTime
    << " TraderID:" << ftdc_struct.TraderID
    << " InstallID:" << ftdc_struct.InstallID
    << " OrderLocalID:" << ftdc_struct.OrderLocalID
    << " ActionLocalID:" << ftdc_struct.ActionLocalID
    << " ParticipantID:" << ftdc_struct.ParticipantID
    << " ClientID:" << ftdc_struct.ClientID
    << " BusinessUnit:" << ftdc_struct.BusinessUnit
    << " OrderActionStatus:" << ftdc_struct.OrderActionStatus
    << " UserID:" << ftdc_struct.UserID
    << " StatusMsg:" << ftdc_struct.StatusMsg
    << " InstrumentID:" << ftdc_struct.InstrumentID
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CFutureFtdcExchangeOrderActionField& ftdc_struct) {
  os << "ftdc_struct(CFutureFtdcExchangeOrderActionField) ---> ExchangeID:" << ftdc_struct.ExchangeID
    << " OrderSysID:" << ftdc_struct.OrderSysID
    << " ActionFlag:" << ftdc_struct.ActionFlag
    << " LimitPrice:" << ftdc_struct.LimitPrice
    << " VolumeChange:" << ftdc_struct.VolumeChange
    << " ActionDate:" << ftdc_struct.ActionDate
    << " ActionTime:" << ftdc_struct.ActionTime
    << " TraderID:" << ftdc_struct.TraderID
    << " InstallID:" << ftdc_struct.InstallID
    << " OrderLocalID:" << ftdc_struct.OrderLocalID
    << " ActionLocalID:" << ftdc_struct.ActionLocalID
    << " ParticipantID:" << ftdc_struct.ParticipantID
    << " ClientID:" << ftdc_struct.ClientID
    << " BusinessUnit:" << ftdc_struct.BusinessUnit
    << " OrderActionStatus:" << ftdc_struct.OrderActionStatus
    << " UserID:" << ftdc_struct.UserID
    << " InvestorID:" << ftdc_struct.InvestorID
    << " BrokerID:" << ftdc_struct.BrokerID
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CFutureFtdcExchangeOrderActionErrorField& ftdc_struct) {
  os << "ftdc_struct(CFutureFtdcExchangeOrderActionErrorField) ---> ExchangeID:" << ftdc_struct.ExchangeID
    << " OrderSysID:" << ftdc_struct.OrderSysID
    << " TraderID:" << ftdc_struct.TraderID
    << " InstallID:" << ftdc_struct.InstallID
    << " OrderLocalID:" << ftdc_struct.OrderLocalID
    << " ActionLocalID:" << ftdc_struct.ActionLocalID
    << " ErrorID:" << ftdc_struct.ErrorID
    << " ErrorMsg:" << ftdc_struct.ErrorMsg
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CFutureFtdcExchangeTradeField& ftdc_struct) {
  os << "ftdc_struct(CFutureFtdcExchangeTradeField) ---> ExchangeID:" << ftdc_struct.ExchangeID
    << " TradeID:" << ftdc_struct.TradeID
    << " Direction:" << ftdc_struct.Direction
    << " OrderSysID:" << ftdc_struct.OrderSysID
    << " ParticipantID:" << ftdc_struct.ParticipantID
    << " ClientID:" << ftdc_struct.ClientID
    << " TradingRole:" << ftdc_struct.TradingRole
    << " ExchangeInstID:" << ftdc_struct.ExchangeInstID
    << " OffsetFlag:" << ftdc_struct.OffsetFlag
    << " HedgeFlag:" << ftdc_struct.HedgeFlag
    << " Price:" << ftdc_struct.Price
    << " Volume:" << ftdc_struct.Volume
    << " TradeDate:" << ftdc_struct.TradeDate
    << " TradeTime:" << ftdc_struct.TradeTime
    << " TradeType:" << ftdc_struct.TradeType
    << " PriceSource:" << ftdc_struct.PriceSource
    << " TraderID:" << ftdc_struct.TraderID
    << " OrderLocalID:" << ftdc_struct.OrderLocalID
    << " ClearingPartID:" << ftdc_struct.ClearingPartID
    << " BusinessUnit:" << ftdc_struct.BusinessUnit
    << " SequenceNo:" << ftdc_struct.SequenceNo
    << " TradeSource:" << ftdc_struct.TradeSource
    << " InvestorID:" << ftdc_struct.InvestorID
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CFutureFtdcTradeField& ftdc_struct) {
  os << "ftdc_struct(CFutureFtdcTradeField) ---> BrokerID:" << ftdc_struct.BrokerID
    << " InvestorID:" << ftdc_struct.InvestorID
    << " InstrumentID:" << ftdc_struct.InstrumentID
    << " OrderRef:" << ftdc_struct.OrderRef
    << " UserID:" << ftdc_struct.UserID
    << " ExchangeID:" << ftdc_struct.ExchangeID
    << " TradeID:" << ftdc_struct.TradeID
    << " Direction:" << ftdc_struct.Direction
    << " OrderSysID:" << ftdc_struct.OrderSysID
    << " ParticipantID:" << ftdc_struct.ParticipantID
    << " ClientID:" << ftdc_struct.ClientID
    << " TradingRole:" << ftdc_struct.TradingRole
    << " ExchangeInstID:" << ftdc_struct.ExchangeInstID
    << " OffsetFlag:" << ftdc_struct.OffsetFlag
    << " HedgeFlag:" << ftdc_struct.HedgeFlag
    << " Price:" << ftdc_struct.Price
    << " Volume:" << ftdc_struct.Volume
    << " TradeDate:" << ftdc_struct.TradeDate
    << " TradeTime:" << ftdc_struct.TradeTime
    << " TradeType:" << ftdc_struct.TradeType
    << " PriceSource:" << ftdc_struct.PriceSource
    << " TraderID:" << ftdc_struct.TraderID
    << " OrderLocalID:" << ftdc_struct.OrderLocalID
    << " ClearingPartID:" << ftdc_struct.ClearingPartID
    << " BusinessUnit:" << ftdc_struct.BusinessUnit
    << " SequenceNo:" << ftdc_struct.SequenceNo
    << " TradingDay:" << ftdc_struct.TradingDay
    << " SettlementID:" << ftdc_struct.SettlementID
    << " BrokerOrderSeq:" << ftdc_struct.BrokerOrderSeq
    << " TradeSource:" << ftdc_struct.TradeSource
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CFutureFtdcUserSessionField& ftdc_struct) {
  os << "ftdc_struct(CFutureFtdcUserSessionField) ---> FrontID:" << ftdc_struct.FrontID
    << " SessionID:" << ftdc_struct.SessionID
    << " BrokerID:" << ftdc_struct.BrokerID
    << " UserID:" << ftdc_struct.UserID
    << " LoginDate:" << ftdc_struct.LoginDate
    << " LoginTime:" << ftdc_struct.LoginTime
    << " IPAddress:" << ftdc_struct.IPAddress
    << " UserProductInfo:" << ftdc_struct.UserProductInfo
    << " InterfaceProductInfo:" << ftdc_struct.InterfaceProductInfo
    << " ProtocolInfo:" << ftdc_struct.ProtocolInfo
    << " MacAddress:" << ftdc_struct.MacAddress
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CFutureFtdcQueryMaxOrderVolumeField& ftdc_struct) {
  os << "ftdc_struct(CFutureFtdcQueryMaxOrderVolumeField) ---> BrokerID:" << ftdc_struct.BrokerID
    << " InvestorID:" << ftdc_struct.InvestorID
    << " ExchangeID:" << ftdc_struct.ExchangeID
    << " InstrumentID:" << ftdc_struct.InstrumentID
    << " Direction:" << ftdc_struct.Direction
    << " OffsetFlag:" << ftdc_struct.OffsetFlag
    << " HedgeFlag:" << ftdc_struct.HedgeFlag
    << " MaxVolume:" << ftdc_struct.MaxVolume
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CFutureFtdcSettlementInfoConfirmField& ftdc_struct) {
  os << "ftdc_struct(CFutureFtdcSettlementInfoConfirmField) ---> BrokerID:" << ftdc_struct.BrokerID
    << " InvestorID:" << ftdc_struct.InvestorID
    << " ConfirmDate:" << ftdc_struct.ConfirmDate
    << " ConfirmTime:" << ftdc_struct.ConfirmTime
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CFutureFtdcSyncDepositField& ftdc_struct) {
  os << "ftdc_struct(CFutureFtdcSyncDepositField) ---> DepositSeqNo:" << ftdc_struct.DepositSeqNo
    << " BrokerID:" << ftdc_struct.BrokerID
    << " InvestorID:" << ftdc_struct.InvestorID
    << " Deposit:" << ftdc_struct.Deposit
    << " IsForce:" << ftdc_struct.IsForce
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CFutureFtdcBrokerSyncField& ftdc_struct) {
  os << "ftdc_struct(CFutureFtdcBrokerSyncField) ---> BrokerID:" << ftdc_struct.BrokerID
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CFutureFtdcSyncingInvestorField& ftdc_struct) {
  os << "ftdc_struct(CFutureFtdcSyncingInvestorField) ---> InvestorID:" << ftdc_struct.InvestorID
    << " BrokerID:" << ftdc_struct.BrokerID
    << " InvestorGroupID:" << ftdc_struct.InvestorGroupID
    << " InvestorName:" << ftdc_struct.InvestorName
    << " IdentifiedCardType:" << ftdc_struct.IdentifiedCardType
    << " IdentifiedCardNo:" << ftdc_struct.IdentifiedCardNo
    << " IsActive:" << ftdc_struct.IsActive
    << " Telephone:" << ftdc_struct.Telephone
    << " Address:" << ftdc_struct.Address
    << " OpenDate:" << ftdc_struct.OpenDate
    << " Mobile:" << ftdc_struct.Mobile
    << " CommModelID:" << ftdc_struct.CommModelID
    << " PadField:" << ftdc_struct.PadField
    << " MarginModelID:" << ftdc_struct.MarginModelID
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CFutureFtdcSyncingTradingCodeField& ftdc_struct) {
  os << "ftdc_struct(CFutureFtdcSyncingTradingCodeField) ---> InvestorID:" << ftdc_struct.InvestorID
    << " BrokerID:" << ftdc_struct.BrokerID
    << " ExchangeID:" << ftdc_struct.ExchangeID
    << " ClientID:" << ftdc_struct.ClientID
    << " IsActive:" << ftdc_struct.IsActive
    << " ClientIDType:" << ftdc_struct.ClientIDType
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CFutureFtdcSyncingInvestorGroupField& ftdc_struct) {
  os << "ftdc_struct(CFutureFtdcSyncingInvestorGroupField) ---> BrokerID:" << ftdc_struct.BrokerID
    << " InvestorGroupID:" << ftdc_struct.InvestorGroupID
    << " InvestorGroupName:" << ftdc_struct.InvestorGroupName
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CFutureFtdcSyncingTradingAccountField& ftdc_struct) {
  os << "ftdc_struct(CFutureFtdcSyncingTradingAccountField) ---> BrokerID:" << ftdc_struct.BrokerID
    << " AccountID:" << ftdc_struct.AccountID
    << " PreMortgage:" << ftdc_struct.PreMortgage
    << " PreCredit:" << ftdc_struct.PreCredit
    << " PreDeposit:" << ftdc_struct.PreDeposit
    << " PreBalance:" << ftdc_struct.PreBalance
    << " PreMargin:" << ftdc_struct.PreMargin
    << " InterestBase:" << ftdc_struct.InterestBase
    << " Interest:" << ftdc_struct.Interest
    << " Deposit:" << ftdc_struct.Deposit
    << " Withdraw:" << ftdc_struct.Withdraw
    << " FrozenMargin:" << ftdc_struct.FrozenMargin
    << " FrozenCash:" << ftdc_struct.FrozenCash
    << " FrozenCommission:" << ftdc_struct.FrozenCommission
    << " CurrMargin:" << ftdc_struct.CurrMargin
    << " CashIn:" << ftdc_struct.CashIn
    << " Commission:" << ftdc_struct.Commission
    << " CloseProfit:" << ftdc_struct.CloseProfit
    << " PositionProfit:" << ftdc_struct.PositionProfit
    << " Balance:" << ftdc_struct.Balance
    << " Available:" << ftdc_struct.Available
    << " WithdrawQuota:" << ftdc_struct.WithdrawQuota
    << " Reserve:" << ftdc_struct.Reserve
    << " TradingDay:" << ftdc_struct.TradingDay
    << " SettlementID:" << ftdc_struct.SettlementID
    << " Credit:" << ftdc_struct.Credit
    << " Mortgage:" << ftdc_struct.Mortgage
    << " ExchangeMargin:" << ftdc_struct.ExchangeMargin
    << " DeliveryMargin:" << ftdc_struct.DeliveryMargin
    << " ExchangeDeliveryMargin:" << ftdc_struct.ExchangeDeliveryMargin
    << " ReserveBalance:" << ftdc_struct.ReserveBalance
    << " OptionCloseProfit:" << ftdc_struct.OptionCloseProfit
    << " AccountLevel:" << ftdc_struct.AccountLevel
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CFutureFtdcSyncingInvestorPositionField& ftdc_struct) {
  os << "ftdc_struct(CFutureFtdcSyncingInvestorPositionField) ---> ExchangeID:" << ftdc_struct.ExchangeID
    << " InstrumentID:" << ftdc_struct.InstrumentID
    << " BrokerID:" << ftdc_struct.BrokerID
    << " InvestorID:" << ftdc_struct.InvestorID
    << " PosiDirection:" << ftdc_struct.PosiDirection
    << " HedgeFlag:" << ftdc_struct.HedgeFlag
    << " PositionDate:" << ftdc_struct.PositionDate
    << " YdPosition:" << ftdc_struct.YdPosition
    << " Position:" << ftdc_struct.Position
    << " LongFrozen:" << ftdc_struct.LongFrozen
    << " ShortFrozen:" << ftdc_struct.ShortFrozen
    << " LongFrozenAmount:" << ftdc_struct.LongFrozenAmount
    << " ShortFrozenAmount:" << ftdc_struct.ShortFrozenAmount
    << " OpenVolume:" << ftdc_struct.OpenVolume
    << " CloseVolume:" << ftdc_struct.CloseVolume
    << " OpenAmount:" << ftdc_struct.OpenAmount
    << " CloseAmount:" << ftdc_struct.CloseAmount
    << " YdCloseAmount:" << ftdc_struct.YdCloseAmount
    << " YdCloseVolume:" << ftdc_struct.YdCloseVolume
    << " PositionCost:" << ftdc_struct.PositionCost
    << " PreMargin:" << ftdc_struct.PreMargin
    << " UseMargin:" << ftdc_struct.UseMargin
    << " FrozenMargin:" << ftdc_struct.FrozenMargin
    << " FrozenCash:" << ftdc_struct.FrozenCash
    << " FrozenCommission:" << ftdc_struct.FrozenCommission
    << " CashIn:" << ftdc_struct.CashIn
    << " Commission:" << ftdc_struct.Commission
    << " CloseProfit:" << ftdc_struct.CloseProfit
    << " PositionProfit:" << ftdc_struct.PositionProfit
    << " PreSettlementPrice:" << ftdc_struct.PreSettlementPrice
    << " SettlementPrice:" << ftdc_struct.SettlementPrice
    << " TradingDay:" << ftdc_struct.TradingDay
    << " SettlementID:" << ftdc_struct.SettlementID
    << " OpenCost:" << ftdc_struct.OpenCost
    << " ExchangeMargin:" << ftdc_struct.ExchangeMargin
    << " CombPosition:" << ftdc_struct.CombPosition
    << " CombLongFrozen:" << ftdc_struct.CombLongFrozen
    << " CombShortFrozen:" << ftdc_struct.CombShortFrozen
    << " CloseProfitByDate:" << ftdc_struct.CloseProfitByDate
    << " CloseProfitByTrade:" << ftdc_struct.CloseProfitByTrade
    << " TodayPosition:" << ftdc_struct.TodayPosition
    << " MarginRateByMoney:" << ftdc_struct.MarginRateByMoney
    << " MarginRateByVolume:" << ftdc_struct.MarginRateByVolume
    << " StrikeFrozen:" << ftdc_struct.StrikeFrozen
    << " StrikeFrozenAmount:" << ftdc_struct.StrikeFrozenAmount
    << " AbandonFrozen:" << ftdc_struct.AbandonFrozen
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CFutureFtdcSyncingInstrumentMarginRateField& ftdc_struct) {
  os << "ftdc_struct(CFutureFtdcSyncingInstrumentMarginRateField) ---> ExchangeID:" << ftdc_struct.ExchangeID
    << " InstrumentID:" << ftdc_struct.InstrumentID
    << " InvestorRange:" << ftdc_struct.InvestorRange
    << " BrokerID:" << ftdc_struct.BrokerID
    << " InvestorID:" << ftdc_struct.InvestorID
    << " HedgeFlag:" << ftdc_struct.HedgeFlag
    << " LongMarginRatioByMoney:" << ftdc_struct.LongMarginRatioByMoney
    << " LongMarginRatioByVolume:" << ftdc_struct.LongMarginRatioByVolume
    << " ShortMarginRatioByMoney:" << ftdc_struct.ShortMarginRatioByMoney
    << " ShortMarginRatioByVolume:" << ftdc_struct.ShortMarginRatioByVolume
    << " IsRelative:" << ftdc_struct.IsRelative
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CFutureFtdcSyncingInstrumentCommissionRateField& ftdc_struct) {
  os << "ftdc_struct(CFutureFtdcSyncingInstrumentCommissionRateField) ---> ExchangeID:" << ftdc_struct.ExchangeID
    << " InstrumentID:" << ftdc_struct.InstrumentID
    << " InvestorRange:" << ftdc_struct.InvestorRange
    << " BrokerID:" << ftdc_struct.BrokerID
    << " InvestorID:" << ftdc_struct.InvestorID
    << " HedgeFlag:" << ftdc_struct.HedgeFlag
    << " OpenRatioByMoney:" << ftdc_struct.OpenRatioByMoney
    << " OpenRatioByVolume:" << ftdc_struct.OpenRatioByVolume
    << " CloseRatioByMoney:" << ftdc_struct.CloseRatioByMoney
    << " CloseRatioByVolume:" << ftdc_struct.CloseRatioByVolume
    << " CloseTodayRatioByMoney:" << ftdc_struct.CloseTodayRatioByMoney
    << " CloseTodayRatioByVolume:" << ftdc_struct.CloseTodayRatioByVolume
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CFutureFtdcSyncingInstrumentTradingRightField& ftdc_struct) {
  os << "ftdc_struct(CFutureFtdcSyncingInstrumentTradingRightField) ---> ExchangeID:" << ftdc_struct.ExchangeID
    << " InstrumentID:" << ftdc_struct.InstrumentID
    << " InvestorRange:" << ftdc_struct.InvestorRange
    << " BrokerID:" << ftdc_struct.BrokerID
    << " InvestorID:" << ftdc_struct.InvestorID
    << " TradingRight:" << ftdc_struct.TradingRight
    << " QuoteTradingRight:" << ftdc_struct.QuoteTradingRight
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CFutureFtdcQryOrderField& ftdc_struct) {
  os << "ftdc_struct(CFutureFtdcQryOrderField) ---> BrokerID:" << ftdc_struct.BrokerID
    << " InvestorID:" << ftdc_struct.InvestorID
    << " InstrumentID:" << ftdc_struct.InstrumentID
    << " ExchangeID:" << ftdc_struct.ExchangeID
    << " OrderSysID:" << ftdc_struct.OrderSysID
    << " InsertTimeStart:" << ftdc_struct.InsertTimeStart
    << " InsertTimeEnd:" << ftdc_struct.InsertTimeEnd
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CFutureFtdcQryTradeField& ftdc_struct) {
  os << "ftdc_struct(CFutureFtdcQryTradeField) ---> BrokerID:" << ftdc_struct.BrokerID
    << " InvestorID:" << ftdc_struct.InvestorID
    << " InstrumentID:" << ftdc_struct.InstrumentID
    << " ExchangeID:" << ftdc_struct.ExchangeID
    << " TradeID:" << ftdc_struct.TradeID
    << " TradeTimeStart:" << ftdc_struct.TradeTimeStart
    << " TradeTimeEnd:" << ftdc_struct.TradeTimeEnd
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CFutureFtdcQryInvestorPositionField& ftdc_struct) {
  os << "ftdc_struct(CFutureFtdcQryInvestorPositionField) ---> BrokerID:" << ftdc_struct.BrokerID
    << " InvestorID:" << ftdc_struct.InvestorID
    << " ExchangeID:" << ftdc_struct.ExchangeID
    << " InstrumentID:" << ftdc_struct.InstrumentID
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CFutureFtdcQryTradingAccountField& ftdc_struct) {
  os << "ftdc_struct(CFutureFtdcQryTradingAccountField) ---> BrokerID:" << ftdc_struct.BrokerID
    << " InvestorID:" << ftdc_struct.InvestorID
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CFutureFtdcQryInvestorField& ftdc_struct) {
  os << "ftdc_struct(CFutureFtdcQryInvestorField) ---> BrokerID:" << ftdc_struct.BrokerID
    << " InvestorID:" << ftdc_struct.InvestorID
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CFutureFtdcQryTradingCodeField& ftdc_struct) {
  os << "ftdc_struct(CFutureFtdcQryTradingCodeField) ---> BrokerID:" << ftdc_struct.BrokerID
    << " InvestorID:" << ftdc_struct.InvestorID
    << " ExchangeID:" << ftdc_struct.ExchangeID
    << " ClientID:" << ftdc_struct.ClientID
    << " ClientIDType:" << ftdc_struct.ClientIDType
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CFutureFtdcQryInvestorGroupField& ftdc_struct) {
  os << "ftdc_struct(CFutureFtdcQryInvestorGroupField) ---> BrokerID:" << ftdc_struct.BrokerID
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CFutureFtdcQryInstrumentMarginRateField& ftdc_struct) {
  os << "ftdc_struct(CFutureFtdcQryInstrumentMarginRateField) ---> BrokerID:" << ftdc_struct.BrokerID
    << " InvestorID:" << ftdc_struct.InvestorID
    << " InstrumentID:" << ftdc_struct.InstrumentID
    << " ExchangeID:" << ftdc_struct.ExchangeID
    << " HedgeFlag:" << ftdc_struct.HedgeFlag
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CFutureFtdcQryInstrumentCommissionRateField& ftdc_struct) {
  os << "ftdc_struct(CFutureFtdcQryInstrumentCommissionRateField) ---> BrokerID:" << ftdc_struct.BrokerID
    << " InvestorID:" << ftdc_struct.InvestorID
    << " ExchangeID:" << ftdc_struct.ExchangeID
    << " InstrumentID:" << ftdc_struct.InstrumentID
    << " HedgeFlag:" << ftdc_struct.HedgeFlag
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CFutureFtdcQryInstrumentTradingRightField& ftdc_struct) {
  os << "ftdc_struct(CFutureFtdcQryInstrumentTradingRightField) ---> BrokerID:" << ftdc_struct.BrokerID
    << " InvestorID:" << ftdc_struct.InvestorID
    << " ExchangeID:" << ftdc_struct.ExchangeID
    << " InstrumentID:" << ftdc_struct.InstrumentID
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CFutureFtdcQryBrokerField& ftdc_struct) {
  os << "ftdc_struct(CFutureFtdcQryBrokerField) ---> BrokerID:" << ftdc_struct.BrokerID
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CFutureFtdcQryTraderField& ftdc_struct) {
  os << "ftdc_struct(CFutureFtdcQryTraderField) ---> ExchangeID:" << ftdc_struct.ExchangeID
    << " ParticipantID:" << ftdc_struct.ParticipantID
    << " TraderID:" << ftdc_struct.TraderID
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CFutureFtdcQryPartBrokerField& ftdc_struct) {
  os << "ftdc_struct(CFutureFtdcQryPartBrokerField) ---> ExchangeID:" << ftdc_struct.ExchangeID
    << " BrokerID:" << ftdc_struct.BrokerID
    << " ParticipantID:" << ftdc_struct.ParticipantID
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CFutureFtdcQrySuperUserFunctionField& ftdc_struct) {
  os << "ftdc_struct(CFutureFtdcQrySuperUserFunctionField) ---> UserID:" << ftdc_struct.UserID
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CFutureFtdcQryUserSessionField& ftdc_struct) {
  os << "ftdc_struct(CFutureFtdcQryUserSessionField) ---> FrontID:" << ftdc_struct.FrontID
    << " SessionID:" << ftdc_struct.SessionID
    << " BrokerID:" << ftdc_struct.BrokerID
    << " UserID:" << ftdc_struct.UserID
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CFutureFtdcQryFrontStatusField& ftdc_struct) {
  os << "ftdc_struct(CFutureFtdcQryFrontStatusField) ---> FrontID:" << ftdc_struct.FrontID
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CFutureFtdcQryExchangeOrderField& ftdc_struct) {
  os << "ftdc_struct(CFutureFtdcQryExchangeOrderField) ---> ParticipantID:" << ftdc_struct.ParticipantID
    << " ClientID:" << ftdc_struct.ClientID
    << " ExchangeInstID:" << ftdc_struct.ExchangeInstID
    << " ExchangeID:" << ftdc_struct.ExchangeID
    << " TraderID:" << ftdc_struct.TraderID
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CFutureFtdcQryOrderActionField& ftdc_struct) {
  os << "ftdc_struct(CFutureFtdcQryOrderActionField) ---> BrokerID:" << ftdc_struct.BrokerID
    << " InvestorID:" << ftdc_struct.InvestorID
    << " ExchangeID:" << ftdc_struct.ExchangeID
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CFutureFtdcQryExchangeOrderActionField& ftdc_struct) {
  os << "ftdc_struct(CFutureFtdcQryExchangeOrderActionField) ---> ParticipantID:" << ftdc_struct.ParticipantID
    << " ClientID:" << ftdc_struct.ClientID
    << " ExchangeID:" << ftdc_struct.ExchangeID
    << " TraderID:" << ftdc_struct.TraderID
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CFutureFtdcQrySuperUserField& ftdc_struct) {
  os << "ftdc_struct(CFutureFtdcQrySuperUserField) ---> UserID:" << ftdc_struct.UserID
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CFutureFtdcQryExchangeField& ftdc_struct) {
  os << "ftdc_struct(CFutureFtdcQryExchangeField) ---> ExchangeID:" << ftdc_struct.ExchangeID
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CFutureFtdcQryProductField& ftdc_struct) {
  os << "ftdc_struct(CFutureFtdcQryProductField) ---> ProductID:" << ftdc_struct.ProductID
    << " ProductClass:" << ftdc_struct.ProductClass
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CFutureFtdcQryInstrumentField& ftdc_struct) {
  os << "ftdc_struct(CFutureFtdcQryInstrumentField) ---> InstrumentID:" << ftdc_struct.InstrumentID
    << " ExchangeID:" << ftdc_struct.ExchangeID
    << " ExchangeInstID:" << ftdc_struct.ExchangeInstID
    << " ProductID:" << ftdc_struct.ProductID
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CFutureFtdcQryDepthMarketDataField& ftdc_struct) {
  os << "ftdc_struct(CFutureFtdcQryDepthMarketDataField) ---> ExchangeID:" << ftdc_struct.ExchangeID
    << " InstrumentID:" << ftdc_struct.InstrumentID
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CFutureFtdcQryBrokerUserField& ftdc_struct) {
  os << "ftdc_struct(CFutureFtdcQryBrokerUserField) ---> BrokerID:" << ftdc_struct.BrokerID
    << " UserID:" << ftdc_struct.UserID
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CFutureFtdcQryBrokerUserFunctionField& ftdc_struct) {
  os << "ftdc_struct(CFutureFtdcQryBrokerUserFunctionField) ---> BrokerID:" << ftdc_struct.BrokerID
    << " UserID:" << ftdc_struct.UserID
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CFutureFtdcQryTraderOfferField& ftdc_struct) {
  os << "ftdc_struct(CFutureFtdcQryTraderOfferField) ---> ExchangeID:" << ftdc_struct.ExchangeID
    << " ParticipantID:" << ftdc_struct.ParticipantID
    << " TraderID:" << ftdc_struct.TraderID
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CFutureFtdcQrySyncDepositField& ftdc_struct) {
  os << "ftdc_struct(CFutureFtdcQrySyncDepositField) ---> BrokerID:" << ftdc_struct.BrokerID
    << " DepositSeqNo:" << ftdc_struct.DepositSeqNo
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CFutureFtdcQrySettlementInfoField& ftdc_struct) {
  os << "ftdc_struct(CFutureFtdcQrySettlementInfoField) ---> BrokerID:" << ftdc_struct.BrokerID
    << " InvestorID:" << ftdc_struct.InvestorID
    << " TradingDay:" << ftdc_struct.TradingDay
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CFutureFtdcQryHisOrderField& ftdc_struct) {
  os << "ftdc_struct(CFutureFtdcQryHisOrderField) ---> BrokerID:" << ftdc_struct.BrokerID
    << " InvestorID:" << ftdc_struct.InvestorID
    << " InstrumentID:" << ftdc_struct.InstrumentID
    << " ExchangeID:" << ftdc_struct.ExchangeID
    << " OrderSysID:" << ftdc_struct.OrderSysID
    << " InsertTimeStart:" << ftdc_struct.InsertTimeStart
    << " InsertTimeEnd:" << ftdc_struct.InsertTimeEnd
    << " TradingDay:" << ftdc_struct.TradingDay
    << " SettlementID:" << ftdc_struct.SettlementID
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CFutureFtdcOptionInstrMiniMarginField& ftdc_struct) {
  os << "ftdc_struct(CFutureFtdcOptionInstrMiniMarginField) ---> ExchangeID:" << ftdc_struct.ExchangeID
    << " InstrumentID:" << ftdc_struct.InstrumentID
    << " InvestorRange:" << ftdc_struct.InvestorRange
    << " BrokerID:" << ftdc_struct.BrokerID
    << " InvestorID:" << ftdc_struct.InvestorID
    << " MinMargin:" << ftdc_struct.MinMargin
    << " ValueMethod:" << ftdc_struct.ValueMethod
    << " IsRelative:" << ftdc_struct.IsRelative
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CFutureFtdcBrokerExchOptMarginAlgoField& ftdc_struct) {
  os << "ftdc_struct(CFutureFtdcBrokerExchOptMarginAlgoField) ---> BrokerID:" << ftdc_struct.BrokerID
    << " ExchangeID:" << ftdc_struct.ExchangeID
    << " GuaranteeRatio:" << ftdc_struct.GuaranteeRatio
    << " OutRatio:" << ftdc_struct.OutRatio
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CFutureFtdcOptionInstrMarginAdjustField& ftdc_struct) {
  os << "ftdc_struct(CFutureFtdcOptionInstrMarginAdjustField) ---> ExchangeID:" << ftdc_struct.ExchangeID
    << " InstrumentID:" << ftdc_struct.InstrumentID
    << " InvestorRange:" << ftdc_struct.InvestorRange
    << " BrokerID:" << ftdc_struct.BrokerID
    << " InvestorID:" << ftdc_struct.InvestorID
    << " HedgeFlag:" << ftdc_struct.HedgeFlag
    << " ShortMarginRatioByMoney:" << ftdc_struct.ShortMarginRatioByMoney
    << " ShortMarginRatioByVolume:" << ftdc_struct.ShortMarginRatioByVolume
    << " IsRelative:" << ftdc_struct.IsRelative
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CFutureFtdcOptionInstrCommRateField& ftdc_struct) {
  os << "ftdc_struct(CFutureFtdcOptionInstrCommRateField) ---> ExchangeID:" << ftdc_struct.ExchangeID
    << " InstrumentID:" << ftdc_struct.InstrumentID
    << " InvestorRange:" << ftdc_struct.InvestorRange
    << " BrokerID:" << ftdc_struct.BrokerID
    << " InvestorID:" << ftdc_struct.InvestorID
    << " HedgeFlag:" << ftdc_struct.HedgeFlag
    << " OpenRatioByMoney:" << ftdc_struct.OpenRatioByMoney
    << " OpenRatioByVolume:" << ftdc_struct.OpenRatioByVolume
    << " CloseRatioByMoney:" << ftdc_struct.CloseRatioByMoney
    << " CloseRatioByVolume:" << ftdc_struct.CloseRatioByVolume
    << " CloseTodayRatioByMoney:" << ftdc_struct.CloseTodayRatioByMoney
    << " CloseTodayRatioByVolume:" << ftdc_struct.CloseTodayRatioByVolume
    << " StrikeRatioByMoney:" << ftdc_struct.StrikeRatioByMoney
    << " StrikeRatioByVolume:" << ftdc_struct.StrikeRatioByVolume
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CFutureFtdcOptionInstrTradeCostField& ftdc_struct) {
  os << "ftdc_struct(CFutureFtdcOptionInstrTradeCostField) ---> BrokerID:" << ftdc_struct.BrokerID
    << " InvestorID:" << ftdc_struct.InvestorID
    << " ExchangeID:" << ftdc_struct.ExchangeID
    << " InstrumentID:" << ftdc_struct.InstrumentID
    << " HedgeFlag:" << ftdc_struct.HedgeFlag
    << " Margin:" << ftdc_struct.Margin
    << " Royalty:" << ftdc_struct.Royalty
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CFutureFtdcQryOptionInstrTradeCostField& ftdc_struct) {
  os << "ftdc_struct(CFutureFtdcQryOptionInstrTradeCostField) ---> BrokerID:" << ftdc_struct.BrokerID
    << " InvestorID:" << ftdc_struct.InvestorID
    << " ExchangeID:" << ftdc_struct.ExchangeID
    << " InstrumentID:" << ftdc_struct.InstrumentID
    << " HedgeFlag:" << ftdc_struct.HedgeFlag
    << " InputPrice:" << ftdc_struct.InputPrice
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CFutureFtdcQryOptionInstrCommRateField& ftdc_struct) {
  os << "ftdc_struct(CFutureFtdcQryOptionInstrCommRateField) ---> BrokerID:" << ftdc_struct.BrokerID
    << " InvestorID:" << ftdc_struct.InvestorID
    << " ExchangeID:" << ftdc_struct.ExchangeID
    << " InstrumentID:" << ftdc_struct.InstrumentID
    << " HedgeFlag:" << ftdc_struct.HedgeFlag
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CFutureFtdcIndexPriceField& ftdc_struct) {
  os << "ftdc_struct(CFutureFtdcIndexPriceField) ---> BrokerID:" << ftdc_struct.BrokerID
    << " ExchangeID:" << ftdc_struct.ExchangeID
    << " InstrumentID:" << ftdc_struct.InstrumentID
    << " ClosePrice:" << ftdc_struct.ClosePrice
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CFutureFtdcInputExecOrderField& ftdc_struct) {
  os << "ftdc_struct(CFutureFtdcInputExecOrderField) ---> BrokerID:" << ftdc_struct.BrokerID
    << " InvestorID:" << ftdc_struct.InvestorID
    << " InstrumentID:" << ftdc_struct.InstrumentID
    << " ExecOrderRef:" << ftdc_struct.ExecOrderRef
    << " UserID:" << ftdc_struct.UserID
    << " OrderRef:" << ftdc_struct.OrderRef
    << " Volume:" << ftdc_struct.Volume
    << " RequestID:" << ftdc_struct.RequestID
    << " BusinessUnit:" << ftdc_struct.BusinessUnit
    << " OffsetFlag:" << ftdc_struct.OffsetFlag
    << " HedgeFlag:" << ftdc_struct.HedgeFlag
    << " ActionType:" << ftdc_struct.ActionType
    << " PosiDirection:" << ftdc_struct.PosiDirection
    << " ReservePositionFlag:" << ftdc_struct.ReservePositionFlag
    << " CloseFlag:" << ftdc_struct.CloseFlag
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CFutureFtdcInputExecOrderActionField& ftdc_struct) {
  os << "ftdc_struct(CFutureFtdcInputExecOrderActionField) ---> BrokerID:" << ftdc_struct.BrokerID
    << " InvestorID:" << ftdc_struct.InvestorID
    << " ExecOrderActionRef:" << ftdc_struct.ExecOrderActionRef
    << " ExecOrderRef:" << ftdc_struct.ExecOrderRef
    << " RequestID:" << ftdc_struct.RequestID
    << " FrontID:" << ftdc_struct.FrontID
    << " SessionID:" << ftdc_struct.SessionID
    << " ExchangeID:" << ftdc_struct.ExchangeID
    << " ExecOrderSysID:" << ftdc_struct.ExecOrderSysID
    << " ActionFlag:" << ftdc_struct.ActionFlag
    << " UserID:" << ftdc_struct.UserID
    << " InstrumentID:" << ftdc_struct.InstrumentID
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CFutureFtdcExecOrderField& ftdc_struct) {
  os << "ftdc_struct(CFutureFtdcExecOrderField) ---> BrokerID:" << ftdc_struct.BrokerID
    << " InvestorID:" << ftdc_struct.InvestorID
    << " InstrumentID:" << ftdc_struct.InstrumentID
    << " ExecOrderRef:" << ftdc_struct.ExecOrderRef
    << " UserID:" << ftdc_struct.UserID
    << " OrderRef:" << ftdc_struct.OrderRef
    << " Volume:" << ftdc_struct.Volume
    << " RequestID:" << ftdc_struct.RequestID
    << " BusinessUnit:" << ftdc_struct.BusinessUnit
    << " OffsetFlag:" << ftdc_struct.OffsetFlag
    << " HedgeFlag:" << ftdc_struct.HedgeFlag
    << " ActionType:" << ftdc_struct.ActionType
    << " PosiDirection:" << ftdc_struct.PosiDirection
    << " ReservePositionFlag:" << ftdc_struct.ReservePositionFlag
    << " CloseFlag:" << ftdc_struct.CloseFlag
    << " ExecOrderLocalID:" << ftdc_struct.ExecOrderLocalID
    << " ExchangeID:" << ftdc_struct.ExchangeID
    << " ParticipantID:" << ftdc_struct.ParticipantID
    << " ClientID:" << ftdc_struct.ClientID
    << " ExchangeInstID:" << ftdc_struct.ExchangeInstID
    << " TraderID:" << ftdc_struct.TraderID
    << " InstallID:" << ftdc_struct.InstallID
    << " OrderSubmitStatus:" << ftdc_struct.OrderSubmitStatus
    << " NotifySequence:" << ftdc_struct.NotifySequence
    << " TradingDay:" << ftdc_struct.TradingDay
    << " SettlementID:" << ftdc_struct.SettlementID
    << " ExecOrderSysID:" << ftdc_struct.ExecOrderSysID
    << " InsertDate:" << ftdc_struct.InsertDate
    << " InsertTime:" << ftdc_struct.InsertTime
    << " CancelTime:" << ftdc_struct.CancelTime
    << " ExecResult:" << ftdc_struct.ExecResult
    << " ClearingPartID:" << ftdc_struct.ClearingPartID
    << " SequenceNo:" << ftdc_struct.SequenceNo
    << " FrontID:" << ftdc_struct.FrontID
    << " SessionID:" << ftdc_struct.SessionID
    << " UserProductInfo:" << ftdc_struct.UserProductInfo
    << " StatusMsg:" << ftdc_struct.StatusMsg
    << " ActiveUserID:" << ftdc_struct.ActiveUserID
    << " BrokerExecOrderSeq:" << ftdc_struct.BrokerExecOrderSeq
    << " ClientIDType:" << ftdc_struct.ClientIDType
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CFutureFtdcExecOrderActionField& ftdc_struct) {
  os << "ftdc_struct(CFutureFtdcExecOrderActionField) ---> BrokerID:" << ftdc_struct.BrokerID
    << " InvestorID:" << ftdc_struct.InvestorID
    << " ExecOrderActionRef:" << ftdc_struct.ExecOrderActionRef
    << " ExecOrderRef:" << ftdc_struct.ExecOrderRef
    << " RequestID:" << ftdc_struct.RequestID
    << " FrontID:" << ftdc_struct.FrontID
    << " SessionID:" << ftdc_struct.SessionID
    << " ExchangeID:" << ftdc_struct.ExchangeID
    << " ExecOrderSysID:" << ftdc_struct.ExecOrderSysID
    << " ActionFlag:" << ftdc_struct.ActionFlag
    << " ActionDate:" << ftdc_struct.ActionDate
    << " ActionTime:" << ftdc_struct.ActionTime
    << " TraderID:" << ftdc_struct.TraderID
    << " InstallID:" << ftdc_struct.InstallID
    << " ExecOrderLocalID:" << ftdc_struct.ExecOrderLocalID
    << " ActionLocalID:" << ftdc_struct.ActionLocalID
    << " ParticipantID:" << ftdc_struct.ParticipantID
    << " ClientID:" << ftdc_struct.ClientID
    << " BusinessUnit:" << ftdc_struct.BusinessUnit
    << " OrderActionStatus:" << ftdc_struct.OrderActionStatus
    << " UserID:" << ftdc_struct.UserID
    << " StatusMsg:" << ftdc_struct.StatusMsg
    << " InstrumentID:" << ftdc_struct.InstrumentID
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CFutureFtdcQryExecOrderField& ftdc_struct) {
  os << "ftdc_struct(CFutureFtdcQryExecOrderField) ---> BrokerID:" << ftdc_struct.BrokerID
    << " InvestorID:" << ftdc_struct.InvestorID
    << " InstrumentID:" << ftdc_struct.InstrumentID
    << " ExchangeID:" << ftdc_struct.ExchangeID
    << " ExecOrderSysID:" << ftdc_struct.ExecOrderSysID
    << " InsertTimeStart:" << ftdc_struct.InsertTimeStart
    << " InsertTimeEnd:" << ftdc_struct.InsertTimeEnd
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CFutureFtdcExchangeExecOrderField& ftdc_struct) {
  os << "ftdc_struct(CFutureFtdcExchangeExecOrderField) ---> Volume:" << ftdc_struct.Volume
    << " RequestID:" << ftdc_struct.RequestID
    << " BusinessUnit:" << ftdc_struct.BusinessUnit
    << " OffsetFlag:" << ftdc_struct.OffsetFlag
    << " HedgeFlag:" << ftdc_struct.HedgeFlag
    << " ActionType:" << ftdc_struct.ActionType
    << " PosiDirection:" << ftdc_struct.PosiDirection
    << " ReservePositionFlag:" << ftdc_struct.ReservePositionFlag
    << " CloseFlag:" << ftdc_struct.CloseFlag
    << " ExecOrderLocalID:" << ftdc_struct.ExecOrderLocalID
    << " ExchangeID:" << ftdc_struct.ExchangeID
    << " ParticipantID:" << ftdc_struct.ParticipantID
    << " ClientID:" << ftdc_struct.ClientID
    << " ExchangeInstID:" << ftdc_struct.ExchangeInstID
    << " TraderID:" << ftdc_struct.TraderID
    << " InstallID:" << ftdc_struct.InstallID
    << " OrderSubmitStatus:" << ftdc_struct.OrderSubmitStatus
    << " NotifySequence:" << ftdc_struct.NotifySequence
    << " TradingDay:" << ftdc_struct.TradingDay
    << " SettlementID:" << ftdc_struct.SettlementID
    << " ExecOrderSysID:" << ftdc_struct.ExecOrderSysID
    << " InsertDate:" << ftdc_struct.InsertDate
    << " InsertTime:" << ftdc_struct.InsertTime
    << " CancelTime:" << ftdc_struct.CancelTime
    << " ExecResult:" << ftdc_struct.ExecResult
    << " ClearingPartID:" << ftdc_struct.ClearingPartID
    << " SequenceNo:" << ftdc_struct.SequenceNo
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CFutureFtdcQryExchangeExecOrderField& ftdc_struct) {
  os << "ftdc_struct(CFutureFtdcQryExchangeExecOrderField) ---> ParticipantID:" << ftdc_struct.ParticipantID
    << " ClientID:" << ftdc_struct.ClientID
    << " ExchangeInstID:" << ftdc_struct.ExchangeInstID
    << " ExchangeID:" << ftdc_struct.ExchangeID
    << " TraderID:" << ftdc_struct.TraderID
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CFutureFtdcQryExecOrderActionField& ftdc_struct) {
  os << "ftdc_struct(CFutureFtdcQryExecOrderActionField) ---> BrokerID:" << ftdc_struct.BrokerID
    << " InvestorID:" << ftdc_struct.InvestorID
    << " ExchangeID:" << ftdc_struct.ExchangeID
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CFutureFtdcExchangeExecOrderActionField& ftdc_struct) {
  os << "ftdc_struct(CFutureFtdcExchangeExecOrderActionField) ---> BrokerID:" << ftdc_struct.BrokerID
    << " InvestorID:" << ftdc_struct.InvestorID
    << " ExchangeID:" << ftdc_struct.ExchangeID
    << " ExecOrderSysID:" << ftdc_struct.ExecOrderSysID
    << " ActionFlag:" << ftdc_struct.ActionFlag
    << " ActionDate:" << ftdc_struct.ActionDate
    << " ActionTime:" << ftdc_struct.ActionTime
    << " TraderID:" << ftdc_struct.TraderID
    << " InstallID:" << ftdc_struct.InstallID
    << " ExecOrderLocalID:" << ftdc_struct.ExecOrderLocalID
    << " ActionLocalID:" << ftdc_struct.ActionLocalID
    << " ParticipantID:" << ftdc_struct.ParticipantID
    << " ClientID:" << ftdc_struct.ClientID
    << " BusinessUnit:" << ftdc_struct.BusinessUnit
    << " OrderActionStatus:" << ftdc_struct.OrderActionStatus
    << " UserID:" << ftdc_struct.UserID
    << " InstrumentID:" << ftdc_struct.InstrumentID
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CFutureFtdcQryExchangeExecOrderActionField& ftdc_struct) {
  os << "ftdc_struct(CFutureFtdcQryExchangeExecOrderActionField) ---> ParticipantID:" << ftdc_struct.ParticipantID
    << " ClientID:" << ftdc_struct.ClientID
    << " ExchangeID:" << ftdc_struct.ExchangeID
    << " TraderID:" << ftdc_struct.TraderID
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CFutureFtdcErrExecOrderField& ftdc_struct) {
  os << "ftdc_struct(CFutureFtdcErrExecOrderField) ---> BrokerID:" << ftdc_struct.BrokerID
    << " InvestorID:" << ftdc_struct.InvestorID
    << " InstrumentID:" << ftdc_struct.InstrumentID
    << " ExecOrderRef:" << ftdc_struct.ExecOrderRef
    << " UserID:" << ftdc_struct.UserID
    << " OrderRef:" << ftdc_struct.OrderRef
    << " Volume:" << ftdc_struct.Volume
    << " RequestID:" << ftdc_struct.RequestID
    << " BusinessUnit:" << ftdc_struct.BusinessUnit
    << " OffsetFlag:" << ftdc_struct.OffsetFlag
    << " HedgeFlag:" << ftdc_struct.HedgeFlag
    << " ActionType:" << ftdc_struct.ActionType
    << " PosiDirection:" << ftdc_struct.PosiDirection
    << " ReservePositionFlag:" << ftdc_struct.ReservePositionFlag
    << " CloseFlag:" << ftdc_struct.CloseFlag
    << " ErrorID:" << ftdc_struct.ErrorID
    << " ErrorMsg:" << ftdc_struct.ErrorMsg
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CFutureFtdcQryErrExecOrderField& ftdc_struct) {
  os << "ftdc_struct(CFutureFtdcQryErrExecOrderField) ---> BrokerID:" << ftdc_struct.BrokerID
    << " InvestorID:" << ftdc_struct.InvestorID
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CFutureFtdcErrExecOrderActionField& ftdc_struct) {
  os << "ftdc_struct(CFutureFtdcErrExecOrderActionField) ---> BrokerID:" << ftdc_struct.BrokerID
    << " InvestorID:" << ftdc_struct.InvestorID
    << " ExecOrderActionRef:" << ftdc_struct.ExecOrderActionRef
    << " ExecOrderRef:" << ftdc_struct.ExecOrderRef
    << " RequestID:" << ftdc_struct.RequestID
    << " FrontID:" << ftdc_struct.FrontID
    << " SessionID:" << ftdc_struct.SessionID
    << " ExchangeID:" << ftdc_struct.ExchangeID
    << " ExecOrderSysID:" << ftdc_struct.ExecOrderSysID
    << " ActionFlag:" << ftdc_struct.ActionFlag
    << " UserID:" << ftdc_struct.UserID
    << " InstrumentID:" << ftdc_struct.InstrumentID
    << " ErrorID:" << ftdc_struct.ErrorID
    << " ErrorMsg:" << ftdc_struct.ErrorMsg
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CFutureFtdcQryErrExecOrderActionField& ftdc_struct) {
  os << "ftdc_struct(CFutureFtdcQryErrExecOrderActionField) ---> BrokerID:" << ftdc_struct.BrokerID
    << " InvestorID:" << ftdc_struct.InvestorID
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CFutureFtdcInputQuoteField& ftdc_struct) {
  os << "ftdc_struct(CFutureFtdcInputQuoteField) ---> BrokerID:" << ftdc_struct.BrokerID
    << " InvestorID:" << ftdc_struct.InvestorID
    << " InstrumentID:" << ftdc_struct.InstrumentID
    << " OrderRef:" << ftdc_struct.OrderRef
    << " UserID:" << ftdc_struct.UserID
    << " BidVolumeTotalOriginal:" << ftdc_struct.BidVolumeTotalOriginal
    << " BidPrice:" << ftdc_struct.BidPrice
    << " BidCombOffsetFlag:" << ftdc_struct.BidCombOffsetFlag
    << " BidCombHedgeFlag:" << ftdc_struct.BidCombHedgeFlag
    << " AskVolumeTotalOriginal:" << ftdc_struct.AskVolumeTotalOriginal
    << " AskPrice:" << ftdc_struct.AskPrice
    << " AskCombOffsetFlag:" << ftdc_struct.AskCombOffsetFlag
    << " AskCombHedgeFlag:" << ftdc_struct.AskCombHedgeFlag
    << " BusinessUnit:" << ftdc_struct.BusinessUnit
    << " ExchangeID:" << ftdc_struct.ExchangeID
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CFutureFtdcInputQuoteActionField& ftdc_struct) {
  os << "ftdc_struct(CFutureFtdcInputQuoteActionField) ---> BrokerID:" << ftdc_struct.BrokerID
    << " InvestorID:" << ftdc_struct.InvestorID
    << " QuoteActionRef:" << ftdc_struct.QuoteActionRef
    << " QuoteRef:" << ftdc_struct.QuoteRef
    << " RequestID:" << ftdc_struct.RequestID
    << " FrontID:" << ftdc_struct.FrontID
    << " SessionID:" << ftdc_struct.SessionID
    << " ExchangeID:" << ftdc_struct.ExchangeID
    << " QuoteSysID:" << ftdc_struct.QuoteSysID
    << " ActionFlag:" << ftdc_struct.ActionFlag
    << " UserID:" << ftdc_struct.UserID
    << " InstrumentID:" << ftdc_struct.InstrumentID
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CFutureFtdcQryQuoteField& ftdc_struct) {
  os << "ftdc_struct(CFutureFtdcQryQuoteField) ---> BrokerID:" << ftdc_struct.BrokerID
    << " InvestorID:" << ftdc_struct.InvestorID
    << " InstrumentID:" << ftdc_struct.InstrumentID
    << " ExchangeID:" << ftdc_struct.ExchangeID
    << " QuoteSysID:" << ftdc_struct.QuoteSysID
    << " InsertTimeStart:" << ftdc_struct.InsertTimeStart
    << " InsertTimeEnd:" << ftdc_struct.InsertTimeEnd
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CFutureFtdcQuoteField& ftdc_struct) {
  os << "ftdc_struct(CFutureFtdcQuoteField) ---> BrokerID:" << ftdc_struct.BrokerID
    << " InvestorID:" << ftdc_struct.InvestorID
    << " InstrumentID:" << ftdc_struct.InstrumentID
    << " OrderRef:" << ftdc_struct.OrderRef
    << " UserID:" << ftdc_struct.UserID
    << " BidVolumeTotalOriginal:" << ftdc_struct.BidVolumeTotalOriginal
    << " BidPrice:" << ftdc_struct.BidPrice
    << " BidCombOffsetFlag:" << ftdc_struct.BidCombOffsetFlag
    << " BidCombHedgeFlag:" << ftdc_struct.BidCombHedgeFlag
    << " AskVolumeTotalOriginal:" << ftdc_struct.AskVolumeTotalOriginal
    << " AskPrice:" << ftdc_struct.AskPrice
    << " AskCombOffsetFlag:" << ftdc_struct.AskCombOffsetFlag
    << " AskCombHedgeFlag:" << ftdc_struct.AskCombHedgeFlag
    << " BusinessUnit:" << ftdc_struct.BusinessUnit
    << " OrderLocalID:" << ftdc_struct.OrderLocalID
    << " ExchangeID:" << ftdc_struct.ExchangeID
    << " ParticipantID:" << ftdc_struct.ParticipantID
    << " ClientID:" << ftdc_struct.ClientID
    << " ExchangeInstID:" << ftdc_struct.ExchangeInstID
    << " TraderID:" << ftdc_struct.TraderID
    << " InstallID:" << ftdc_struct.InstallID
    << " OrderSubmitStatus:" << ftdc_struct.OrderSubmitStatus
    << " NotifySequence:" << ftdc_struct.NotifySequence
    << " TradingDay:" << ftdc_struct.TradingDay
    << " SettlementID:" << ftdc_struct.SettlementID
    << " QuoteSysID:" << ftdc_struct.QuoteSysID
    << " BidOrderSysID:" << ftdc_struct.BidOrderSysID
    << " AskOrderSysID:" << ftdc_struct.AskOrderSysID
    << " QuoteStatus:" << ftdc_struct.QuoteStatus
    << " BidVolumeTotal:" << ftdc_struct.BidVolumeTotal
    << " AskVolumeTotal:" << ftdc_struct.AskVolumeTotal
    << " BidVolumeTraded:" << ftdc_struct.BidVolumeTraded
    << " AskVolumeTraded:" << ftdc_struct.AskVolumeTraded
    << " InsertDate:" << ftdc_struct.InsertDate
    << " InsertTime:" << ftdc_struct.InsertTime
    << " ActiveTime:" << ftdc_struct.ActiveTime
    << " SuspendTime:" << ftdc_struct.SuspendTime
    << " UpdateTime:" << ftdc_struct.UpdateTime
    << " CancelTime:" << ftdc_struct.CancelTime
    << " ActiveTraderID:" << ftdc_struct.ActiveTraderID
    << " ClearingPartID:" << ftdc_struct.ClearingPartID
    << " SequenceNo:" << ftdc_struct.SequenceNo
    << " FrontID:" << ftdc_struct.FrontID
    << " SessionID:" << ftdc_struct.SessionID
    << " UserProductInfo:" << ftdc_struct.UserProductInfo
    << " StatusMsg:" << ftdc_struct.StatusMsg
    << " ActiveUserID:" << ftdc_struct.ActiveUserID
    << " BrokerOrderSeq:" << ftdc_struct.BrokerOrderSeq
    << " ClientIDType:" << ftdc_struct.ClientIDType
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CFutureFtdcInternalTransferField& ftdc_struct) {
  os << "ftdc_struct(CFutureFtdcInternalTransferField) ---> DepositSeqNo:" << ftdc_struct.DepositSeqNo
    << " BrokerID:" << ftdc_struct.BrokerID
    << " InvestorID:" << ftdc_struct.InvestorID
    << " InInvestorID:" << ftdc_struct.InInvestorID
    << " Deposit:" << ftdc_struct.Deposit
    << " IsForce:" << ftdc_struct.IsForce
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CFutureFtdcQuoteActionField& ftdc_struct) {
  os << "ftdc_struct(CFutureFtdcQuoteActionField) ---> BrokerID:" << ftdc_struct.BrokerID
    << " InvestorID:" << ftdc_struct.InvestorID
    << " QuoteActionRef:" << ftdc_struct.QuoteActionRef
    << " QuoteRef:" << ftdc_struct.QuoteRef
    << " RequestID:" << ftdc_struct.RequestID
    << " FrontID:" << ftdc_struct.FrontID
    << " SessionID:" << ftdc_struct.SessionID
    << " ExchangeID:" << ftdc_struct.ExchangeID
    << " QuoteSysID:" << ftdc_struct.QuoteSysID
    << " ActionFlag:" << ftdc_struct.ActionFlag
    << " ActionDate:" << ftdc_struct.ActionDate
    << " ActionTime:" << ftdc_struct.ActionTime
    << " TraderID:" << ftdc_struct.TraderID
    << " InstallID:" << ftdc_struct.InstallID
    << " QuoteLocalID:" << ftdc_struct.QuoteLocalID
    << " ActionLocalID:" << ftdc_struct.ActionLocalID
    << " ParticipantID:" << ftdc_struct.ParticipantID
    << " ClientID:" << ftdc_struct.ClientID
    << " BusinessUnit:" << ftdc_struct.BusinessUnit
    << " OrderActionStatus:" << ftdc_struct.OrderActionStatus
    << " UserID:" << ftdc_struct.UserID
    << " StatusMsg:" << ftdc_struct.StatusMsg
    << " InstrumentID:" << ftdc_struct.InstrumentID
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CFutureFtdcQryQuoteActionField& ftdc_struct) {
  os << "ftdc_struct(CFutureFtdcQryQuoteActionField) ---> BrokerID:" << ftdc_struct.BrokerID
    << " InvestorID:" << ftdc_struct.InvestorID
    << " ExchangeID:" << ftdc_struct.ExchangeID
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CFutureFtdcInvestorProductGroupMarginField& ftdc_struct) {
  os << "ftdc_struct(CFutureFtdcInvestorProductGroupMarginField) ---> BrokerID:" << ftdc_struct.BrokerID
    << " InvestorID:" << ftdc_struct.InvestorID
    << " ExchangeID:" << ftdc_struct.ExchangeID
    << " ProductGroupID:" << ftdc_struct.ProductGroupID
    << " TradingDay:" << ftdc_struct.TradingDay
    << " SettlementID:" << ftdc_struct.SettlementID
    << " FrozenMargin:" << ftdc_struct.FrozenMargin
    << " LongFrozenMargin:" << ftdc_struct.LongFrozenMargin
    << " ShortFrozenMargin:" << ftdc_struct.ShortFrozenMargin
    << " UseMargin:" << ftdc_struct.UseMargin
    << " LongUseMargin:" << ftdc_struct.LongUseMargin
    << " ShortUseMargin:" << ftdc_struct.ShortUseMargin
    << " ExchMargin:" << ftdc_struct.ExchMargin
    << " LongExchMargin:" << ftdc_struct.LongExchMargin
    << " ShortExchMargin:" << ftdc_struct.ShortExchMargin
    << " CloseProfit:" << ftdc_struct.CloseProfit
    << " FrozenCommission:" << ftdc_struct.FrozenCommission
    << " Commission:" << ftdc_struct.Commission
    << " FrozenCash:" << ftdc_struct.FrozenCash
    << " CashIn:" << ftdc_struct.CashIn
    << " PositionProfit:" << ftdc_struct.PositionProfit
    << " OffsetAmount:" << ftdc_struct.OffsetAmount
    << " LongOffsetAmount:" << ftdc_struct.LongOffsetAmount
    << " ShortOffsetAmount:" << ftdc_struct.ShortOffsetAmount
    << " ExchOffsetAmount:" << ftdc_struct.ExchOffsetAmount
    << " LongExchOffsetAmount:" << ftdc_struct.LongExchOffsetAmount
    << " ShortExchOffsetAmount:" << ftdc_struct.ShortExchOffsetAmount
    << " HedgeFlag:" << ftdc_struct.HedgeFlag
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CFutureFtdcQryInvestorProductGroupMarginField& ftdc_struct) {
  os << "ftdc_struct(CFutureFtdcQryInvestorProductGroupMarginField) ---> BrokerID:" << ftdc_struct.BrokerID
    << " InvestorID:" << ftdc_struct.InvestorID
    << " ProductGroupID:" << ftdc_struct.ProductGroupID
    << " HedgeFlag:" << ftdc_struct.HedgeFlag
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CFutureFtdcMarketDataField& ftdc_struct) {
  os << "ftdc_struct(CFutureFtdcMarketDataField) ---> TradingDay:" << ftdc_struct.TradingDay
    << " InstrumentID:" << ftdc_struct.InstrumentID
    << " ExchangeID:" << ftdc_struct.ExchangeID
    << " ExchangeInstID:" << ftdc_struct.ExchangeInstID
    << " LastPrice:" << ftdc_struct.LastPrice
    << " PreSettlementPrice:" << ftdc_struct.PreSettlementPrice
    << " PreClosePrice:" << ftdc_struct.PreClosePrice
    << " PreOpenInterest:" << ftdc_struct.PreOpenInterest
    << " OpenPrice:" << ftdc_struct.OpenPrice
    << " HighestPrice:" << ftdc_struct.HighestPrice
    << " LowestPrice:" << ftdc_struct.LowestPrice
    << " Volume:" << ftdc_struct.Volume
    << " Turnover:" << ftdc_struct.Turnover
    << " OpenInterest:" << ftdc_struct.OpenInterest
    << " ClosePrice:" << ftdc_struct.ClosePrice
    << " SettlementPrice:" << ftdc_struct.SettlementPrice
    << " UpperLimitPrice:" << ftdc_struct.UpperLimitPrice
    << " LowerLimitPrice:" << ftdc_struct.LowerLimitPrice
    << " PreDelta:" << ftdc_struct.PreDelta
    << " CurrDelta:" << ftdc_struct.CurrDelta
    << " UpdateTime:" << ftdc_struct.UpdateTime
    << " UpdateMillisec:" << ftdc_struct.UpdateMillisec
    << " ActionDay:" << ftdc_struct.ActionDay
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CFutureFtdcMarketDataBaseField& ftdc_struct) {
  os << "ftdc_struct(CFutureFtdcMarketDataBaseField) ---> TradingDay:" << ftdc_struct.TradingDay
    << " PreSettlementPrice:" << ftdc_struct.PreSettlementPrice
    << " PreClosePrice:" << ftdc_struct.PreClosePrice
    << " PreOpenInterest:" << ftdc_struct.PreOpenInterest
    << " PreDelta:" << ftdc_struct.PreDelta
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CFutureFtdcMarketDataStaticField& ftdc_struct) {
  os << "ftdc_struct(CFutureFtdcMarketDataStaticField) ---> OpenPrice:" << ftdc_struct.OpenPrice
    << " HighestPrice:" << ftdc_struct.HighestPrice
    << " LowestPrice:" << ftdc_struct.LowestPrice
    << " ClosePrice:" << ftdc_struct.ClosePrice
    << " UpperLimitPrice:" << ftdc_struct.UpperLimitPrice
    << " LowerLimitPrice:" << ftdc_struct.LowerLimitPrice
    << " SettlementPrice:" << ftdc_struct.SettlementPrice
    << " CurrDelta:" << ftdc_struct.CurrDelta
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CFutureFtdcMarketDataLastMatchField& ftdc_struct) {
  os << "ftdc_struct(CFutureFtdcMarketDataLastMatchField) ---> LastPrice:" << ftdc_struct.LastPrice
    << " Volume:" << ftdc_struct.Volume
    << " Turnover:" << ftdc_struct.Turnover
    << " OpenInterest:" << ftdc_struct.OpenInterest
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CFutureFtdcMarketDataBestPriceField& ftdc_struct) {
  os << "ftdc_struct(CFutureFtdcMarketDataBestPriceField) ---> BidPrice1:" << ftdc_struct.BidPrice1
    << " BidVolume1:" << ftdc_struct.BidVolume1
    << " AskPrice1:" << ftdc_struct.AskPrice1
    << " AskVolume1:" << ftdc_struct.AskVolume1
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CFutureFtdcMarketDataBid23Field& ftdc_struct) {
  os << "ftdc_struct(CFutureFtdcMarketDataBid23Field) ---> BidPrice2:" << ftdc_struct.BidPrice2
    << " BidVolume2:" << ftdc_struct.BidVolume2
    << " BidPrice3:" << ftdc_struct.BidPrice3
    << " BidVolume3:" << ftdc_struct.BidVolume3
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CFutureFtdcMarketDataAsk23Field& ftdc_struct) {
  os << "ftdc_struct(CFutureFtdcMarketDataAsk23Field) ---> AskPrice2:" << ftdc_struct.AskPrice2
    << " AskVolume2:" << ftdc_struct.AskVolume2
    << " AskPrice3:" << ftdc_struct.AskPrice3
    << " AskVolume3:" << ftdc_struct.AskVolume3
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CFutureFtdcMarketDataBid45Field& ftdc_struct) {
  os << "ftdc_struct(CFutureFtdcMarketDataBid45Field) ---> BidPrice4:" << ftdc_struct.BidPrice4
    << " BidVolume4:" << ftdc_struct.BidVolume4
    << " BidPrice5:" << ftdc_struct.BidPrice5
    << " BidVolume5:" << ftdc_struct.BidVolume5
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CFutureFtdcMarketDataAsk45Field& ftdc_struct) {
  os << "ftdc_struct(CFutureFtdcMarketDataAsk45Field) ---> AskPrice4:" << ftdc_struct.AskPrice4
    << " AskVolume4:" << ftdc_struct.AskVolume4
    << " AskPrice5:" << ftdc_struct.AskPrice5
    << " AskVolume5:" << ftdc_struct.AskVolume5
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CFutureFtdcMarketDataUpdateTimeField& ftdc_struct) {
  os << "ftdc_struct(CFutureFtdcMarketDataUpdateTimeField) ---> InstrumentID:" << ftdc_struct.InstrumentID
    << " UpdateTime:" << ftdc_struct.UpdateTime
    << " UpdateMillisec:" << ftdc_struct.UpdateMillisec
    << " ActionDay:" << ftdc_struct.ActionDay
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CFutureFtdcMarketDataExchangeField& ftdc_struct) {
  os << "ftdc_struct(CFutureFtdcMarketDataExchangeField) ---> ExchangeID:" << ftdc_struct.ExchangeID
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CFutureFtdcSpecificInstrumentField& ftdc_struct) {
  os << "ftdc_struct(CFutureFtdcSpecificInstrumentField) ---> InstrumentID:" << ftdc_struct.InstrumentID
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CFutureFtdcInstrumentStatusField& ftdc_struct) {
  os << "ftdc_struct(CFutureFtdcInstrumentStatusField) ---> ExchangeID:" << ftdc_struct.ExchangeID
    << " ExchangeInstID:" << ftdc_struct.ExchangeInstID
    << " SettlementGroupID:" << ftdc_struct.SettlementGroupID
    << " InstrumentID:" << ftdc_struct.InstrumentID
    << " InstrumentStatus:" << ftdc_struct.InstrumentStatus
    << " TradingSegmentSN:" << ftdc_struct.TradingSegmentSN
    << " EnterTime:" << ftdc_struct.EnterTime
    << " EnterReason:" << ftdc_struct.EnterReason
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CFutureFtdcQryInstrumentStatusField& ftdc_struct) {
  os << "ftdc_struct(CFutureFtdcQryInstrumentStatusField) ---> ExchangeID:" << ftdc_struct.ExchangeID
    << " ExchangeInstID:" << ftdc_struct.ExchangeInstID
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CFutureFtdcInvestorAccountField& ftdc_struct) {
  os << "ftdc_struct(CFutureFtdcInvestorAccountField) ---> BrokerID:" << ftdc_struct.BrokerID
    << " InvestorID:" << ftdc_struct.InvestorID
    << " AccountID:" << ftdc_struct.AccountID
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CFutureFtdcPositionProfitAlgorithmField& ftdc_struct) {
  os << "ftdc_struct(CFutureFtdcPositionProfitAlgorithmField) ---> BrokerID:" << ftdc_struct.BrokerID
    << " AccountID:" << ftdc_struct.AccountID
    << " Algorithm:" << ftdc_struct.Algorithm
    << " Memo:" << ftdc_struct.Memo
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CFutureFtdcDiscountField& ftdc_struct) {
  os << "ftdc_struct(CFutureFtdcDiscountField) ---> BrokerID:" << ftdc_struct.BrokerID
    << " InvestorRange:" << ftdc_struct.InvestorRange
    << " InvestorID:" << ftdc_struct.InvestorID
    << " Discount:" << ftdc_struct.Discount
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CFutureFtdcQryTransferBankField& ftdc_struct) {
  os << "ftdc_struct(CFutureFtdcQryTransferBankField) ---> BankID:" << ftdc_struct.BankID
    << " BankBrchID:" << ftdc_struct.BankBrchID
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CFutureFtdcTransferBankField& ftdc_struct) {
  os << "ftdc_struct(CFutureFtdcTransferBankField) ---> BankID:" << ftdc_struct.BankID
    << " BankBrchID:" << ftdc_struct.BankBrchID
    << " BankName:" << ftdc_struct.BankName
    << " IsActive:" << ftdc_struct.IsActive
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CFutureFtdcQryInvestorPositionDetailField& ftdc_struct) {
  os << "ftdc_struct(CFutureFtdcQryInvestorPositionDetailField) ---> BrokerID:" << ftdc_struct.BrokerID
    << " InvestorID:" << ftdc_struct.InvestorID
    << " ExchangeID:" << ftdc_struct.ExchangeID
    << " InstrumentID:" << ftdc_struct.InstrumentID
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CFutureFtdcInvestorPositionDetailField& ftdc_struct) {
  os << "ftdc_struct(CFutureFtdcInvestorPositionDetailField) ---> InstrumentID:" << ftdc_struct.InstrumentID
    << " BrokerID:" << ftdc_struct.BrokerID
    << " InvestorID:" << ftdc_struct.InvestorID
    << " HedgeFlag:" << ftdc_struct.HedgeFlag
    << " Direction:" << ftdc_struct.Direction
    << " OpenDate:" << ftdc_struct.OpenDate
    << " TradeID:" << ftdc_struct.TradeID
    << " Volume:" << ftdc_struct.Volume
    << " OpenPrice:" << ftdc_struct.OpenPrice
    << " TradingDay:" << ftdc_struct.TradingDay
    << " SettlementID:" << ftdc_struct.SettlementID
    << " TradeType:" << ftdc_struct.TradeType
    << " CombInstrumentID:" << ftdc_struct.CombInstrumentID
    << " ExchangeID:" << ftdc_struct.ExchangeID
    << " CloseProfitByDate:" << ftdc_struct.CloseProfitByDate
    << " CloseProfitByTrade:" << ftdc_struct.CloseProfitByTrade
    << " PositionProfitByDate:" << ftdc_struct.PositionProfitByDate
    << " PositionProfitByTrade:" << ftdc_struct.PositionProfitByTrade
    << " Margin:" << ftdc_struct.Margin
    << " ExchMargin:" << ftdc_struct.ExchMargin
    << " MarginRateByMoney:" << ftdc_struct.MarginRateByMoney
    << " MarginRateByVolume:" << ftdc_struct.MarginRateByVolume
    << " LastSettlementPrice:" << ftdc_struct.LastSettlementPrice
    << " SettlementPrice:" << ftdc_struct.SettlementPrice
    << " CloseVolume:" << ftdc_struct.CloseVolume
    << " CloseAmount:" << ftdc_struct.CloseAmount
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CFutureFtdcTradingAccountPasswordField& ftdc_struct) {
  os << "ftdc_struct(CFutureFtdcTradingAccountPasswordField) ---> BrokerID:" << ftdc_struct.BrokerID
    << " AccountID:" << ftdc_struct.AccountID
    << " Password:" << "it is a secret" // ftdc_struct.Password
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CFutureFtdcMDTraderOfferField& ftdc_struct) {
  os << "ftdc_struct(CFutureFtdcMDTraderOfferField) ---> ExchangeID:" << ftdc_struct.ExchangeID
    << " TraderID:" << ftdc_struct.TraderID
    << " ParticipantID:" << ftdc_struct.ParticipantID
    << " Password:" << "it is a secret" // ftdc_struct.Password
    << " InstallID:" << ftdc_struct.InstallID
    << " OrderLocalID:" << ftdc_struct.OrderLocalID
    << " TraderConnectStatus:" << ftdc_struct.TraderConnectStatus
    << " ConnectRequestDate:" << ftdc_struct.ConnectRequestDate
    << " ConnectRequestTime:" << ftdc_struct.ConnectRequestTime
    << " LastReportDate:" << ftdc_struct.LastReportDate
    << " LastReportTime:" << ftdc_struct.LastReportTime
    << " ConnectDate:" << ftdc_struct.ConnectDate
    << " ConnectTime:" << ftdc_struct.ConnectTime
    << " StartDate:" << ftdc_struct.StartDate
    << " StartTime:" << ftdc_struct.StartTime
    << " TradingDay:" << ftdc_struct.TradingDay
    << " BrokerID:" << ftdc_struct.BrokerID
    << " MaxTradeID:" << ftdc_struct.MaxTradeID
    << " MaxOrderMessageReference:" << ftdc_struct.MaxOrderMessageReference
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CFutureFtdcQryMDTraderOfferField& ftdc_struct) {
  os << "ftdc_struct(CFutureFtdcQryMDTraderOfferField) ---> ExchangeID:" << ftdc_struct.ExchangeID
    << " ParticipantID:" << ftdc_struct.ParticipantID
    << " TraderID:" << ftdc_struct.TraderID
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CFutureFtdcQryNoticeField& ftdc_struct) {
  os << "ftdc_struct(CFutureFtdcQryNoticeField) ---> BrokerID:" << ftdc_struct.BrokerID
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CFutureFtdcNoticeField& ftdc_struct) {
  os << "ftdc_struct(CFutureFtdcNoticeField) ---> BrokerID:" << ftdc_struct.BrokerID
    << " Content:" << ftdc_struct.Content
    << " SequenceLabel:" << ftdc_struct.SequenceLabel
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CFutureFtdcUserRightField& ftdc_struct) {
  os << "ftdc_struct(CFutureFtdcUserRightField) ---> BrokerID:" << ftdc_struct.BrokerID
    << " UserID:" << ftdc_struct.UserID
    << " UserRightType:" << ftdc_struct.UserRightType
    << " IsForbidden:" << ftdc_struct.IsForbidden
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CFutureFtdcQrySettlementInfoConfirmField& ftdc_struct) {
  os << "ftdc_struct(CFutureFtdcQrySettlementInfoConfirmField) ---> BrokerID:" << ftdc_struct.BrokerID
    << " InvestorID:" << ftdc_struct.InvestorID
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CFutureFtdcLoadSettlementInfoField& ftdc_struct) {
  os << "ftdc_struct(CFutureFtdcLoadSettlementInfoField) ---> BrokerID:" << ftdc_struct.BrokerID
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CFutureFtdcBrokerWithdrawAlgorithmField& ftdc_struct) {
  os << "ftdc_struct(CFutureFtdcBrokerWithdrawAlgorithmField) ---> BrokerID:" << ftdc_struct.BrokerID
    << " WithdrawAlgorithm:" << ftdc_struct.WithdrawAlgorithm
    << " UsingRatio:" << ftdc_struct.UsingRatio
    << " IncludeCloseProfit:" << ftdc_struct.IncludeCloseProfit
    << " AllWithoutTrade:" << ftdc_struct.AllWithoutTrade
    << " AvailIncludeCloseProfit:" << ftdc_struct.AvailIncludeCloseProfit
    << " IsBrokerUserEvent:" << ftdc_struct.IsBrokerUserEvent
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CFutureFtdcTradingAccountPasswordUpdateV1Field& ftdc_struct) {
  os << "ftdc_struct(CFutureFtdcTradingAccountPasswordUpdateV1Field) ---> BrokerID:" << ftdc_struct.BrokerID
    << " InvestorID:" << ftdc_struct.InvestorID
    << " OldPassword:" << "it is a secret" // ftdc_struct.OldPassword
    << " NewPassword:" << "it is a secret" // ftdc_struct.NewPassword
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CFutureFtdcTradingAccountPasswordUpdateField& ftdc_struct) {
  os << "ftdc_struct(CFutureFtdcTradingAccountPasswordUpdateField) ---> BrokerID:" << ftdc_struct.BrokerID
    << " AccountID:" << ftdc_struct.AccountID
    << " OldPassword:" << "it is a secret" // ftdc_struct.OldPassword
    << " NewPassword:" << "it is a secret" // ftdc_struct.NewPassword
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CFutureFtdcQryCombinationLegField& ftdc_struct) {
  os << "ftdc_struct(CFutureFtdcQryCombinationLegField) ---> ExchangeID:" << ftdc_struct.ExchangeID
    << " CombInstrumentID:" << ftdc_struct.CombInstrumentID
    << " LegID:" << ftdc_struct.LegID
    << " LegInstrumentID:" << ftdc_struct.LegInstrumentID
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CFutureFtdcQrySyncStatusField& ftdc_struct) {
  os << "ftdc_struct(CFutureFtdcQrySyncStatusField) ---> TradingDay:" << ftdc_struct.TradingDay
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CFutureFtdcCombinationLegField& ftdc_struct) {
  os << "ftdc_struct(CFutureFtdcCombinationLegField) ---> ExchangeID:" << ftdc_struct.ExchangeID
    << " CombInstrumentID:" << ftdc_struct.CombInstrumentID
    << " LegID:" << ftdc_struct.LegID
    << " LegInstrumentID:" << ftdc_struct.LegInstrumentID
    << " Direction:" << ftdc_struct.Direction
    << " LegMultiple:" << ftdc_struct.LegMultiple
    << " ImplyLevel:" << ftdc_struct.ImplyLevel
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CFutureFtdcSyncStatusField& ftdc_struct) {
  os << "ftdc_struct(CFutureFtdcSyncStatusField) ---> TradingDay:" << ftdc_struct.TradingDay
    << " DataSyncStatus:" << ftdc_struct.DataSyncStatus
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CFutureFtdcQryLinkManField& ftdc_struct) {
  os << "ftdc_struct(CFutureFtdcQryLinkManField) ---> BrokerID:" << ftdc_struct.BrokerID
    << " InvestorID:" << ftdc_struct.InvestorID
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CFutureFtdcLinkManField& ftdc_struct) {
  os << "ftdc_struct(CFutureFtdcLinkManField) ---> BrokerID:" << ftdc_struct.BrokerID
    << " InvestorID:" << ftdc_struct.InvestorID
    << " PersonType:" << ftdc_struct.PersonType
    << " IdentifiedCardType:" << ftdc_struct.IdentifiedCardType
    << " IdentifiedCardNo:" << ftdc_struct.IdentifiedCardNo
    << " PersonName:" << ftdc_struct.PersonName
    << " Telephone:" << ftdc_struct.Telephone
    << " Address:" << ftdc_struct.Address
    << " ZipCode:" << ftdc_struct.ZipCode
    << " Priority:" << ftdc_struct.Priority
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CFutureFtdcQryBrokerUserEventField& ftdc_struct) {
  os << "ftdc_struct(CFutureFtdcQryBrokerUserEventField) ---> BrokerID:" << ftdc_struct.BrokerID
    << " UserID:" << ftdc_struct.UserID
    << " UserEventType:" << ftdc_struct.UserEventType
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CFutureFtdcBrokerUserEventField& ftdc_struct) {
  os << "ftdc_struct(CFutureFtdcBrokerUserEventField) ---> BrokerID:" << ftdc_struct.BrokerID
    << " UserID:" << ftdc_struct.UserID
    << " UserEventType:" << ftdc_struct.UserEventType
    << " EventSequenceNo:" << ftdc_struct.EventSequenceNo
    << " EventDate:" << ftdc_struct.EventDate
    << " EventTime:" << ftdc_struct.EventTime
    << " UserEventInfo:" << ftdc_struct.UserEventInfo
    << " InvestorID:" << ftdc_struct.InvestorID
    << " InstrumentID:" << ftdc_struct.InstrumentID
    << " ExchangeID:" << ftdc_struct.ExchangeID
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CFutureFtdcQryContractBankField& ftdc_struct) {
  os << "ftdc_struct(CFutureFtdcQryContractBankField) ---> BrokerID:" << ftdc_struct.BrokerID
    << " BankID:" << ftdc_struct.BankID
    << " BankBrchID:" << ftdc_struct.BankBrchID
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CFutureFtdcContractBankField& ftdc_struct) {
  os << "ftdc_struct(CFutureFtdcContractBankField) ---> BrokerID:" << ftdc_struct.BrokerID
    << " BankID:" << ftdc_struct.BankID
    << " BankBrchID:" << ftdc_struct.BankBrchID
    << " BankName:" << ftdc_struct.BankName
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CFutureFtdcInvestorPositionCombineDetailField& ftdc_struct) {
  os << "ftdc_struct(CFutureFtdcInvestorPositionCombineDetailField) ---> TradingDay:" << ftdc_struct.TradingDay
    << " OpenDate:" << ftdc_struct.OpenDate
    << " ExchangeID:" << ftdc_struct.ExchangeID
    << " SettlementID:" << ftdc_struct.SettlementID
    << " BrokerID:" << ftdc_struct.BrokerID
    << " InvestorID:" << ftdc_struct.InvestorID
    << " ComTradeID:" << ftdc_struct.ComTradeID
    << " TradeID:" << ftdc_struct.TradeID
    << " InstrumentID:" << ftdc_struct.InstrumentID
    << " HedgeFlag:" << ftdc_struct.HedgeFlag
    << " Direction:" << ftdc_struct.Direction
    << " TotalAmt:" << ftdc_struct.TotalAmt
    << " Margin:" << ftdc_struct.Margin
    << " ExchMargin:" << ftdc_struct.ExchMargin
    << " MarginRateByMoney:" << ftdc_struct.MarginRateByMoney
    << " MarginRateByVolume:" << ftdc_struct.MarginRateByVolume
    << " LegID:" << ftdc_struct.LegID
    << " LegMultiple:" << ftdc_struct.LegMultiple
    << " CombInstrumentID:" << ftdc_struct.CombInstrumentID
    << " TradeGroupID:" << ftdc_struct.TradeGroupID
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CFutureFtdcParkedOrderField& ftdc_struct) {
  os << "ftdc_struct(CFutureFtdcParkedOrderField) ---> BrokerID:" << ftdc_struct.BrokerID
    << " InvestorID:" << ftdc_struct.InvestorID
    << " InstrumentID:" << ftdc_struct.InstrumentID
    << " OrderRef:" << ftdc_struct.OrderRef
    << " UserID:" << ftdc_struct.UserID
    << " OrderPriceType:" << ftdc_struct.OrderPriceType
    << " Direction:" << ftdc_struct.Direction
    << " CombOffsetFlag:" << ftdc_struct.CombOffsetFlag
    << " CombHedgeFlag:" << ftdc_struct.CombHedgeFlag
    << " LimitPrice:" << ftdc_struct.LimitPrice
    << " VolumeTotalOriginal:" << ftdc_struct.VolumeTotalOriginal
    << " TimeCondition:" << ftdc_struct.TimeCondition
    << " GTDDate:" << ftdc_struct.GTDDate
    << " VolumeCondition:" << ftdc_struct.VolumeCondition
    << " MinVolume:" << ftdc_struct.MinVolume
    << " ContingentCondition:" << ftdc_struct.ContingentCondition
    << " StopPrice:" << ftdc_struct.StopPrice
    << " ForceCloseReason:" << ftdc_struct.ForceCloseReason
    << " IsAutoSuspend:" << ftdc_struct.IsAutoSuspend
    << " BusinessUnit:" << ftdc_struct.BusinessUnit
    << " RequestID:" << ftdc_struct.RequestID
    << " UserForceClose:" << ftdc_struct.UserForceClose
    << " IsSwapOrder:" << ftdc_struct.IsSwapOrder
    << " ExchangeID:" << ftdc_struct.ExchangeID
    << " ParkedOrderID:" << ftdc_struct.ParkedOrderID
    << " UserType:" << ftdc_struct.UserType
    << " Status:" << ftdc_struct.Status
    << " ErrorID:" << ftdc_struct.ErrorID
    << " ErrorMsg:" << ftdc_struct.ErrorMsg
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CFutureFtdcParkedOrderActionField& ftdc_struct) {
  os << "ftdc_struct(CFutureFtdcParkedOrderActionField) ---> BrokerID:" << ftdc_struct.BrokerID
    << " InvestorID:" << ftdc_struct.InvestorID
    << " OrderActionRef:" << ftdc_struct.OrderActionRef
    << " OrderRef:" << ftdc_struct.OrderRef
    << " RequestID:" << ftdc_struct.RequestID
    << " Direction:" << ftdc_struct.Direction
    << " FrontID:" << ftdc_struct.FrontID
    << " SessionID:" << ftdc_struct.SessionID
    << " ExchangeID:" << ftdc_struct.ExchangeID
    << " OrderSysID:" << ftdc_struct.OrderSysID
    << " ActionFlag:" << ftdc_struct.ActionFlag
    << " LimitPrice:" << ftdc_struct.LimitPrice
    << " VolumeChange:" << ftdc_struct.VolumeChange
    << " UserID:" << ftdc_struct.UserID
    << " InstrumentID:" << ftdc_struct.InstrumentID
    << " ParkedOrderActionID:" << ftdc_struct.ParkedOrderActionID
    << " UserType:" << ftdc_struct.UserType
    << " Status:" << ftdc_struct.Status
    << " ErrorID:" << ftdc_struct.ErrorID
    << " ErrorMsg:" << ftdc_struct.ErrorMsg
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CFutureFtdcQryParkedOrderField& ftdc_struct) {
  os << "ftdc_struct(CFutureFtdcQryParkedOrderField) ---> BrokerID:" << ftdc_struct.BrokerID
    << " InvestorID:" << ftdc_struct.InvestorID
    << " InstrumentID:" << ftdc_struct.InstrumentID
    << " ExchangeID:" << ftdc_struct.ExchangeID
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CFutureFtdcQryParkedOrderActionField& ftdc_struct) {
  os << "ftdc_struct(CFutureFtdcQryParkedOrderActionField) ---> BrokerID:" << ftdc_struct.BrokerID
    << " InvestorID:" << ftdc_struct.InvestorID
    << " InstrumentID:" << ftdc_struct.InstrumentID
    << " ExchangeID:" << ftdc_struct.ExchangeID
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CFutureFtdcRemoveParkedOrderField& ftdc_struct) {
  os << "ftdc_struct(CFutureFtdcRemoveParkedOrderField) ---> BrokerID:" << ftdc_struct.BrokerID
    << " InvestorID:" << ftdc_struct.InvestorID
    << " ParkedOrderID:" << ftdc_struct.ParkedOrderID
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CFutureFtdcRemoveParkedOrderActionField& ftdc_struct) {
  os << "ftdc_struct(CFutureFtdcRemoveParkedOrderActionField) ---> BrokerID:" << ftdc_struct.BrokerID
    << " InvestorID:" << ftdc_struct.InvestorID
    << " ParkedOrderActionID:" << ftdc_struct.ParkedOrderActionID
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CFutureFtdcInvestorWithdrawAlgorithmField& ftdc_struct) {
  os << "ftdc_struct(CFutureFtdcInvestorWithdrawAlgorithmField) ---> BrokerID:" << ftdc_struct.BrokerID
    << " InvestorRange:" << ftdc_struct.InvestorRange
    << " InvestorID:" << ftdc_struct.InvestorID
    << " UsingRatio:" << ftdc_struct.UsingRatio
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CFutureFtdcQryInvestorPositionCombineDetailField& ftdc_struct) {
  os << "ftdc_struct(CFutureFtdcQryInvestorPositionCombineDetailField) ---> BrokerID:" << ftdc_struct.BrokerID
    << " InvestorID:" << ftdc_struct.InvestorID
    << " ExchangeID:" << ftdc_struct.ExchangeID
    << " CombInstrumentID:" << ftdc_struct.CombInstrumentID
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CFutureFtdcMarketDataAveragePriceField& ftdc_struct) {
  os << "ftdc_struct(CFutureFtdcMarketDataAveragePriceField) ---> AveragePrice:" << ftdc_struct.AveragePrice
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CFutureFtdcVerifyInvestorPasswordField& ftdc_struct) {
  os << "ftdc_struct(CFutureFtdcVerifyInvestorPasswordField) ---> BrokerID:" << ftdc_struct.BrokerID
    << " InvestorID:" << ftdc_struct.InvestorID
    << " Password:" << "it is a secret" // ftdc_struct.Password
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CFutureFtdcUserIPField& ftdc_struct) {
  os << "ftdc_struct(CFutureFtdcUserIPField) ---> BrokerID:" << ftdc_struct.BrokerID
    << " UserID:" << ftdc_struct.UserID
    << " IPAddress:" << ftdc_struct.IPAddress
    << " IPMask:" << ftdc_struct.IPMask
    << " MacAddress:" << ftdc_struct.MacAddress
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CFutureFtdcTradingNoticeInfoField& ftdc_struct) {
  os << "ftdc_struct(CFutureFtdcTradingNoticeInfoField) ---> BrokerID:" << ftdc_struct.BrokerID
    << " InvestorID:" << ftdc_struct.InvestorID
    << " SendTime:" << ftdc_struct.SendTime
    << " FieldContent:" << ftdc_struct.FieldContent
    << " SequenceSeries:" << ftdc_struct.SequenceSeries
    << " SequenceNo:" << ftdc_struct.SequenceNo
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CFutureFtdcTradingNoticeField& ftdc_struct) {
  os << "ftdc_struct(CFutureFtdcTradingNoticeField) ---> BrokerID:" << ftdc_struct.BrokerID
    << " InvestorRange:" << ftdc_struct.InvestorRange
    << " InvestorID:" << ftdc_struct.InvestorID
    << " SequenceSeries:" << ftdc_struct.SequenceSeries
    << " UserID:" << ftdc_struct.UserID
    << " SendTime:" << ftdc_struct.SendTime
    << " SequenceNo:" << ftdc_struct.SequenceNo
    << " FieldContent:" << ftdc_struct.FieldContent
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CFutureFtdcQryTradingNoticeField& ftdc_struct) {
  os << "ftdc_struct(CFutureFtdcQryTradingNoticeField) ---> BrokerID:" << ftdc_struct.BrokerID
    << " InvestorID:" << ftdc_struct.InvestorID
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CFutureFtdcQryErrOrderField& ftdc_struct) {
  os << "ftdc_struct(CFutureFtdcQryErrOrderField) ---> BrokerID:" << ftdc_struct.BrokerID
    << " InvestorID:" << ftdc_struct.InvestorID
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CFutureFtdcErrOrderField& ftdc_struct) {
  os << "ftdc_struct(CFutureFtdcErrOrderField) ---> BrokerID:" << ftdc_struct.BrokerID
    << " InvestorID:" << ftdc_struct.InvestorID
    << " InstrumentID:" << ftdc_struct.InstrumentID
    << " OrderRef:" << ftdc_struct.OrderRef
    << " UserID:" << ftdc_struct.UserID
    << " OrderPriceType:" << ftdc_struct.OrderPriceType
    << " Direction:" << ftdc_struct.Direction
    << " CombOffsetFlag:" << ftdc_struct.CombOffsetFlag
    << " CombHedgeFlag:" << ftdc_struct.CombHedgeFlag
    << " LimitPrice:" << ftdc_struct.LimitPrice
    << " VolumeTotalOriginal:" << ftdc_struct.VolumeTotalOriginal
    << " TimeCondition:" << ftdc_struct.TimeCondition
    << " GTDDate:" << ftdc_struct.GTDDate
    << " VolumeCondition:" << ftdc_struct.VolumeCondition
    << " MinVolume:" << ftdc_struct.MinVolume
    << " ContingentCondition:" << ftdc_struct.ContingentCondition
    << " StopPrice:" << ftdc_struct.StopPrice
    << " ForceCloseReason:" << ftdc_struct.ForceCloseReason
    << " IsAutoSuspend:" << ftdc_struct.IsAutoSuspend
    << " BusinessUnit:" << ftdc_struct.BusinessUnit
    << " RequestID:" << ftdc_struct.RequestID
    << " UserForceClose:" << ftdc_struct.UserForceClose
    << " ErrorID:" << ftdc_struct.ErrorID
    << " ErrorMsg:" << ftdc_struct.ErrorMsg
    << " IsSwapOrder:" << ftdc_struct.IsSwapOrder
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CFutureFtdcErrorConditionalOrderField& ftdc_struct) {
  os << "ftdc_struct(CFutureFtdcErrorConditionalOrderField) ---> BrokerID:" << ftdc_struct.BrokerID
    << " InvestorID:" << ftdc_struct.InvestorID
    << " InstrumentID:" << ftdc_struct.InstrumentID
    << " OrderRef:" << ftdc_struct.OrderRef
    << " UserID:" << ftdc_struct.UserID
    << " OrderPriceType:" << ftdc_struct.OrderPriceType
    << " Direction:" << ftdc_struct.Direction
    << " CombOffsetFlag:" << ftdc_struct.CombOffsetFlag
    << " CombHedgeFlag:" << ftdc_struct.CombHedgeFlag
    << " LimitPrice:" << ftdc_struct.LimitPrice
    << " VolumeTotalOriginal:" << ftdc_struct.VolumeTotalOriginal
    << " TimeCondition:" << ftdc_struct.TimeCondition
    << " GTDDate:" << ftdc_struct.GTDDate
    << " VolumeCondition:" << ftdc_struct.VolumeCondition
    << " MinVolume:" << ftdc_struct.MinVolume
    << " ContingentCondition:" << ftdc_struct.ContingentCondition
    << " StopPrice:" << ftdc_struct.StopPrice
    << " ForceCloseReason:" << ftdc_struct.ForceCloseReason
    << " IsAutoSuspend:" << ftdc_struct.IsAutoSuspend
    << " BusinessUnit:" << ftdc_struct.BusinessUnit
    << " RequestID:" << ftdc_struct.RequestID
    << " OrderLocalID:" << ftdc_struct.OrderLocalID
    << " ExchangeID:" << ftdc_struct.ExchangeID
    << " ParticipantID:" << ftdc_struct.ParticipantID
    << " ClientID:" << ftdc_struct.ClientID
    << " ExchangeInstID:" << ftdc_struct.ExchangeInstID
    << " TraderID:" << ftdc_struct.TraderID
    << " InstallID:" << ftdc_struct.InstallID
    << " OrderSubmitStatus:" << ftdc_struct.OrderSubmitStatus
    << " NotifySequence:" << ftdc_struct.NotifySequence
    << " TradingDay:" << ftdc_struct.TradingDay
    << " SettlementID:" << ftdc_struct.SettlementID
    << " OrderSysID:" << ftdc_struct.OrderSysID
    << " OrderSource:" << ftdc_struct.OrderSource
    << " OrderStatus:" << ftdc_struct.OrderStatus
    << " OrderType:" << ftdc_struct.OrderType
    << " VolumeTraded:" << ftdc_struct.VolumeTraded
    << " VolumeTotal:" << ftdc_struct.VolumeTotal
    << " InsertDate:" << ftdc_struct.InsertDate
    << " InsertTime:" << ftdc_struct.InsertTime
    << " ActiveTime:" << ftdc_struct.ActiveTime
    << " SuspendTime:" << ftdc_struct.SuspendTime
    << " UpdateTime:" << ftdc_struct.UpdateTime
    << " CancelTime:" << ftdc_struct.CancelTime
    << " ActiveTraderID:" << ftdc_struct.ActiveTraderID
    << " ClearingPartID:" << ftdc_struct.ClearingPartID
    << " SequenceNo:" << ftdc_struct.SequenceNo
    << " FrontID:" << ftdc_struct.FrontID
    << " SessionID:" << ftdc_struct.SessionID
    << " UserProductInfo:" << ftdc_struct.UserProductInfo
    << " StatusMsg:" << ftdc_struct.StatusMsg
    << " UserForceClose:" << ftdc_struct.UserForceClose
    << " ActiveUserID:" << ftdc_struct.ActiveUserID
    << " BrokerOrderSeq:" << ftdc_struct.BrokerOrderSeq
    << " RelativeOrderSysID:" << ftdc_struct.RelativeOrderSysID
    << " ZCETotalTradedVolume:" << ftdc_struct.ZCETotalTradedVolume
    << " ErrorID:" << ftdc_struct.ErrorID
    << " ErrorMsg:" << ftdc_struct.ErrorMsg
    << " IsSwapOrder:" << ftdc_struct.IsSwapOrder
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CFutureFtdcQryErrOrderActionField& ftdc_struct) {
  os << "ftdc_struct(CFutureFtdcQryErrOrderActionField) ---> BrokerID:" << ftdc_struct.BrokerID
    << " InvestorID:" << ftdc_struct.InvestorID
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CFutureFtdcErrOrderActionField& ftdc_struct) {
  os << "ftdc_struct(CFutureFtdcErrOrderActionField) ---> BrokerID:" << ftdc_struct.BrokerID
    << " InvestorID:" << ftdc_struct.InvestorID
    << " OrderActionRef:" << ftdc_struct.OrderActionRef
    << " OrderRef:" << ftdc_struct.OrderRef
    << " RequestID:" << ftdc_struct.RequestID
    << " Direction:" << ftdc_struct.Direction
    << " FrontID:" << ftdc_struct.FrontID
    << " SessionID:" << ftdc_struct.SessionID
    << " ExchangeID:" << ftdc_struct.ExchangeID
    << " OrderSysID:" << ftdc_struct.OrderSysID
    << " ActionFlag:" << ftdc_struct.ActionFlag
    << " LimitPrice:" << ftdc_struct.LimitPrice
    << " VolumeChange:" << ftdc_struct.VolumeChange
    << " ActionDate:" << ftdc_struct.ActionDate
    << " ActionTime:" << ftdc_struct.ActionTime
    << " TraderID:" << ftdc_struct.TraderID
    << " InstallID:" << ftdc_struct.InstallID
    << " OrderLocalID:" << ftdc_struct.OrderLocalID
    << " ActionLocalID:" << ftdc_struct.ActionLocalID
    << " ParticipantID:" << ftdc_struct.ParticipantID
    << " ClientID:" << ftdc_struct.ClientID
    << " BusinessUnit:" << ftdc_struct.BusinessUnit
    << " OrderActionStatus:" << ftdc_struct.OrderActionStatus
    << " UserID:" << ftdc_struct.UserID
    << " StatusMsg:" << ftdc_struct.StatusMsg
    << " InstrumentID:" << ftdc_struct.InstrumentID
    << " ErrorID:" << ftdc_struct.ErrorID
    << " ErrorMsg:" << ftdc_struct.ErrorMsg
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CFutureFtdcQryExchangeSequenceField& ftdc_struct) {
  os << "ftdc_struct(CFutureFtdcQryExchangeSequenceField) ---> ExchangeID:" << ftdc_struct.ExchangeID
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CFutureFtdcExchangeSequenceField& ftdc_struct) {
  os << "ftdc_struct(CFutureFtdcExchangeSequenceField) ---> ExchangeID:" << ftdc_struct.ExchangeID
    << " SequenceNo:" << ftdc_struct.SequenceNo
    << " MarketStatus:" << ftdc_struct.MarketStatus
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CFutureFtdcQueryMaxOrderVolumeWithPriceField& ftdc_struct) {
  os << "ftdc_struct(CFutureFtdcQueryMaxOrderVolumeWithPriceField) ---> BrokerID:" << ftdc_struct.BrokerID
    << " InvestorID:" << ftdc_struct.InvestorID
    << " ExchangeID:" << ftdc_struct.ExchangeID
    << " InstrumentID:" << ftdc_struct.InstrumentID
    << " Direction:" << ftdc_struct.Direction
    << " OffsetFlag:" << ftdc_struct.OffsetFlag
    << " HedgeFlag:" << ftdc_struct.HedgeFlag
    << " MaxVolume:" << ftdc_struct.MaxVolume
    << " Price:" << ftdc_struct.Price
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CFutureFtdcQryBrokerTradingParamsField& ftdc_struct) {
  os << "ftdc_struct(CFutureFtdcQryBrokerTradingParamsField) ---> BrokerID:" << ftdc_struct.BrokerID
    << " InvestorID:" << ftdc_struct.InvestorID
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CFutureFtdcBrokerTradingParamsField& ftdc_struct) {
  os << "ftdc_struct(CFutureFtdcBrokerTradingParamsField) ---> BrokerID:" << ftdc_struct.BrokerID
    << " InvestorID:" << ftdc_struct.InvestorID
    << " MarginPriceType:" << ftdc_struct.MarginPriceType
    << " Algorithm:" << ftdc_struct.Algorithm
    << " AvailIncludeCloseProfit:" << ftdc_struct.AvailIncludeCloseProfit
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CFutureFtdcQryBrokerTradingAlgosField& ftdc_struct) {
  os << "ftdc_struct(CFutureFtdcQryBrokerTradingAlgosField) ---> BrokerID:" << ftdc_struct.BrokerID
    << " ExchangeID:" << ftdc_struct.ExchangeID
    << " InstrumentID:" << ftdc_struct.InstrumentID
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CFutureFtdcBrokerTradingAlgosField& ftdc_struct) {
  os << "ftdc_struct(CFutureFtdcBrokerTradingAlgosField) ---> BrokerID:" << ftdc_struct.BrokerID
    << " ExchangeID:" << ftdc_struct.ExchangeID
    << " InstrumentID:" << ftdc_struct.InstrumentID
    << " HandlePositionAlgoID:" << ftdc_struct.HandlePositionAlgoID
    << " FindMarginRateAlgoID:" << ftdc_struct.FindMarginRateAlgoID
    << " HandleTradingAccountAlgoID:" << ftdc_struct.HandleTradingAccountAlgoID
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CFutureFtdcQueryBrokerDepositField& ftdc_struct) {
  os << "ftdc_struct(CFutureFtdcQueryBrokerDepositField) ---> BrokerID:" << ftdc_struct.BrokerID
    << " ExchangeID:" << ftdc_struct.ExchangeID
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CFutureFtdcBrokerDepositField& ftdc_struct) {
  os << "ftdc_struct(CFutureFtdcBrokerDepositField) ---> TradingDay:" << ftdc_struct.TradingDay
    << " BrokerID:" << ftdc_struct.BrokerID
    << " ParticipantID:" << ftdc_struct.ParticipantID
    << " ExchangeID:" << ftdc_struct.ExchangeID
    << " PreBalance:" << ftdc_struct.PreBalance
    << " CurrMargin:" << ftdc_struct.CurrMargin
    << " CloseProfit:" << ftdc_struct.CloseProfit
    << " Balance:" << ftdc_struct.Balance
    << " Deposit:" << ftdc_struct.Deposit
    << " Withdraw:" << ftdc_struct.Withdraw
    << " Available:" << ftdc_struct.Available
    << " Reserve:" << ftdc_struct.Reserve
    << " FrozenMargin:" << ftdc_struct.FrozenMargin
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CFutureFtdcQryCFMMCBrokerKeyField& ftdc_struct) {
  os << "ftdc_struct(CFutureFtdcQryCFMMCBrokerKeyField) ---> BrokerID:" << ftdc_struct.BrokerID
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CFutureFtdcCFMMCBrokerKeyField& ftdc_struct) {
  os << "ftdc_struct(CFutureFtdcCFMMCBrokerKeyField) ---> BrokerID:" << ftdc_struct.BrokerID
    << " ParticipantID:" << ftdc_struct.ParticipantID
    << " CreateDate:" << ftdc_struct.CreateDate
    << " CreateTime:" << ftdc_struct.CreateTime
    << " KeyID:" << ftdc_struct.KeyID
    << " CurrentKey:" << ftdc_struct.CurrentKey
    << " KeyKind:" << ftdc_struct.KeyKind
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CFutureFtdcCFMMCTradingAccountKeyField& ftdc_struct) {
  os << "ftdc_struct(CFutureFtdcCFMMCTradingAccountKeyField) ---> BrokerID:" << ftdc_struct.BrokerID
    << " ParticipantID:" << ftdc_struct.ParticipantID
    << " AccountID:" << ftdc_struct.AccountID
    << " KeyID:" << ftdc_struct.KeyID
    << " CurrentKey:" << ftdc_struct.CurrentKey
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CFutureFtdcQryCFMMCTradingAccountKeyField& ftdc_struct) {
  os << "ftdc_struct(CFutureFtdcQryCFMMCTradingAccountKeyField) ---> BrokerID:" << ftdc_struct.BrokerID
    << " InvestorID:" << ftdc_struct.InvestorID
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CFutureFtdcBrokerUserOTPParamField& ftdc_struct) {
  os << "ftdc_struct(CFutureFtdcBrokerUserOTPParamField) ---> BrokerID:" << ftdc_struct.BrokerID
    << " UserID:" << ftdc_struct.UserID
    << " OTPVendorsID:" << ftdc_struct.OTPVendorsID
    << " SerialNumber:" << ftdc_struct.SerialNumber
    << " AuthKey:" << ftdc_struct.AuthKey
    << " LastDrift:" << ftdc_struct.LastDrift
    << " LastSuccess:" << ftdc_struct.LastSuccess
    << " OTPType:" << ftdc_struct.OTPType
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CFutureFtdcManualSyncBrokerUserOTPField& ftdc_struct) {
  os << "ftdc_struct(CFutureFtdcManualSyncBrokerUserOTPField) ---> BrokerID:" << ftdc_struct.BrokerID
    << " UserID:" << ftdc_struct.UserID
    << " OTPType:" << ftdc_struct.OTPType
    << " FirstOTP:" << ftdc_struct.FirstOTP
    << " SecondOTP:" << ftdc_struct.SecondOTP
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CFutureFtdcCommRateModelField& ftdc_struct) {
  os << "ftdc_struct(CFutureFtdcCommRateModelField) ---> BrokerID:" << ftdc_struct.BrokerID
    << " CommModelID:" << ftdc_struct.CommModelID
    << " CommModelName:" << ftdc_struct.CommModelName
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CFutureFtdcQryCommRateModelField& ftdc_struct) {
  os << "ftdc_struct(CFutureFtdcQryCommRateModelField) ---> BrokerID:" << ftdc_struct.BrokerID
    << " CommModelID:" << ftdc_struct.CommModelID
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CFutureFtdcMarginModelField& ftdc_struct) {
  os << "ftdc_struct(CFutureFtdcMarginModelField) ---> BrokerID:" << ftdc_struct.BrokerID
    << " MarginModelID:" << ftdc_struct.MarginModelID
    << " MarginModelName:" << ftdc_struct.MarginModelName
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CFutureFtdcEWarrantOffsetField& ftdc_struct) {
  os << "ftdc_struct(CFutureFtdcEWarrantOffsetField) ---> TradingDay:" << ftdc_struct.TradingDay
    << " BrokerID:" << ftdc_struct.BrokerID
    << " InvestorID:" << ftdc_struct.InvestorID
    << " ExchangeID:" << ftdc_struct.ExchangeID
    << " InstrumentID:" << ftdc_struct.InstrumentID
    << " Direction:" << ftdc_struct.Direction
    << " HedgeFlag:" << ftdc_struct.HedgeFlag
    << " Volume:" << ftdc_struct.Volume
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CFutureFtdcQryEWarrantOffsetField& ftdc_struct) {
  os << "ftdc_struct(CFutureFtdcQryEWarrantOffsetField) ---> BrokerID:" << ftdc_struct.BrokerID
    << " InvestorID:" << ftdc_struct.InvestorID
    << " ExchangeID:" << ftdc_struct.ExchangeID
    << " InstrumentID:" << ftdc_struct.InstrumentID
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CFutureFtdcReqOpenAccountField& ftdc_struct) {
  os << "ftdc_struct(CFutureFtdcReqOpenAccountField) ---> TradeCode:" << ftdc_struct.TradeCode
    << " BankID:" << ftdc_struct.BankID
    << " BankBranchID:" << ftdc_struct.BankBranchID
    << " BrokerID:" << ftdc_struct.BrokerID
    << " BrokerBranchID:" << ftdc_struct.BrokerBranchID
    << " TradeDate:" << ftdc_struct.TradeDate
    << " TradeTime:" << ftdc_struct.TradeTime
    << " BankSerial:" << ftdc_struct.BankSerial
    << " TradingDay:" << ftdc_struct.TradingDay
    << " PlateSerial:" << ftdc_struct.PlateSerial
    << " LastFragment:" << ftdc_struct.LastFragment
    << " SessionID:" << ftdc_struct.SessionID
    << " CustomerName:" << ftdc_struct.CustomerName
    << " IdCardType:" << ftdc_struct.IdCardType
    << " IdentifiedCardNo:" << ftdc_struct.IdentifiedCardNo
    << " Gender:" << ftdc_struct.Gender
    << " CountryCode:" << ftdc_struct.CountryCode
    << " CustType:" << ftdc_struct.CustType
    << " Address:" << ftdc_struct.Address
    << " ZipCode:" << ftdc_struct.ZipCode
    << " Telephone:" << ftdc_struct.Telephone
    << " MobilePhone:" << ftdc_struct.MobilePhone
    << " Fax:" << ftdc_struct.Fax
    << " EMail:" << ftdc_struct.EMail
    << " MoneyAccountStatus:" << ftdc_struct.MoneyAccountStatus
    << " BankAccount:" << ftdc_struct.BankAccount
    << " BankPassWord:" << "it is a secret" // ftdc_struct.BankPassWord
    << " AccountID:" << ftdc_struct.AccountID
    << " Password:" << "it is a secret" // ftdc_struct.Password
    << " InstallID:" << ftdc_struct.InstallID
    << " VerifyCertNoFlag:" << ftdc_struct.VerifyCertNoFlag
    << " CurrencyID:" << ftdc_struct.CurrencyID
    << " CashExchangeCode:" << ftdc_struct.CashExchangeCode
    << " Digest:" << ftdc_struct.Digest
    << " BankAccType:" << ftdc_struct.BankAccType
    << " DeviceID:" << ftdc_struct.DeviceID
    << " BankSecuAccType:" << ftdc_struct.BankSecuAccType
    << " BrokerIDByBank:" << ftdc_struct.BrokerIDByBank
    << " BankSecuAcc:" << ftdc_struct.BankSecuAcc
    << " BankPwdFlag:" << ftdc_struct.BankPwdFlag
    << " SecuPwdFlag:" << ftdc_struct.SecuPwdFlag
    << " OperNo:" << ftdc_struct.OperNo
    << " TID:" << ftdc_struct.TID
    << " UserID:" << ftdc_struct.UserID
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CFutureFtdcReqCancelAccountField& ftdc_struct) {
  os << "ftdc_struct(CFutureFtdcReqCancelAccountField) ---> TradeCode:" << ftdc_struct.TradeCode
    << " BankID:" << ftdc_struct.BankID
    << " BankBranchID:" << ftdc_struct.BankBranchID
    << " BrokerID:" << ftdc_struct.BrokerID
    << " BrokerBranchID:" << ftdc_struct.BrokerBranchID
    << " TradeDate:" << ftdc_struct.TradeDate
    << " TradeTime:" << ftdc_struct.TradeTime
    << " BankSerial:" << ftdc_struct.BankSerial
    << " TradingDay:" << ftdc_struct.TradingDay
    << " PlateSerial:" << ftdc_struct.PlateSerial
    << " LastFragment:" << ftdc_struct.LastFragment
    << " SessionID:" << ftdc_struct.SessionID
    << " CustomerName:" << ftdc_struct.CustomerName
    << " IdCardType:" << ftdc_struct.IdCardType
    << " IdentifiedCardNo:" << ftdc_struct.IdentifiedCardNo
    << " Gender:" << ftdc_struct.Gender
    << " CountryCode:" << ftdc_struct.CountryCode
    << " CustType:" << ftdc_struct.CustType
    << " Address:" << ftdc_struct.Address
    << " ZipCode:" << ftdc_struct.ZipCode
    << " Telephone:" << ftdc_struct.Telephone
    << " MobilePhone:" << ftdc_struct.MobilePhone
    << " Fax:" << ftdc_struct.Fax
    << " EMail:" << ftdc_struct.EMail
    << " MoneyAccountStatus:" << ftdc_struct.MoneyAccountStatus
    << " BankAccount:" << ftdc_struct.BankAccount
    << " BankPassWord:" << "it is a secret" // ftdc_struct.BankPassWord
    << " AccountID:" << ftdc_struct.AccountID
    << " Password:" << "it is a secret" // ftdc_struct.Password
    << " InstallID:" << ftdc_struct.InstallID
    << " VerifyCertNoFlag:" << ftdc_struct.VerifyCertNoFlag
    << " CurrencyID:" << ftdc_struct.CurrencyID
    << " CashExchangeCode:" << ftdc_struct.CashExchangeCode
    << " Digest:" << ftdc_struct.Digest
    << " BankAccType:" << ftdc_struct.BankAccType
    << " DeviceID:" << ftdc_struct.DeviceID
    << " BankSecuAccType:" << ftdc_struct.BankSecuAccType
    << " BrokerIDByBank:" << ftdc_struct.BrokerIDByBank
    << " BankSecuAcc:" << ftdc_struct.BankSecuAcc
    << " BankPwdFlag:" << ftdc_struct.BankPwdFlag
    << " SecuPwdFlag:" << ftdc_struct.SecuPwdFlag
    << " OperNo:" << ftdc_struct.OperNo
    << " TID:" << ftdc_struct.TID
    << " UserID:" << ftdc_struct.UserID
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CFutureFtdcReqChangeAccountField& ftdc_struct) {
  os << "ftdc_struct(CFutureFtdcReqChangeAccountField) ---> TradeCode:" << ftdc_struct.TradeCode
    << " BankID:" << ftdc_struct.BankID
    << " BankBranchID:" << ftdc_struct.BankBranchID
    << " BrokerID:" << ftdc_struct.BrokerID
    << " BrokerBranchID:" << ftdc_struct.BrokerBranchID
    << " TradeDate:" << ftdc_struct.TradeDate
    << " TradeTime:" << ftdc_struct.TradeTime
    << " BankSerial:" << ftdc_struct.BankSerial
    << " TradingDay:" << ftdc_struct.TradingDay
    << " PlateSerial:" << ftdc_struct.PlateSerial
    << " LastFragment:" << ftdc_struct.LastFragment
    << " SessionID:" << ftdc_struct.SessionID
    << " CustomerName:" << ftdc_struct.CustomerName
    << " IdCardType:" << ftdc_struct.IdCardType
    << " IdentifiedCardNo:" << ftdc_struct.IdentifiedCardNo
    << " Gender:" << ftdc_struct.Gender
    << " CountryCode:" << ftdc_struct.CountryCode
    << " CustType:" << ftdc_struct.CustType
    << " Address:" << ftdc_struct.Address
    << " ZipCode:" << ftdc_struct.ZipCode
    << " Telephone:" << ftdc_struct.Telephone
    << " MobilePhone:" << ftdc_struct.MobilePhone
    << " Fax:" << ftdc_struct.Fax
    << " EMail:" << ftdc_struct.EMail
    << " MoneyAccountStatus:" << ftdc_struct.MoneyAccountStatus
    << " BankAccount:" << ftdc_struct.BankAccount
    << " BankPassWord:" << "it is a secret" // ftdc_struct.BankPassWord
    << " NewBankAccount:" << ftdc_struct.NewBankAccount
    << " NewBankPassWord:" << "it is a secret" // ftdc_struct.NewBankPassWord
    << " AccountID:" << ftdc_struct.AccountID
    << " Password:" << "it is a secret" // ftdc_struct.Password
    << " BankAccType:" << ftdc_struct.BankAccType
    << " InstallID:" << ftdc_struct.InstallID
    << " VerifyCertNoFlag:" << ftdc_struct.VerifyCertNoFlag
    << " CurrencyID:" << ftdc_struct.CurrencyID
    << " BrokerIDByBank:" << ftdc_struct.BrokerIDByBank
    << " BankPwdFlag:" << ftdc_struct.BankPwdFlag
    << " SecuPwdFlag:" << ftdc_struct.SecuPwdFlag
    << " TID:" << ftdc_struct.TID
    << " Digest:" << ftdc_struct.Digest
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CFutureFtdcReqTransferField& ftdc_struct) {
  os << "ftdc_struct(CFutureFtdcReqTransferField) ---> TradeCode:" << ftdc_struct.TradeCode
    << " BankID:" << ftdc_struct.BankID
    << " BankBranchID:" << ftdc_struct.BankBranchID
    << " BrokerID:" << ftdc_struct.BrokerID
    << " BrokerBranchID:" << ftdc_struct.BrokerBranchID
    << " TradeDate:" << ftdc_struct.TradeDate
    << " TradeTime:" << ftdc_struct.TradeTime
    << " BankSerial:" << ftdc_struct.BankSerial
    << " TradingDay:" << ftdc_struct.TradingDay
    << " PlateSerial:" << ftdc_struct.PlateSerial
    << " LastFragment:" << ftdc_struct.LastFragment
    << " SessionID:" << ftdc_struct.SessionID
    << " CustomerName:" << ftdc_struct.CustomerName
    << " IdCardType:" << ftdc_struct.IdCardType
    << " IdentifiedCardNo:" << ftdc_struct.IdentifiedCardNo
    << " CustType:" << ftdc_struct.CustType
    << " BankAccount:" << ftdc_struct.BankAccount
    << " BankPassWord:" << "it is a secret" // ftdc_struct.BankPassWord
    << " AccountID:" << ftdc_struct.AccountID
    << " Password:" << "it is a secret" // ftdc_struct.Password
    << " InstallID:" << ftdc_struct.InstallID
    << " FutureSerial:" << ftdc_struct.FutureSerial
    << " UserID:" << ftdc_struct.UserID
    << " VerifyCertNoFlag:" << ftdc_struct.VerifyCertNoFlag
    << " CurrencyID:" << ftdc_struct.CurrencyID
    << " TradeAmount:" << ftdc_struct.TradeAmount
    << " FutureFetchAmount:" << ftdc_struct.FutureFetchAmount
    << " FeePayFlag:" << ftdc_struct.FeePayFlag
    << " CustFee:" << ftdc_struct.CustFee
    << " BrokerFee:" << ftdc_struct.BrokerFee
    << " Message:" << ftdc_struct.Message
    << " Digest:" << ftdc_struct.Digest
    << " BankAccType:" << ftdc_struct.BankAccType
    << " DeviceID:" << ftdc_struct.DeviceID
    << " BankSecuAccType:" << ftdc_struct.BankSecuAccType
    << " BrokerIDByBank:" << ftdc_struct.BrokerIDByBank
    << " BankSecuAcc:" << ftdc_struct.BankSecuAcc
    << " BankPwdFlag:" << ftdc_struct.BankPwdFlag
    << " SecuPwdFlag:" << ftdc_struct.SecuPwdFlag
    << " OperNo:" << ftdc_struct.OperNo
    << " RequestID:" << ftdc_struct.RequestID
    << " TID:" << ftdc_struct.TID
    << " TransferStatus:" << ftdc_struct.TransferStatus
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CFutureFtdcRspTransferField& ftdc_struct) {
  os << "ftdc_struct(CFutureFtdcRspTransferField) ---> TradeCode:" << ftdc_struct.TradeCode
    << " BankID:" << ftdc_struct.BankID
    << " BankBranchID:" << ftdc_struct.BankBranchID
    << " BrokerID:" << ftdc_struct.BrokerID
    << " BrokerBranchID:" << ftdc_struct.BrokerBranchID
    << " TradeDate:" << ftdc_struct.TradeDate
    << " TradeTime:" << ftdc_struct.TradeTime
    << " BankSerial:" << ftdc_struct.BankSerial
    << " TradingDay:" << ftdc_struct.TradingDay
    << " PlateSerial:" << ftdc_struct.PlateSerial
    << " LastFragment:" << ftdc_struct.LastFragment
    << " SessionID:" << ftdc_struct.SessionID
    << " CustomerName:" << ftdc_struct.CustomerName
    << " IdCardType:" << ftdc_struct.IdCardType
    << " IdentifiedCardNo:" << ftdc_struct.IdentifiedCardNo
    << " CustType:" << ftdc_struct.CustType
    << " BankAccount:" << ftdc_struct.BankAccount
    << " BankPassWord:" << "it is a secret" // ftdc_struct.BankPassWord
    << " AccountID:" << ftdc_struct.AccountID
    << " Password:" << "it is a secret" // ftdc_struct.Password
    << " InstallID:" << ftdc_struct.InstallID
    << " FutureSerial:" << ftdc_struct.FutureSerial
    << " UserID:" << ftdc_struct.UserID
    << " VerifyCertNoFlag:" << ftdc_struct.VerifyCertNoFlag
    << " CurrencyID:" << ftdc_struct.CurrencyID
    << " TradeAmount:" << ftdc_struct.TradeAmount
    << " FutureFetchAmount:" << ftdc_struct.FutureFetchAmount
    << " FeePayFlag:" << ftdc_struct.FeePayFlag
    << " CustFee:" << ftdc_struct.CustFee
    << " BrokerFee:" << ftdc_struct.BrokerFee
    << " Message:" << ftdc_struct.Message
    << " Digest:" << ftdc_struct.Digest
    << " BankAccType:" << ftdc_struct.BankAccType
    << " DeviceID:" << ftdc_struct.DeviceID
    << " BankSecuAccType:" << ftdc_struct.BankSecuAccType
    << " BrokerIDByBank:" << ftdc_struct.BrokerIDByBank
    << " BankSecuAcc:" << ftdc_struct.BankSecuAcc
    << " BankPwdFlag:" << ftdc_struct.BankPwdFlag
    << " SecuPwdFlag:" << ftdc_struct.SecuPwdFlag
    << " OperNo:" << ftdc_struct.OperNo
    << " RequestID:" << ftdc_struct.RequestID
    << " TID:" << ftdc_struct.TID
    << " TransferStatus:" << ftdc_struct.TransferStatus
    << " ErrorID:" << ftdc_struct.ErrorID
    << " ErrorMsg:" << ftdc_struct.ErrorMsg
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CFutureFtdcReqRepealField& ftdc_struct) {
  os << "ftdc_struct(CFutureFtdcReqRepealField) ---> RepealTimeInterval:" << ftdc_struct.RepealTimeInterval
    << " RepealedTimes:" << ftdc_struct.RepealedTimes
    << " BankRepealFlag:" << ftdc_struct.BankRepealFlag
    << " BrokerRepealFlag:" << ftdc_struct.BrokerRepealFlag
    << " PlateRepealSerial:" << ftdc_struct.PlateRepealSerial
    << " BankRepealSerial:" << ftdc_struct.BankRepealSerial
    << " FutureRepealSerial:" << ftdc_struct.FutureRepealSerial
    << " TradeCode:" << ftdc_struct.TradeCode
    << " BankID:" << ftdc_struct.BankID
    << " BankBranchID:" << ftdc_struct.BankBranchID
    << " BrokerID:" << ftdc_struct.BrokerID
    << " BrokerBranchID:" << ftdc_struct.BrokerBranchID
    << " TradeDate:" << ftdc_struct.TradeDate
    << " TradeTime:" << ftdc_struct.TradeTime
    << " BankSerial:" << ftdc_struct.BankSerial
    << " TradingDay:" << ftdc_struct.TradingDay
    << " PlateSerial:" << ftdc_struct.PlateSerial
    << " LastFragment:" << ftdc_struct.LastFragment
    << " SessionID:" << ftdc_struct.SessionID
    << " CustomerName:" << ftdc_struct.CustomerName
    << " IdCardType:" << ftdc_struct.IdCardType
    << " IdentifiedCardNo:" << ftdc_struct.IdentifiedCardNo
    << " CustType:" << ftdc_struct.CustType
    << " BankAccount:" << ftdc_struct.BankAccount
    << " BankPassWord:" << "it is a secret" // ftdc_struct.BankPassWord
    << " AccountID:" << ftdc_struct.AccountID
    << " Password:" << "it is a secret" // ftdc_struct.Password
    << " InstallID:" << ftdc_struct.InstallID
    << " FutureSerial:" << ftdc_struct.FutureSerial
    << " UserID:" << ftdc_struct.UserID
    << " VerifyCertNoFlag:" << ftdc_struct.VerifyCertNoFlag
    << " CurrencyID:" << ftdc_struct.CurrencyID
    << " TradeAmount:" << ftdc_struct.TradeAmount
    << " FutureFetchAmount:" << ftdc_struct.FutureFetchAmount
    << " FeePayFlag:" << ftdc_struct.FeePayFlag
    << " CustFee:" << ftdc_struct.CustFee
    << " BrokerFee:" << ftdc_struct.BrokerFee
    << " Message:" << ftdc_struct.Message
    << " Digest:" << ftdc_struct.Digest
    << " BankAccType:" << ftdc_struct.BankAccType
    << " DeviceID:" << ftdc_struct.DeviceID
    << " BankSecuAccType:" << ftdc_struct.BankSecuAccType
    << " BrokerIDByBank:" << ftdc_struct.BrokerIDByBank
    << " BankSecuAcc:" << ftdc_struct.BankSecuAcc
    << " BankPwdFlag:" << ftdc_struct.BankPwdFlag
    << " SecuPwdFlag:" << ftdc_struct.SecuPwdFlag
    << " OperNo:" << ftdc_struct.OperNo
    << " RequestID:" << ftdc_struct.RequestID
    << " TID:" << ftdc_struct.TID
    << " TransferStatus:" << ftdc_struct.TransferStatus
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CFutureFtdcRspRepealField& ftdc_struct) {
  os << "ftdc_struct(CFutureFtdcRspRepealField) ---> RepealTimeInterval:" << ftdc_struct.RepealTimeInterval
    << " RepealedTimes:" << ftdc_struct.RepealedTimes
    << " BankRepealFlag:" << ftdc_struct.BankRepealFlag
    << " BrokerRepealFlag:" << ftdc_struct.BrokerRepealFlag
    << " PlateRepealSerial:" << ftdc_struct.PlateRepealSerial
    << " BankRepealSerial:" << ftdc_struct.BankRepealSerial
    << " FutureRepealSerial:" << ftdc_struct.FutureRepealSerial
    << " TradeCode:" << ftdc_struct.TradeCode
    << " BankID:" << ftdc_struct.BankID
    << " BankBranchID:" << ftdc_struct.BankBranchID
    << " BrokerID:" << ftdc_struct.BrokerID
    << " BrokerBranchID:" << ftdc_struct.BrokerBranchID
    << " TradeDate:" << ftdc_struct.TradeDate
    << " TradeTime:" << ftdc_struct.TradeTime
    << " BankSerial:" << ftdc_struct.BankSerial
    << " TradingDay:" << ftdc_struct.TradingDay
    << " PlateSerial:" << ftdc_struct.PlateSerial
    << " LastFragment:" << ftdc_struct.LastFragment
    << " SessionID:" << ftdc_struct.SessionID
    << " CustomerName:" << ftdc_struct.CustomerName
    << " IdCardType:" << ftdc_struct.IdCardType
    << " IdentifiedCardNo:" << ftdc_struct.IdentifiedCardNo
    << " CustType:" << ftdc_struct.CustType
    << " BankAccount:" << ftdc_struct.BankAccount
    << " BankPassWord:" << "it is a secret" // ftdc_struct.BankPassWord
    << " AccountID:" << ftdc_struct.AccountID
    << " Password:" << "it is a secret" // ftdc_struct.Password
    << " InstallID:" << ftdc_struct.InstallID
    << " FutureSerial:" << ftdc_struct.FutureSerial
    << " UserID:" << ftdc_struct.UserID
    << " VerifyCertNoFlag:" << ftdc_struct.VerifyCertNoFlag
    << " CurrencyID:" << ftdc_struct.CurrencyID
    << " TradeAmount:" << ftdc_struct.TradeAmount
    << " FutureFetchAmount:" << ftdc_struct.FutureFetchAmount
    << " FeePayFlag:" << ftdc_struct.FeePayFlag
    << " CustFee:" << ftdc_struct.CustFee
    << " BrokerFee:" << ftdc_struct.BrokerFee
    << " Message:" << ftdc_struct.Message
    << " Digest:" << ftdc_struct.Digest
    << " BankAccType:" << ftdc_struct.BankAccType
    << " DeviceID:" << ftdc_struct.DeviceID
    << " BankSecuAccType:" << ftdc_struct.BankSecuAccType
    << " BrokerIDByBank:" << ftdc_struct.BrokerIDByBank
    << " BankSecuAcc:" << ftdc_struct.BankSecuAcc
    << " BankPwdFlag:" << ftdc_struct.BankPwdFlag
    << " SecuPwdFlag:" << ftdc_struct.SecuPwdFlag
    << " OperNo:" << ftdc_struct.OperNo
    << " RequestID:" << ftdc_struct.RequestID
    << " TID:" << ftdc_struct.TID
    << " TransferStatus:" << ftdc_struct.TransferStatus
    << " ErrorID:" << ftdc_struct.ErrorID
    << " ErrorMsg:" << ftdc_struct.ErrorMsg
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CFutureFtdcReqQueryAccountField& ftdc_struct) {
  os << "ftdc_struct(CFutureFtdcReqQueryAccountField) ---> TradeCode:" << ftdc_struct.TradeCode
    << " BankID:" << ftdc_struct.BankID
    << " BankBranchID:" << ftdc_struct.BankBranchID
    << " BrokerID:" << ftdc_struct.BrokerID
    << " BrokerBranchID:" << ftdc_struct.BrokerBranchID
    << " TradeDate:" << ftdc_struct.TradeDate
    << " TradeTime:" << ftdc_struct.TradeTime
    << " BankSerial:" << ftdc_struct.BankSerial
    << " TradingDay:" << ftdc_struct.TradingDay
    << " PlateSerial:" << ftdc_struct.PlateSerial
    << " LastFragment:" << ftdc_struct.LastFragment
    << " SessionID:" << ftdc_struct.SessionID
    << " CustomerName:" << ftdc_struct.CustomerName
    << " IdCardType:" << ftdc_struct.IdCardType
    << " IdentifiedCardNo:" << ftdc_struct.IdentifiedCardNo
    << " CustType:" << ftdc_struct.CustType
    << " BankAccount:" << ftdc_struct.BankAccount
    << " BankPassWord:" << "it is a secret" // ftdc_struct.BankPassWord
    << " AccountID:" << ftdc_struct.AccountID
    << " Password:" << "it is a secret" // ftdc_struct.Password
    << " FutureSerial:" << ftdc_struct.FutureSerial
    << " InstallID:" << ftdc_struct.InstallID
    << " UserID:" << ftdc_struct.UserID
    << " VerifyCertNoFlag:" << ftdc_struct.VerifyCertNoFlag
    << " CurrencyID:" << ftdc_struct.CurrencyID
    << " Digest:" << ftdc_struct.Digest
    << " BankAccType:" << ftdc_struct.BankAccType
    << " DeviceID:" << ftdc_struct.DeviceID
    << " BankSecuAccType:" << ftdc_struct.BankSecuAccType
    << " BrokerIDByBank:" << ftdc_struct.BrokerIDByBank
    << " BankSecuAcc:" << ftdc_struct.BankSecuAcc
    << " BankPwdFlag:" << ftdc_struct.BankPwdFlag
    << " SecuPwdFlag:" << ftdc_struct.SecuPwdFlag
    << " OperNo:" << ftdc_struct.OperNo
    << " RequestID:" << ftdc_struct.RequestID
    << " TID:" << ftdc_struct.TID
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CFutureFtdcRspQueryAccountField& ftdc_struct) {
  os << "ftdc_struct(CFutureFtdcRspQueryAccountField) ---> TradeCode:" << ftdc_struct.TradeCode
    << " BankID:" << ftdc_struct.BankID
    << " BankBranchID:" << ftdc_struct.BankBranchID
    << " BrokerID:" << ftdc_struct.BrokerID
    << " BrokerBranchID:" << ftdc_struct.BrokerBranchID
    << " TradeDate:" << ftdc_struct.TradeDate
    << " TradeTime:" << ftdc_struct.TradeTime
    << " BankSerial:" << ftdc_struct.BankSerial
    << " TradingDay:" << ftdc_struct.TradingDay
    << " PlateSerial:" << ftdc_struct.PlateSerial
    << " LastFragment:" << ftdc_struct.LastFragment
    << " SessionID:" << ftdc_struct.SessionID
    << " CustomerName:" << ftdc_struct.CustomerName
    << " IdCardType:" << ftdc_struct.IdCardType
    << " IdentifiedCardNo:" << ftdc_struct.IdentifiedCardNo
    << " CustType:" << ftdc_struct.CustType
    << " BankAccount:" << ftdc_struct.BankAccount
    << " BankPassWord:" << "it is a secret" // ftdc_struct.BankPassWord
    << " AccountID:" << ftdc_struct.AccountID
    << " Password:" << "it is a secret" // ftdc_struct.Password
    << " FutureSerial:" << ftdc_struct.FutureSerial
    << " InstallID:" << ftdc_struct.InstallID
    << " UserID:" << ftdc_struct.UserID
    << " VerifyCertNoFlag:" << ftdc_struct.VerifyCertNoFlag
    << " CurrencyID:" << ftdc_struct.CurrencyID
    << " Digest:" << ftdc_struct.Digest
    << " BankAccType:" << ftdc_struct.BankAccType
    << " DeviceID:" << ftdc_struct.DeviceID
    << " BankSecuAccType:" << ftdc_struct.BankSecuAccType
    << " BrokerIDByBank:" << ftdc_struct.BrokerIDByBank
    << " BankSecuAcc:" << ftdc_struct.BankSecuAcc
    << " BankPwdFlag:" << ftdc_struct.BankPwdFlag
    << " SecuPwdFlag:" << ftdc_struct.SecuPwdFlag
    << " OperNo:" << ftdc_struct.OperNo
    << " RequestID:" << ftdc_struct.RequestID
    << " TID:" << ftdc_struct.TID
    << " BankUseAmount:" << ftdc_struct.BankUseAmount
    << " BankFetchAmount:" << ftdc_struct.BankFetchAmount
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CFutureFtdcFutureSignIOField& ftdc_struct) {
  os << "ftdc_struct(CFutureFtdcFutureSignIOField) ---> TradeCode:" << ftdc_struct.TradeCode
    << " BankID:" << ftdc_struct.BankID
    << " BankBranchID:" << ftdc_struct.BankBranchID
    << " BrokerID:" << ftdc_struct.BrokerID
    << " BrokerBranchID:" << ftdc_struct.BrokerBranchID
    << " TradeDate:" << ftdc_struct.TradeDate
    << " TradeTime:" << ftdc_struct.TradeTime
    << " BankSerial:" << ftdc_struct.BankSerial
    << " TradingDay:" << ftdc_struct.TradingDay
    << " PlateSerial:" << ftdc_struct.PlateSerial
    << " LastFragment:" << ftdc_struct.LastFragment
    << " SessionID:" << ftdc_struct.SessionID
    << " InstallID:" << ftdc_struct.InstallID
    << " UserID:" << ftdc_struct.UserID
    << " Digest:" << ftdc_struct.Digest
    << " CurrencyID:" << ftdc_struct.CurrencyID
    << " DeviceID:" << ftdc_struct.DeviceID
    << " BrokerIDByBank:" << ftdc_struct.BrokerIDByBank
    << " OperNo:" << ftdc_struct.OperNo
    << " RequestID:" << ftdc_struct.RequestID
    << " TID:" << ftdc_struct.TID
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CFutureFtdcRspFutureSignInField& ftdc_struct) {
  os << "ftdc_struct(CFutureFtdcRspFutureSignInField) ---> TradeCode:" << ftdc_struct.TradeCode
    << " BankID:" << ftdc_struct.BankID
    << " BankBranchID:" << ftdc_struct.BankBranchID
    << " BrokerID:" << ftdc_struct.BrokerID
    << " BrokerBranchID:" << ftdc_struct.BrokerBranchID
    << " TradeDate:" << ftdc_struct.TradeDate
    << " TradeTime:" << ftdc_struct.TradeTime
    << " BankSerial:" << ftdc_struct.BankSerial
    << " TradingDay:" << ftdc_struct.TradingDay
    << " PlateSerial:" << ftdc_struct.PlateSerial
    << " LastFragment:" << ftdc_struct.LastFragment
    << " SessionID:" << ftdc_struct.SessionID
    << " InstallID:" << ftdc_struct.InstallID
    << " UserID:" << ftdc_struct.UserID
    << " Digest:" << ftdc_struct.Digest
    << " CurrencyID:" << ftdc_struct.CurrencyID
    << " DeviceID:" << ftdc_struct.DeviceID
    << " BrokerIDByBank:" << ftdc_struct.BrokerIDByBank
    << " OperNo:" << ftdc_struct.OperNo
    << " RequestID:" << ftdc_struct.RequestID
    << " TID:" << ftdc_struct.TID
    << " ErrorID:" << ftdc_struct.ErrorID
    << " ErrorMsg:" << ftdc_struct.ErrorMsg
    << " PinKey:" << ftdc_struct.PinKey
    << " MacKey:" << ftdc_struct.MacKey
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CFutureFtdcReqFutureSignOutField& ftdc_struct) {
  os << "ftdc_struct(CFutureFtdcReqFutureSignOutField) ---> TradeCode:" << ftdc_struct.TradeCode
    << " BankID:" << ftdc_struct.BankID
    << " BankBranchID:" << ftdc_struct.BankBranchID
    << " BrokerID:" << ftdc_struct.BrokerID
    << " BrokerBranchID:" << ftdc_struct.BrokerBranchID
    << " TradeDate:" << ftdc_struct.TradeDate
    << " TradeTime:" << ftdc_struct.TradeTime
    << " BankSerial:" << ftdc_struct.BankSerial
    << " TradingDay:" << ftdc_struct.TradingDay
    << " PlateSerial:" << ftdc_struct.PlateSerial
    << " LastFragment:" << ftdc_struct.LastFragment
    << " SessionID:" << ftdc_struct.SessionID
    << " InstallID:" << ftdc_struct.InstallID
    << " UserID:" << ftdc_struct.UserID
    << " Digest:" << ftdc_struct.Digest
    << " CurrencyID:" << ftdc_struct.CurrencyID
    << " DeviceID:" << ftdc_struct.DeviceID
    << " BrokerIDByBank:" << ftdc_struct.BrokerIDByBank
    << " OperNo:" << ftdc_struct.OperNo
    << " RequestID:" << ftdc_struct.RequestID
    << " TID:" << ftdc_struct.TID
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CFutureFtdcRspFutureSignOutField& ftdc_struct) {
  os << "ftdc_struct(CFutureFtdcRspFutureSignOutField) ---> TradeCode:" << ftdc_struct.TradeCode
    << " BankID:" << ftdc_struct.BankID
    << " BankBranchID:" << ftdc_struct.BankBranchID
    << " BrokerID:" << ftdc_struct.BrokerID
    << " BrokerBranchID:" << ftdc_struct.BrokerBranchID
    << " TradeDate:" << ftdc_struct.TradeDate
    << " TradeTime:" << ftdc_struct.TradeTime
    << " BankSerial:" << ftdc_struct.BankSerial
    << " TradingDay:" << ftdc_struct.TradingDay
    << " PlateSerial:" << ftdc_struct.PlateSerial
    << " LastFragment:" << ftdc_struct.LastFragment
    << " SessionID:" << ftdc_struct.SessionID
    << " InstallID:" << ftdc_struct.InstallID
    << " UserID:" << ftdc_struct.UserID
    << " Digest:" << ftdc_struct.Digest
    << " CurrencyID:" << ftdc_struct.CurrencyID
    << " DeviceID:" << ftdc_struct.DeviceID
    << " BrokerIDByBank:" << ftdc_struct.BrokerIDByBank
    << " OperNo:" << ftdc_struct.OperNo
    << " RequestID:" << ftdc_struct.RequestID
    << " TID:" << ftdc_struct.TID
    << " ErrorID:" << ftdc_struct.ErrorID
    << " ErrorMsg:" << ftdc_struct.ErrorMsg
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CFutureFtdcReqQueryTradeResultBySerialField& ftdc_struct) {
  os << "ftdc_struct(CFutureFtdcReqQueryTradeResultBySerialField) ---> TradeCode:" << ftdc_struct.TradeCode
    << " BankID:" << ftdc_struct.BankID
    << " BankBranchID:" << ftdc_struct.BankBranchID
    << " BrokerID:" << ftdc_struct.BrokerID
    << " BrokerBranchID:" << ftdc_struct.BrokerBranchID
    << " TradeDate:" << ftdc_struct.TradeDate
    << " TradeTime:" << ftdc_struct.TradeTime
    << " BankSerial:" << ftdc_struct.BankSerial
    << " TradingDay:" << ftdc_struct.TradingDay
    << " PlateSerial:" << ftdc_struct.PlateSerial
    << " LastFragment:" << ftdc_struct.LastFragment
    << " SessionID:" << ftdc_struct.SessionID
    << " Reference:" << ftdc_struct.Reference
    << " RefrenceIssureType:" << ftdc_struct.RefrenceIssureType
    << " RefrenceIssure:" << ftdc_struct.RefrenceIssure
    << " CustomerName:" << ftdc_struct.CustomerName
    << " IdCardType:" << ftdc_struct.IdCardType
    << " IdentifiedCardNo:" << ftdc_struct.IdentifiedCardNo
    << " CustType:" << ftdc_struct.CustType
    << " BankAccount:" << ftdc_struct.BankAccount
    << " BankPassWord:" << "it is a secret" // ftdc_struct.BankPassWord
    << " AccountID:" << ftdc_struct.AccountID
    << " Password:" << "it is a secret" // ftdc_struct.Password
    << " CurrencyID:" << ftdc_struct.CurrencyID
    << " TradeAmount:" << ftdc_struct.TradeAmount
    << " Digest:" << ftdc_struct.Digest
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CFutureFtdcRspQueryTradeResultBySerialField& ftdc_struct) {
  os << "ftdc_struct(CFutureFtdcRspQueryTradeResultBySerialField) ---> TradeCode:" << ftdc_struct.TradeCode
    << " BankID:" << ftdc_struct.BankID
    << " BankBranchID:" << ftdc_struct.BankBranchID
    << " BrokerID:" << ftdc_struct.BrokerID
    << " BrokerBranchID:" << ftdc_struct.BrokerBranchID
    << " TradeDate:" << ftdc_struct.TradeDate
    << " TradeTime:" << ftdc_struct.TradeTime
    << " BankSerial:" << ftdc_struct.BankSerial
    << " TradingDay:" << ftdc_struct.TradingDay
    << " PlateSerial:" << ftdc_struct.PlateSerial
    << " LastFragment:" << ftdc_struct.LastFragment
    << " SessionID:" << ftdc_struct.SessionID
    << " ErrorID:" << ftdc_struct.ErrorID
    << " ErrorMsg:" << ftdc_struct.ErrorMsg
    << " Reference:" << ftdc_struct.Reference
    << " RefrenceIssureType:" << ftdc_struct.RefrenceIssureType
    << " RefrenceIssure:" << ftdc_struct.RefrenceIssure
    << " OriginReturnCode:" << ftdc_struct.OriginReturnCode
    << " OriginDescrInfoForReturnCode:" << ftdc_struct.OriginDescrInfoForReturnCode
    << " BankAccount:" << ftdc_struct.BankAccount
    << " BankPassWord:" << "it is a secret" // ftdc_struct.BankPassWord
    << " AccountID:" << ftdc_struct.AccountID
    << " Password:" << "it is a secret" // ftdc_struct.Password
    << " CurrencyID:" << ftdc_struct.CurrencyID
    << " TradeAmount:" << ftdc_struct.TradeAmount
    << " Digest:" << ftdc_struct.Digest
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CFutureFtdcReqDayEndFileReadyField& ftdc_struct) {
  os << "ftdc_struct(CFutureFtdcReqDayEndFileReadyField) ---> TradeCode:" << ftdc_struct.TradeCode
    << " BankID:" << ftdc_struct.BankID
    << " BankBranchID:" << ftdc_struct.BankBranchID
    << " BrokerID:" << ftdc_struct.BrokerID
    << " BrokerBranchID:" << ftdc_struct.BrokerBranchID
    << " TradeDate:" << ftdc_struct.TradeDate
    << " TradeTime:" << ftdc_struct.TradeTime
    << " BankSerial:" << ftdc_struct.BankSerial
    << " TradingDay:" << ftdc_struct.TradingDay
    << " PlateSerial:" << ftdc_struct.PlateSerial
    << " LastFragment:" << ftdc_struct.LastFragment
    << " SessionID:" << ftdc_struct.SessionID
    << " FileBusinessCode:" << ftdc_struct.FileBusinessCode
    << " Digest:" << ftdc_struct.Digest
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CFutureFtdcReturnResultField& ftdc_struct) {
  os << "ftdc_struct(CFutureFtdcReturnResultField) ---> ReturnCode:" << ftdc_struct.ReturnCode
    << " DescrInfoForReturnCode:" << ftdc_struct.DescrInfoForReturnCode
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CFutureFtdcVerifyFuturePasswordField& ftdc_struct) {
  os << "ftdc_struct(CFutureFtdcVerifyFuturePasswordField) ---> TradeCode:" << ftdc_struct.TradeCode
    << " BankID:" << ftdc_struct.BankID
    << " BankBranchID:" << ftdc_struct.BankBranchID
    << " BrokerID:" << ftdc_struct.BrokerID
    << " BrokerBranchID:" << ftdc_struct.BrokerBranchID
    << " TradeDate:" << ftdc_struct.TradeDate
    << " TradeTime:" << ftdc_struct.TradeTime
    << " BankSerial:" << ftdc_struct.BankSerial
    << " TradingDay:" << ftdc_struct.TradingDay
    << " PlateSerial:" << ftdc_struct.PlateSerial
    << " LastFragment:" << ftdc_struct.LastFragment
    << " SessionID:" << ftdc_struct.SessionID
    << " AccountID:" << ftdc_struct.AccountID
    << " Password:" << "it is a secret" // ftdc_struct.Password
    << " BankAccount:" << ftdc_struct.BankAccount
    << " BankPassWord:" << "it is a secret" // ftdc_struct.BankPassWord
    << " InstallID:" << ftdc_struct.InstallID
    << " TID:" << ftdc_struct.TID
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CFutureFtdcVerifyCustInfoField& ftdc_struct) {
  os << "ftdc_struct(CFutureFtdcVerifyCustInfoField) ---> CustomerName:" << ftdc_struct.CustomerName
    << " IdCardType:" << ftdc_struct.IdCardType
    << " IdentifiedCardNo:" << ftdc_struct.IdentifiedCardNo
    << " CustType:" << ftdc_struct.CustType
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CFutureFtdcVerifyFuturePasswordAndCustInfoField& ftdc_struct) {
  os << "ftdc_struct(CFutureFtdcVerifyFuturePasswordAndCustInfoField) ---> CustomerName:" << ftdc_struct.CustomerName
    << " IdCardType:" << ftdc_struct.IdCardType
    << " IdentifiedCardNo:" << ftdc_struct.IdentifiedCardNo
    << " CustType:" << ftdc_struct.CustType
    << " AccountID:" << ftdc_struct.AccountID
    << " Password:" << "it is a secret" // ftdc_struct.Password
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CFutureFtdcDepositResultInformField& ftdc_struct) {
  os << "ftdc_struct(CFutureFtdcDepositResultInformField) ---> DepositSeqNo:" << ftdc_struct.DepositSeqNo
    << " BrokerID:" << ftdc_struct.BrokerID
    << " InvestorID:" << ftdc_struct.InvestorID
    << " Deposit:" << ftdc_struct.Deposit
    << " RequestID:" << ftdc_struct.RequestID
    << " ReturnCode:" << ftdc_struct.ReturnCode
    << " DescrInfoForReturnCode:" << ftdc_struct.DescrInfoForReturnCode
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CFutureFtdcReqSyncKeyField& ftdc_struct) {
  os << "ftdc_struct(CFutureFtdcReqSyncKeyField) ---> TradeCode:" << ftdc_struct.TradeCode
    << " BankID:" << ftdc_struct.BankID
    << " BankBranchID:" << ftdc_struct.BankBranchID
    << " BrokerID:" << ftdc_struct.BrokerID
    << " BrokerBranchID:" << ftdc_struct.BrokerBranchID
    << " TradeDate:" << ftdc_struct.TradeDate
    << " TradeTime:" << ftdc_struct.TradeTime
    << " BankSerial:" << ftdc_struct.BankSerial
    << " TradingDay:" << ftdc_struct.TradingDay
    << " PlateSerial:" << ftdc_struct.PlateSerial
    << " LastFragment:" << ftdc_struct.LastFragment
    << " SessionID:" << ftdc_struct.SessionID
    << " InstallID:" << ftdc_struct.InstallID
    << " UserID:" << ftdc_struct.UserID
    << " Message:" << ftdc_struct.Message
    << " DeviceID:" << ftdc_struct.DeviceID
    << " BrokerIDByBank:" << ftdc_struct.BrokerIDByBank
    << " OperNo:" << ftdc_struct.OperNo
    << " RequestID:" << ftdc_struct.RequestID
    << " TID:" << ftdc_struct.TID
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CFutureFtdcRspSyncKeyField& ftdc_struct) {
  os << "ftdc_struct(CFutureFtdcRspSyncKeyField) ---> TradeCode:" << ftdc_struct.TradeCode
    << " BankID:" << ftdc_struct.BankID
    << " BankBranchID:" << ftdc_struct.BankBranchID
    << " BrokerID:" << ftdc_struct.BrokerID
    << " BrokerBranchID:" << ftdc_struct.BrokerBranchID
    << " TradeDate:" << ftdc_struct.TradeDate
    << " TradeTime:" << ftdc_struct.TradeTime
    << " BankSerial:" << ftdc_struct.BankSerial
    << " TradingDay:" << ftdc_struct.TradingDay
    << " PlateSerial:" << ftdc_struct.PlateSerial
    << " LastFragment:" << ftdc_struct.LastFragment
    << " SessionID:" << ftdc_struct.SessionID
    << " InstallID:" << ftdc_struct.InstallID
    << " UserID:" << ftdc_struct.UserID
    << " Message:" << ftdc_struct.Message
    << " DeviceID:" << ftdc_struct.DeviceID
    << " BrokerIDByBank:" << ftdc_struct.BrokerIDByBank
    << " OperNo:" << ftdc_struct.OperNo
    << " RequestID:" << ftdc_struct.RequestID
    << " TID:" << ftdc_struct.TID
    << " ErrorID:" << ftdc_struct.ErrorID
    << " ErrorMsg:" << ftdc_struct.ErrorMsg
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CFutureFtdcNotifyQueryAccountField& ftdc_struct) {
  os << "ftdc_struct(CFutureFtdcNotifyQueryAccountField) ---> TradeCode:" << ftdc_struct.TradeCode
    << " BankID:" << ftdc_struct.BankID
    << " BankBranchID:" << ftdc_struct.BankBranchID
    << " BrokerID:" << ftdc_struct.BrokerID
    << " BrokerBranchID:" << ftdc_struct.BrokerBranchID
    << " TradeDate:" << ftdc_struct.TradeDate
    << " TradeTime:" << ftdc_struct.TradeTime
    << " BankSerial:" << ftdc_struct.BankSerial
    << " TradingDay:" << ftdc_struct.TradingDay
    << " PlateSerial:" << ftdc_struct.PlateSerial
    << " LastFragment:" << ftdc_struct.LastFragment
    << " SessionID:" << ftdc_struct.SessionID
    << " CustomerName:" << ftdc_struct.CustomerName
    << " IdCardType:" << ftdc_struct.IdCardType
    << " IdentifiedCardNo:" << ftdc_struct.IdentifiedCardNo
    << " CustType:" << ftdc_struct.CustType
    << " BankAccount:" << ftdc_struct.BankAccount
    << " BankPassWord:" << "it is a secret" // ftdc_struct.BankPassWord
    << " AccountID:" << ftdc_struct.AccountID
    << " Password:" << "it is a secret" // ftdc_struct.Password
    << " FutureSerial:" << ftdc_struct.FutureSerial
    << " InstallID:" << ftdc_struct.InstallID
    << " UserID:" << ftdc_struct.UserID
    << " VerifyCertNoFlag:" << ftdc_struct.VerifyCertNoFlag
    << " CurrencyID:" << ftdc_struct.CurrencyID
    << " Digest:" << ftdc_struct.Digest
    << " BankAccType:" << ftdc_struct.BankAccType
    << " DeviceID:" << ftdc_struct.DeviceID
    << " BankSecuAccType:" << ftdc_struct.BankSecuAccType
    << " BrokerIDByBank:" << ftdc_struct.BrokerIDByBank
    << " BankSecuAcc:" << ftdc_struct.BankSecuAcc
    << " BankPwdFlag:" << ftdc_struct.BankPwdFlag
    << " SecuPwdFlag:" << ftdc_struct.SecuPwdFlag
    << " OperNo:" << ftdc_struct.OperNo
    << " RequestID:" << ftdc_struct.RequestID
    << " TID:" << ftdc_struct.TID
    << " BankUseAmount:" << ftdc_struct.BankUseAmount
    << " BankFetchAmount:" << ftdc_struct.BankFetchAmount
    << " ErrorID:" << ftdc_struct.ErrorID
    << " ErrorMsg:" << ftdc_struct.ErrorMsg
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CFutureFtdcTransferSerialField& ftdc_struct) {
  os << "ftdc_struct(CFutureFtdcTransferSerialField) ---> PlateSerial:" << ftdc_struct.PlateSerial
    << " TradeDate:" << ftdc_struct.TradeDate
    << " TradingDay:" << ftdc_struct.TradingDay
    << " TradeTime:" << ftdc_struct.TradeTime
    << " TradeCode:" << ftdc_struct.TradeCode
    << " SessionID:" << ftdc_struct.SessionID
    << " BankID:" << ftdc_struct.BankID
    << " BankBranchID:" << ftdc_struct.BankBranchID
    << " BankAccType:" << ftdc_struct.BankAccType
    << " BankAccount:" << ftdc_struct.BankAccount
    << " BankSerial:" << ftdc_struct.BankSerial
    << " BrokerID:" << ftdc_struct.BrokerID
    << " BrokerBranchID:" << ftdc_struct.BrokerBranchID
    << " FutureAccType:" << ftdc_struct.FutureAccType
    << " AccountID:" << ftdc_struct.AccountID
    << " InvestorID:" << ftdc_struct.InvestorID
    << " FutureSerial:" << ftdc_struct.FutureSerial
    << " IdCardType:" << ftdc_struct.IdCardType
    << " IdentifiedCardNo:" << ftdc_struct.IdentifiedCardNo
    << " CurrencyID:" << ftdc_struct.CurrencyID
    << " TradeAmount:" << ftdc_struct.TradeAmount
    << " CustFee:" << ftdc_struct.CustFee
    << " BrokerFee:" << ftdc_struct.BrokerFee
    << " AvailabilityFlag:" << ftdc_struct.AvailabilityFlag
    << " OperatorCode:" << ftdc_struct.OperatorCode
    << " BankNewAccount:" << ftdc_struct.BankNewAccount
    << " ErrorID:" << ftdc_struct.ErrorID
    << " ErrorMsg:" << ftdc_struct.ErrorMsg
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CFutureFtdcQryTransferSerialField& ftdc_struct) {
  os << "ftdc_struct(CFutureFtdcQryTransferSerialField) ---> BrokerID:" << ftdc_struct.BrokerID
    << " AccountID:" << ftdc_struct.AccountID
    << " BankID:" << ftdc_struct.BankID
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CFutureFtdcNotifyFutureSignInField& ftdc_struct) {
  os << "ftdc_struct(CFutureFtdcNotifyFutureSignInField) ---> TradeCode:" << ftdc_struct.TradeCode
    << " BankID:" << ftdc_struct.BankID
    << " BankBranchID:" << ftdc_struct.BankBranchID
    << " BrokerID:" << ftdc_struct.BrokerID
    << " BrokerBranchID:" << ftdc_struct.BrokerBranchID
    << " TradeDate:" << ftdc_struct.TradeDate
    << " TradeTime:" << ftdc_struct.TradeTime
    << " BankSerial:" << ftdc_struct.BankSerial
    << " TradingDay:" << ftdc_struct.TradingDay
    << " PlateSerial:" << ftdc_struct.PlateSerial
    << " LastFragment:" << ftdc_struct.LastFragment
    << " SessionID:" << ftdc_struct.SessionID
    << " InstallID:" << ftdc_struct.InstallID
    << " UserID:" << ftdc_struct.UserID
    << " Digest:" << ftdc_struct.Digest
    << " CurrencyID:" << ftdc_struct.CurrencyID
    << " DeviceID:" << ftdc_struct.DeviceID
    << " BrokerIDByBank:" << ftdc_struct.BrokerIDByBank
    << " OperNo:" << ftdc_struct.OperNo
    << " RequestID:" << ftdc_struct.RequestID
    << " TID:" << ftdc_struct.TID
    << " ErrorID:" << ftdc_struct.ErrorID
    << " ErrorMsg:" << ftdc_struct.ErrorMsg
    << " PinKey:" << ftdc_struct.PinKey
    << " MacKey:" << ftdc_struct.MacKey
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CFutureFtdcNotifyFutureSignOutField& ftdc_struct) {
  os << "ftdc_struct(CFutureFtdcNotifyFutureSignOutField) ---> TradeCode:" << ftdc_struct.TradeCode
    << " BankID:" << ftdc_struct.BankID
    << " BankBranchID:" << ftdc_struct.BankBranchID
    << " BrokerID:" << ftdc_struct.BrokerID
    << " BrokerBranchID:" << ftdc_struct.BrokerBranchID
    << " TradeDate:" << ftdc_struct.TradeDate
    << " TradeTime:" << ftdc_struct.TradeTime
    << " BankSerial:" << ftdc_struct.BankSerial
    << " TradingDay:" << ftdc_struct.TradingDay
    << " PlateSerial:" << ftdc_struct.PlateSerial
    << " LastFragment:" << ftdc_struct.LastFragment
    << " SessionID:" << ftdc_struct.SessionID
    << " InstallID:" << ftdc_struct.InstallID
    << " UserID:" << ftdc_struct.UserID
    << " Digest:" << ftdc_struct.Digest
    << " CurrencyID:" << ftdc_struct.CurrencyID
    << " DeviceID:" << ftdc_struct.DeviceID
    << " BrokerIDByBank:" << ftdc_struct.BrokerIDByBank
    << " OperNo:" << ftdc_struct.OperNo
    << " RequestID:" << ftdc_struct.RequestID
    << " TID:" << ftdc_struct.TID
    << " ErrorID:" << ftdc_struct.ErrorID
    << " ErrorMsg:" << ftdc_struct.ErrorMsg
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CFutureFtdcNotifySyncKeyField& ftdc_struct) {
  os << "ftdc_struct(CFutureFtdcNotifySyncKeyField) ---> TradeCode:" << ftdc_struct.TradeCode
    << " BankID:" << ftdc_struct.BankID
    << " BankBranchID:" << ftdc_struct.BankBranchID
    << " BrokerID:" << ftdc_struct.BrokerID
    << " BrokerBranchID:" << ftdc_struct.BrokerBranchID
    << " TradeDate:" << ftdc_struct.TradeDate
    << " TradeTime:" << ftdc_struct.TradeTime
    << " BankSerial:" << ftdc_struct.BankSerial
    << " TradingDay:" << ftdc_struct.TradingDay
    << " PlateSerial:" << ftdc_struct.PlateSerial
    << " LastFragment:" << ftdc_struct.LastFragment
    << " SessionID:" << ftdc_struct.SessionID
    << " InstallID:" << ftdc_struct.InstallID
    << " UserID:" << ftdc_struct.UserID
    << " Message:" << ftdc_struct.Message
    << " DeviceID:" << ftdc_struct.DeviceID
    << " BrokerIDByBank:" << ftdc_struct.BrokerIDByBank
    << " OperNo:" << ftdc_struct.OperNo
    << " RequestID:" << ftdc_struct.RequestID
    << " TID:" << ftdc_struct.TID
    << " ErrorID:" << ftdc_struct.ErrorID
    << " ErrorMsg:" << ftdc_struct.ErrorMsg
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CFutureFtdcQryAccountregisterField& ftdc_struct) {
  os << "ftdc_struct(CFutureFtdcQryAccountregisterField) ---> BrokerID:" << ftdc_struct.BrokerID
    << " AccountID:" << ftdc_struct.AccountID
    << " BankID:" << ftdc_struct.BankID
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CFutureFtdcAccountregisterField& ftdc_struct) {
  os << "ftdc_struct(CFutureFtdcAccountregisterField) ---> TradeDay:" << ftdc_struct.TradeDay
    << " BankID:" << ftdc_struct.BankID
    << " BankBranchID:" << ftdc_struct.BankBranchID
    << " BankAccount:" << ftdc_struct.BankAccount
    << " BrokerID:" << ftdc_struct.BrokerID
    << " BrokerBranchID:" << ftdc_struct.BrokerBranchID
    << " AccountID:" << ftdc_struct.AccountID
    << " IdCardType:" << ftdc_struct.IdCardType
    << " IdentifiedCardNo:" << ftdc_struct.IdentifiedCardNo
    << " CustomerName:" << ftdc_struct.CustomerName
    << " CurrencyID:" << ftdc_struct.CurrencyID
    << " OpenOrDestroy:" << ftdc_struct.OpenOrDestroy
    << " RegDate:" << ftdc_struct.RegDate
    << " OutDate:" << ftdc_struct.OutDate
    << " TID:" << ftdc_struct.TID
    << " CustType:" << ftdc_struct.CustType
    << " BankAccType:" << ftdc_struct.BankAccType
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CFutureFtdcOpenAccountField& ftdc_struct) {
  os << "ftdc_struct(CFutureFtdcOpenAccountField) ---> TradeCode:" << ftdc_struct.TradeCode
    << " BankID:" << ftdc_struct.BankID
    << " BankBranchID:" << ftdc_struct.BankBranchID
    << " BrokerID:" << ftdc_struct.BrokerID
    << " BrokerBranchID:" << ftdc_struct.BrokerBranchID
    << " TradeDate:" << ftdc_struct.TradeDate
    << " TradeTime:" << ftdc_struct.TradeTime
    << " BankSerial:" << ftdc_struct.BankSerial
    << " TradingDay:" << ftdc_struct.TradingDay
    << " PlateSerial:" << ftdc_struct.PlateSerial
    << " LastFragment:" << ftdc_struct.LastFragment
    << " SessionID:" << ftdc_struct.SessionID
    << " CustomerName:" << ftdc_struct.CustomerName
    << " IdCardType:" << ftdc_struct.IdCardType
    << " IdentifiedCardNo:" << ftdc_struct.IdentifiedCardNo
    << " Gender:" << ftdc_struct.Gender
    << " CountryCode:" << ftdc_struct.CountryCode
    << " CustType:" << ftdc_struct.CustType
    << " Address:" << ftdc_struct.Address
    << " ZipCode:" << ftdc_struct.ZipCode
    << " Telephone:" << ftdc_struct.Telephone
    << " MobilePhone:" << ftdc_struct.MobilePhone
    << " Fax:" << ftdc_struct.Fax
    << " EMail:" << ftdc_struct.EMail
    << " MoneyAccountStatus:" << ftdc_struct.MoneyAccountStatus
    << " BankAccount:" << ftdc_struct.BankAccount
    << " BankPassWord:" << "it is a secret" // ftdc_struct.BankPassWord
    << " AccountID:" << ftdc_struct.AccountID
    << " Password:" << "it is a secret" // ftdc_struct.Password
    << " InstallID:" << ftdc_struct.InstallID
    << " VerifyCertNoFlag:" << ftdc_struct.VerifyCertNoFlag
    << " CurrencyID:" << ftdc_struct.CurrencyID
    << " CashExchangeCode:" << ftdc_struct.CashExchangeCode
    << " Digest:" << ftdc_struct.Digest
    << " BankAccType:" << ftdc_struct.BankAccType
    << " DeviceID:" << ftdc_struct.DeviceID
    << " BankSecuAccType:" << ftdc_struct.BankSecuAccType
    << " BrokerIDByBank:" << ftdc_struct.BrokerIDByBank
    << " BankSecuAcc:" << ftdc_struct.BankSecuAcc
    << " BankPwdFlag:" << ftdc_struct.BankPwdFlag
    << " SecuPwdFlag:" << ftdc_struct.SecuPwdFlag
    << " OperNo:" << ftdc_struct.OperNo
    << " TID:" << ftdc_struct.TID
    << " UserID:" << ftdc_struct.UserID
    << " ErrorID:" << ftdc_struct.ErrorID
    << " ErrorMsg:" << ftdc_struct.ErrorMsg
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CFutureFtdcCancelAccountField& ftdc_struct) {
  os << "ftdc_struct(CFutureFtdcCancelAccountField) ---> TradeCode:" << ftdc_struct.TradeCode
    << " BankID:" << ftdc_struct.BankID
    << " BankBranchID:" << ftdc_struct.BankBranchID
    << " BrokerID:" << ftdc_struct.BrokerID
    << " BrokerBranchID:" << ftdc_struct.BrokerBranchID
    << " TradeDate:" << ftdc_struct.TradeDate
    << " TradeTime:" << ftdc_struct.TradeTime
    << " BankSerial:" << ftdc_struct.BankSerial
    << " TradingDay:" << ftdc_struct.TradingDay
    << " PlateSerial:" << ftdc_struct.PlateSerial
    << " LastFragment:" << ftdc_struct.LastFragment
    << " SessionID:" << ftdc_struct.SessionID
    << " CustomerName:" << ftdc_struct.CustomerName
    << " IdCardType:" << ftdc_struct.IdCardType
    << " IdentifiedCardNo:" << ftdc_struct.IdentifiedCardNo
    << " Gender:" << ftdc_struct.Gender
    << " CountryCode:" << ftdc_struct.CountryCode
    << " CustType:" << ftdc_struct.CustType
    << " Address:" << ftdc_struct.Address
    << " ZipCode:" << ftdc_struct.ZipCode
    << " Telephone:" << ftdc_struct.Telephone
    << " MobilePhone:" << ftdc_struct.MobilePhone
    << " Fax:" << ftdc_struct.Fax
    << " EMail:" << ftdc_struct.EMail
    << " MoneyAccountStatus:" << ftdc_struct.MoneyAccountStatus
    << " BankAccount:" << ftdc_struct.BankAccount
    << " BankPassWord:" << "it is a secret" // ftdc_struct.BankPassWord
    << " AccountID:" << ftdc_struct.AccountID
    << " Password:" << "it is a secret" // ftdc_struct.Password
    << " InstallID:" << ftdc_struct.InstallID
    << " VerifyCertNoFlag:" << ftdc_struct.VerifyCertNoFlag
    << " CurrencyID:" << ftdc_struct.CurrencyID
    << " CashExchangeCode:" << ftdc_struct.CashExchangeCode
    << " Digest:" << ftdc_struct.Digest
    << " BankAccType:" << ftdc_struct.BankAccType
    << " DeviceID:" << ftdc_struct.DeviceID
    << " BankSecuAccType:" << ftdc_struct.BankSecuAccType
    << " BrokerIDByBank:" << ftdc_struct.BrokerIDByBank
    << " BankSecuAcc:" << ftdc_struct.BankSecuAcc
    << " BankPwdFlag:" << ftdc_struct.BankPwdFlag
    << " SecuPwdFlag:" << ftdc_struct.SecuPwdFlag
    << " OperNo:" << ftdc_struct.OperNo
    << " TID:" << ftdc_struct.TID
    << " UserID:" << ftdc_struct.UserID
    << " ErrorID:" << ftdc_struct.ErrorID
    << " ErrorMsg:" << ftdc_struct.ErrorMsg
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CFutureFtdcChangeAccountField& ftdc_struct) {
  os << "ftdc_struct(CFutureFtdcChangeAccountField) ---> TradeCode:" << ftdc_struct.TradeCode
    << " BankID:" << ftdc_struct.BankID
    << " BankBranchID:" << ftdc_struct.BankBranchID
    << " BrokerID:" << ftdc_struct.BrokerID
    << " BrokerBranchID:" << ftdc_struct.BrokerBranchID
    << " TradeDate:" << ftdc_struct.TradeDate
    << " TradeTime:" << ftdc_struct.TradeTime
    << " BankSerial:" << ftdc_struct.BankSerial
    << " TradingDay:" << ftdc_struct.TradingDay
    << " PlateSerial:" << ftdc_struct.PlateSerial
    << " LastFragment:" << ftdc_struct.LastFragment
    << " SessionID:" << ftdc_struct.SessionID
    << " CustomerName:" << ftdc_struct.CustomerName
    << " IdCardType:" << ftdc_struct.IdCardType
    << " IdentifiedCardNo:" << ftdc_struct.IdentifiedCardNo
    << " Gender:" << ftdc_struct.Gender
    << " CountryCode:" << ftdc_struct.CountryCode
    << " CustType:" << ftdc_struct.CustType
    << " Address:" << ftdc_struct.Address
    << " ZipCode:" << ftdc_struct.ZipCode
    << " Telephone:" << ftdc_struct.Telephone
    << " MobilePhone:" << ftdc_struct.MobilePhone
    << " Fax:" << ftdc_struct.Fax
    << " EMail:" << ftdc_struct.EMail
    << " MoneyAccountStatus:" << ftdc_struct.MoneyAccountStatus
    << " BankAccount:" << ftdc_struct.BankAccount
    << " BankPassWord:" << "it is a secret" // ftdc_struct.BankPassWord
    << " NewBankAccount:" << ftdc_struct.NewBankAccount
    << " NewBankPassWord:" << "it is a secret" // ftdc_struct.NewBankPassWord
    << " AccountID:" << ftdc_struct.AccountID
    << " Password:" << "it is a secret" // ftdc_struct.Password
    << " BankAccType:" << ftdc_struct.BankAccType
    << " InstallID:" << ftdc_struct.InstallID
    << " VerifyCertNoFlag:" << ftdc_struct.VerifyCertNoFlag
    << " CurrencyID:" << ftdc_struct.CurrencyID
    << " BrokerIDByBank:" << ftdc_struct.BrokerIDByBank
    << " BankPwdFlag:" << ftdc_struct.BankPwdFlag
    << " SecuPwdFlag:" << ftdc_struct.SecuPwdFlag
    << " TID:" << ftdc_struct.TID
    << " Digest:" << ftdc_struct.Digest
    << " ErrorID:" << ftdc_struct.ErrorID
    << " ErrorMsg:" << ftdc_struct.ErrorMsg
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CFutureFtdcUserRightsAssignField& ftdc_struct) {
  os << "ftdc_struct(CFutureFtdcUserRightsAssignField) ---> BrokerID:" << ftdc_struct.BrokerID
    << " UserID:" << ftdc_struct.UserID
    << " DRIdentityID:" << ftdc_struct.DRIdentityID
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CFutureFtdcBrokerUserRightAssignField& ftdc_struct) {
  os << "ftdc_struct(CFutureFtdcBrokerUserRightAssignField) ---> BrokerID:" << ftdc_struct.BrokerID
    << " DRIdentityID:" << ftdc_struct.DRIdentityID
    << " Tradeable:" << ftdc_struct.Tradeable
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CFutureFtdcDRTransferField& ftdc_struct) {
  os << "ftdc_struct(CFutureFtdcDRTransferField) ---> OrigDRIdentityID:" << ftdc_struct.OrigDRIdentityID
    << " DestDRIdentityID:" << ftdc_struct.DestDRIdentityID
    << " OrigBrokerID:" << ftdc_struct.OrigBrokerID
    << " DestBrokerID:" << ftdc_struct.DestBrokerID
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CFutureFtdcForQuoteField& ftdc_struct) {
  os << "ftdc_struct(CFutureFtdcForQuoteField) ---> ExchangeID:" << ftdc_struct.ExchangeID
    << " BrokerID:" << ftdc_struct.BrokerID
    << " InvestorID:" << ftdc_struct.InvestorID
    << " InstrumentID:" << ftdc_struct.InstrumentID
    << " SessionID:" << ftdc_struct.SessionID
    << " OrderRef:" << ftdc_struct.OrderRef
    << " OrderLocalID:" << ftdc_struct.OrderLocalID
    << " TraderID:" << ftdc_struct.TraderID
    << " InstallID:" << ftdc_struct.InstallID
    << " ParticipantID:" << ftdc_struct.ParticipantID
    << " ClientID:" << ftdc_struct.ClientID
    << " UserID:" << ftdc_struct.UserID
    << " ReqForQuoteTime:" << ftdc_struct.ReqForQuoteTime
    << " ReqForQuoteID:" << ftdc_struct.ReqForQuoteID
    << " TradingDay:" << ftdc_struct.TradingDay
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CFutureFtdcInputForQuoteField& ftdc_struct) {
  os << "ftdc_struct(CFutureFtdcInputForQuoteField) ---> ExchangeID:" << ftdc_struct.ExchangeID
    << " BrokerID:" << ftdc_struct.BrokerID
    << " InvestorID:" << ftdc_struct.InvestorID
    << " InstrumentID:" << ftdc_struct.InstrumentID
    << " SessionID:" << ftdc_struct.SessionID
    << " OrderRef:" << ftdc_struct.OrderRef
    << " OrderLocalID:" << ftdc_struct.OrderLocalID
    << " TraderID:" << ftdc_struct.TraderID
    << " InstallID:" << ftdc_struct.InstallID
    << " ParticipantID:" << ftdc_struct.ParticipantID
    << " ClientID:" << ftdc_struct.ClientID
    << " UserID:" << ftdc_struct.UserID
    << " ReqForQuoteTime:" << ftdc_struct.ReqForQuoteTime
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CFutureFtdcExchRspForQuoteField& ftdc_struct) {
  os << "ftdc_struct(CFutureFtdcExchRspForQuoteField) ---> ExchangeID:" << ftdc_struct.ExchangeID
    << " BrokerID:" << ftdc_struct.BrokerID
    << " InvestorID:" << ftdc_struct.InvestorID
    << " InstrumentID:" << ftdc_struct.InstrumentID
    << " SessionID:" << ftdc_struct.SessionID
    << " OrderRef:" << ftdc_struct.OrderRef
    << " OrderLocalID:" << ftdc_struct.OrderLocalID
    << " TraderID:" << ftdc_struct.TraderID
    << " InstallID:" << ftdc_struct.InstallID
    << " ParticipantID:" << ftdc_struct.ParticipantID
    << " ClientID:" << ftdc_struct.ClientID
    << " UserID:" << ftdc_struct.UserID
    << " ReqForQuoteTime:" << ftdc_struct.ReqForQuoteTime
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CFutureFtdcErrRtnExchRtnForQuoteField& ftdc_struct) {
  os << "ftdc_struct(CFutureFtdcErrRtnExchRtnForQuoteField) ---> ExchangeID:" << ftdc_struct.ExchangeID
    << " BrokerID:" << ftdc_struct.BrokerID
    << " InvestorID:" << ftdc_struct.InvestorID
    << " InstrumentID:" << ftdc_struct.InstrumentID
    << " SessionID:" << ftdc_struct.SessionID
    << " OrderRef:" << ftdc_struct.OrderRef
    << " OrderLocalID:" << ftdc_struct.OrderLocalID
    << " TraderID:" << ftdc_struct.TraderID
    << " InstallID:" << ftdc_struct.InstallID
    << " ParticipantID:" << ftdc_struct.ParticipantID
    << " ClientID:" << ftdc_struct.ClientID
    << " UserID:" << ftdc_struct.UserID
    << " ReqForQuoteTime:" << ftdc_struct.ReqForQuoteTime
    << " ErrorID:" << ftdc_struct.ErrorID
    << " ErrorMsg:" << ftdc_struct.ErrorMsg
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CFutureFtdcExchangeQuoteInsertErrorField& ftdc_struct) {
  os << "ftdc_struct(CFutureFtdcExchangeQuoteInsertErrorField) ---> BrokerID:" << ftdc_struct.BrokerID
    << " ExchangeID:" << ftdc_struct.ExchangeID
    << " ParticipantID:" << ftdc_struct.ParticipantID
    << " TraderID:" << ftdc_struct.TraderID
    << " InstallID:" << ftdc_struct.InstallID
    << " QuoteLocalID:" << ftdc_struct.QuoteLocalID
    << " ErrorID:" << ftdc_struct.ErrorID
    << " ErrorMsg:" << ftdc_struct.ErrorMsg
    << " ClientID:" << ftdc_struct.ClientID
    << " InvestorID:" << ftdc_struct.InvestorID
    << " BusinessUnit:" << ftdc_struct.BusinessUnit
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CFutureFtdcMulticastGroupInfoField& ftdc_struct) {
  os << "ftdc_struct(CFutureFtdcMulticastGroupInfoField) ---> GroupIP:" << ftdc_struct.GroupIP
    << " GroupPort:" << ftdc_struct.GroupPort
    << " SourceIP:" << ftdc_struct.SourceIP
    << " <--- End";

  return os;
}


#endif // FUTURE_FTDC_STRUCT_PRINT_FUNCTION_H_
