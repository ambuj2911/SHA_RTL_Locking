// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2019.1
// Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#include "MAJ.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

const sc_logic MAJ::ap_const_logic_1 = sc_dt::Log_1;
const bool MAJ::ap_const_boolean_1 = true;
const sc_lv<32> MAJ::ap_const_lv32_4 = "100";
const sc_lv<32> MAJ::ap_const_lv32_FFFFFFFF = "11111111111111111111111111111111";
const sc_logic MAJ::ap_const_logic_0 = sc_dt::Log_0;

MAJ::MAJ(sc_module_name name) : sc_module(name), mVcdFile(0) {

    SC_METHOD(thread_and_ln136_1_fu_58_p2);
    sensitive << ( y );
    sensitive << ( z );

    SC_METHOD(thread_and_ln136_fu_52_p2);
    sensitive << ( x );
    sensitive << ( xor_ln136_fu_46_p2 );

    SC_METHOD(thread_and_ln142_fu_70_p2);
    sensitive << ( x );
    sensitive << ( y );

    SC_METHOD(thread_ap_ready);

    SC_METHOD(thread_ap_return);
    sensitive << ( tmp_fu_38_p3 );
    sensitive << ( xor_ln142_2_fu_100_p2 );
    sensitive << ( xor_ln136_1_fu_64_p2 );

    SC_METHOD(thread_or_ln142_1_fu_82_p2);
    sensitive << ( y );
    sensitive << ( z );

    SC_METHOD(thread_or_ln142_fu_76_p2);
    sensitive << ( x );
    sensitive << ( z );

    SC_METHOD(thread_tmp_fu_38_p3);
    sensitive << ( rtl_key_r );

    SC_METHOD(thread_xor_ln136_1_fu_64_p2);
    sensitive << ( and_ln136_fu_52_p2 );
    sensitive << ( and_ln136_1_fu_58_p2 );

    SC_METHOD(thread_xor_ln136_fu_46_p2);
    sensitive << ( y );
    sensitive << ( z );

    SC_METHOD(thread_xor_ln142_1_fu_94_p2);
    sensitive << ( or_ln142_1_fu_82_p2 );

    SC_METHOD(thread_xor_ln142_2_fu_100_p2);
    sensitive << ( xor_ln142_fu_88_p2 );
    sensitive << ( xor_ln142_1_fu_94_p2 );

    SC_METHOD(thread_xor_ln142_fu_88_p2);
    sensitive << ( and_ln142_fu_70_p2 );
    sensitive << ( or_ln142_fu_76_p2 );

    static int apTFileNum = 0;
    stringstream apTFilenSS;
    apTFilenSS << "MAJ_sc_trace_" << apTFileNum ++;
    string apTFn = apTFilenSS.str();
    mVcdFile = sc_create_vcd_trace_file(apTFn.c_str());
    mVcdFile->set_time_unit(1, SC_PS);
    if (1) {
#ifdef __HLS_TRACE_LEVEL_PORT_HIER__
    sc_trace(mVcdFile, ap_ready, "(port)ap_ready");
    sc_trace(mVcdFile, x, "(port)x");
    sc_trace(mVcdFile, y, "(port)y");
    sc_trace(mVcdFile, z, "(port)z");
    sc_trace(mVcdFile, rtl_key_r, "(port)rtl_key_r");
    sc_trace(mVcdFile, ap_return, "(port)ap_return");
#endif
#ifdef __HLS_TRACE_LEVEL_INT__
    sc_trace(mVcdFile, xor_ln136_fu_46_p2, "xor_ln136_fu_46_p2");
    sc_trace(mVcdFile, and_ln136_fu_52_p2, "and_ln136_fu_52_p2");
    sc_trace(mVcdFile, and_ln136_1_fu_58_p2, "and_ln136_1_fu_58_p2");
    sc_trace(mVcdFile, and_ln142_fu_70_p2, "and_ln142_fu_70_p2");
    sc_trace(mVcdFile, or_ln142_fu_76_p2, "or_ln142_fu_76_p2");
    sc_trace(mVcdFile, or_ln142_1_fu_82_p2, "or_ln142_1_fu_82_p2");
    sc_trace(mVcdFile, xor_ln142_fu_88_p2, "xor_ln142_fu_88_p2");
    sc_trace(mVcdFile, xor_ln142_1_fu_94_p2, "xor_ln142_1_fu_94_p2");
    sc_trace(mVcdFile, tmp_fu_38_p3, "tmp_fu_38_p3");
    sc_trace(mVcdFile, xor_ln142_2_fu_100_p2, "xor_ln142_2_fu_100_p2");
    sc_trace(mVcdFile, xor_ln136_1_fu_64_p2, "xor_ln136_1_fu_64_p2");
#endif

    }
}

MAJ::~MAJ() {
    if (mVcdFile) 
        sc_close_vcd_trace_file(mVcdFile);

}

void MAJ::thread_and_ln136_1_fu_58_p2() {
    and_ln136_1_fu_58_p2 = (z.read() & y.read());
}

void MAJ::thread_and_ln136_fu_52_p2() {
    and_ln136_fu_52_p2 = (xor_ln136_fu_46_p2.read() & x.read());
}

void MAJ::thread_and_ln142_fu_70_p2() {
    and_ln142_fu_70_p2 = (y.read() & x.read());
}

void MAJ::thread_ap_ready() {
    ap_ready = ap_const_logic_1;
}

void MAJ::thread_ap_return() {
    ap_return = (!tmp_fu_38_p3.read()[0].is_01())? sc_lv<32>(): ((tmp_fu_38_p3.read()[0].to_bool())? xor_ln142_2_fu_100_p2.read(): xor_ln136_1_fu_64_p2.read());
}

void MAJ::thread_or_ln142_1_fu_82_p2() {
    or_ln142_1_fu_82_p2 = (z.read() | y.read());
}

void MAJ::thread_or_ln142_fu_76_p2() {
    or_ln142_fu_76_p2 = (z.read() | x.read());
}

void MAJ::thread_tmp_fu_38_p3() {
    tmp_fu_38_p3 = rtl_key_r.read().range(4, 4);
}

void MAJ::thread_xor_ln136_1_fu_64_p2() {
    xor_ln136_1_fu_64_p2 = (and_ln136_fu_52_p2.read() ^ and_ln136_1_fu_58_p2.read());
}

void MAJ::thread_xor_ln136_fu_46_p2() {
    xor_ln136_fu_46_p2 = (z.read() ^ y.read());
}

void MAJ::thread_xor_ln142_1_fu_94_p2() {
    xor_ln142_1_fu_94_p2 = (or_ln142_1_fu_82_p2.read() ^ ap_const_lv32_FFFFFFFF);
}

void MAJ::thread_xor_ln142_2_fu_100_p2() {
    xor_ln142_2_fu_100_p2 = (xor_ln142_fu_88_p2.read() ^ xor_ln142_1_fu_94_p2.read());
}

void MAJ::thread_xor_ln142_fu_88_p2() {
    xor_ln142_fu_88_p2 = (and_ln142_fu_70_p2.read() ^ or_ln142_fu_76_p2.read());
}

}

