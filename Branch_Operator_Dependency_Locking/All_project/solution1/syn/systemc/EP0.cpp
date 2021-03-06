// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2019.1
// Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#include "EP0.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

const sc_logic EP0::ap_const_logic_1 = sc_dt::Log_1;
const bool EP0::ap_const_boolean_1 = true;
const sc_lv<1> EP0::ap_const_lv1_0 = "0";
const sc_lv<1> EP0::ap_const_lv1_1 = "1";
const sc_lv<32> EP0::ap_const_lv32_3 = "11";
const sc_lv<32> EP0::ap_const_lv32_6 = "110";
const sc_lv<32> EP0::ap_const_lv32_1E = "11110";
const sc_lv<32> EP0::ap_const_lv32_1F = "11111";
const sc_lv<32> EP0::ap_const_lv32_2 = "10";
const sc_lv<32> EP0::ap_const_lv32_13 = "10011";
const sc_lv<32> EP0::ap_const_lv32_D = "1101";
const sc_lv<32> EP0::ap_const_lv32_A = "1010";
const sc_lv<32> EP0::ap_const_lv32_16 = "10110";
const sc_lv<32> EP0::ap_const_lv32_1A = "11010";
const sc_lv<32> EP0::ap_const_lv32_E = "1110";
const sc_lv<32> EP0::ap_const_lv32_12 = "10010";
const sc_logic EP0::ap_const_logic_0 = sc_dt::Log_0;

EP0::EP0(sc_module_name name) : sc_module(name), mVcdFile(0) {

    SC_METHOD(thread_ap_phi_mux_p_0_phi_fu_81_p4);
    sensitive << ( xor_ln161_1_fu_269_p2 );
    sensitive << ( tmp_fu_91_p3 );
    sensitive << ( xor_ln167_fu_380_p2 );

    SC_METHOD(thread_ap_ready);

    SC_METHOD(thread_ap_return);
    sensitive << ( ap_phi_mux_p_0_phi_fu_81_p4 );

    SC_METHOD(thread_lshr_ln1_fu_129_p4);
    sensitive << ( x );

    SC_METHOD(thread_lshr_ln56_1_fu_215_p4);
    sensitive << ( x );

    SC_METHOD(thread_lshr_ln56_2_fu_280_p4);
    sensitive << ( x );

    SC_METHOD(thread_lshr_ln56_3_fu_332_p4);
    sensitive << ( x );

    SC_METHOD(thread_lshr_ln56_s_fu_163_p4);
    sensitive << ( x );

    SC_METHOD(thread_lshr_ln60_1_fu_233_p4);
    sensitive << ( x );

    SC_METHOD(thread_lshr_ln60_2_fu_298_p4);
    sensitive << ( x );

    SC_METHOD(thread_lshr_ln60_3_fu_350_p4);
    sensitive << ( x );

    SC_METHOD(thread_lshr_ln60_s_fu_181_p4);
    sensitive << ( x );

    SC_METHOD(thread_lshr_ln_fu_111_p4);
    sensitive << ( x );

    SC_METHOD(thread_or_ln4_fu_143_p3);
    sensitive << ( trunc_ln60_12_fu_139_p1 );
    sensitive << ( lshr_ln1_fu_129_p4 );

    SC_METHOD(thread_or_ln56_1_fu_225_p3);
    sensitive << ( trunc_ln56_14_fu_211_p1 );
    sensitive << ( lshr_ln56_1_fu_215_p4 );

    SC_METHOD(thread_or_ln56_2_fu_290_p3);
    sensitive << ( trunc_ln56_fu_276_p1 );
    sensitive << ( lshr_ln56_2_fu_280_p4 );

    SC_METHOD(thread_or_ln56_3_fu_342_p3);
    sensitive << ( trunc_ln56_11_fu_328_p1 );
    sensitive << ( lshr_ln56_3_fu_332_p4 );

    SC_METHOD(thread_or_ln56_s_fu_173_p3);
    sensitive << ( trunc_ln56_13_fu_159_p1 );
    sensitive << ( lshr_ln56_s_fu_163_p4 );

    SC_METHOD(thread_or_ln60_1_fu_247_p3);
    sensitive << ( trunc_ln60_14_fu_243_p1 );
    sensitive << ( lshr_ln60_1_fu_233_p4 );

    SC_METHOD(thread_or_ln60_2_fu_312_p3);
    sensitive << ( trunc_ln60_fu_308_p1 );
    sensitive << ( lshr_ln60_2_fu_298_p4 );

    SC_METHOD(thread_or_ln60_3_fu_364_p3);
    sensitive << ( trunc_ln60_11_fu_360_p1 );
    sensitive << ( lshr_ln60_3_fu_350_p4 );

    SC_METHOD(thread_or_ln60_s_fu_195_p3);
    sensitive << ( trunc_ln60_13_fu_191_p1 );
    sensitive << ( lshr_ln60_s_fu_181_p4 );

    SC_METHOD(thread_or_ln_fu_121_p3);
    sensitive << ( trunc_ln56_12_fu_107_p1 );
    sensitive << ( lshr_ln_fu_111_p4 );

    SC_METHOD(thread_select_ln54_11_fu_203_p3);
    sensitive << ( tmp_6_fu_99_p3 );
    sensitive << ( or_ln60_s_fu_195_p3 );
    sensitive << ( or_ln56_s_fu_173_p3 );

    SC_METHOD(thread_select_ln54_12_fu_255_p3);
    sensitive << ( tmp_6_fu_99_p3 );
    sensitive << ( or_ln60_1_fu_247_p3 );
    sensitive << ( or_ln56_1_fu_225_p3 );

    SC_METHOD(thread_select_ln54_13_fu_320_p3);
    sensitive << ( tmp_6_fu_99_p3 );
    sensitive << ( or_ln60_2_fu_312_p3 );
    sensitive << ( or_ln56_2_fu_290_p3 );

    SC_METHOD(thread_select_ln54_14_fu_372_p3);
    sensitive << ( tmp_6_fu_99_p3 );
    sensitive << ( or_ln60_3_fu_364_p3 );
    sensitive << ( or_ln56_3_fu_342_p3 );

    SC_METHOD(thread_select_ln54_fu_151_p3);
    sensitive << ( tmp_6_fu_99_p3 );
    sensitive << ( or_ln4_fu_143_p3 );
    sensitive << ( or_ln_fu_121_p3 );

    SC_METHOD(thread_tmp_6_fu_99_p3);
    sensitive << ( rtl_key_r );

    SC_METHOD(thread_tmp_fu_91_p3);
    sensitive << ( rtl_key_r );

    SC_METHOD(thread_trunc_ln56_11_fu_328_p1);
    sensitive << ( x );

    SC_METHOD(thread_trunc_ln56_12_fu_107_p1);
    sensitive << ( x );

    SC_METHOD(thread_trunc_ln56_13_fu_159_p1);
    sensitive << ( x );

    SC_METHOD(thread_trunc_ln56_14_fu_211_p1);
    sensitive << ( x );

    SC_METHOD(thread_trunc_ln56_fu_276_p1);
    sensitive << ( x );

    SC_METHOD(thread_trunc_ln60_11_fu_360_p1);
    sensitive << ( x );

    SC_METHOD(thread_trunc_ln60_12_fu_139_p1);
    sensitive << ( x );

    SC_METHOD(thread_trunc_ln60_13_fu_191_p1);
    sensitive << ( x );

    SC_METHOD(thread_trunc_ln60_14_fu_243_p1);
    sensitive << ( x );

    SC_METHOD(thread_trunc_ln60_fu_308_p1);
    sensitive << ( x );

    SC_METHOD(thread_xor_ln161_1_fu_269_p2);
    sensitive << ( xor_ln161_fu_263_p2 );
    sensitive << ( select_ln54_11_fu_203_p3 );

    SC_METHOD(thread_xor_ln161_fu_263_p2);
    sensitive << ( select_ln54_fu_151_p3 );
    sensitive << ( select_ln54_12_fu_255_p3 );

    SC_METHOD(thread_xor_ln167_fu_380_p2);
    sensitive << ( select_ln54_14_fu_372_p3 );
    sensitive << ( select_ln54_13_fu_320_p3 );

    static int apTFileNum = 0;
    stringstream apTFilenSS;
    apTFilenSS << "EP0_sc_trace_" << apTFileNum ++;
    string apTFn = apTFilenSS.str();
    mVcdFile = sc_create_vcd_trace_file(apTFn.c_str());
    mVcdFile->set_time_unit(1, SC_PS);
    if (1) {
#ifdef __HLS_TRACE_LEVEL_PORT_HIER__
    sc_trace(mVcdFile, ap_ready, "(port)ap_ready");
    sc_trace(mVcdFile, x, "(port)x");
    sc_trace(mVcdFile, rtl_key_r, "(port)rtl_key_r");
    sc_trace(mVcdFile, ap_return, "(port)ap_return");
#endif
#ifdef __HLS_TRACE_LEVEL_INT__
    sc_trace(mVcdFile, xor_ln161_1_fu_269_p2, "xor_ln161_1_fu_269_p2");
    sc_trace(mVcdFile, ap_phi_mux_p_0_phi_fu_81_p4, "ap_phi_mux_p_0_phi_fu_81_p4");
    sc_trace(mVcdFile, tmp_fu_91_p3, "tmp_fu_91_p3");
    sc_trace(mVcdFile, xor_ln167_fu_380_p2, "xor_ln167_fu_380_p2");
    sc_trace(mVcdFile, trunc_ln56_12_fu_107_p1, "trunc_ln56_12_fu_107_p1");
    sc_trace(mVcdFile, lshr_ln_fu_111_p4, "lshr_ln_fu_111_p4");
    sc_trace(mVcdFile, trunc_ln60_12_fu_139_p1, "trunc_ln60_12_fu_139_p1");
    sc_trace(mVcdFile, lshr_ln1_fu_129_p4, "lshr_ln1_fu_129_p4");
    sc_trace(mVcdFile, tmp_6_fu_99_p3, "tmp_6_fu_99_p3");
    sc_trace(mVcdFile, or_ln4_fu_143_p3, "or_ln4_fu_143_p3");
    sc_trace(mVcdFile, or_ln_fu_121_p3, "or_ln_fu_121_p3");
    sc_trace(mVcdFile, trunc_ln56_13_fu_159_p1, "trunc_ln56_13_fu_159_p1");
    sc_trace(mVcdFile, lshr_ln56_s_fu_163_p4, "lshr_ln56_s_fu_163_p4");
    sc_trace(mVcdFile, trunc_ln60_13_fu_191_p1, "trunc_ln60_13_fu_191_p1");
    sc_trace(mVcdFile, lshr_ln60_s_fu_181_p4, "lshr_ln60_s_fu_181_p4");
    sc_trace(mVcdFile, or_ln60_s_fu_195_p3, "or_ln60_s_fu_195_p3");
    sc_trace(mVcdFile, or_ln56_s_fu_173_p3, "or_ln56_s_fu_173_p3");
    sc_trace(mVcdFile, trunc_ln56_14_fu_211_p1, "trunc_ln56_14_fu_211_p1");
    sc_trace(mVcdFile, lshr_ln56_1_fu_215_p4, "lshr_ln56_1_fu_215_p4");
    sc_trace(mVcdFile, trunc_ln60_14_fu_243_p1, "trunc_ln60_14_fu_243_p1");
    sc_trace(mVcdFile, lshr_ln60_1_fu_233_p4, "lshr_ln60_1_fu_233_p4");
    sc_trace(mVcdFile, or_ln60_1_fu_247_p3, "or_ln60_1_fu_247_p3");
    sc_trace(mVcdFile, or_ln56_1_fu_225_p3, "or_ln56_1_fu_225_p3");
    sc_trace(mVcdFile, select_ln54_fu_151_p3, "select_ln54_fu_151_p3");
    sc_trace(mVcdFile, select_ln54_12_fu_255_p3, "select_ln54_12_fu_255_p3");
    sc_trace(mVcdFile, xor_ln161_fu_263_p2, "xor_ln161_fu_263_p2");
    sc_trace(mVcdFile, select_ln54_11_fu_203_p3, "select_ln54_11_fu_203_p3");
    sc_trace(mVcdFile, trunc_ln56_fu_276_p1, "trunc_ln56_fu_276_p1");
    sc_trace(mVcdFile, lshr_ln56_2_fu_280_p4, "lshr_ln56_2_fu_280_p4");
    sc_trace(mVcdFile, trunc_ln60_fu_308_p1, "trunc_ln60_fu_308_p1");
    sc_trace(mVcdFile, lshr_ln60_2_fu_298_p4, "lshr_ln60_2_fu_298_p4");
    sc_trace(mVcdFile, or_ln60_2_fu_312_p3, "or_ln60_2_fu_312_p3");
    sc_trace(mVcdFile, or_ln56_2_fu_290_p3, "or_ln56_2_fu_290_p3");
    sc_trace(mVcdFile, trunc_ln56_11_fu_328_p1, "trunc_ln56_11_fu_328_p1");
    sc_trace(mVcdFile, lshr_ln56_3_fu_332_p4, "lshr_ln56_3_fu_332_p4");
    sc_trace(mVcdFile, trunc_ln60_11_fu_360_p1, "trunc_ln60_11_fu_360_p1");
    sc_trace(mVcdFile, lshr_ln60_3_fu_350_p4, "lshr_ln60_3_fu_350_p4");
    sc_trace(mVcdFile, or_ln60_3_fu_364_p3, "or_ln60_3_fu_364_p3");
    sc_trace(mVcdFile, or_ln56_3_fu_342_p3, "or_ln56_3_fu_342_p3");
    sc_trace(mVcdFile, select_ln54_14_fu_372_p3, "select_ln54_14_fu_372_p3");
    sc_trace(mVcdFile, select_ln54_13_fu_320_p3, "select_ln54_13_fu_320_p3");
#endif

    }
}

EP0::~EP0() {
    if (mVcdFile) 
        sc_close_vcd_trace_file(mVcdFile);

}

void EP0::thread_ap_phi_mux_p_0_phi_fu_81_p4() {
    if (esl_seteq<1,1,1>(tmp_fu_91_p3.read(), ap_const_lv1_1)) {
        ap_phi_mux_p_0_phi_fu_81_p4 = xor_ln167_fu_380_p2.read();
    } else if (esl_seteq<1,1,1>(tmp_fu_91_p3.read(), ap_const_lv1_0)) {
        ap_phi_mux_p_0_phi_fu_81_p4 = xor_ln161_1_fu_269_p2.read();
    } else {
        ap_phi_mux_p_0_phi_fu_81_p4 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void EP0::thread_ap_ready() {
    ap_ready = ap_const_logic_1;
}

void EP0::thread_ap_return() {
    ap_return = ap_phi_mux_p_0_phi_fu_81_p4.read();
}

void EP0::thread_lshr_ln1_fu_129_p4() {
    lshr_ln1_fu_129_p4 = x.read().range(31, 2);
}

void EP0::thread_lshr_ln56_1_fu_215_p4() {
    lshr_ln56_1_fu_215_p4 = x.read().range(31, 10);
}

void EP0::thread_lshr_ln56_2_fu_280_p4() {
    lshr_ln56_2_fu_280_p4 = x.read().range(31, 26);
}

void EP0::thread_lshr_ln56_3_fu_332_p4() {
    lshr_ln56_3_fu_332_p4 = x.read().range(31, 14);
}

void EP0::thread_lshr_ln56_s_fu_163_p4() {
    lshr_ln56_s_fu_163_p4 = x.read().range(31, 19);
}

void EP0::thread_lshr_ln60_1_fu_233_p4() {
    lshr_ln60_1_fu_233_p4 = x.read().range(31, 22);
}

void EP0::thread_lshr_ln60_2_fu_298_p4() {
    lshr_ln60_2_fu_298_p4 = x.read().range(31, 6);
}

void EP0::thread_lshr_ln60_3_fu_350_p4() {
    lshr_ln60_3_fu_350_p4 = x.read().range(31, 18);
}

void EP0::thread_lshr_ln60_s_fu_181_p4() {
    lshr_ln60_s_fu_181_p4 = x.read().range(31, 13);
}

void EP0::thread_lshr_ln_fu_111_p4() {
    lshr_ln_fu_111_p4 = x.read().range(31, 30);
}

void EP0::thread_or_ln4_fu_143_p3() {
    or_ln4_fu_143_p3 = esl_concat<2,30>(trunc_ln60_12_fu_139_p1.read(), lshr_ln1_fu_129_p4.read());
}

void EP0::thread_or_ln56_1_fu_225_p3() {
    or_ln56_1_fu_225_p3 = esl_concat<10,22>(trunc_ln56_14_fu_211_p1.read(), lshr_ln56_1_fu_215_p4.read());
}

void EP0::thread_or_ln56_2_fu_290_p3() {
    or_ln56_2_fu_290_p3 = esl_concat<26,6>(trunc_ln56_fu_276_p1.read(), lshr_ln56_2_fu_280_p4.read());
}

void EP0::thread_or_ln56_3_fu_342_p3() {
    or_ln56_3_fu_342_p3 = esl_concat<14,18>(trunc_ln56_11_fu_328_p1.read(), lshr_ln56_3_fu_332_p4.read());
}

void EP0::thread_or_ln56_s_fu_173_p3() {
    or_ln56_s_fu_173_p3 = esl_concat<19,13>(trunc_ln56_13_fu_159_p1.read(), lshr_ln56_s_fu_163_p4.read());
}

void EP0::thread_or_ln60_1_fu_247_p3() {
    or_ln60_1_fu_247_p3 = esl_concat<22,10>(trunc_ln60_14_fu_243_p1.read(), lshr_ln60_1_fu_233_p4.read());
}

void EP0::thread_or_ln60_2_fu_312_p3() {
    or_ln60_2_fu_312_p3 = esl_concat<6,26>(trunc_ln60_fu_308_p1.read(), lshr_ln60_2_fu_298_p4.read());
}

void EP0::thread_or_ln60_3_fu_364_p3() {
    or_ln60_3_fu_364_p3 = esl_concat<18,14>(trunc_ln60_11_fu_360_p1.read(), lshr_ln60_3_fu_350_p4.read());
}

void EP0::thread_or_ln60_s_fu_195_p3() {
    or_ln60_s_fu_195_p3 = esl_concat<13,19>(trunc_ln60_13_fu_191_p1.read(), lshr_ln60_s_fu_181_p4.read());
}

void EP0::thread_or_ln_fu_121_p3() {
    or_ln_fu_121_p3 = esl_concat<30,2>(trunc_ln56_12_fu_107_p1.read(), lshr_ln_fu_111_p4.read());
}

void EP0::thread_select_ln54_11_fu_203_p3() {
    select_ln54_11_fu_203_p3 = (!tmp_6_fu_99_p3.read()[0].is_01())? sc_lv<32>(): ((tmp_6_fu_99_p3.read()[0].to_bool())? or_ln60_s_fu_195_p3.read(): or_ln56_s_fu_173_p3.read());
}

void EP0::thread_select_ln54_12_fu_255_p3() {
    select_ln54_12_fu_255_p3 = (!tmp_6_fu_99_p3.read()[0].is_01())? sc_lv<32>(): ((tmp_6_fu_99_p3.read()[0].to_bool())? or_ln60_1_fu_247_p3.read(): or_ln56_1_fu_225_p3.read());
}

void EP0::thread_select_ln54_13_fu_320_p3() {
    select_ln54_13_fu_320_p3 = (!tmp_6_fu_99_p3.read()[0].is_01())? sc_lv<32>(): ((tmp_6_fu_99_p3.read()[0].to_bool())? or_ln60_2_fu_312_p3.read(): or_ln56_2_fu_290_p3.read());
}

void EP0::thread_select_ln54_14_fu_372_p3() {
    select_ln54_14_fu_372_p3 = (!tmp_6_fu_99_p3.read()[0].is_01())? sc_lv<32>(): ((tmp_6_fu_99_p3.read()[0].to_bool())? or_ln60_3_fu_364_p3.read(): or_ln56_3_fu_342_p3.read());
}

void EP0::thread_select_ln54_fu_151_p3() {
    select_ln54_fu_151_p3 = (!tmp_6_fu_99_p3.read()[0].is_01())? sc_lv<32>(): ((tmp_6_fu_99_p3.read()[0].to_bool())? or_ln4_fu_143_p3.read(): or_ln_fu_121_p3.read());
}

void EP0::thread_tmp_6_fu_99_p3() {
    tmp_6_fu_99_p3 = rtl_key_r.read().range(6, 6);
}

void EP0::thread_tmp_fu_91_p3() {
    tmp_fu_91_p3 = rtl_key_r.read().range(3, 3);
}

void EP0::thread_trunc_ln56_11_fu_328_p1() {
    trunc_ln56_11_fu_328_p1 = x.read().range(14-1, 0);
}

void EP0::thread_trunc_ln56_12_fu_107_p1() {
    trunc_ln56_12_fu_107_p1 = x.read().range(30-1, 0);
}

void EP0::thread_trunc_ln56_13_fu_159_p1() {
    trunc_ln56_13_fu_159_p1 = x.read().range(19-1, 0);
}

void EP0::thread_trunc_ln56_14_fu_211_p1() {
    trunc_ln56_14_fu_211_p1 = x.read().range(10-1, 0);
}

void EP0::thread_trunc_ln56_fu_276_p1() {
    trunc_ln56_fu_276_p1 = x.read().range(26-1, 0);
}

void EP0::thread_trunc_ln60_11_fu_360_p1() {
    trunc_ln60_11_fu_360_p1 = x.read().range(18-1, 0);
}

void EP0::thread_trunc_ln60_12_fu_139_p1() {
    trunc_ln60_12_fu_139_p1 = x.read().range(2-1, 0);
}

void EP0::thread_trunc_ln60_13_fu_191_p1() {
    trunc_ln60_13_fu_191_p1 = x.read().range(13-1, 0);
}

void EP0::thread_trunc_ln60_14_fu_243_p1() {
    trunc_ln60_14_fu_243_p1 = x.read().range(22-1, 0);
}

void EP0::thread_trunc_ln60_fu_308_p1() {
    trunc_ln60_fu_308_p1 = x.read().range(6-1, 0);
}

void EP0::thread_xor_ln161_1_fu_269_p2() {
    xor_ln161_1_fu_269_p2 = (xor_ln161_fu_263_p2.read() ^ select_ln54_11_fu_203_p3.read());
}

void EP0::thread_xor_ln161_fu_263_p2() {
    xor_ln161_fu_263_p2 = (select_ln54_fu_151_p3.read() ^ select_ln54_12_fu_255_p3.read());
}

void EP0::thread_xor_ln167_fu_380_p2() {
    xor_ln167_fu_380_p2 = (select_ln54_14_fu_372_p3.read() ^ select_ln54_13_fu_320_p3.read());
}

}

