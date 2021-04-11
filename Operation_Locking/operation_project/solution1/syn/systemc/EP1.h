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
    // Port declarations 4
    sc_out< sc_logic > ap_ready;
    sc_in< sc_lv<32> > x;
    sc_in< sc_lv<32> > rtl_key_r;
    sc_out< sc_lv<32> > ap_return;


    // Module declarations
    EP1(sc_module_name name);
    SC_HAS_PROCESS(EP1);

    ~EP1();

    sc_trace_file* mVcdFile;

    sc_signal< sc_lv<32> > xor_ln184_fu_211_p2;
    sc_signal< sc_lv<32> > ap_phi_mux_p_0_phi_fu_81_p4;
    sc_signal< sc_lv<1> > tmp_fu_91_p3;
    sc_signal< sc_lv<32> > xor_ln189_1_fu_380_p2;
    sc_signal< sc_lv<28> > trunc_ln56_9_fu_107_p1;
    sc_signal< sc_lv<4> > lshr_ln_fu_111_p4;
    sc_signal< sc_lv<4> > trunc_ln60_9_fu_139_p1;
    sc_signal< sc_lv<28> > lshr_ln9_fu_129_p4;
    sc_signal< sc_lv<1> > tmp_4_fu_99_p3;
    sc_signal< sc_lv<32> > or_ln3_fu_143_p3;
    sc_signal< sc_lv<32> > or_ln_fu_121_p3;
    sc_signal< sc_lv<22> > trunc_ln56_10_fu_159_p1;
    sc_signal< sc_lv<10> > lshr_ln56_7_fu_163_p4;
    sc_signal< sc_lv<10> > trunc_ln60_10_fu_191_p1;
    sc_signal< sc_lv<22> > lshr_ln60_7_fu_181_p4;
    sc_signal< sc_lv<32> > or_ln60_7_fu_195_p3;
    sc_signal< sc_lv<32> > or_ln56_7_fu_173_p3;
    sc_signal< sc_lv<32> > select_ln54_7_fu_203_p3;
    sc_signal< sc_lv<32> > select_ln54_fu_151_p3;
    sc_signal< sc_lv<26> > trunc_ln56_fu_218_p1;
    sc_signal< sc_lv<6> > lshr_ln56_8_fu_222_p4;
    sc_signal< sc_lv<6> > trunc_ln60_fu_250_p1;
    sc_signal< sc_lv<26> > lshr_ln60_8_fu_240_p4;
    sc_signal< sc_lv<32> > or_ln60_8_fu_254_p3;
    sc_signal< sc_lv<32> > or_ln56_8_fu_232_p3;
    sc_signal< sc_lv<21> > trunc_ln56_7_fu_270_p1;
    sc_signal< sc_lv<11> > lshr_ln56_9_fu_274_p4;
    sc_signal< sc_lv<11> > trunc_ln60_7_fu_302_p1;
    sc_signal< sc_lv<21> > lshr_ln60_9_fu_292_p4;
    sc_signal< sc_lv<32> > or_ln60_9_fu_306_p3;
    sc_signal< sc_lv<32> > or_ln56_9_fu_284_p3;
    sc_signal< sc_lv<7> > trunc_ln56_8_fu_322_p1;
    sc_signal< sc_lv<25> > lshr_ln56_s_fu_326_p4;
    sc_signal< sc_lv<25> > trunc_ln60_8_fu_354_p1;
    sc_signal< sc_lv<7> > lshr_ln60_s_fu_344_p4;
    sc_signal< sc_lv<32> > or_ln60_s_fu_358_p3;
    sc_signal< sc_lv<32> > or_ln56_s_fu_336_p3;
    sc_signal< sc_lv<32> > select_ln54_8_fu_262_p3;
    sc_signal< sc_lv<32> > select_ln54_10_fu_366_p3;
    sc_signal< sc_lv<32> > xor_ln189_fu_374_p2;
    sc_signal< sc_lv<32> > select_ln54_9_fu_314_p3;
    static const sc_logic ap_const_logic_1;
    static const bool ap_const_boolean_1;
    static const sc_lv<1> ap_const_lv1_0;
    static const sc_lv<1> ap_const_lv1_1;
    static const sc_lv<32> ap_const_lv32_2;
    static const sc_lv<32> ap_const_lv32_6;
    static const sc_lv<32> ap_const_lv32_1C;
    static const sc_lv<32> ap_const_lv32_1F;
    static const sc_lv<32> ap_const_lv32_4;
    static const sc_lv<32> ap_const_lv32_16;
    static const sc_lv<32> ap_const_lv32_A;
    static const sc_lv<32> ap_const_lv32_1A;
    static const sc_lv<32> ap_const_lv32_15;
    static const sc_lv<32> ap_const_lv32_B;
    static const sc_lv<32> ap_const_lv32_7;
    static const sc_lv<32> ap_const_lv32_19;
    static const sc_logic ap_const_logic_0;
    // Thread declarations
    void thread_ap_phi_mux_p_0_phi_fu_81_p4();
    void thread_ap_ready();
    void thread_ap_return();
    void thread_lshr_ln56_7_fu_163_p4();
    void thread_lshr_ln56_8_fu_222_p4();
    void thread_lshr_ln56_9_fu_274_p4();
    void thread_lshr_ln56_s_fu_326_p4();
    void thread_lshr_ln60_7_fu_181_p4();
    void thread_lshr_ln60_8_fu_240_p4();
    void thread_lshr_ln60_9_fu_292_p4();
    void thread_lshr_ln60_s_fu_344_p4();
    void thread_lshr_ln9_fu_129_p4();
    void thread_lshr_ln_fu_111_p4();
    void thread_or_ln3_fu_143_p3();
    void thread_or_ln56_7_fu_173_p3();
    void thread_or_ln56_8_fu_232_p3();
    void thread_or_ln56_9_fu_284_p3();
    void thread_or_ln56_s_fu_336_p3();
    void thread_or_ln60_7_fu_195_p3();
    void thread_or_ln60_8_fu_254_p3();
    void thread_or_ln60_9_fu_306_p3();
    void thread_or_ln60_s_fu_358_p3();
    void thread_or_ln_fu_121_p3();
    void thread_select_ln54_10_fu_366_p3();
    void thread_select_ln54_7_fu_203_p3();
    void thread_select_ln54_8_fu_262_p3();
    void thread_select_ln54_9_fu_314_p3();
    void thread_select_ln54_fu_151_p3();
    void thread_tmp_4_fu_99_p3();
    void thread_tmp_fu_91_p3();
    void thread_trunc_ln56_10_fu_159_p1();
    void thread_trunc_ln56_7_fu_270_p1();
    void thread_trunc_ln56_8_fu_322_p1();
    void thread_trunc_ln56_9_fu_107_p1();
    void thread_trunc_ln56_fu_218_p1();
    void thread_trunc_ln60_10_fu_191_p1();
    void thread_trunc_ln60_7_fu_302_p1();
    void thread_trunc_ln60_8_fu_354_p1();
    void thread_trunc_ln60_9_fu_139_p1();
    void thread_trunc_ln60_fu_250_p1();
    void thread_xor_ln184_fu_211_p2();
    void thread_xor_ln189_1_fu_380_p2();
    void thread_xor_ln189_fu_374_p2();
};

}

using namespace ap_rtl;

#endif
