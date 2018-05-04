#ifndef FEMAS_SYSTEM_PRINT_FUNCTION_H_
#define FEMAS_SYSTEM_PRINT_FUNCTION_H_
#include <iostream>

inline std::ostream& operator << (std::ostream& os, const CUstpFtdcReqUserLoginField& ftdc_struct) {
  os << "ftdc_struct(CUstpFtdcReqUserLoginField) ---> TradingDay:" << ftdc_struct.TradingDay
    << " UserID:" << ftdc_struct.UserID
    << " BrokerID:" << ftdc_struct.BrokerID
    << " Password:" << "it is a secret" // ftdc_struct.Password
    << " UserProductInfo:" << ftdc_struct.UserProductInfo
    << " InterfaceProductInfo:" << ftdc_struct.InterfaceProductInfo
    << " ProtocolInfo:" << ftdc_struct.ProtocolInfo
    << " IPAddress:" << ftdc_struct.IPAddress
    << " MacAddress:" << ftdc_struct.MacAddress
    << " DataCenterID:" << ftdc_struct.DataCenterID
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CUstpFtdcRspUserLoginField& ftdc_struct) {
  os << "ftdc_struct(CUstpFtdcRspUserLoginField) ---> TradingDay:" << ftdc_struct.TradingDay
    << " BrokerID:" << ftdc_struct.BrokerID
    << " UserID:" << ftdc_struct.UserID
    << " LoginTime:" << ftdc_struct.LoginTime
    << " MaxOrderLocalID:" << ftdc_struct.MaxOrderLocalID
    << " TradingSystemName:" << ftdc_struct.TradingSystemName
    << " DataCenterID:" << ftdc_struct.DataCenterID
    << " PrivateFlowSize:" << ftdc_struct.PrivateFlowSize
    << " UserFlowSize:" << ftdc_struct.UserFlowSize
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CUstpFtdcReqUserLogoutField& ftdc_struct) {
  os << "ftdc_struct(CUstpFtdcReqUserLogoutField) ---> BrokerID:" << ftdc_struct.BrokerID
    << " UserID:" << ftdc_struct.UserID
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CUstpFtdcRspUserLogoutField& ftdc_struct) {
  os << "ftdc_struct(CUstpFtdcRspUserLogoutField) ---> BrokerID:" << ftdc_struct.BrokerID
    << " UserID:" << ftdc_struct.UserID
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CUstpFtdcForceUserExitField& ftdc_struct) {
  os << "ftdc_struct(CUstpFtdcForceUserExitField) ---> BrokerID:" << ftdc_struct.BrokerID
    << " UserID:" << ftdc_struct.UserID
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CUstpFtdcUserPasswordUpdateField& ftdc_struct) {
  os << "ftdc_struct(CUstpFtdcUserPasswordUpdateField) ---> BrokerID:" << ftdc_struct.BrokerID
    << " UserID:" << ftdc_struct.UserID
    << " OldPassword:" << "it is a secret" // ftdc_struct.OldPassword
    << " NewPassword:" << "it is a secret" // ftdc_struct.NewPassword
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CUstpFtdcInputOrderField& ftdc_struct) {
  os << "ftdc_struct(CUstpFtdcInputOrderField) ---> BrokerID:" << ftdc_struct.BrokerID
    << " ExchangeID:" << ftdc_struct.ExchangeID
    << " OrderSysID:" << ftdc_struct.OrderSysID
    << " InvestorID:" << ftdc_struct.InvestorID
    << " UserID:" << ftdc_struct.UserID
    << " InstrumentID:" << ftdc_struct.InstrumentID
    << " UserOrderLocalID:" << ftdc_struct.UserOrderLocalID
    << " OrderPriceType:" << ftdc_struct.OrderPriceType
    << " Direction:" << ftdc_struct.Direction
    << " OffsetFlag:" << ftdc_struct.OffsetFlag
    << " HedgeFlag:" << ftdc_struct.HedgeFlag
    << " LimitPrice:" << ftdc_struct.LimitPrice
    << " Volume:" << ftdc_struct.Volume
    << " TimeCondition:" << ftdc_struct.TimeCondition
    << " GTDDate:" << ftdc_struct.GTDDate
    << " VolumeCondition:" << ftdc_struct.VolumeCondition
    << " MinVolume:" << ftdc_struct.MinVolume
    << " StopPrice:" << ftdc_struct.StopPrice
    << " ForceCloseReason:" << ftdc_struct.ForceCloseReason
    << " IsAutoSuspend:" << ftdc_struct.IsAutoSuspend
    << " BusinessUnit:" << ftdc_struct.BusinessUnit
    << " UserCustom:" << ftdc_struct.UserCustom
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CUstpFtdcOrderActionField& ftdc_struct) {
  os << "ftdc_struct(CUstpFtdcOrderActionField) ---> ExchangeID:" << ftdc_struct.ExchangeID
    << " OrderSysID:" << ftdc_struct.OrderSysID
    << " BrokerID:" << ftdc_struct.BrokerID
    << " InvestorID:" << ftdc_struct.InvestorID
    << " UserID:" << ftdc_struct.UserID
    << " UserOrderActionLocalID:" << ftdc_struct.UserOrderActionLocalID
    << " UserOrderLocalID:" << ftdc_struct.UserOrderLocalID
    << " ActionFlag:" << ftdc_struct.ActionFlag
    << " LimitPrice:" << ftdc_struct.LimitPrice
    << " VolumeChange:" << ftdc_struct.VolumeChange
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CUstpFtdcMemDbField& ftdc_struct) {
  os << "ftdc_struct(CUstpFtdcMemDbField) ---> MemTableName:" << ftdc_struct.MemTableName
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CUstpFtdcRspInfoField& ftdc_struct) {
  if (&ftdc_struct != NULL) {
    os << "ftdc_struct(CUstpFtdcRspInfoField) ---> ErrorID:" << ftdc_struct.ErrorID
      << " ErrorMsg:" << ftdc_struct.ErrorMsg
      << " <--- End";
  }

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CUstpFtdcQryOrderField& ftdc_struct) {
  os << "ftdc_struct(CUstpFtdcQryOrderField) ---> BrokerID:" << ftdc_struct.BrokerID
    << " UserID:" << ftdc_struct.UserID
    << " ExchangeID:" << ftdc_struct.ExchangeID
    << " InvestorID:" << ftdc_struct.InvestorID
    << " OrderSysID:" << ftdc_struct.OrderSysID
    << " InstrumentID:" << ftdc_struct.InstrumentID
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CUstpFtdcQryTradeField& ftdc_struct) {
  os << "ftdc_struct(CUstpFtdcQryTradeField) ---> BrokerID:" << ftdc_struct.BrokerID
    << " UserID:" << ftdc_struct.UserID
    << " ExchangeID:" << ftdc_struct.ExchangeID
    << " InvestorID:" << ftdc_struct.InvestorID
    << " TradeID:" << ftdc_struct.TradeID
    << " InstrumentID:" << ftdc_struct.InstrumentID
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CUstpFtdcQryInstrumentField& ftdc_struct) {
  os << "ftdc_struct(CUstpFtdcQryInstrumentField) ---> ExchangeID:" << ftdc_struct.ExchangeID
    << " ProductID:" << ftdc_struct.ProductID
    << " InstrumentID:" << ftdc_struct.InstrumentID
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CUstpFtdcRspInstrumentField& ftdc_struct) {
  os << "ftdc_struct(CUstpFtdcRspInstrumentField) ---> ExchangeID:" << ftdc_struct.ExchangeID
    << " ProductID:" << ftdc_struct.ProductID
    << " ProductName:" << ftdc_struct.ProductName
    << " InstrumentID:" << ftdc_struct.InstrumentID
    << " InstrumentName:" << ftdc_struct.InstrumentName
    << " DeliveryYear:" << ftdc_struct.DeliveryYear
    << " DeliveryMonth:" << ftdc_struct.DeliveryMonth
    << " MaxLimitOrderVolume:" << ftdc_struct.MaxLimitOrderVolume
    << " MinLimitOrderVolume:" << ftdc_struct.MinLimitOrderVolume
    << " MaxMarketOrderVolume:" << ftdc_struct.MaxMarketOrderVolume
    << " MinMarketOrderVolume:" << ftdc_struct.MinMarketOrderVolume
    << " VolumeMultiple:" << ftdc_struct.VolumeMultiple
    << " PriceTick:" << ftdc_struct.PriceTick
    << " Currency:" << ftdc_struct.Currency
    << " LongPosLimit:" << ftdc_struct.LongPosLimit
    << " ShortPosLimit:" << ftdc_struct.ShortPosLimit
    << " LowerLimitPrice:" << ftdc_struct.LowerLimitPrice
    << " UpperLimitPrice:" << ftdc_struct.UpperLimitPrice
    << " PreSettlementPrice:" << ftdc_struct.PreSettlementPrice
    << " InstrumentStatus:" << ftdc_struct.InstrumentStatus
    << " CreateDate:" << ftdc_struct.CreateDate
    << " OpenDate:" << ftdc_struct.OpenDate
    << " ExpireDate:" << ftdc_struct.ExpireDate
    << " StartDelivDate:" << ftdc_struct.StartDelivDate
    << " EndDelivDate:" << ftdc_struct.EndDelivDate
    << " BasisPrice:" << ftdc_struct.BasisPrice
    << " IsTrading:" << ftdc_struct.IsTrading
    << " UnderlyingInstrID:" << ftdc_struct.UnderlyingInstrID
    << " UnderlyingMultiple:" << ftdc_struct.UnderlyingMultiple
    << " PositionType:" << ftdc_struct.PositionType
    << " StrikePrice:" << ftdc_struct.StrikePrice
    << " OptionsType:" << ftdc_struct.OptionsType
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CUstpFtdcInstrumentStatusField& ftdc_struct) {
  os << "ftdc_struct(CUstpFtdcInstrumentStatusField) ---> ExchangeID:" << ftdc_struct.ExchangeID
    << " ProductID:" << ftdc_struct.ProductID
    << " ProductName:" << ftdc_struct.ProductName
    << " InstrumentID:" << ftdc_struct.InstrumentID
    << " InstrumentName:" << ftdc_struct.InstrumentName
    << " DeliveryYear:" << ftdc_struct.DeliveryYear
    << " DeliveryMonth:" << ftdc_struct.DeliveryMonth
    << " MaxLimitOrderVolume:" << ftdc_struct.MaxLimitOrderVolume
    << " MinLimitOrderVolume:" << ftdc_struct.MinLimitOrderVolume
    << " MaxMarketOrderVolume:" << ftdc_struct.MaxMarketOrderVolume
    << " MinMarketOrderVolume:" << ftdc_struct.MinMarketOrderVolume
    << " VolumeMultiple:" << ftdc_struct.VolumeMultiple
    << " PriceTick:" << ftdc_struct.PriceTick
    << " Currency:" << ftdc_struct.Currency
    << " LongPosLimit:" << ftdc_struct.LongPosLimit
    << " ShortPosLimit:" << ftdc_struct.ShortPosLimit
    << " LowerLimitPrice:" << ftdc_struct.LowerLimitPrice
    << " UpperLimitPrice:" << ftdc_struct.UpperLimitPrice
    << " PreSettlementPrice:" << ftdc_struct.PreSettlementPrice
    << " InstrumentStatus:" << ftdc_struct.InstrumentStatus
    << " CreateDate:" << ftdc_struct.CreateDate
    << " OpenDate:" << ftdc_struct.OpenDate
    << " ExpireDate:" << ftdc_struct.ExpireDate
    << " StartDelivDate:" << ftdc_struct.StartDelivDate
    << " EndDelivDate:" << ftdc_struct.EndDelivDate
    << " BasisPrice:" << ftdc_struct.BasisPrice
    << " IsTrading:" << ftdc_struct.IsTrading
    << " UnderlyingInstrID:" << ftdc_struct.UnderlyingInstrID
    << " UnderlyingMultiple:" << ftdc_struct.UnderlyingMultiple
    << " PositionType:" << ftdc_struct.PositionType
    << " StrikePrice:" << ftdc_struct.StrikePrice
    << " OptionsType:" << ftdc_struct.OptionsType
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CUstpFtdcQryInvestorAccountField& ftdc_struct) {
  os << "ftdc_struct(CUstpFtdcQryInvestorAccountField) ---> BrokerID:" << ftdc_struct.BrokerID
    << " UserID:" << ftdc_struct.UserID
    << " InvestorID:" << ftdc_struct.InvestorID
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CUstpFtdcRspInvestorAccountField& ftdc_struct) {
  os << "ftdc_struct(CUstpFtdcRspInvestorAccountField) ---> BrokerID:" << ftdc_struct.BrokerID
    << " InvestorID:" << ftdc_struct.InvestorID
    << " AccountID:" << ftdc_struct.AccountID
    << " PreBalance:" << ftdc_struct.PreBalance
    << " Deposit:" << ftdc_struct.Deposit
    << " Withdraw:" << ftdc_struct.Withdraw
    << " FrozenMargin:" << ftdc_struct.FrozenMargin
    << " FrozenFee:" << ftdc_struct.FrozenFee
    << " FrozenPremium:" << ftdc_struct.FrozenPremium
    << " Fee:" << ftdc_struct.Fee
    << " CloseProfit:" << ftdc_struct.CloseProfit
    << " PositionProfit:" << ftdc_struct.PositionProfit
    << " Available:" << ftdc_struct.Available
    << " LongFrozenMargin:" << ftdc_struct.LongFrozenMargin
    << " ShortFrozenMargin:" << ftdc_struct.ShortFrozenMargin
    << " LongMargin:" << ftdc_struct.LongMargin
    << " ShortMargin:" << ftdc_struct.ShortMargin
    << " ReleaseMargin:" << ftdc_struct.ReleaseMargin
    << " DynamicRights:" << ftdc_struct.DynamicRights
    << " TodayInOut:" << ftdc_struct.TodayInOut
    << " Margin:" << ftdc_struct.Margin
    << " Premium:" << ftdc_struct.Premium
    << " Risk:" << ftdc_struct.Risk
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CUstpFtdcQryUserInvestorField& ftdc_struct) {
  os << "ftdc_struct(CUstpFtdcQryUserInvestorField) ---> BrokerID:" << ftdc_struct.BrokerID
    << " UserID:" << ftdc_struct.UserID
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CUstpFtdcRspUserInvestorField& ftdc_struct) {
  os << "ftdc_struct(CUstpFtdcRspUserInvestorField) ---> BrokerID:" << ftdc_struct.BrokerID
    << " UserID:" << ftdc_struct.UserID
    << " InvestorID:" << ftdc_struct.InvestorID
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CUstpFtdcQryTradingCodeField& ftdc_struct) {
  os << "ftdc_struct(CUstpFtdcQryTradingCodeField) ---> BrokerID:" << ftdc_struct.BrokerID
    << " UserID:" << ftdc_struct.UserID
    << " InvestorID:" << ftdc_struct.InvestorID
    << " ExchangeID:" << ftdc_struct.ExchangeID
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CUstpFtdcRspTradingCodeField& ftdc_struct) {
  os << "ftdc_struct(CUstpFtdcRspTradingCodeField) ---> BrokerID:" << ftdc_struct.BrokerID
    << " ExchangeID:" << ftdc_struct.ExchangeID
    << " InvestorID:" << ftdc_struct.InvestorID
    << " ClientID:" << ftdc_struct.ClientID
    << " ClientRight:" << ftdc_struct.ClientRight
    << " IsActive:" << ftdc_struct.IsActive
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CUstpFtdcQryExchangeField& ftdc_struct) {
  os << "ftdc_struct(CUstpFtdcQryExchangeField) ---> ExchangeID:" << ftdc_struct.ExchangeID
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CUstpFtdcRspExchangeField& ftdc_struct) {
  os << "ftdc_struct(CUstpFtdcRspExchangeField) ---> ExchangeID:" << ftdc_struct.ExchangeID
    << " ExchangeName:" << ftdc_struct.ExchangeName
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CUstpFtdcQryInvestorPositionField& ftdc_struct) {
  os << "ftdc_struct(CUstpFtdcQryInvestorPositionField) ---> BrokerID:" << ftdc_struct.BrokerID
    << " UserID:" << ftdc_struct.UserID
    << " ExchangeID:" << ftdc_struct.ExchangeID
    << " InvestorID:" << ftdc_struct.InvestorID
    << " InstrumentID:" << ftdc_struct.InstrumentID
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CUstpFtdcRspInvestorPositionField& ftdc_struct) {
  os << "ftdc_struct(CUstpFtdcRspInvestorPositionField) ---> InvestorID:" << ftdc_struct.InvestorID
    << " BrokerID:" << ftdc_struct.BrokerID
    << " ExchangeID:" << ftdc_struct.ExchangeID
    << " ClientID:" << ftdc_struct.ClientID
    << " InstrumentID:" << ftdc_struct.InstrumentID
    << " Direction:" << ftdc_struct.Direction
    << " HedgeFlag:" << ftdc_struct.HedgeFlag
    << " UsedMargin:" << ftdc_struct.UsedMargin
    << " Position:" << ftdc_struct.Position
    << " PositionCost:" << ftdc_struct.PositionCost
    << " YdPosition:" << ftdc_struct.YdPosition
    << " YdPositionCost:" << ftdc_struct.YdPositionCost
    << " FrozenMargin:" << ftdc_struct.FrozenMargin
    << " FrozenPosition:" << ftdc_struct.FrozenPosition
    << " FrozenClosing:" << ftdc_struct.FrozenClosing
    << " FrozenPremium:" << ftdc_struct.FrozenPremium
    << " LastTradeID:" << ftdc_struct.LastTradeID
    << " LastOrderLocalID:" << ftdc_struct.LastOrderLocalID
    << " Currency:" << ftdc_struct.Currency
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CUstpFtdcQryComplianceParamField& ftdc_struct) {
  os << "ftdc_struct(CUstpFtdcQryComplianceParamField) ---> BrokerID:" << ftdc_struct.BrokerID
    << " UserID:" << ftdc_struct.UserID
    << " InvestorID:" << ftdc_struct.InvestorID
    << " ExchangeID:" << ftdc_struct.ExchangeID
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CUstpFtdcRspComplianceParamField& ftdc_struct) {
  os << "ftdc_struct(CUstpFtdcRspComplianceParamField) ---> BrokerID:" << ftdc_struct.BrokerID
    << " InvestorID:" << ftdc_struct.InvestorID
    << " ExchangeID:" << ftdc_struct.ExchangeID
    << " ClientID:" << ftdc_struct.ClientID
    << " DailyMaxOrder:" << ftdc_struct.DailyMaxOrder
    << " DailyMaxOrderAction:" << ftdc_struct.DailyMaxOrderAction
    << " DailyMaxErrorOrder:" << ftdc_struct.DailyMaxErrorOrder
    << " DailyMaxOrderVolume:" << ftdc_struct.DailyMaxOrderVolume
    << " DailyMaxOrderActionVolume:" << ftdc_struct.DailyMaxOrderActionVolume
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CUstpFtdcQryUserField& ftdc_struct) {
  os << "ftdc_struct(CUstpFtdcQryUserField) ---> StartUserID:" << ftdc_struct.StartUserID
    << " EndUserID:" << ftdc_struct.EndUserID
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CUstpFtdcUserField& ftdc_struct) {
  os << "ftdc_struct(CUstpFtdcUserField) ---> BrokerID:" << ftdc_struct.BrokerID
    << " UserID:" << ftdc_struct.UserID
    << " Password:" << "it is a secret" // ftdc_struct.Password
    << " IsActive:" << ftdc_struct.IsActive
    << " UserName:" << ftdc_struct.UserName
    << " UserType:" << ftdc_struct.UserType
    << " Department:" << ftdc_struct.Department
    << " GrantFuncSet:" << ftdc_struct.GrantFuncSet
    << " SetUserID:" << ftdc_struct.SetUserID
    << " CommandDate:" << ftdc_struct.CommandDate
    << " CommandTime:" << ftdc_struct.CommandTime
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CUstpFtdcQryInvestorFeeField& ftdc_struct) {
  os << "ftdc_struct(CUstpFtdcQryInvestorFeeField) ---> BrokerID:" << ftdc_struct.BrokerID
    << " UserID:" << ftdc_struct.UserID
    << " InvestorID:" << ftdc_struct.InvestorID
    << " ExchangeID:" << ftdc_struct.ExchangeID
    << " InstrumentID:" << ftdc_struct.InstrumentID
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CUstpFtdcInvestorFeeField& ftdc_struct) {
  os << "ftdc_struct(CUstpFtdcInvestorFeeField) ---> BrokerID:" << ftdc_struct.BrokerID
    << " ClientID:" << ftdc_struct.ClientID
    << " ExchangeID:" << ftdc_struct.ExchangeID
    << " InstrumentID:" << ftdc_struct.InstrumentID
    << " ProductID:" << ftdc_struct.ProductID
    << " OpenFeeRate:" << ftdc_struct.OpenFeeRate
    << " OpenFeeAmt:" << ftdc_struct.OpenFeeAmt
    << " OffsetFeeRate:" << ftdc_struct.OffsetFeeRate
    << " OffsetFeeAmt:" << ftdc_struct.OffsetFeeAmt
    << " OTFeeRate:" << ftdc_struct.OTFeeRate
    << " OTFeeAmt:" << ftdc_struct.OTFeeAmt
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CUstpFtdcQryInvestorMarginField& ftdc_struct) {
  os << "ftdc_struct(CUstpFtdcQryInvestorMarginField) ---> BrokerID:" << ftdc_struct.BrokerID
    << " UserID:" << ftdc_struct.UserID
    << " InvestorID:" << ftdc_struct.InvestorID
    << " ExchangeID:" << ftdc_struct.ExchangeID
    << " InstrumentID:" << ftdc_struct.InstrumentID
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CUstpFtdcInvestorMarginField& ftdc_struct) {
  os << "ftdc_struct(CUstpFtdcInvestorMarginField) ---> BrokerID:" << ftdc_struct.BrokerID
    << " ClientID:" << ftdc_struct.ClientID
    << " ExchangeID:" << ftdc_struct.ExchangeID
    << " InstrumentID:" << ftdc_struct.InstrumentID
    << " ProductID:" << ftdc_struct.ProductID
    << " LongMarginRate:" << ftdc_struct.LongMarginRate
    << " LongMarginAmt:" << ftdc_struct.LongMarginAmt
    << " ShortMarginRate:" << ftdc_struct.ShortMarginRate
    << " ShortMarginAmt:" << ftdc_struct.ShortMarginAmt
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CUstpFtdcTradeField& ftdc_struct) {
  os << "ftdc_struct(CUstpFtdcTradeField) ---> BrokerID:" << ftdc_struct.BrokerID
    << " ExchangeID:" << ftdc_struct.ExchangeID
    << " TradingDay:" << ftdc_struct.TradingDay
    << " ParticipantID:" << ftdc_struct.ParticipantID
    << " SeatID:" << ftdc_struct.SeatID
    << " InvestorID:" << ftdc_struct.InvestorID
    << " ClientID:" << ftdc_struct.ClientID
    << " UserID:" << ftdc_struct.UserID
    << " TradeID:" << ftdc_struct.TradeID
    << " OrderSysID:" << ftdc_struct.OrderSysID
    << " UserOrderLocalID:" << ftdc_struct.UserOrderLocalID
    << " InstrumentID:" << ftdc_struct.InstrumentID
    << " Direction:" << ftdc_struct.Direction
    << " OffsetFlag:" << ftdc_struct.OffsetFlag
    << " HedgeFlag:" << ftdc_struct.HedgeFlag
    << " TradePrice:" << ftdc_struct.TradePrice
    << " TradeVolume:" << ftdc_struct.TradeVolume
    << " TradeTime:" << ftdc_struct.TradeTime
    << " ClearingPartID:" << ftdc_struct.ClearingPartID
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CUstpFtdcOrderField& ftdc_struct) {
  os << "ftdc_struct(CUstpFtdcOrderField) ---> BrokerID:" << ftdc_struct.BrokerID
    << " ExchangeID:" << ftdc_struct.ExchangeID
    << " OrderSysID:" << ftdc_struct.OrderSysID
    << " InvestorID:" << ftdc_struct.InvestorID
    << " UserID:" << ftdc_struct.UserID
    << " InstrumentID:" << ftdc_struct.InstrumentID
    << " UserOrderLocalID:" << ftdc_struct.UserOrderLocalID
    << " OrderPriceType:" << ftdc_struct.OrderPriceType
    << " Direction:" << ftdc_struct.Direction
    << " OffsetFlag:" << ftdc_struct.OffsetFlag
    << " HedgeFlag:" << ftdc_struct.HedgeFlag
    << " LimitPrice:" << ftdc_struct.LimitPrice
    << " Volume:" << ftdc_struct.Volume
    << " TimeCondition:" << ftdc_struct.TimeCondition
    << " GTDDate:" << ftdc_struct.GTDDate
    << " VolumeCondition:" << ftdc_struct.VolumeCondition
    << " MinVolume:" << ftdc_struct.MinVolume
    << " StopPrice:" << ftdc_struct.StopPrice
    << " ForceCloseReason:" << ftdc_struct.ForceCloseReason
    << " IsAutoSuspend:" << ftdc_struct.IsAutoSuspend
    << " BusinessUnit:" << ftdc_struct.BusinessUnit
    << " UserCustom:" << ftdc_struct.UserCustom
    << " TradingDay:" << ftdc_struct.TradingDay
    << " ParticipantID:" << ftdc_struct.ParticipantID
    << " ClientID:" << ftdc_struct.ClientID
    << " SeatID:" << ftdc_struct.SeatID
    << " InsertTime:" << ftdc_struct.InsertTime
    << " OrderLocalID:" << ftdc_struct.OrderLocalID
    << " OrderSource:" << ftdc_struct.OrderSource
    << " OrderStatus:" << ftdc_struct.OrderStatus
    << " CancelTime:" << ftdc_struct.CancelTime
    << " CancelUserID:" << ftdc_struct.CancelUserID
    << " VolumeTraded:" << ftdc_struct.VolumeTraded
    << " VolumeRemain:" << ftdc_struct.VolumeRemain
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CUstpFtdcFlowMessageCancelField& ftdc_struct) {
  os << "ftdc_struct(CUstpFtdcFlowMessageCancelField) ---> SequenceSeries:" << ftdc_struct.SequenceSeries
    << " TradingDay:" << ftdc_struct.TradingDay
    << " DataCenterID:" << ftdc_struct.DataCenterID
    << " StartSequenceNo:" << ftdc_struct.StartSequenceNo
    << " EndSequenceNo:" << ftdc_struct.EndSequenceNo
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CUstpFtdcDisseminationField& ftdc_struct) {
  os << "ftdc_struct(CUstpFtdcDisseminationField) ---> SequenceSeries:" << ftdc_struct.SequenceSeries
    << " SequenceNo:" << ftdc_struct.SequenceNo
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CUstpFtdcInvestorAccountDepositResField& ftdc_struct) {
  os << "ftdc_struct(CUstpFtdcInvestorAccountDepositResField) ---> BrokerID:" << ftdc_struct.BrokerID
    << " UserID:" << ftdc_struct.UserID
    << " InvestorID:" << ftdc_struct.InvestorID
    << " AccountID:" << ftdc_struct.AccountID
    << " AccountSeqNo:" << ftdc_struct.AccountSeqNo
    << " Amount:" << ftdc_struct.Amount
    << " AmountDirection:" << ftdc_struct.AmountDirection
    << " Available:" << ftdc_struct.Available
    << " Balance:" << ftdc_struct.Balance
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CUstpFtdcMarketDataBaseField& ftdc_struct) {
  os << "ftdc_struct(CUstpFtdcMarketDataBaseField) ---> TradingDay:" << ftdc_struct.TradingDay
    << " SettlementGroupID:" << ftdc_struct.SettlementGroupID
    << " SettlementID:" << ftdc_struct.SettlementID
    << " PreSettlementPrice:" << ftdc_struct.PreSettlementPrice
    << " PreClosePrice:" << ftdc_struct.PreClosePrice
    << " PreOpenInterest:" << ftdc_struct.PreOpenInterest
    << " PreDelta:" << ftdc_struct.PreDelta
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CUstpFtdcMarketDataStaticField& ftdc_struct) {
  os << "ftdc_struct(CUstpFtdcMarketDataStaticField) ---> OpenPrice:" << ftdc_struct.OpenPrice
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

inline std::ostream& operator << (std::ostream& os, const CUstpFtdcMarketDataLastMatchField& ftdc_struct) {
  os << "ftdc_struct(CUstpFtdcMarketDataLastMatchField) ---> LastPrice:" << ftdc_struct.LastPrice
    << " Volume:" << ftdc_struct.Volume
    << " Turnover:" << ftdc_struct.Turnover
    << " OpenInterest:" << ftdc_struct.OpenInterest
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CUstpFtdcMarketDataBestPriceField& ftdc_struct) {
  os << "ftdc_struct(CUstpFtdcMarketDataBestPriceField) ---> BidPrice1:" << ftdc_struct.BidPrice1
    << " BidVolume1:" << ftdc_struct.BidVolume1
    << " AskPrice1:" << ftdc_struct.AskPrice1
    << " AskVolume1:" << ftdc_struct.AskVolume1
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CUstpFtdcMarketDataBid23Field& ftdc_struct) {
  os << "ftdc_struct(CUstpFtdcMarketDataBid23Field) ---> BidPrice2:" << ftdc_struct.BidPrice2
    << " BidVolume2:" << ftdc_struct.BidVolume2
    << " BidPrice3:" << ftdc_struct.BidPrice3
    << " BidVolume3:" << ftdc_struct.BidVolume3
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CUstpFtdcMarketDataAsk23Field& ftdc_struct) {
  os << "ftdc_struct(CUstpFtdcMarketDataAsk23Field) ---> AskPrice2:" << ftdc_struct.AskPrice2
    << " AskVolume2:" << ftdc_struct.AskVolume2
    << " AskPrice3:" << ftdc_struct.AskPrice3
    << " AskVolume3:" << ftdc_struct.AskVolume3
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CUstpFtdcMarketDataBid45Field& ftdc_struct) {
  os << "ftdc_struct(CUstpFtdcMarketDataBid45Field) ---> BidPrice4:" << ftdc_struct.BidPrice4
    << " BidVolume4:" << ftdc_struct.BidVolume4
    << " BidPrice5:" << ftdc_struct.BidPrice5
    << " BidVolume5:" << ftdc_struct.BidVolume5
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CUstpFtdcMarketDataAsk45Field& ftdc_struct) {
  os << "ftdc_struct(CUstpFtdcMarketDataAsk45Field) ---> AskPrice4:" << ftdc_struct.AskPrice4
    << " AskVolume4:" << ftdc_struct.AskVolume4
    << " AskPrice5:" << ftdc_struct.AskPrice5
    << " AskVolume5:" << ftdc_struct.AskVolume5
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CUstpFtdcMarketDataUpdateTimeField& ftdc_struct) {
  os << "ftdc_struct(CUstpFtdcMarketDataUpdateTimeField) ---> InstrumentID:" << ftdc_struct.InstrumentID
    << " UpdateTime:" << ftdc_struct.UpdateTime
    << " UpdateMillisec:" << ftdc_struct.UpdateMillisec
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CUstpFtdcDepthMarketDataField& ftdc_struct) {
  os << "ftdc_struct(CUstpFtdcDepthMarketDataField) ---> TradingDay:" << ftdc_struct.TradingDay
    << " SettlementGroupID:" << ftdc_struct.SettlementGroupID
    << " SettlementID:" << ftdc_struct.SettlementID
    << " PreSettlementPrice:" << ftdc_struct.PreSettlementPrice
    << " PreClosePrice:" << ftdc_struct.PreClosePrice
    << " PreOpenInterest:" << ftdc_struct.PreOpenInterest
    << " PreDelta:" << ftdc_struct.PreDelta
    << " OpenPrice:" << ftdc_struct.OpenPrice
    << " HighestPrice:" << ftdc_struct.HighestPrice
    << " LowestPrice:" << ftdc_struct.LowestPrice
    << " ClosePrice:" << ftdc_struct.ClosePrice
    << " UpperLimitPrice:" << ftdc_struct.UpperLimitPrice
    << " LowerLimitPrice:" << ftdc_struct.LowerLimitPrice
    << " SettlementPrice:" << ftdc_struct.SettlementPrice
    << " CurrDelta:" << ftdc_struct.CurrDelta
    << " LastPrice:" << ftdc_struct.LastPrice
    << " Volume:" << ftdc_struct.Volume
    << " Turnover:" << ftdc_struct.Turnover
    << " OpenInterest:" << ftdc_struct.OpenInterest
    << " BidPrice1:" << ftdc_struct.BidPrice1
    << " BidVolume1:" << ftdc_struct.BidVolume1
    << " AskPrice1:" << ftdc_struct.AskPrice1
    << " AskVolume1:" << ftdc_struct.AskVolume1
    << " BidPrice2:" << ftdc_struct.BidPrice2
    << " BidVolume2:" << ftdc_struct.BidVolume2
    << " BidPrice3:" << ftdc_struct.BidPrice3
    << " BidVolume3:" << ftdc_struct.BidVolume3
    << " AskPrice2:" << ftdc_struct.AskPrice2
    << " AskVolume2:" << ftdc_struct.AskVolume2
    << " AskPrice3:" << ftdc_struct.AskPrice3
    << " AskVolume3:" << ftdc_struct.AskVolume3
    << " BidPrice4:" << ftdc_struct.BidPrice4
    << " BidVolume4:" << ftdc_struct.BidVolume4
    << " BidPrice5:" << ftdc_struct.BidPrice5
    << " BidVolume5:" << ftdc_struct.BidVolume5
    << " AskPrice4:" << ftdc_struct.AskPrice4
    << " AskVolume4:" << ftdc_struct.AskVolume4
    << " AskPrice5:" << ftdc_struct.AskPrice5
    << " AskVolume5:" << ftdc_struct.AskVolume5
    << " InstrumentID:" << ftdc_struct.InstrumentID
    << " UpdateTime:" << ftdc_struct.UpdateTime
    << " UpdateMillisec:" << ftdc_struct.UpdateMillisec
    << " <--- End";

  return os;
}

inline std::ostream& operator << (std::ostream& os, const CUstpFtdcSpecificInstrumentField& ftdc_struct) {
  os << "ftdc_struct(CUstpFtdcSpecificInstrumentField) ---> InstrumentID:" << ftdc_struct.InstrumentID
    << " <--- End";

  return os;
}

#endif // FEMAS_SYSTEM_PRINT_FUNCTION_H_
