// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2019.1
// Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#ifndef _EP1_HH_
#define _EP1_HH_

#include "systemc.h"
#include "AESL_pkg.h"


namespace ap_rtl {

struct EP1 : public sc_module {
    // Port declarations 3
    sc_out< sc_logic > ap_ready;
    sc_in< sc_lv<32> > x;
    sc_out< sc_lv<32> > ap_return;


    // Module declarations
    EP1(sc_module_name name);
    SC_HAS_PROCESS(EP1);

    ~EP1();

    sc_trace_file* mVcdFile;

    sc_signal< sc_lv<6> > trunc_ln49_fu_40_p1;
    sc_signal< sc_lv<26> > lshr_ln_fu_30_p4;
    sc_signal< sc_lv<11> > trunc_ln49_3_fu_62_p1;
    sc_signal< sc_lv<21> > lshr_ln49_3_fu_52_p4;
    sc_signal< sc_lv<25> > trunc_ln49_4_fu_84_p1;
    sc_signal< sc_lv<7> > lshr_ln49_4_fu_74_p4;
    sc_signal< sc_lv<32> > or_ln_fu_44_p3;
    sc_signal< sc_lv<32> > or_ln49_4_fu_88_p3;
    sc_signal< sc_lv<32> > xor_ln65_fu_96_p2;
    sc_signal< sc_lv<32> > or_ln49_3_fu_66_p3;
    static const sc_logic ap_const_logic_1;
    static const bool ap_const_boolean_1;
    static const sc_lv<32> ap_const_lv32_6;
    static const sc_lv<32> ap_const_lv32_1F;
    static const sc_lv<32> ap_const_lv32_B;
    static const sc_lv<32> ap_const_lv32_19;
    static const sc_logic ap_const_logic_0;
    // Thread declarations
    void thread_ap_ready();
    void thread_ap_return();
    void thread_lshr_ln49_3_fu_52_p4();
    void thread_lshr_ln49_4_fu_74_p4();
    void thread_lshr_ln_fu_30_p4();
    void thread_or_ln49_3_fu_66_p3();
    void thread_or_ln49_4_fu_88_p3();
    void thread_or_ln_fu_44_p3();
    void thread_trunc_ln49_3_fu_62_p1();
    void thread_trunc_ln49_4_fu_84_p1();
    void thread_trunc_ln49_fu_40_p1();
    void thread_xor_ln65_fu_96_p2();
};

}

using namespace ap_rtl;

#endif
