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
const sc_logic MAJ::ap_const_logic_0 = sc_dt::Log_0;

MAJ::MAJ(sc_module_name name) : sc_module(name), mVcdFile(0) {

    SC_METHOD(thread_and_ln59_1_fu_38_p2);
    sensitive << ( y );
    sensitive << ( z );

    SC_METHOD(thread_and_ln59_fu_32_p2);
    sensitive << ( x );
    sensitive << ( xor_ln59_fu_26_p2 );

    SC_METHOD(thread_ap_ready);

    SC_METHOD(thread_ap_return);
    sensitive << ( and_ln59_fu_32_p2 );
    sensitive << ( and_ln59_1_fu_38_p2 );

    SC_METHOD(thread_xor_ln59_fu_26_p2);
    sensitive << ( y );
    sensitive << ( z );

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
    sc_trace(mVcdFile, ap_return, "(port)ap_return");
#endif
#ifdef __HLS_TRACE_LEVEL_INT__
    sc_trace(mVcdFile, xor_ln59_fu_26_p2, "xor_ln59_fu_26_p2");
    sc_trace(mVcdFile, and_ln59_fu_32_p2, "and_ln59_fu_32_p2");
    sc_trace(mVcdFile, and_ln59_1_fu_38_p2, "and_ln59_1_fu_38_p2");
#endif

    }
}

MAJ::~MAJ() {
    if (mVcdFile) 
        sc_close_vcd_trace_file(mVcdFile);

}

void MAJ::thread_and_ln59_1_fu_38_p2() {
    and_ln59_1_fu_38_p2 = (z.read() & y.read());
}

void MAJ::thread_and_ln59_fu_32_p2() {
    and_ln59_fu_32_p2 = (xor_ln59_fu_26_p2.read() & x.read());
}

void MAJ::thread_ap_ready() {
    ap_ready = ap_const_logic_1;
}

void MAJ::thread_ap_return() {
    ap_return = (and_ln59_fu_32_p2.read() ^ and_ln59_1_fu_38_p2.read());
}

void MAJ::thread_xor_ln59_fu_26_p2() {
    xor_ln59_fu_26_p2 = (z.read() ^ y.read());
}

}

