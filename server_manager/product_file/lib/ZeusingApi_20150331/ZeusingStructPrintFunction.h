#ifndef ZEUSING_FTDC_STRUCT_PRINT_FUNCTION_H_
#define ZEUSING_FTDC_STRUCT_PRINT_FUNCTION_H_

#include <iostream>
#include <sstream>

inline std::ostream& operator << (std::ostream& os, const CZeusingFtdcDisseminationField& ftdc_struct) {
  os << "ftdc_struct(CZeusingFtdcDisseminationField) ---> SequenceSeries:" << ftdc_struct.SequenceSeries
    << " SequenceNo:" << ftdc_struct.SequenceNo
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CZeusingFtdcReqUserLoginField& ftdc_struct) {
  os << "ftdc_struct(CZeusingFtdcReqUserLoginField) ---> TradingDay:" << ftdc_struct.TradingDay
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

inline std::ostream& operator << (std::ostream& os, const CZeusingFtdcRspUserLoginField& ftdc_struct) {
  os << "ftdc_struct(CZeusingFtdcRspUserLoginField) ---> TradingDay:" << ftdc_struct.TradingDay
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

inline std::ostream& operator << (std::ostream& os, const CZeusingFtdcUserLogoutField& ftdc_struct) {
  os << "ftdc_struct(CZeusingFtdcUserLogoutField) ---> BrokerID:" << ftdc_struct.BrokerID
    << " UserID:" << ftdc_struct.UserID
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CZeusingFtdcForceUserLogoutField& ftdc_struct) {
  os << "ftdc_struct(CZeusingFtdcForceUserLogoutField) ---> BrokerID:" << ftdc_struct.BrokerID
    << " UserID:" << ftdc_struct.UserID
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CZeusingFtdcReqAuthenticateField& ftdc_struct) {
  os << "ftdc_struct(CZeusingFtdcReqAuthenticateField) ---> BrokerID:" << ftdc_struct.BrokerID
    << " UserID:" << ftdc_struct.UserID
    << " UserProductInfo:" << ftdc_struct.UserProductInfo
    << " AuthCode:" << ftdc_struct.AuthCode
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CZeusingFtdcRspAuthenticateField& ftdc_struct) {
  os << "ftdc_struct(CZeusingFtdcRspAuthenticateField) ---> BrokerID:" << ftdc_struct.BrokerID
    << " UserID:" << ftdc_struct.UserID
    << " UserProductInfo:" << ftdc_struct.UserProductInfo
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CZeusingFtdcAuthenticationInfoField& ftdc_struct) {
  os << "ftdc_struct(CZeusingFtdcAuthenticationInfoField) ---> BrokerID:" << ftdc_struct.BrokerID
    << " UserID:" << ftdc_struct.UserID
    << " UserProductInfo:" << ftdc_struct.UserProductInfo
    << " AuthInfo:" << ftdc_struct.AuthInfo
    << " IsResult:" << ftdc_struct.IsResult
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CZeusingFtdcTransferHeaderField& ftdc_struct) {
  os << "ftdc_struct(CZeusingFtdcTransferHeaderField) ---> Version:" << ftdc_struct.Version
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

inline std::ostream& operator << (std::ostream& os, const CZeusingFtdcTransferBankToFutureReqField& ftdc_struct) {
  os << "ftdc_struct(CZeusingFtdcTransferBankToFutureReqField) ---> FutureAccount:" << ftdc_struct.FutureAccount
    << " FuturePwdFlag:" << ftdc_struct.FuturePwdFlag
    << " FutureAccPwd:" << ftdc_struct.FutureAccPwd
    << " TradeAmt:" << ftdc_struct.TradeAmt
    << " CustFee:" << ftdc_struct.CustFee
    << " CurrencyCode:" << ftdc_struct.CurrencyCode
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CZeusingFtdcTransferBankToFutureRspField& ftdc_struct) {
  os << "ftdc_struct(CZeusingFtdcTransferBankToFutureRspField) ---> RetCode:" << ftdc_struct.RetCode
    << " RetInfo:" << ftdc_struct.RetInfo
    << " FutureAccount:" << ftdc_struct.FutureAccount
    << " TradeAmt:" << ftdc_struct.TradeAmt
    << " CustFee:" << ftdc_struct.CustFee
    << " CurrencyCode:" << ftdc_struct.CurrencyCode
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CZeusingFtdcTransferFutureToBankReqField& ftdc_struct) {
  os << "ftdc_struct(CZeusingFtdcTransferFutureToBankReqField) ---> FutureAccount:" << ftdc_struct.FutureAccount
    << " FuturePwdFlag:" << ftdc_struct.FuturePwdFlag
    << " FutureAccPwd:" << ftdc_struct.FutureAccPwd
    << " TradeAmt:" << ftdc_struct.TradeAmt
    << " CustFee:" << ftdc_struct.CustFee
    << " CurrencyCode:" << ftdc_struct.CurrencyCode
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CZeusingFtdcTransferFutureToBankRspField& ftdc_struct) {
  os << "ftdc_struct(CZeusingFtdcTransferFutureToBankRspField) ---> RetCode:" << ftdc_struct.RetCode
    << " RetInfo:" << ftdc_struct.RetInfo
    << " FutureAccount:" << ftdc_struct.FutureAccount
    << " TradeAmt:" << ftdc_struct.TradeAmt
    << " CustFee:" << ftdc_struct.CustFee
    << " CurrencyCode:" << ftdc_struct.CurrencyCode
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CZeusingFtdcTransferQryBankReqField& ftdc_struct) {
  os << "ftdc_struct(CZeusingFtdcTransferQryBankReqField) ---> FutureAccount:" << ftdc_struct.FutureAccount
    << " FuturePwdFlag:" << ftdc_struct.FuturePwdFlag
    << " FutureAccPwd:" << ftdc_struct.FutureAccPwd
    << " CurrencyCode:" << ftdc_struct.CurrencyCode
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CZeusingFtdcTransferQryBankRspField& ftdc_struct) {
  os << "ftdc_struct(CZeusingFtdcTransferQryBankRspField) ---> RetCode:" << ftdc_struct.RetCode
    << " RetInfo:" << ftdc_struct.RetInfo
    << " FutureAccount:" << ftdc_struct.FutureAccount
    << " TradeAmt:" << ftdc_struct.TradeAmt
    << " UseAmt:" << ftdc_struct.UseAmt
    << " FetchAmt:" << ftdc_struct.FetchAmt
    << " CurrencyCode:" << ftdc_struct.CurrencyCode
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CZeusingFtdcTransferQryDetailReqField& ftdc_struct) {
  os << "ftdc_struct(CZeusingFtdcTransferQryDetailReqField) ---> FutureAccount:" << ftdc_struct.FutureAccount
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CZeusingFtdcTransferQryDetailRspField& ftdc_struct) {
  os << "ftdc_struct(CZeusingFtdcTransferQryDetailRspField) ---> TradeDate:" << ftdc_struct.TradeDate
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

inline std::ostream& operator << (std::ostream& os, const CZeusingFtdcRspInfoField& ftdc_struct) {
  if (&ftdc_struct != NULL) {
    os << "ftdc_struct(CZeusingFtdcRspInfoField) ---> ErrorID:" << ftdc_struct.ErrorID
      << " ErrorMsg:" << ftdc_struct.ErrorMsg
      << " <--- End";
  }

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CZeusingFtdcExchangeField& ftdc_struct) {
  os << "ftdc_struct(CZeusingFtdcExchangeField) ---> ExchangeID:" << ftdc_struct.ExchangeID
    << " ExchangeName:" << ftdc_struct.ExchangeName
    << " ExchangeProperty:" << ftdc_struct.ExchangeProperty
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CZeusingFtdcProductField& ftdc_struct) {
  os << "ftdc_struct(CZeusingFtdcProductField) ---> ProductID:" << ftdc_struct.ProductID
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

inline std::ostream& operator << (std::ostream& os, const CZeusingFtdcInstrumentField& ftdc_struct) {
  os << "ftdc_struct(CZeusingFtdcInstrumentField) ---> ExchangeID:" << ftdc_struct.ExchangeID
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

inline std::ostream& operator << (std::ostream& os, const CZeusingFtdcBrokerField& ftdc_struct) {
  os << "ftdc_struct(CZeusingFtdcBrokerField) ---> BrokerID:" << ftdc_struct.BrokerID
    << " BrokerAbbr:" << ftdc_struct.BrokerAbbr
    << " BrokerName:" << ftdc_struct.BrokerName
    << " IsActive:" << ftdc_struct.IsActive
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CZeusingFtdcTraderField& ftdc_struct) {
  os << "ftdc_struct(CZeusingFtdcTraderField) ---> ExchangeID:" << ftdc_struct.ExchangeID
    << " TraderID:" << ftdc_struct.TraderID
    << " ParticipantID:" << ftdc_struct.ParticipantID
    << " Password:" << "it is a secret" // ftdc_struct.Password
    << " InstallCount:" << ftdc_struct.InstallCount
    << " BrokerID:" << ftdc_struct.BrokerID
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CZeusingFtdcInvestorField& ftdc_struct) {
  os << "ftdc_struct(CZeusingFtdcInvestorField) ---> InvestorID:" << ftdc_struct.InvestorID
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

inline std::ostream& operator << (std::ostream& os, const CZeusingFtdcTradingCodeField& ftdc_struct) {
  os << "ftdc_struct(CZeusingFtdcTradingCodeField) ---> InvestorID:" << ftdc_struct.InvestorID
    << " BrokerID:" << ftdc_struct.BrokerID
    << " ExchangeID:" << ftdc_struct.ExchangeID
    << " ClientID:" << ftdc_struct.ClientID
    << " IsActive:" << ftdc_struct.IsActive
    << " ClientIDType:" << ftdc_struct.ClientIDType
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CZeusingFtdcPartBrokerField& ftdc_struct) {
  os << "ftdc_struct(CZeusingFtdcPartBrokerField) ---> BrokerID:" << ftdc_struct.BrokerID
    << " ExchangeID:" << ftdc_struct.ExchangeID
    << " ParticipantID:" << ftdc_struct.ParticipantID
    << " IsActive:" << ftdc_struct.IsActive
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CZeusingFtdcSuperUserField& ftdc_struct) {
  os << "ftdc_struct(CZeusingFtdcSuperUserField) ---> UserID:" << ftdc_struct.UserID
    << " UserName:" << ftdc_struct.UserName
    << " Password:" << "it is a secret" // ftdc_struct.Password
    << " IsActive:" << ftdc_struct.IsActive
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CZeusingFtdcSuperUserFunctionField& ftdc_struct) {
  os << "ftdc_struct(CZeusingFtdcSuperUserFunctionField) ---> UserID:" << ftdc_struct.UserID
    << " FunctionCode:" << ftdc_struct.FunctionCode
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CZeusingFtdcInvestorGroupField& ftdc_struct) {
  os << "ftdc_struct(CZeusingFtdcInvestorGroupField) ---> BrokerID:" << ftdc_struct.BrokerID
    << " InvestorGroupID:" << ftdc_struct.InvestorGroupID
    << " InvestorGroupName:" << ftdc_struct.InvestorGroupName
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CZeusingFtdcTradingAccountField& ftdc_struct) {
  os << "ftdc_struct(CZeusingFtdcTradingAccountField) ---> BrokerID:" << ftdc_struct.BrokerID
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

inline std::ostream& operator << (std::ostream& os, const CZeusingFtdcInvestorPositionField& ftdc_struct) {
  os << "ftdc_struct(CZeusingFtdcInvestorPositionField) ---> ExchangeID:" << ftdc_struct.ExchangeID
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

inline std::ostream& operator << (std::ostream& os, const CZeusingFtdcInstrumentMarginRateField& ftdc_struct) {
  os << "ftdc_struct(CZeusingFtdcInstrumentMarginRateField) ---> ExchangeID:" << ftdc_struct.ExchangeID
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

inline std::ostream& operator << (std::ostream& os, const CZeusingFtdcInstrumentCommissionRateField& ftdc_struct) {
  os << "ftdc_struct(CZeusingFtdcInstrumentCommissionRateField) ---> ExchangeID:" << ftdc_struct.ExchangeID
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

inline std::ostream& operator << (std::ostream& os, const CZeusingFtdcDepthMarketDataField& ftdc_struct) {
  os << "ftdc_struct(CZeusingFtdcDepthMarketDataField) ---> TradingDay:" << ftdc_struct.TradingDay
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

inline std::ostream& operator << (std::ostream& os, const CZeusingFtdcInstrumentTradingRightField& ftdc_struct) {
  os << "ftdc_struct(CZeusingFtdcInstrumentTradingRightField) ---> ExchangeID:" << ftdc_struct.ExchangeID
    << " InstrumentID:" << ftdc_struct.InstrumentID
    << " InvestorRange:" << ftdc_struct.InvestorRange
    << " BrokerID:" << ftdc_struct.BrokerID
    << " InvestorID:" << ftdc_struct.InvestorID
    << " TradingRight:" << ftdc_struct.TradingRight
    << " QuoteTradingRight:" << ftdc_struct.QuoteTradingRight
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CZeusingFtdcBrokerUserField& ftdc_struct) {
  os << "ftdc_struct(CZeusingFtdcBrokerUserField) ---> BrokerID:" << ftdc_struct.BrokerID
    << " UserID:" << ftdc_struct.UserID
    << " UserName:" << ftdc_struct.UserName
    << " UserType:" << ftdc_struct.UserType
    << " IsActive:" << ftdc_struct.IsActive
    << " IsUsingOTP:" << ftdc_struct.IsUsingOTP
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CZeusingFtdcBrokerUserPasswordField& ftdc_struct) {
  os << "ftdc_struct(CZeusingFtdcBrokerUserPasswordField) ---> BrokerID:" << ftdc_struct.BrokerID
    << " UserID:" << ftdc_struct.UserID
    << " Password:" << "it is a secret" // ftdc_struct.Password
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CZeusingFtdcBrokerUserFunctionField& ftdc_struct) {
  os << "ftdc_struct(CZeusingFtdcBrokerUserFunctionField) ---> BrokerID:" << ftdc_struct.BrokerID
    << " UserID:" << ftdc_struct.UserID
    << " BrokerFunctionCode:" << ftdc_struct.BrokerFunctionCode
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CZeusingFtdcTraderOfferField& ftdc_struct) {
  os << "ftdc_struct(CZeusingFtdcTraderOfferField) ---> ExchangeID:" << ftdc_struct.ExchangeID
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

inline std::ostream& operator << (std::ostream& os, const CZeusingFtdcSettlementInfoField& ftdc_struct) {
  os << "ftdc_struct(CZeusingFtdcSettlementInfoField) ---> TradingDay:" << ftdc_struct.TradingDay
    << " SettlementID:" << ftdc_struct.SettlementID
    << " BrokerID:" << ftdc_struct.BrokerID
    << " InvestorID:" << ftdc_struct.InvestorID
    << " SequenceNo:" << ftdc_struct.SequenceNo
    << " Content:" << ftdc_struct.Content
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CZeusingFtdcInstrumentMarginRateAdjustField& ftdc_struct) {
  os << "ftdc_struct(CZeusingFtdcInstrumentMarginRateAdjustField) ---> ExchangeID:" << ftdc_struct.ExchangeID
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

inline std::ostream& operator << (std::ostream& os, const CZeusingFtdcExchangeMarginRateField& ftdc_struct) {
  os << "ftdc_struct(CZeusingFtdcExchangeMarginRateField) ---> BrokerID:" << ftdc_struct.BrokerID
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

inline std::ostream& operator << (std::ostream& os, const CZeusingFtdcExchangeMarginRateAdjustField& ftdc_struct) {
  os << "ftdc_struct(CZeusingFtdcExchangeMarginRateAdjustField) ---> BrokerID:" << ftdc_struct.BrokerID
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

inline std::ostream& operator << (std::ostream& os, const CZeusingFtdcSettlementRefField& ftdc_struct) {
  os << "ftdc_struct(CZeusingFtdcSettlementRefField) ---> TradingDay:" << ftdc_struct.TradingDay
    << " SettlementID:" << ftdc_struct.SettlementID
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CZeusingFtdcCurrentTimeField& ftdc_struct) {
  os << "ftdc_struct(CZeusingFtdcCurrentTimeField) ---> CurrDate:" << ftdc_struct.CurrDate
    << " CurrTime:" << ftdc_struct.CurrTime
    << " CurrMillisec:" << ftdc_struct.CurrMillisec
    << " ActionDay:" << ftdc_struct.ActionDay
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CZeusingFtdcCommPhaseField& ftdc_struct) {
  os << "ftdc_struct(CZeusingFtdcCommPhaseField) ---> TradingDay:" << ftdc_struct.TradingDay
    << " CommPhaseNo:" << ftdc_struct.CommPhaseNo
    << " SystemID:" << ftdc_struct.SystemID
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CZeusingFtdcLoginInfoField& ftdc_struct) {
  os << "ftdc_struct(CZeusingFtdcLoginInfoField) ---> FrontID:" << ftdc_struct.FrontID
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

inline std::ostream& operator << (std::ostream& os, const CZeusingFtdcLogoutAllField& ftdc_struct) {
  os << "ftdc_struct(CZeusingFtdcLogoutAllField) ---> FrontID:" << ftdc_struct.FrontID
    << " SessionID:" << ftdc_struct.SessionID
    << " SystemName:" << ftdc_struct.SystemName
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CZeusingFtdcFrontStatusField& ftdc_struct) {
  os << "ftdc_struct(CZeusingFtdcFrontStatusField) ---> FrontID:" << ftdc_struct.FrontID
    << " LastReportDate:" << ftdc_struct.LastReportDate
    << " LastReportTime:" << ftdc_struct.LastReportTime
    << " IsActive:" << ftdc_struct.IsActive
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CZeusingFtdcUserPasswordUpdateField& ftdc_struct) {
  os << "ftdc_struct(CZeusingFtdcUserPasswordUpdateField) ---> BrokerID:" << ftdc_struct.BrokerID
    << " UserID:" << ftdc_struct.UserID
    << " OldPassword:" << "it is a secret" // ftdc_struct.OldPassword
    << " NewPassword:" << "it is a secret" // ftdc_struct.NewPassword
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CZeusingFtdcInputOrderField& ftdc_struct) {
  os << "ftdc_struct(CZeusingFtdcInputOrderField) ---> BrokerID:" << ftdc_struct.BrokerID
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

inline std::ostream& operator << (std::ostream& os, const CZeusingFtdcOrderField& ftdc_struct) {
  os << "ftdc_struct(CZeusingFtdcOrderField) ---> BrokerID:" << ftdc_struct.BrokerID
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

inline std::ostream& operator << (std::ostream& os, const CZeusingFtdcExchangeOrderField& ftdc_struct) {
  os << "ftdc_struct(CZeusingFtdcExchangeOrderField) ---> OrderPriceType:" << ftdc_struct.OrderPriceType
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

inline std::ostream& operator << (std::ostream& os, const CZeusingFtdcExchangeOrderInsertErrorField& ftdc_struct) {
  os << "ftdc_struct(CZeusingFtdcExchangeOrderInsertErrorField) ---> ExchangeID:" << ftdc_struct.ExchangeID
    << " ParticipantID:" << ftdc_struct.ParticipantID
    << " TraderID:" << ftdc_struct.TraderID
    << " InstallID:" << ftdc_struct.InstallID
    << " OrderLocalID:" << ftdc_struct.OrderLocalID
    << " ErrorID:" << ftdc_struct.ErrorID
    << " ErrorMsg:" << ftdc_struct.ErrorMsg
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CZeusingFtdcInputOrderActionField& ftdc_struct) {
  os << "ftdc_struct(CZeusingFtdcInputOrderActionField) ---> BrokerID:" << ftdc_struct.BrokerID
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

inline std::ostream& operator << (std::ostream& os, const CZeusingFtdcOrderActionField& ftdc_struct) {
  os << "ftdc_struct(CZeusingFtdcOrderActionField) ---> BrokerID:" << ftdc_struct.BrokerID
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

inline std::ostream& operator << (std::ostream& os, const CZeusingFtdcExchangeOrderActionField& ftdc_struct) {
  os << "ftdc_struct(CZeusingFtdcExchangeOrderActionField) ---> ExchangeID:" << ftdc_struct.ExchangeID
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

inline std::ostream& operator << (std::ostream& os, const CZeusingFtdcExchangeOrderActionErrorField& ftdc_struct) {
  os << "ftdc_struct(CZeusingFtdcExchangeOrderActionErrorField) ---> ExchangeID:" << ftdc_struct.ExchangeID
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

inline std::ostream& operator << (std::ostream& os, const CZeusingFtdcExchangeTradeField& ftdc_struct) {
  os << "ftdc_struct(CZeusingFtdcExchangeTradeField) ---> ExchangeID:" << ftdc_struct.ExchangeID
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

inline std::ostream& operator << (std::ostream& os, const CZeusingFtdcTradeField& ftdc_struct) {
  os << "ftdc_struct(CZeusingFtdcTradeField) ---> BrokerID:" << ftdc_struct.BrokerID
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

inline std::ostream& operator << (std::ostream& os, const CZeusingFtdcUserSessionField& ftdc_struct) {
  os << "ftdc_struct(CZeusingFtdcUserSessionField) ---> FrontID:" << ftdc_struct.FrontID
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

inline std::ostream& operator << (std::ostream& os, const CZeusingFtdcQueryMaxOrderVolumeField& ftdc_struct) {
  os << "ftdc_struct(CZeusingFtdcQueryMaxOrderVolumeField) ---> BrokerID:" << ftdc_struct.BrokerID
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

inline std::ostream& operator << (std::ostream& os, const CZeusingFtdcSettlementInfoConfirmField& ftdc_struct) {
  os << "ftdc_struct(CZeusingFtdcSettlementInfoConfirmField) ---> BrokerID:" << ftdc_struct.BrokerID
    << " InvestorID:" << ftdc_struct.InvestorID
    << " ConfirmDate:" << ftdc_struct.ConfirmDate
    << " ConfirmTime:" << ftdc_struct.ConfirmTime
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CZeusingFtdcSyncDepositField& ftdc_struct) {
  os << "ftdc_struct(CZeusingFtdcSyncDepositField) ---> DepositSeqNo:" << ftdc_struct.DepositSeqNo
    << " BrokerID:" << ftdc_struct.BrokerID
    << " InvestorID:" << ftdc_struct.InvestorID
    << " Deposit:" << ftdc_struct.Deposit
    << " IsForce:" << ftdc_struct.IsForce
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CZeusingFtdcBrokerSyncField& ftdc_struct) {
  os << "ftdc_struct(CZeusingFtdcBrokerSyncField) ---> BrokerID:" << ftdc_struct.BrokerID
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CZeusingFtdcSyncingInvestorField& ftdc_struct) {
  os << "ftdc_struct(CZeusingFtdcSyncingInvestorField) ---> InvestorID:" << ftdc_struct.InvestorID
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

inline std::ostream& operator << (std::ostream& os, const CZeusingFtdcSyncingTradingCodeField& ftdc_struct) {
  os << "ftdc_struct(CZeusingFtdcSyncingTradingCodeField) ---> InvestorID:" << ftdc_struct.InvestorID
    << " BrokerID:" << ftdc_struct.BrokerID
    << " ExchangeID:" << ftdc_struct.ExchangeID
    << " ClientID:" << ftdc_struct.ClientID
    << " IsActive:" << ftdc_struct.IsActive
    << " ClientIDType:" << ftdc_struct.ClientIDType
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CZeusingFtdcSyncingInvestorGroupField& ftdc_struct) {
  os << "ftdc_struct(CZeusingFtdcSyncingInvestorGroupField) ---> BrokerID:" << ftdc_struct.BrokerID
    << " InvestorGroupID:" << ftdc_struct.InvestorGroupID
    << " InvestorGroupName:" << ftdc_struct.InvestorGroupName
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CZeusingFtdcSyncingTradingAccountField& ftdc_struct) {
  os << "ftdc_struct(CZeusingFtdcSyncingTradingAccountField) ---> BrokerID:" << ftdc_struct.BrokerID
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

inline std::ostream& operator << (std::ostream& os, const CZeusingFtdcSyncingInvestorPositionField& ftdc_struct) {
  os << "ftdc_struct(CZeusingFtdcSyncingInvestorPositionField) ---> ExchangeID:" << ftdc_struct.ExchangeID
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

inline std::ostream& operator << (std::ostream& os, const CZeusingFtdcSyncingInstrumentMarginRateField& ftdc_struct) {
  os << "ftdc_struct(CZeusingFtdcSyncingInstrumentMarginRateField) ---> ExchangeID:" << ftdc_struct.ExchangeID
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

inline std::ostream& operator << (std::ostream& os, const CZeusingFtdcSyncingInstrumentCommissionRateField& ftdc_struct) {
  os << "ftdc_struct(CZeusingFtdcSyncingInstrumentCommissionRateField) ---> ExchangeID:" << ftdc_struct.ExchangeID
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

inline std::ostream& operator << (std::ostream& os, const CZeusingFtdcSyncingInstrumentTradingRightField& ftdc_struct) {
  os << "ftdc_struct(CZeusingFtdcSyncingInstrumentTradingRightField) ---> ExchangeID:" << ftdc_struct.ExchangeID
    << " InstrumentID:" << ftdc_struct.InstrumentID
    << " InvestorRange:" << ftdc_struct.InvestorRange
    << " BrokerID:" << ftdc_struct.BrokerID
    << " InvestorID:" << ftdc_struct.InvestorID
    << " TradingRight:" << ftdc_struct.TradingRight
    << " QuoteTradingRight:" << ftdc_struct.QuoteTradingRight
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CZeusingFtdcQryOrderField& ftdc_struct) {
  os << "ftdc_struct(CZeusingFtdcQryOrderField) ---> BrokerID:" << ftdc_struct.BrokerID
    << " InvestorID:" << ftdc_struct.InvestorID
    << " InstrumentID:" << ftdc_struct.InstrumentID
    << " ExchangeID:" << ftdc_struct.ExchangeID
    << " OrderSysID:" << ftdc_struct.OrderSysID
    << " InsertTimeStart:" << ftdc_struct.InsertTimeStart
    << " InsertTimeEnd:" << ftdc_struct.InsertTimeEnd
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CZeusingFtdcQryTradeField& ftdc_struct) {
  os << "ftdc_struct(CZeusingFtdcQryTradeField) ---> BrokerID:" << ftdc_struct.BrokerID
    << " InvestorID:" << ftdc_struct.InvestorID
    << " InstrumentID:" << ftdc_struct.InstrumentID
    << " ExchangeID:" << ftdc_struct.ExchangeID
    << " TradeID:" << ftdc_struct.TradeID
    << " TradeTimeStart:" << ftdc_struct.TradeTimeStart
    << " TradeTimeEnd:" << ftdc_struct.TradeTimeEnd
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CZeusingFtdcQryInvestorPositionField& ftdc_struct) {
  os << "ftdc_struct(CZeusingFtdcQryInvestorPositionField) ---> BrokerID:" << ftdc_struct.BrokerID
    << " InvestorID:" << ftdc_struct.InvestorID
    << " ExchangeID:" << ftdc_struct.ExchangeID
    << " InstrumentID:" << ftdc_struct.InstrumentID
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CZeusingFtdcQryTradingAccountField& ftdc_struct) {
  os << "ftdc_struct(CZeusingFtdcQryTradingAccountField) ---> BrokerID:" << ftdc_struct.BrokerID
    << " InvestorID:" << ftdc_struct.InvestorID
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CZeusingFtdcQryInvestorField& ftdc_struct) {
  os << "ftdc_struct(CZeusingFtdcQryInvestorField) ---> BrokerID:" << ftdc_struct.BrokerID
    << " InvestorID:" << ftdc_struct.InvestorID
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CZeusingFtdcQryTradingCodeField& ftdc_struct) {
  os << "ftdc_struct(CZeusingFtdcQryTradingCodeField) ---> BrokerID:" << ftdc_struct.BrokerID
    << " InvestorID:" << ftdc_struct.InvestorID
    << " ExchangeID:" << ftdc_struct.ExchangeID
    << " ClientID:" << ftdc_struct.ClientID
    << " ClientIDType:" << ftdc_struct.ClientIDType
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CZeusingFtdcQryInvestorGroupField& ftdc_struct) {
  os << "ftdc_struct(CZeusingFtdcQryInvestorGroupField) ---> BrokerID:" << ftdc_struct.BrokerID
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CZeusingFtdcQryInstrumentMarginRateField& ftdc_struct) {
  os << "ftdc_struct(CZeusingFtdcQryInstrumentMarginRateField) ---> BrokerID:" << ftdc_struct.BrokerID
    << " InvestorID:" << ftdc_struct.InvestorID
    << " InstrumentID:" << ftdc_struct.InstrumentID
    << " ExchangeID:" << ftdc_struct.ExchangeID
    << " HedgeFlag:" << ftdc_struct.HedgeFlag
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CZeusingFtdcQryInstrumentCommissionRateField& ftdc_struct) {
  os << "ftdc_struct(CZeusingFtdcQryInstrumentCommissionRateField) ---> BrokerID:" << ftdc_struct.BrokerID
    << " InvestorID:" << ftdc_struct.InvestorID
    << " ExchangeID:" << ftdc_struct.ExchangeID
    << " InstrumentID:" << ftdc_struct.InstrumentID
    << " HedgeFlag:" << ftdc_struct.HedgeFlag
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CZeusingFtdcQryInstrumentTradingRightField& ftdc_struct) {
  os << "ftdc_struct(CZeusingFtdcQryInstrumentTradingRightField) ---> BrokerID:" << ftdc_struct.BrokerID
    << " InvestorID:" << ftdc_struct.InvestorID
    << " ExchangeID:" << ftdc_struct.ExchangeID
    << " InstrumentID:" << ftdc_struct.InstrumentID
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CZeusingFtdcQryBrokerField& ftdc_struct) {
  os << "ftdc_struct(CZeusingFtdcQryBrokerField) ---> BrokerID:" << ftdc_struct.BrokerID
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CZeusingFtdcQryTraderField& ftdc_struct) {
  os << "ftdc_struct(CZeusingFtdcQryTraderField) ---> ExchangeID:" << ftdc_struct.ExchangeID
    << " ParticipantID:" << ftdc_struct.ParticipantID
    << " TraderID:" << ftdc_struct.TraderID
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CZeusingFtdcQryPartBrokerField& ftdc_struct) {
  os << "ftdc_struct(CZeusingFtdcQryPartBrokerField) ---> ExchangeID:" << ftdc_struct.ExchangeID
    << " BrokerID:" << ftdc_struct.BrokerID
    << " ParticipantID:" << ftdc_struct.ParticipantID
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CZeusingFtdcQrySuperUserFunctionField& ftdc_struct) {
  os << "ftdc_struct(CZeusingFtdcQrySuperUserFunctionField) ---> UserID:" << ftdc_struct.UserID
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CZeusingFtdcQryUserSessionField& ftdc_struct) {
  os << "ftdc_struct(CZeusingFtdcQryUserSessionField) ---> FrontID:" << ftdc_struct.FrontID
    << " SessionID:" << ftdc_struct.SessionID
    << " BrokerID:" << ftdc_struct.BrokerID
    << " UserID:" << ftdc_struct.UserID
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CZeusingFtdcQryFrontStatusField& ftdc_struct) {
  os << "ftdc_struct(CZeusingFtdcQryFrontStatusField) ---> FrontID:" << ftdc_struct.FrontID
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CZeusingFtdcQryExchangeOrderField& ftdc_struct) {
  os << "ftdc_struct(CZeusingFtdcQryExchangeOrderField) ---> ParticipantID:" << ftdc_struct.ParticipantID
    << " ClientID:" << ftdc_struct.ClientID
    << " ExchangeInstID:" << ftdc_struct.ExchangeInstID
    << " ExchangeID:" << ftdc_struct.ExchangeID
    << " TraderID:" << ftdc_struct.TraderID
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CZeusingFtdcQryOrderActionField& ftdc_struct) {
  os << "ftdc_struct(CZeusingFtdcQryOrderActionField) ---> BrokerID:" << ftdc_struct.BrokerID
    << " InvestorID:" << ftdc_struct.InvestorID
    << " ExchangeID:" << ftdc_struct.ExchangeID
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CZeusingFtdcQryExchangeOrderActionField& ftdc_struct) {
  os << "ftdc_struct(CZeusingFtdcQryExchangeOrderActionField) ---> ParticipantID:" << ftdc_struct.ParticipantID
    << " ClientID:" << ftdc_struct.ClientID
    << " ExchangeID:" << ftdc_struct.ExchangeID
    << " TraderID:" << ftdc_struct.TraderID
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CZeusingFtdcQrySuperUserField& ftdc_struct) {
  os << "ftdc_struct(CZeusingFtdcQrySuperUserField) ---> UserID:" << ftdc_struct.UserID
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CZeusingFtdcQryExchangeField& ftdc_struct) {
  os << "ftdc_struct(CZeusingFtdcQryExchangeField) ---> ExchangeID:" << ftdc_struct.ExchangeID
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CZeusingFtdcQryProductField& ftdc_struct) {
  os << "ftdc_struct(CZeusingFtdcQryProductField) ---> ProductID:" << ftdc_struct.ProductID
    << " ProductClass:" << ftdc_struct.ProductClass
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CZeusingFtdcQryInstrumentField& ftdc_struct) {
  os << "ftdc_struct(CZeusingFtdcQryInstrumentField) ---> InstrumentID:" << ftdc_struct.InstrumentID
    << " ExchangeID:" << ftdc_struct.ExchangeID
    << " ExchangeInstID:" << ftdc_struct.ExchangeInstID
    << " ProductID:" << ftdc_struct.ProductID
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CZeusingFtdcQryDepthMarketDataField& ftdc_struct) {
  os << "ftdc_struct(CZeusingFtdcQryDepthMarketDataField) ---> ExchangeID:" << ftdc_struct.ExchangeID
    << " InstrumentID:" << ftdc_struct.InstrumentID
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CZeusingFtdcQryBrokerUserField& ftdc_struct) {
  os << "ftdc_struct(CZeusingFtdcQryBrokerUserField) ---> BrokerID:" << ftdc_struct.BrokerID
    << " UserID:" << ftdc_struct.UserID
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CZeusingFtdcQryBrokerUserFunctionField& ftdc_struct) {
  os << "ftdc_struct(CZeusingFtdcQryBrokerUserFunctionField) ---> BrokerID:" << ftdc_struct.BrokerID
    << " UserID:" << ftdc_struct.UserID
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CZeusingFtdcQryTraderOfferField& ftdc_struct) {
  os << "ftdc_struct(CZeusingFtdcQryTraderOfferField) ---> ExchangeID:" << ftdc_struct.ExchangeID
    << " ParticipantID:" << ftdc_struct.ParticipantID
    << " TraderID:" << ftdc_struct.TraderID
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CZeusingFtdcQrySyncDepositField& ftdc_struct) {
  os << "ftdc_struct(CZeusingFtdcQrySyncDepositField) ---> BrokerID:" << ftdc_struct.BrokerID
    << " DepositSeqNo:" << ftdc_struct.DepositSeqNo
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CZeusingFtdcQrySettlementInfoField& ftdc_struct) {
  os << "ftdc_struct(CZeusingFtdcQrySettlementInfoField) ---> BrokerID:" << ftdc_struct.BrokerID
    << " InvestorID:" << ftdc_struct.InvestorID
    << " TradingDay:" << ftdc_struct.TradingDay
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CZeusingFtdcQryHisOrderField& ftdc_struct) {
  os << "ftdc_struct(CZeusingFtdcQryHisOrderField) ---> BrokerID:" << ftdc_struct.BrokerID
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

inline std::ostream& operator << (std::ostream& os, const CZeusingFtdcOptionInstrMiniMarginField& ftdc_struct) {
  os << "ftdc_struct(CZeusingFtdcOptionInstrMiniMarginField) ---> ExchangeID:" << ftdc_struct.ExchangeID
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

inline std::ostream& operator << (std::ostream& os, const CZeusingFtdcBrokerExchOptMarginAlgoField& ftdc_struct) {
  os << "ftdc_struct(CZeusingFtdcBrokerExchOptMarginAlgoField) ---> BrokerID:" << ftdc_struct.BrokerID
    << " ExchangeID:" << ftdc_struct.ExchangeID
    << " GuaranteeRatio:" << ftdc_struct.GuaranteeRatio
    << " OutRatio:" << ftdc_struct.OutRatio
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CZeusingFtdcOptionInstrMarginAdjustField& ftdc_struct) {
  os << "ftdc_struct(CZeusingFtdcOptionInstrMarginAdjustField) ---> ExchangeID:" << ftdc_struct.ExchangeID
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

inline std::ostream& operator << (std::ostream& os, const CZeusingFtdcOptionInstrCommRateField& ftdc_struct) {
  os << "ftdc_struct(CZeusingFtdcOptionInstrCommRateField) ---> ExchangeID:" << ftdc_struct.ExchangeID
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

inline std::ostream& operator << (std::ostream& os, const CZeusingFtdcOptionInstrTradeCostField& ftdc_struct) {
  os << "ftdc_struct(CZeusingFtdcOptionInstrTradeCostField) ---> BrokerID:" << ftdc_struct.BrokerID
    << " InvestorID:" << ftdc_struct.InvestorID
    << " ExchangeID:" << ftdc_struct.ExchangeID
    << " InstrumentID:" << ftdc_struct.InstrumentID
    << " HedgeFlag:" << ftdc_struct.HedgeFlag
    << " Margin:" << ftdc_struct.Margin
    << " Royalty:" << ftdc_struct.Royalty
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CZeusingFtdcQryOptionInstrTradeCostField& ftdc_struct) {
  os << "ftdc_struct(CZeusingFtdcQryOptionInstrTradeCostField) ---> BrokerID:" << ftdc_struct.BrokerID
    << " InvestorID:" << ftdc_struct.InvestorID
    << " ExchangeID:" << ftdc_struct.ExchangeID
    << " InstrumentID:" << ftdc_struct.InstrumentID
    << " HedgeFlag:" << ftdc_struct.HedgeFlag
    << " InputPrice:" << ftdc_struct.InputPrice
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CZeusingFtdcQryOptionInstrCommRateField& ftdc_struct) {
  os << "ftdc_struct(CZeusingFtdcQryOptionInstrCommRateField) ---> BrokerID:" << ftdc_struct.BrokerID
    << " InvestorID:" << ftdc_struct.InvestorID
    << " ExchangeID:" << ftdc_struct.ExchangeID
    << " InstrumentID:" << ftdc_struct.InstrumentID
    << " HedgeFlag:" << ftdc_struct.HedgeFlag
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CZeusingFtdcIndexPriceField& ftdc_struct) {
  os << "ftdc_struct(CZeusingFtdcIndexPriceField) ---> BrokerID:" << ftdc_struct.BrokerID
    << " ExchangeID:" << ftdc_struct.ExchangeID
    << " InstrumentID:" << ftdc_struct.InstrumentID
    << " ClosePrice:" << ftdc_struct.ClosePrice
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CZeusingFtdcInputExecOrderField& ftdc_struct) {
  os << "ftdc_struct(CZeusingFtdcInputExecOrderField) ---> BrokerID:" << ftdc_struct.BrokerID
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

inline std::ostream& operator << (std::ostream& os, const CZeusingFtdcInputExecOrderActionField& ftdc_struct) {
  os << "ftdc_struct(CZeusingFtdcInputExecOrderActionField) ---> BrokerID:" << ftdc_struct.BrokerID
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

inline std::ostream& operator << (std::ostream& os, const CZeusingFtdcExecOrderField& ftdc_struct) {
  os << "ftdc_struct(CZeusingFtdcExecOrderField) ---> BrokerID:" << ftdc_struct.BrokerID
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

inline std::ostream& operator << (std::ostream& os, const CZeusingFtdcExecOrderActionField& ftdc_struct) {
  os << "ftdc_struct(CZeusingFtdcExecOrderActionField) ---> BrokerID:" << ftdc_struct.BrokerID
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

inline std::ostream& operator << (std::ostream& os, const CZeusingFtdcQryExecOrderField& ftdc_struct) {
  os << "ftdc_struct(CZeusingFtdcQryExecOrderField) ---> BrokerID:" << ftdc_struct.BrokerID
    << " InvestorID:" << ftdc_struct.InvestorID
    << " InstrumentID:" << ftdc_struct.InstrumentID
    << " ExchangeID:" << ftdc_struct.ExchangeID
    << " ExecOrderSysID:" << ftdc_struct.ExecOrderSysID
    << " InsertTimeStart:" << ftdc_struct.InsertTimeStart
    << " InsertTimeEnd:" << ftdc_struct.InsertTimeEnd
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CZeusingFtdcExchangeExecOrderField& ftdc_struct) {
  os << "ftdc_struct(CZeusingFtdcExchangeExecOrderField) ---> Volume:" << ftdc_struct.Volume
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

inline std::ostream& operator << (std::ostream& os, const CZeusingFtdcQryExchangeExecOrderField& ftdc_struct) {
  os << "ftdc_struct(CZeusingFtdcQryExchangeExecOrderField) ---> ParticipantID:" << ftdc_struct.ParticipantID
    << " ClientID:" << ftdc_struct.ClientID
    << " ExchangeInstID:" << ftdc_struct.ExchangeInstID
    << " ExchangeID:" << ftdc_struct.ExchangeID
    << " TraderID:" << ftdc_struct.TraderID
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CZeusingFtdcQryExecOrderActionField& ftdc_struct) {
  os << "ftdc_struct(CZeusingFtdcQryExecOrderActionField) ---> BrokerID:" << ftdc_struct.BrokerID
    << " InvestorID:" << ftdc_struct.InvestorID
    << " ExchangeID:" << ftdc_struct.ExchangeID
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CZeusingFtdcExchangeExecOrderActionField& ftdc_struct) {
  os << "ftdc_struct(CZeusingFtdcExchangeExecOrderActionField) ---> BrokerID:" << ftdc_struct.BrokerID
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

inline std::ostream& operator << (std::ostream& os, const CZeusingFtdcQryExchangeExecOrderActionField& ftdc_struct) {
  os << "ftdc_struct(CZeusingFtdcQryExchangeExecOrderActionField) ---> ParticipantID:" << ftdc_struct.ParticipantID
    << " ClientID:" << ftdc_struct.ClientID
    << " ExchangeID:" << ftdc_struct.ExchangeID
    << " TraderID:" << ftdc_struct.TraderID
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CZeusingFtdcErrExecOrderField& ftdc_struct) {
  os << "ftdc_struct(CZeusingFtdcErrExecOrderField) ---> BrokerID:" << ftdc_struct.BrokerID
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

inline std::ostream& operator << (std::ostream& os, const CZeusingFtdcQryErrExecOrderField& ftdc_struct) {
  os << "ftdc_struct(CZeusingFtdcQryErrExecOrderField) ---> BrokerID:" << ftdc_struct.BrokerID
    << " InvestorID:" << ftdc_struct.InvestorID
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CZeusingFtdcErrExecOrderActionField& ftdc_struct) {
  os << "ftdc_struct(CZeusingFtdcErrExecOrderActionField) ---> BrokerID:" << ftdc_struct.BrokerID
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

inline std::ostream& operator << (std::ostream& os, const CZeusingFtdcQryErrExecOrderActionField& ftdc_struct) {
  os << "ftdc_struct(CZeusingFtdcQryErrExecOrderActionField) ---> BrokerID:" << ftdc_struct.BrokerID
    << " InvestorID:" << ftdc_struct.InvestorID
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CZeusingFtdcInputQuoteField& ftdc_struct) {
  os << "ftdc_struct(CZeusingFtdcInputQuoteField) ---> BrokerID:" << ftdc_struct.BrokerID
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

inline std::ostream& operator << (std::ostream& os, const CZeusingFtdcInputQuoteActionField& ftdc_struct) {
  os << "ftdc_struct(CZeusingFtdcInputQuoteActionField) ---> BrokerID:" << ftdc_struct.BrokerID
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

inline std::ostream& operator << (std::ostream& os, const CZeusingFtdcQryQuoteField& ftdc_struct) {
  os << "ftdc_struct(CZeusingFtdcQryQuoteField) ---> BrokerID:" << ftdc_struct.BrokerID
    << " InvestorID:" << ftdc_struct.InvestorID
    << " InstrumentID:" << ftdc_struct.InstrumentID
    << " ExchangeID:" << ftdc_struct.ExchangeID
    << " QuoteSysID:" << ftdc_struct.QuoteSysID
    << " InsertTimeStart:" << ftdc_struct.InsertTimeStart
    << " InsertTimeEnd:" << ftdc_struct.InsertTimeEnd
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CZeusingFtdcQuoteField& ftdc_struct) {
  os << "ftdc_struct(CZeusingFtdcQuoteField) ---> BrokerID:" << ftdc_struct.BrokerID
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

inline std::ostream& operator << (std::ostream& os, const CZeusingFtdcInternalTransferField& ftdc_struct) {
  os << "ftdc_struct(CZeusingFtdcInternalTransferField) ---> DepositSeqNo:" << ftdc_struct.DepositSeqNo
    << " BrokerID:" << ftdc_struct.BrokerID
    << " InvestorID:" << ftdc_struct.InvestorID
    << " InInvestorID:" << ftdc_struct.InInvestorID
    << " Deposit:" << ftdc_struct.Deposit
    << " IsForce:" << ftdc_struct.IsForce
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CZeusingFtdcQuoteActionField& ftdc_struct) {
  os << "ftdc_struct(CZeusingFtdcQuoteActionField) ---> BrokerID:" << ftdc_struct.BrokerID
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

inline std::ostream& operator << (std::ostream& os, const CZeusingFtdcQryQuoteActionField& ftdc_struct) {
  os << "ftdc_struct(CZeusingFtdcQryQuoteActionField) ---> BrokerID:" << ftdc_struct.BrokerID
    << " InvestorID:" << ftdc_struct.InvestorID
    << " ExchangeID:" << ftdc_struct.ExchangeID
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CZeusingFtdcInvestorProductGroupMarginField& ftdc_struct) {
  os << "ftdc_struct(CZeusingFtdcInvestorProductGroupMarginField) ---> BrokerID:" << ftdc_struct.BrokerID
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

inline std::ostream& operator << (std::ostream& os, const CZeusingFtdcQryInvestorProductGroupMarginField& ftdc_struct) {
  os << "ftdc_struct(CZeusingFtdcQryInvestorProductGroupMarginField) ---> BrokerID:" << ftdc_struct.BrokerID
    << " InvestorID:" << ftdc_struct.InvestorID
    << " ProductGroupID:" << ftdc_struct.ProductGroupID
    << " HedgeFlag:" << ftdc_struct.HedgeFlag
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CZeusingFtdcMarketDataField& ftdc_struct) {
  os << "ftdc_struct(CZeusingFtdcMarketDataField) ---> TradingDay:" << ftdc_struct.TradingDay
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

inline std::ostream& operator << (std::ostream& os, const CZeusingFtdcMarketDataBaseField& ftdc_struct) {
  os << "ftdc_struct(CZeusingFtdcMarketDataBaseField) ---> TradingDay:" << ftdc_struct.TradingDay
    << " PreSettlementPrice:" << ftdc_struct.PreSettlementPrice
    << " PreClosePrice:" << ftdc_struct.PreClosePrice
    << " PreOpenInterest:" << ftdc_struct.PreOpenInterest
    << " PreDelta:" << ftdc_struct.PreDelta
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CZeusingFtdcMarketDataStaticField& ftdc_struct) {
  os << "ftdc_struct(CZeusingFtdcMarketDataStaticField) ---> OpenPrice:" << ftdc_struct.OpenPrice
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

inline std::ostream& operator << (std::ostream& os, const CZeusingFtdcMarketDataLastMatchField& ftdc_struct) {
  os << "ftdc_struct(CZeusingFtdcMarketDataLastMatchField) ---> LastPrice:" << ftdc_struct.LastPrice
    << " Volume:" << ftdc_struct.Volume
    << " Turnover:" << ftdc_struct.Turnover
    << " OpenInterest:" << ftdc_struct.OpenInterest
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CZeusingFtdcMarketDataBestPriceField& ftdc_struct) {
  os << "ftdc_struct(CZeusingFtdcMarketDataBestPriceField) ---> BidPrice1:" << ftdc_struct.BidPrice1
    << " BidVolume1:" << ftdc_struct.BidVolume1
    << " AskPrice1:" << ftdc_struct.AskPrice1
    << " AskVolume1:" << ftdc_struct.AskVolume1
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CZeusingFtdcMarketDataBid23Field& ftdc_struct) {
  os << "ftdc_struct(CZeusingFtdcMarketDataBid23Field) ---> BidPrice2:" << ftdc_struct.BidPrice2
    << " BidVolume2:" << ftdc_struct.BidVolume2
    << " BidPrice3:" << ftdc_struct.BidPrice3
    << " BidVolume3:" << ftdc_struct.BidVolume3
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CZeusingFtdcMarketDataAsk23Field& ftdc_struct) {
  os << "ftdc_struct(CZeusingFtdcMarketDataAsk23Field) ---> AskPrice2:" << ftdc_struct.AskPrice2
    << " AskVolume2:" << ftdc_struct.AskVolume2
    << " AskPrice3:" << ftdc_struct.AskPrice3
    << " AskVolume3:" << ftdc_struct.AskVolume3
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CZeusingFtdcMarketDataBid45Field& ftdc_struct) {
  os << "ftdc_struct(CZeusingFtdcMarketDataBid45Field) ---> BidPrice4:" << ftdc_struct.BidPrice4
    << " BidVolume4:" << ftdc_struct.BidVolume4
    << " BidPrice5:" << ftdc_struct.BidPrice5
    << " BidVolume5:" << ftdc_struct.BidVolume5
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CZeusingFtdcMarketDataAsk45Field& ftdc_struct) {
  os << "ftdc_struct(CZeusingFtdcMarketDataAsk45Field) ---> AskPrice4:" << ftdc_struct.AskPrice4
    << " AskVolume4:" << ftdc_struct.AskVolume4
    << " AskPrice5:" << ftdc_struct.AskPrice5
    << " AskVolume5:" << ftdc_struct.AskVolume5
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CZeusingFtdcMarketDataUpdateTimeField& ftdc_struct) {
  os << "ftdc_struct(CZeusingFtdcMarketDataUpdateTimeField) ---> InstrumentID:" << ftdc_struct.InstrumentID
    << " UpdateTime:" << ftdc_struct.UpdateTime
    << " UpdateMillisec:" << ftdc_struct.UpdateMillisec
    << " ActionDay:" << ftdc_struct.ActionDay
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CZeusingFtdcMarketDataExchangeField& ftdc_struct) {
  os << "ftdc_struct(CZeusingFtdcMarketDataExchangeField) ---> ExchangeID:" << ftdc_struct.ExchangeID
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CZeusingFtdcSpecificInstrumentField& ftdc_struct) {
  os << "ftdc_struct(CZeusingFtdcSpecificInstrumentField) ---> InstrumentID:" << ftdc_struct.InstrumentID
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CZeusingFtdcInstrumentStatusField& ftdc_struct) {
  os << "ftdc_struct(CZeusingFtdcInstrumentStatusField) ---> ExchangeID:" << ftdc_struct.ExchangeID
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

inline std::ostream& operator << (std::ostream& os, const CZeusingFtdcQryInstrumentStatusField& ftdc_struct) {
  os << "ftdc_struct(CZeusingFtdcQryInstrumentStatusField) ---> ExchangeID:" << ftdc_struct.ExchangeID
    << " ExchangeInstID:" << ftdc_struct.ExchangeInstID
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CZeusingFtdcInvestorAccountField& ftdc_struct) {
  os << "ftdc_struct(CZeusingFtdcInvestorAccountField) ---> BrokerID:" << ftdc_struct.BrokerID
    << " InvestorID:" << ftdc_struct.InvestorID
    << " AccountID:" << ftdc_struct.AccountID
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CZeusingFtdcPositionProfitAlgorithmField& ftdc_struct) {
  os << "ftdc_struct(CZeusingFtdcPositionProfitAlgorithmField) ---> BrokerID:" << ftdc_struct.BrokerID
    << " AccountID:" << ftdc_struct.AccountID
    << " Algorithm:" << ftdc_struct.Algorithm
    << " Memo:" << ftdc_struct.Memo
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CZeusingFtdcDiscountField& ftdc_struct) {
  os << "ftdc_struct(CZeusingFtdcDiscountField) ---> BrokerID:" << ftdc_struct.BrokerID
    << " InvestorRange:" << ftdc_struct.InvestorRange
    << " InvestorID:" << ftdc_struct.InvestorID
    << " Discount:" << ftdc_struct.Discount
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CZeusingFtdcQryTransferBankField& ftdc_struct) {
  os << "ftdc_struct(CZeusingFtdcQryTransferBankField) ---> BankID:" << ftdc_struct.BankID
    << " BankBrchID:" << ftdc_struct.BankBrchID
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CZeusingFtdcTransferBankField& ftdc_struct) {
  os << "ftdc_struct(CZeusingFtdcTransferBankField) ---> BankID:" << ftdc_struct.BankID
    << " BankBrchID:" << ftdc_struct.BankBrchID
    << " BankName:" << ftdc_struct.BankName
    << " IsActive:" << ftdc_struct.IsActive
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CZeusingFtdcQryInvestorPositionDetailField& ftdc_struct) {
  os << "ftdc_struct(CZeusingFtdcQryInvestorPositionDetailField) ---> BrokerID:" << ftdc_struct.BrokerID
    << " InvestorID:" << ftdc_struct.InvestorID
    << " ExchangeID:" << ftdc_struct.ExchangeID
    << " InstrumentID:" << ftdc_struct.InstrumentID
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CZeusingFtdcInvestorPositionDetailField& ftdc_struct) {
  os << "ftdc_struct(CZeusingFtdcInvestorPositionDetailField) ---> InstrumentID:" << ftdc_struct.InstrumentID
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

inline std::ostream& operator << (std::ostream& os, const CZeusingFtdcTradingAccountPasswordField& ftdc_struct) {
  os << "ftdc_struct(CZeusingFtdcTradingAccountPasswordField) ---> BrokerID:" << ftdc_struct.BrokerID
    << " AccountID:" << ftdc_struct.AccountID
    << " Password:" << "it is a secret" // ftdc_struct.Password
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CZeusingFtdcMDTraderOfferField& ftdc_struct) {
  os << "ftdc_struct(CZeusingFtdcMDTraderOfferField) ---> ExchangeID:" << ftdc_struct.ExchangeID
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

inline std::ostream& operator << (std::ostream& os, const CZeusingFtdcQryMDTraderOfferField& ftdc_struct) {
  os << "ftdc_struct(CZeusingFtdcQryMDTraderOfferField) ---> ExchangeID:" << ftdc_struct.ExchangeID
    << " ParticipantID:" << ftdc_struct.ParticipantID
    << " TraderID:" << ftdc_struct.TraderID
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CZeusingFtdcQryNoticeField& ftdc_struct) {
  os << "ftdc_struct(CZeusingFtdcQryNoticeField) ---> BrokerID:" << ftdc_struct.BrokerID
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CZeusingFtdcNoticeField& ftdc_struct) {
  os << "ftdc_struct(CZeusingFtdcNoticeField) ---> BrokerID:" << ftdc_struct.BrokerID
    << " Content:" << ftdc_struct.Content
    << " SequenceLabel:" << ftdc_struct.SequenceLabel
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CZeusingFtdcUserRightField& ftdc_struct) {
  os << "ftdc_struct(CZeusingFtdcUserRightField) ---> BrokerID:" << ftdc_struct.BrokerID
    << " UserID:" << ftdc_struct.UserID
    << " UserRightType:" << ftdc_struct.UserRightType
    << " IsForbidden:" << ftdc_struct.IsForbidden
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CZeusingFtdcQrySettlementInfoConfirmField& ftdc_struct) {
  os << "ftdc_struct(CZeusingFtdcQrySettlementInfoConfirmField) ---> BrokerID:" << ftdc_struct.BrokerID
    << " InvestorID:" << ftdc_struct.InvestorID
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CZeusingFtdcLoadSettlementInfoField& ftdc_struct) {
  os << "ftdc_struct(CZeusingFtdcLoadSettlementInfoField) ---> BrokerID:" << ftdc_struct.BrokerID
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CZeusingFtdcBrokerWithdrawAlgorithmField& ftdc_struct) {
  os << "ftdc_struct(CZeusingFtdcBrokerWithdrawAlgorithmField) ---> BrokerID:" << ftdc_struct.BrokerID
    << " WithdrawAlgorithm:" << ftdc_struct.WithdrawAlgorithm
    << " UsingRatio:" << ftdc_struct.UsingRatio
    << " IncludeCloseProfit:" << ftdc_struct.IncludeCloseProfit
    << " AllWithoutTrade:" << ftdc_struct.AllWithoutTrade
    << " AvailIncludeCloseProfit:" << ftdc_struct.AvailIncludeCloseProfit
    << " IsBrokerUserEvent:" << ftdc_struct.IsBrokerUserEvent
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CZeusingFtdcTradingAccountPasswordUpdateV1Field& ftdc_struct) {
  os << "ftdc_struct(CZeusingFtdcTradingAccountPasswordUpdateV1Field) ---> BrokerID:" << ftdc_struct.BrokerID
    << " InvestorID:" << ftdc_struct.InvestorID
    << " OldPassword:" << "it is a secret" // ftdc_struct.OldPassword
    << " NewPassword:" << "it is a secret" // ftdc_struct.NewPassword
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CZeusingFtdcTradingAccountPasswordUpdateField& ftdc_struct) {
  os << "ftdc_struct(CZeusingFtdcTradingAccountPasswordUpdateField) ---> BrokerID:" << ftdc_struct.BrokerID
    << " AccountID:" << ftdc_struct.AccountID
    << " OldPassword:" << "it is a secret" // ftdc_struct.OldPassword
    << " NewPassword:" << "it is a secret" // ftdc_struct.NewPassword
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CZeusingFtdcQryCombinationLegField& ftdc_struct) {
  os << "ftdc_struct(CZeusingFtdcQryCombinationLegField) ---> ExchangeID:" << ftdc_struct.ExchangeID
    << " CombInstrumentID:" << ftdc_struct.CombInstrumentID
    << " LegID:" << ftdc_struct.LegID
    << " LegInstrumentID:" << ftdc_struct.LegInstrumentID
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CZeusingFtdcQrySyncStatusField& ftdc_struct) {
  os << "ftdc_struct(CZeusingFtdcQrySyncStatusField) ---> TradingDay:" << ftdc_struct.TradingDay
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CZeusingFtdcCombinationLegField& ftdc_struct) {
  os << "ftdc_struct(CZeusingFtdcCombinationLegField) ---> ExchangeID:" << ftdc_struct.ExchangeID
    << " CombInstrumentID:" << ftdc_struct.CombInstrumentID
    << " LegID:" << ftdc_struct.LegID
    << " LegInstrumentID:" << ftdc_struct.LegInstrumentID
    << " Direction:" << ftdc_struct.Direction
    << " LegMultiple:" << ftdc_struct.LegMultiple
    << " ImplyLevel:" << ftdc_struct.ImplyLevel
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CZeusingFtdcSyncStatusField& ftdc_struct) {
  os << "ftdc_struct(CZeusingFtdcSyncStatusField) ---> TradingDay:" << ftdc_struct.TradingDay
    << " DataSyncStatus:" << ftdc_struct.DataSyncStatus
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CZeusingFtdcQryLinkManField& ftdc_struct) {
  os << "ftdc_struct(CZeusingFtdcQryLinkManField) ---> BrokerID:" << ftdc_struct.BrokerID
    << " InvestorID:" << ftdc_struct.InvestorID
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CZeusingFtdcLinkManField& ftdc_struct) {
  os << "ftdc_struct(CZeusingFtdcLinkManField) ---> BrokerID:" << ftdc_struct.BrokerID
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

inline std::ostream& operator << (std::ostream& os, const CZeusingFtdcQryBrokerUserEventField& ftdc_struct) {
  os << "ftdc_struct(CZeusingFtdcQryBrokerUserEventField) ---> BrokerID:" << ftdc_struct.BrokerID
    << " UserID:" << ftdc_struct.UserID
    << " UserEventType:" << ftdc_struct.UserEventType
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CZeusingFtdcBrokerUserEventField& ftdc_struct) {
  os << "ftdc_struct(CZeusingFtdcBrokerUserEventField) ---> BrokerID:" << ftdc_struct.BrokerID
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

inline std::ostream& operator << (std::ostream& os, const CZeusingFtdcQryContractBankField& ftdc_struct) {
  os << "ftdc_struct(CZeusingFtdcQryContractBankField) ---> BrokerID:" << ftdc_struct.BrokerID
    << " BankID:" << ftdc_struct.BankID
    << " BankBrchID:" << ftdc_struct.BankBrchID
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CZeusingFtdcContractBankField& ftdc_struct) {
  os << "ftdc_struct(CZeusingFtdcContractBankField) ---> BrokerID:" << ftdc_struct.BrokerID
    << " BankID:" << ftdc_struct.BankID
    << " BankBrchID:" << ftdc_struct.BankBrchID
    << " BankName:" << ftdc_struct.BankName
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CZeusingFtdcInvestorPositionCombineDetailField& ftdc_struct) {
  os << "ftdc_struct(CZeusingFtdcInvestorPositionCombineDetailField) ---> TradingDay:" << ftdc_struct.TradingDay
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

inline std::ostream& operator << (std::ostream& os, const CZeusingFtdcParkedOrderField& ftdc_struct) {
  os << "ftdc_struct(CZeusingFtdcParkedOrderField) ---> BrokerID:" << ftdc_struct.BrokerID
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

inline std::ostream& operator << (std::ostream& os, const CZeusingFtdcParkedOrderActionField& ftdc_struct) {
  os << "ftdc_struct(CZeusingFtdcParkedOrderActionField) ---> BrokerID:" << ftdc_struct.BrokerID
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

inline std::ostream& operator << (std::ostream& os, const CZeusingFtdcQryParkedOrderField& ftdc_struct) {
  os << "ftdc_struct(CZeusingFtdcQryParkedOrderField) ---> BrokerID:" << ftdc_struct.BrokerID
    << " InvestorID:" << ftdc_struct.InvestorID
    << " InstrumentID:" << ftdc_struct.InstrumentID
    << " ExchangeID:" << ftdc_struct.ExchangeID
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CZeusingFtdcQryParkedOrderActionField& ftdc_struct) {
  os << "ftdc_struct(CZeusingFtdcQryParkedOrderActionField) ---> BrokerID:" << ftdc_struct.BrokerID
    << " InvestorID:" << ftdc_struct.InvestorID
    << " InstrumentID:" << ftdc_struct.InstrumentID
    << " ExchangeID:" << ftdc_struct.ExchangeID
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CZeusingFtdcRemoveParkedOrderField& ftdc_struct) {
  os << "ftdc_struct(CZeusingFtdcRemoveParkedOrderField) ---> BrokerID:" << ftdc_struct.BrokerID
    << " InvestorID:" << ftdc_struct.InvestorID
    << " ParkedOrderID:" << ftdc_struct.ParkedOrderID
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CZeusingFtdcRemoveParkedOrderActionField& ftdc_struct) {
  os << "ftdc_struct(CZeusingFtdcRemoveParkedOrderActionField) ---> BrokerID:" << ftdc_struct.BrokerID
    << " InvestorID:" << ftdc_struct.InvestorID
    << " ParkedOrderActionID:" << ftdc_struct.ParkedOrderActionID
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CZeusingFtdcInvestorWithdrawAlgorithmField& ftdc_struct) {
  os << "ftdc_struct(CZeusingFtdcInvestorWithdrawAlgorithmField) ---> BrokerID:" << ftdc_struct.BrokerID
    << " InvestorRange:" << ftdc_struct.InvestorRange
    << " InvestorID:" << ftdc_struct.InvestorID
    << " UsingRatio:" << ftdc_struct.UsingRatio
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CZeusingFtdcQryInvestorPositionCombineDetailField& ftdc_struct) {
  os << "ftdc_struct(CZeusingFtdcQryInvestorPositionCombineDetailField) ---> BrokerID:" << ftdc_struct.BrokerID
    << " InvestorID:" << ftdc_struct.InvestorID
    << " ExchangeID:" << ftdc_struct.ExchangeID
    << " CombInstrumentID:" << ftdc_struct.CombInstrumentID
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CZeusingFtdcMarketDataAveragePriceField& ftdc_struct) {
  os << "ftdc_struct(CZeusingFtdcMarketDataAveragePriceField) ---> AveragePrice:" << ftdc_struct.AveragePrice
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CZeusingFtdcVerifyInvestorPasswordField& ftdc_struct) {
  os << "ftdc_struct(CZeusingFtdcVerifyInvestorPasswordField) ---> BrokerID:" << ftdc_struct.BrokerID
    << " InvestorID:" << ftdc_struct.InvestorID
    << " Password:" << "it is a secret" // ftdc_struct.Password
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CZeusingFtdcUserIPField& ftdc_struct) {
  os << "ftdc_struct(CZeusingFtdcUserIPField) ---> BrokerID:" << ftdc_struct.BrokerID
    << " UserID:" << ftdc_struct.UserID
    << " IPAddress:" << ftdc_struct.IPAddress
    << " IPMask:" << ftdc_struct.IPMask
    << " MacAddress:" << ftdc_struct.MacAddress
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CZeusingFtdcTradingNoticeInfoField& ftdc_struct) {
  os << "ftdc_struct(CZeusingFtdcTradingNoticeInfoField) ---> BrokerID:" << ftdc_struct.BrokerID
    << " InvestorID:" << ftdc_struct.InvestorID
    << " SendTime:" << ftdc_struct.SendTime
    << " FieldContent:" << ftdc_struct.FieldContent
    << " SequenceSeries:" << ftdc_struct.SequenceSeries
    << " SequenceNo:" << ftdc_struct.SequenceNo
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CZeusingFtdcTradingNoticeField& ftdc_struct) {
  os << "ftdc_struct(CZeusingFtdcTradingNoticeField) ---> BrokerID:" << ftdc_struct.BrokerID
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

inline std::ostream& operator << (std::ostream& os, const CZeusingFtdcQryTradingNoticeField& ftdc_struct) {
  os << "ftdc_struct(CZeusingFtdcQryTradingNoticeField) ---> BrokerID:" << ftdc_struct.BrokerID
    << " InvestorID:" << ftdc_struct.InvestorID
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CZeusingFtdcQryErrOrderField& ftdc_struct) {
  os << "ftdc_struct(CZeusingFtdcQryErrOrderField) ---> BrokerID:" << ftdc_struct.BrokerID
    << " InvestorID:" << ftdc_struct.InvestorID
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CZeusingFtdcErrOrderField& ftdc_struct) {
  os << "ftdc_struct(CZeusingFtdcErrOrderField) ---> BrokerID:" << ftdc_struct.BrokerID
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

inline std::ostream& operator << (std::ostream& os, const CZeusingFtdcErrorConditionalOrderField& ftdc_struct) {
  os << "ftdc_struct(CZeusingFtdcErrorConditionalOrderField) ---> BrokerID:" << ftdc_struct.BrokerID
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

inline std::ostream& operator << (std::ostream& os, const CZeusingFtdcQryErrOrderActionField& ftdc_struct) {
  os << "ftdc_struct(CZeusingFtdcQryErrOrderActionField) ---> BrokerID:" << ftdc_struct.BrokerID
    << " InvestorID:" << ftdc_struct.InvestorID
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CZeusingFtdcErrOrderActionField& ftdc_struct) {
  os << "ftdc_struct(CZeusingFtdcErrOrderActionField) ---> BrokerID:" << ftdc_struct.BrokerID
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

inline std::ostream& operator << (std::ostream& os, const CZeusingFtdcQryExchangeSequenceField& ftdc_struct) {
  os << "ftdc_struct(CZeusingFtdcQryExchangeSequenceField) ---> ExchangeID:" << ftdc_struct.ExchangeID
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CZeusingFtdcExchangeSequenceField& ftdc_struct) {
  os << "ftdc_struct(CZeusingFtdcExchangeSequenceField) ---> ExchangeID:" << ftdc_struct.ExchangeID
    << " SequenceNo:" << ftdc_struct.SequenceNo
    << " MarketStatus:" << ftdc_struct.MarketStatus
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CZeusingFtdcQueryMaxOrderVolumeWithPriceField& ftdc_struct) {
  os << "ftdc_struct(CZeusingFtdcQueryMaxOrderVolumeWithPriceField) ---> BrokerID:" << ftdc_struct.BrokerID
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

inline std::ostream& operator << (std::ostream& os, const CZeusingFtdcQryBrokerTradingParamsField& ftdc_struct) {
  os << "ftdc_struct(CZeusingFtdcQryBrokerTradingParamsField) ---> BrokerID:" << ftdc_struct.BrokerID
    << " InvestorID:" << ftdc_struct.InvestorID
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CZeusingFtdcBrokerTradingParamsField& ftdc_struct) {
  os << "ftdc_struct(CZeusingFtdcBrokerTradingParamsField) ---> BrokerID:" << ftdc_struct.BrokerID
    << " InvestorID:" << ftdc_struct.InvestorID
    << " MarginPriceType:" << ftdc_struct.MarginPriceType
    << " Algorithm:" << ftdc_struct.Algorithm
    << " AvailIncludeCloseProfit:" << ftdc_struct.AvailIncludeCloseProfit
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CZeusingFtdcQryBrokerTradingAlgosField& ftdc_struct) {
  os << "ftdc_struct(CZeusingFtdcQryBrokerTradingAlgosField) ---> BrokerID:" << ftdc_struct.BrokerID
    << " ExchangeID:" << ftdc_struct.ExchangeID
    << " InstrumentID:" << ftdc_struct.InstrumentID
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CZeusingFtdcBrokerTradingAlgosField& ftdc_struct) {
  os << "ftdc_struct(CZeusingFtdcBrokerTradingAlgosField) ---> BrokerID:" << ftdc_struct.BrokerID
    << " ExchangeID:" << ftdc_struct.ExchangeID
    << " InstrumentID:" << ftdc_struct.InstrumentID
    << " HandlePositionAlgoID:" << ftdc_struct.HandlePositionAlgoID
    << " FindMarginRateAlgoID:" << ftdc_struct.FindMarginRateAlgoID
    << " HandleTradingAccountAlgoID:" << ftdc_struct.HandleTradingAccountAlgoID
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CZeusingFtdcQueryBrokerDepositField& ftdc_struct) {
  os << "ftdc_struct(CZeusingFtdcQueryBrokerDepositField) ---> BrokerID:" << ftdc_struct.BrokerID
    << " ExchangeID:" << ftdc_struct.ExchangeID
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CZeusingFtdcBrokerDepositField& ftdc_struct) {
  os << "ftdc_struct(CZeusingFtdcBrokerDepositField) ---> TradingDay:" << ftdc_struct.TradingDay
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

inline std::ostream& operator << (std::ostream& os, const CZeusingFtdcQryCFMMCBrokerKeyField& ftdc_struct) {
  os << "ftdc_struct(CZeusingFtdcQryCFMMCBrokerKeyField) ---> BrokerID:" << ftdc_struct.BrokerID
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CZeusingFtdcCFMMCBrokerKeyField& ftdc_struct) {
  os << "ftdc_struct(CZeusingFtdcCFMMCBrokerKeyField) ---> BrokerID:" << ftdc_struct.BrokerID
    << " ParticipantID:" << ftdc_struct.ParticipantID
    << " CreateDate:" << ftdc_struct.CreateDate
    << " CreateTime:" << ftdc_struct.CreateTime
    << " KeyID:" << ftdc_struct.KeyID
    << " CurrentKey:" << ftdc_struct.CurrentKey
    << " KeyKind:" << ftdc_struct.KeyKind
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CZeusingFtdcCFMMCTradingAccountKeyField& ftdc_struct) {
  os << "ftdc_struct(CZeusingFtdcCFMMCTradingAccountKeyField) ---> BrokerID:" << ftdc_struct.BrokerID
    << " ParticipantID:" << ftdc_struct.ParticipantID
    << " AccountID:" << ftdc_struct.AccountID
    << " KeyID:" << ftdc_struct.KeyID
    << " CurrentKey:" << ftdc_struct.CurrentKey
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CZeusingFtdcQryCFMMCTradingAccountKeyField& ftdc_struct) {
  os << "ftdc_struct(CZeusingFtdcQryCFMMCTradingAccountKeyField) ---> BrokerID:" << ftdc_struct.BrokerID
    << " InvestorID:" << ftdc_struct.InvestorID
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CZeusingFtdcBrokerUserOTPParamField& ftdc_struct) {
  os << "ftdc_struct(CZeusingFtdcBrokerUserOTPParamField) ---> BrokerID:" << ftdc_struct.BrokerID
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

inline std::ostream& operator << (std::ostream& os, const CZeusingFtdcManualSyncBrokerUserOTPField& ftdc_struct) {
  os << "ftdc_struct(CZeusingFtdcManualSyncBrokerUserOTPField) ---> BrokerID:" << ftdc_struct.BrokerID
    << " UserID:" << ftdc_struct.UserID
    << " OTPType:" << ftdc_struct.OTPType
    << " FirstOTP:" << ftdc_struct.FirstOTP
    << " SecondOTP:" << ftdc_struct.SecondOTP
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CZeusingFtdcCommRateModelField& ftdc_struct) {
  os << "ftdc_struct(CZeusingFtdcCommRateModelField) ---> BrokerID:" << ftdc_struct.BrokerID
    << " CommModelID:" << ftdc_struct.CommModelID
    << " CommModelName:" << ftdc_struct.CommModelName
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CZeusingFtdcQryCommRateModelField& ftdc_struct) {
  os << "ftdc_struct(CZeusingFtdcQryCommRateModelField) ---> BrokerID:" << ftdc_struct.BrokerID
    << " CommModelID:" << ftdc_struct.CommModelID
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CZeusingFtdcMarginModelField& ftdc_struct) {
  os << "ftdc_struct(CZeusingFtdcMarginModelField) ---> BrokerID:" << ftdc_struct.BrokerID
    << " MarginModelID:" << ftdc_struct.MarginModelID
    << " MarginModelName:" << ftdc_struct.MarginModelName
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CZeusingFtdcEWarrantOffsetField& ftdc_struct) {
  os << "ftdc_struct(CZeusingFtdcEWarrantOffsetField) ---> TradingDay:" << ftdc_struct.TradingDay
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

inline std::ostream& operator << (std::ostream& os, const CZeusingFtdcQryEWarrantOffsetField& ftdc_struct) {
  os << "ftdc_struct(CZeusingFtdcQryEWarrantOffsetField) ---> BrokerID:" << ftdc_struct.BrokerID
    << " InvestorID:" << ftdc_struct.InvestorID
    << " ExchangeID:" << ftdc_struct.ExchangeID
    << " InstrumentID:" << ftdc_struct.InstrumentID
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CZeusingFtdcReqOpenAccountField& ftdc_struct) {
  os << "ftdc_struct(CZeusingFtdcReqOpenAccountField) ---> TradeCode:" << ftdc_struct.TradeCode
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

inline std::ostream& operator << (std::ostream& os, const CZeusingFtdcReqCancelAccountField& ftdc_struct) {
  os << "ftdc_struct(CZeusingFtdcReqCancelAccountField) ---> TradeCode:" << ftdc_struct.TradeCode
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

inline std::ostream& operator << (std::ostream& os, const CZeusingFtdcReqChangeAccountField& ftdc_struct) {
  os << "ftdc_struct(CZeusingFtdcReqChangeAccountField) ---> TradeCode:" << ftdc_struct.TradeCode
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

inline std::ostream& operator << (std::ostream& os, const CZeusingFtdcReqTransferField& ftdc_struct) {
  os << "ftdc_struct(CZeusingFtdcReqTransferField) ---> TradeCode:" << ftdc_struct.TradeCode
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

inline std::ostream& operator << (std::ostream& os, const CZeusingFtdcRspTransferField& ftdc_struct) {
  os << "ftdc_struct(CZeusingFtdcRspTransferField) ---> TradeCode:" << ftdc_struct.TradeCode
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

inline std::ostream& operator << (std::ostream& os, const CZeusingFtdcReqRepealField& ftdc_struct) {
  os << "ftdc_struct(CZeusingFtdcReqRepealField) ---> RepealTimeInterval:" << ftdc_struct.RepealTimeInterval
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

inline std::ostream& operator << (std::ostream& os, const CZeusingFtdcRspRepealField& ftdc_struct) {
  os << "ftdc_struct(CZeusingFtdcRspRepealField) ---> RepealTimeInterval:" << ftdc_struct.RepealTimeInterval
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

inline std::ostream& operator << (std::ostream& os, const CZeusingFtdcReqQueryAccountField& ftdc_struct) {
  os << "ftdc_struct(CZeusingFtdcReqQueryAccountField) ---> TradeCode:" << ftdc_struct.TradeCode
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

inline std::ostream& operator << (std::ostream& os, const CZeusingFtdcRspQueryAccountField& ftdc_struct) {
  os << "ftdc_struct(CZeusingFtdcRspQueryAccountField) ---> TradeCode:" << ftdc_struct.TradeCode
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

inline std::ostream& operator << (std::ostream& os, const CZeusingFtdcFutureSignIOField& ftdc_struct) {
  os << "ftdc_struct(CZeusingFtdcFutureSignIOField) ---> TradeCode:" << ftdc_struct.TradeCode
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

inline std::ostream& operator << (std::ostream& os, const CZeusingFtdcRspFutureSignInField& ftdc_struct) {
  os << "ftdc_struct(CZeusingFtdcRspFutureSignInField) ---> TradeCode:" << ftdc_struct.TradeCode
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

inline std::ostream& operator << (std::ostream& os, const CZeusingFtdcReqFutureSignOutField& ftdc_struct) {
  os << "ftdc_struct(CZeusingFtdcReqFutureSignOutField) ---> TradeCode:" << ftdc_struct.TradeCode
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

inline std::ostream& operator << (std::ostream& os, const CZeusingFtdcRspFutureSignOutField& ftdc_struct) {
  os << "ftdc_struct(CZeusingFtdcRspFutureSignOutField) ---> TradeCode:" << ftdc_struct.TradeCode
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

inline std::ostream& operator << (std::ostream& os, const CZeusingFtdcReqQueryTradeResultBySerialField& ftdc_struct) {
  os << "ftdc_struct(CZeusingFtdcReqQueryTradeResultBySerialField) ---> TradeCode:" << ftdc_struct.TradeCode
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

inline std::ostream& operator << (std::ostream& os, const CZeusingFtdcRspQueryTradeResultBySerialField& ftdc_struct) {
  os << "ftdc_struct(CZeusingFtdcRspQueryTradeResultBySerialField) ---> TradeCode:" << ftdc_struct.TradeCode
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

inline std::ostream& operator << (std::ostream& os, const CZeusingFtdcReqDayEndFileReadyField& ftdc_struct) {
  os << "ftdc_struct(CZeusingFtdcReqDayEndFileReadyField) ---> TradeCode:" << ftdc_struct.TradeCode
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

inline std::ostream& operator << (std::ostream& os, const CZeusingFtdcReturnResultField& ftdc_struct) {
  os << "ftdc_struct(CZeusingFtdcReturnResultField) ---> ReturnCode:" << ftdc_struct.ReturnCode
    << " DescrInfoForReturnCode:" << ftdc_struct.DescrInfoForReturnCode
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CZeusingFtdcVerifyFuturePasswordField& ftdc_struct) {
  os << "ftdc_struct(CZeusingFtdcVerifyFuturePasswordField) ---> TradeCode:" << ftdc_struct.TradeCode
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

inline std::ostream& operator << (std::ostream& os, const CZeusingFtdcVerifyCustInfoField& ftdc_struct) {
  os << "ftdc_struct(CZeusingFtdcVerifyCustInfoField) ---> CustomerName:" << ftdc_struct.CustomerName
    << " IdCardType:" << ftdc_struct.IdCardType
    << " IdentifiedCardNo:" << ftdc_struct.IdentifiedCardNo
    << " CustType:" << ftdc_struct.CustType
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CZeusingFtdcVerifyFuturePasswordAndCustInfoField& ftdc_struct) {
  os << "ftdc_struct(CZeusingFtdcVerifyFuturePasswordAndCustInfoField) ---> CustomerName:" << ftdc_struct.CustomerName
    << " IdCardType:" << ftdc_struct.IdCardType
    << " IdentifiedCardNo:" << ftdc_struct.IdentifiedCardNo
    << " CustType:" << ftdc_struct.CustType
    << " AccountID:" << ftdc_struct.AccountID
    << " Password:" << "it is a secret" // ftdc_struct.Password
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CZeusingFtdcDepositResultInformField& ftdc_struct) {
  os << "ftdc_struct(CZeusingFtdcDepositResultInformField) ---> DepositSeqNo:" << ftdc_struct.DepositSeqNo
    << " BrokerID:" << ftdc_struct.BrokerID
    << " InvestorID:" << ftdc_struct.InvestorID
    << " Deposit:" << ftdc_struct.Deposit
    << " RequestID:" << ftdc_struct.RequestID
    << " ReturnCode:" << ftdc_struct.ReturnCode
    << " DescrInfoForReturnCode:" << ftdc_struct.DescrInfoForReturnCode
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CZeusingFtdcReqSyncKeyField& ftdc_struct) {
  os << "ftdc_struct(CZeusingFtdcReqSyncKeyField) ---> TradeCode:" << ftdc_struct.TradeCode
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

inline std::ostream& operator << (std::ostream& os, const CZeusingFtdcRspSyncKeyField& ftdc_struct) {
  os << "ftdc_struct(CZeusingFtdcRspSyncKeyField) ---> TradeCode:" << ftdc_struct.TradeCode
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

inline std::ostream& operator << (std::ostream& os, const CZeusingFtdcNotifyQueryAccountField& ftdc_struct) {
  os << "ftdc_struct(CZeusingFtdcNotifyQueryAccountField) ---> TradeCode:" << ftdc_struct.TradeCode
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

inline std::ostream& operator << (std::ostream& os, const CZeusingFtdcTransferSerialField& ftdc_struct) {
  os << "ftdc_struct(CZeusingFtdcTransferSerialField) ---> PlateSerial:" << ftdc_struct.PlateSerial
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

inline std::ostream& operator << (std::ostream& os, const CZeusingFtdcQryTransferSerialField& ftdc_struct) {
  os << "ftdc_struct(CZeusingFtdcQryTransferSerialField) ---> BrokerID:" << ftdc_struct.BrokerID
    << " AccountID:" << ftdc_struct.AccountID
    << " BankID:" << ftdc_struct.BankID
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CZeusingFtdcNotifyFutureSignInField& ftdc_struct) {
  os << "ftdc_struct(CZeusingFtdcNotifyFutureSignInField) ---> TradeCode:" << ftdc_struct.TradeCode
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

inline std::ostream& operator << (std::ostream& os, const CZeusingFtdcNotifyFutureSignOutField& ftdc_struct) {
  os << "ftdc_struct(CZeusingFtdcNotifyFutureSignOutField) ---> TradeCode:" << ftdc_struct.TradeCode
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

inline std::ostream& operator << (std::ostream& os, const CZeusingFtdcNotifySyncKeyField& ftdc_struct) {
  os << "ftdc_struct(CZeusingFtdcNotifySyncKeyField) ---> TradeCode:" << ftdc_struct.TradeCode
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

inline std::ostream& operator << (std::ostream& os, const CZeusingFtdcQryAccountregisterField& ftdc_struct) {
  os << "ftdc_struct(CZeusingFtdcQryAccountregisterField) ---> BrokerID:" << ftdc_struct.BrokerID
    << " AccountID:" << ftdc_struct.AccountID
    << " BankID:" << ftdc_struct.BankID
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CZeusingFtdcAccountregisterField& ftdc_struct) {
  os << "ftdc_struct(CZeusingFtdcAccountregisterField) ---> TradeDay:" << ftdc_struct.TradeDay
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

inline std::ostream& operator << (std::ostream& os, const CZeusingFtdcOpenAccountField& ftdc_struct) {
  os << "ftdc_struct(CZeusingFtdcOpenAccountField) ---> TradeCode:" << ftdc_struct.TradeCode
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

inline std::ostream& operator << (std::ostream& os, const CZeusingFtdcCancelAccountField& ftdc_struct) {
  os << "ftdc_struct(CZeusingFtdcCancelAccountField) ---> TradeCode:" << ftdc_struct.TradeCode
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

inline std::ostream& operator << (std::ostream& os, const CZeusingFtdcChangeAccountField& ftdc_struct) {
  os << "ftdc_struct(CZeusingFtdcChangeAccountField) ---> TradeCode:" << ftdc_struct.TradeCode
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

inline std::ostream& operator << (std::ostream& os, const CZeusingFtdcUserRightsAssignField& ftdc_struct) {
  os << "ftdc_struct(CZeusingFtdcUserRightsAssignField) ---> BrokerID:" << ftdc_struct.BrokerID
    << " UserID:" << ftdc_struct.UserID
    << " DRIdentityID:" << ftdc_struct.DRIdentityID
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CZeusingFtdcBrokerUserRightAssignField& ftdc_struct) {
  os << "ftdc_struct(CZeusingFtdcBrokerUserRightAssignField) ---> BrokerID:" << ftdc_struct.BrokerID
    << " DRIdentityID:" << ftdc_struct.DRIdentityID
    << " Tradeable:" << ftdc_struct.Tradeable
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CZeusingFtdcDRTransferField& ftdc_struct) {
  os << "ftdc_struct(CZeusingFtdcDRTransferField) ---> OrigDRIdentityID:" << ftdc_struct.OrigDRIdentityID
    << " DestDRIdentityID:" << ftdc_struct.DestDRIdentityID
    << " OrigBrokerID:" << ftdc_struct.OrigBrokerID
    << " DestBrokerID:" << ftdc_struct.DestBrokerID
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CZeusingFtdcForQuoteField& ftdc_struct) {
  os << "ftdc_struct(CZeusingFtdcForQuoteField) ---> ExchangeID:" << ftdc_struct.ExchangeID
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

inline std::ostream& operator << (std::ostream& os, const CZeusingFtdcInputForQuoteField& ftdc_struct) {
  os << "ftdc_struct(CZeusingFtdcInputForQuoteField) ---> ExchangeID:" << ftdc_struct.ExchangeID
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

inline std::ostream& operator << (std::ostream& os, const CZeusingFtdcExchRspForQuoteField& ftdc_struct) {
  os << "ftdc_struct(CZeusingFtdcExchRspForQuoteField) ---> ExchangeID:" << ftdc_struct.ExchangeID
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

inline std::ostream& operator << (std::ostream& os, const CZeusingFtdcErrRtnExchRtnForQuoteField& ftdc_struct) {
  os << "ftdc_struct(CZeusingFtdcErrRtnExchRtnForQuoteField) ---> ExchangeID:" << ftdc_struct.ExchangeID
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

inline std::ostream& operator << (std::ostream& os, const CZeusingFtdcExchangeQuoteInsertErrorField& ftdc_struct) {
  os << "ftdc_struct(CZeusingFtdcExchangeQuoteInsertErrorField) ---> BrokerID:" << ftdc_struct.BrokerID
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

inline std::ostream& operator << (std::ostream& os, const CZeusingFtdcMulticastGroupInfoField& ftdc_struct) {
  os << "ftdc_struct(CZeusingFtdcMulticastGroupInfoField) ---> GroupIP:" << ftdc_struct.GroupIP
    << " GroupPort:" << ftdc_struct.GroupPort
    << " SourceIP:" << ftdc_struct.SourceIP
    << " <--- End";

  return os;
}


#endif // ZEUSING_FTDC_STRUCT_PRINT_FUNCTION_H_
