/*
 * @file
 * Defines default strategy parameter values for the given timeframe.
 */

// Defines indicator's parameter values for the given pair symbol and timeframe.
struct Indi_ATR_Params_H1 : ATRParams {
  Indi_ATR_Params_H1() : ATRParams(indi_atr_defaults, PERIOD_H1) { shift = 0; }
} indi_atr_h1;

// Defines strategy's parameter values for the given pair symbol and timeframe.
struct Stg_ATR_Params_H1 : StgParams {
  // Struct constructor.
  Stg_ATR_Params_H1() : StgParams(stg_atr_defaults) {
    lot_size = 0;
    signal_open_method = 0;
    signal_open_filter = 32;
    signal_open_level = (float)10;
    signal_open_boost = 0;
    signal_close_method = 0;
    signal_close_level = (float)0;
    price_stop_method = 0;
    price_stop_level = (float)2;
    tick_filter_method = 32;
    max_spread = 0;
  }
} stg_atr_h1;
