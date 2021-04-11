// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2019.1
// Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#include "SIG0.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

const sc_logic SIG0::ap_const_logic_1 = sc_dt::Log_1;
const bool SIG0::ap_const_boolean_1 = true;
const sc_lv<32> SIG0::ap_const_lv32_7 = "111";
const sc_lv<32> SIG0::ap_const_lv32_1F = "11111";
const sc_lv<32> SIG0::ap_const_lv32_12 = "10010";
const sc_lv<32> SIG0::ap_const_lv32_3 = "11";
const sc_logic SIG0::ap_const_logic_0 = sc_dt::Log_0;

SIG0::SIG0(sc_module_name name) : sc_module(name), mVcdFile(0) {

    SC_METHOD(thread_ap_ready);

    SC_METHOD(thread_ap_return);
    sensitive << ( xor_ln80_fu_86_p2 );
    sensitive << ( or_ln_fu_42_p3 );

    SC_METHOD(thread_lshr_ln52_2_fu_50_p4);
    sensitive << ( x );

    SC_METHOD(thread_lshr_ln5_fu_72_p4);
    sensitive << ( x );

    SC_METHOD(thread_lshr_ln_fu_28_p4);
    sensitive << ( x );

    SC_METHOD(thread_or_ln52_2_fu_64_p3);
    sensitive << ( trunc_ln52_2_fu_60_p1 );
    sensitive << ( lshr_ln52_2_fu_50_p4 );

    SC_METHOD(thread_or_ln_fu_42_p3);
    sensitive << ( trunc_ln52_fu_38_p1 );
    sensitive << ( lshr_ln_fu_28_p4 );

    SC_METHOD(thread_trunc_ln52_2_fu_60_p1);
    sensitive << ( x );

    SC_METHOD(thread_trunc_ln52_fu_38_p1);
    sensitive << ( x );

    SC_METHOD(thread_xor_ln80_fu_86_p2);
    sensitive << ( zext_ln80_fu_82_p1 );
    sensitive << ( or_ln52_2_fu_64_p3 );

    SC_METHOD(thread_zext_ln80_fu_82_p1);
    sensitive << ( lshr_ln5_fu_72_p4 );

    static int apTFileNum = 0;
    stringstream apTFilenSS;
    apTFilenSS << "SIG0_sc_trace_" << apTFileNum ++;
    string apTFn = apTFilenSS.str();
    mVcdFile = sc_create_vcd_trace_file(apTFn.c_str());
    mVcdFile->set_time_unit(1, SC_PS);
    if (1) {
#ifdef __HLS_TRACE_LEVEL_PORT_HIER__
    sc_trace(mVcdFile, ap_ready, "(port)ap_ready");
    sc_trace(mVcdFile, x, "(port)x");
    sc_trace(mVcdFile, ap_return, "(port)ap_return");
#endif
#ifdef __HLS_TRACE_LEVEL_INT__
    sc_trace(mVcdFile, trunc_ln52_fu_38_p1, "trunc_ln52_fu_38_p1");
    sc_trace(mVcdFile, lshr_ln_fu_28_p4, "lshr_ln_fu_28_p4");
    sc_trace(mVcdFile, trunc_ln52_2_fu_60_p1, "trunc_ln52_2_fu_60_p1");
    sc_trace(mVcdFile, lshr_ln52_2_fu_50_p4, "lshr_ln52_2_fu_50_p4");
    sc_trace(mVcdFile, lshr_ln5_fu_72_p4, "lshr_ln5_fu_72_p4");
    sc_trace(mVcdFile, zext_ln80_fu_82_p1, "zext_ln80_fu_82_p1");
    sc_trace(mVcdFile, or_ln52_2_fu_64_p3, "or_ln52_2_fu_64_p3");
    sc_trace(mVcdFile, xor_ln80_fu_86_p2, "xor_ln80_fu_86_p2");
    sc_trace(mVcdFile, or_ln_fu_42_p3, "or_ln_fu_42_p3");
#endif

    }
}

SIG0::~SIG0() {
    if (mVcdFile) 
        sc_close_vcd_trace_file(mVcdFile);

}

void SIG0::thread_ap_ready() {
    ap_ready = ap_const_logic_1;
}

void SIG0::thread_ap_return() {
    ap_return = (xor_ln80_fu_86_p2.read() ^ or_ln_fu_42_p3.read());
}

void SIG0::thread_lshr_ln52_2_fu_50_p4() {
    lshr_ln52_2_fu_50_p4 = x.read().range(31, 18);
}

void SIG0::thread_lshr_ln5_fu_72_p4() {
    lshr_ln5_fu_72_p4 = x.read().range(31, 3);
}

void SIG0::thread_lshr_ln_fu_28_p4() {
    lshr_ln_fu_28_p4 = x.read().range(31, 7);
}

void SIG0::thread_or_ln52_2_fu_64_p3() {
    or_ln52_2_fu_64_p3 = esl_concat<18,14>(trunc_ln52_2_fu_60_p1.read(), lshr_ln52_2_fu_50_p4.read());
}

void SIG0::thread_or_ln_fu_42_p3() {
    or_ln_fu_42_p3 = esl_concat<7,25>(trunc_ln52_fu_38_p1.read(), lshr_ln_fu_28_p4.read());
}

void SIG0::thread_trunc_ln52_2_fu_60_p1() {
    trunc_ln52_2_fu_60_p1 = x.read().range(18-1, 0);
}

void SIG0::thread_trunc_ln52_fu_38_p1() {
    trunc_ln52_fu_38_p1 = x.read().range(7-1, 0);
}

void SIG0::thread_xor_ln80_fu_86_p2() {
    xor_ln80_fu_86_p2 = (zext_ln80_fu_82_p1.read() ^ or_ln52_2_fu_64_p3.read());
}

void SIG0::thread_zext_ln80_fu_82_p1() {
    zext_ln80_fu_82_p1 = esl_zext<32,29>(lshr_ln5_fu_72_p4.read());
}

}

