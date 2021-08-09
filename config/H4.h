/*
 * @file
 * Defines default strategy parameter values for the given timeframe.
 */

// Defines indicator's parameter values for the given pair symbol and timeframe.
struct Indi_ATR_Params_H4 : ATRParams {
  Indi_ATR_Params_H4() : ATRParams(indi_atr_defaults, PERIOD_H4) { shift = 0; }
} indi_atr_h4;

// Defines strategy's parameter values for the given pair symbol and timeframe.
struct Stg_ATR_Params_H4 : StgParams {
  // Struct constructor.
  Stg_ATR_Params_H4() : StgParams(stg_atr_defaults) {
    lot_size = 0;
    signal_open_method = 64;
    signal_open_level = (float)10;
    signal_open_boost = 0;
    signal_close_method = 64;
    signal_close_level = (float)0;
    price_profit_method = 2;
    price_profit_level = (float)2;
    price_stop_method = 2;
    price_stop_level = (float)2;
    tick_filter_method = 32;
    max_spread = 0;
  }
} stg_atr_h4;
