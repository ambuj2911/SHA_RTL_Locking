// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2019.1
// Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#ifndef _EP0_HH_
#define _EP0_HH_

#include "systemc.h"
#include "AESL_pkg.h"


namespace ap_rtl {

struct EP0 : public sc_module {
    // Port declarations 4
    sc_out< sc_logic > ap_ready;
    sc_in< sc_lv<32> > x;
    sc_in< sc_lv<32> > rtl_key_r;
    sc_out< sc_lv<32> > ap_return;


    // Module declarations
    EP0(sc_module_name name);
    SC_HAS_PROCESS(EP0);

    ~EP0();

    sc_trace_file* mVcdFile;

    sc_signal< sc_lv<32> > xor_ln161_1_fu_269_p2;
    sc_signal< sc_lv<32> > ap_phi_mux_p_0_phi_fu_81_p4;
    sc_signal< sc_lv<1> > tmp_fu_91_p3;
    sc_signal< sc_lv<32> > xor_ln167_fu_380_p2;
    sc_signal< sc_lv<30> > trunc_ln56_12_fu_107_p1;
    sc_signal< sc_lv<2> > lshr_ln_fu_111_p4;
    sc_signal< sc_lv<2> > trunc_ln60_12_fu_139_p1;
    sc_signal< sc_lv<30> > lshr_ln1_fu_129_p4;
    sc_signal< sc_lv<1> > tmp_6_fu_99_p3;
    sc_signal< sc_lv<32> > or_ln4_fu_143_p3;
    sc_signal< sc_lv<32> > or_ln_fu_121_p3;
    sc_signal< sc_lv<19> > trunc_ln56_13_fu_159_p1;
    sc_signal< sc_lv<13> > lshr_ln56_s_fu_163_p4;
    sc_signal< sc_lv<13> > trunc_ln60_13_fu_191_p1;
    sc_signal< sc_lv<19> > lshr_ln60_s_fu_181_p4;
    sc_signal< sc_lv<32> > or_ln60_s_fu_195_p3;
    sc_signal< sc_lv<32> > or_ln56_s_fu_173_p3;
    sc_signal< sc_lv<10> > trunc_ln56_14_fu_211_p1;
    sc_signal< sc_lv<22> > lshr_ln56_1_fu_215_p4;
    sc_signal< sc_lv<22> > trunc_ln60_14_fu_243_p1;
    sc_signal< sc_lv<10> > lshr_ln60_1_fu_233_p4;
    sc_signal< sc_lv<32> > or_ln60_1_fu_247_p3;
    sc_signal< sc_lv<32> > or_ln56_1_fu_225_p3;
    sc_signal< sc_lv<32> > select_ln54_fu_151_p3;
    sc_signal< sc_lv<32> > select_ln54_12_fu_255_p3;
    sc_signal< sc_lv<32> > xor_ln161_fu_263_p2;
    sc_signal< sc_lv<32> > select_ln54_11_fu_203_p3;
    sc_signal< sc_lv<26> > trunc_ln56_fu_276_p1;
    sc_signal< sc_lv<6> > lshr_ln56_2_fu_280_p4;
    sc_signal< sc_lv<6> > trunc_ln60_fu_308_p1;
    sc_signal< sc_lv<26> > lshr_ln60_2_fu_298_p4;
    sc_signal< sc_lv<32> > or_ln60_2_fu_312_p3;
    sc_signal< sc_lv<32> > or_ln56_2_fu_290_p3;
    sc_signal< sc_lv<14> > trunc_ln56_11_fu_328_p1;
    sc_signal< sc_lv<18> > lshr_ln56_3_fu_332_p4;
    sc_signal< sc_lv<18> > trunc_ln60_11_fu_360_p1;
    sc_signal< sc_lv<14> > lshr_ln60_3_fu_350_p4;
    sc_signal< sc_lv<32> > or_ln60_3_fu_364_p3;
    sc_signal< sc_lv<32> > or_ln56_3_fu_342_p3;
    sc_signal< sc_lv<32> > select_ln54_14_fu_372_p3;
    sc_signal< sc_lv<32> > select_ln54_13_fu_320_p3;
    static const sc_logic ap_const_logic_1;
    static const bool ap_const_boolean_1;
    static const sc_lv<1> ap_const_lv1_0;
    static const sc_lv<1> ap_const_lv1_1;
    static const sc_lv<32> ap_const_lv32_3;
    static const sc_lv<32> ap_const_lv32_6;
    static const sc_lv<32> ap_const_lv32_1E;
    static const sc_lv<32> ap_const_lv32_1F;
    static const sc_lv<32> ap_const_lv32_2;
    static const sc_lv<32> ap_const_lv32_13;
    static const sc_lv<32> ap_const_lv32_D;
    static const sc_lv<32> ap_const_lv32_A;
    static const sc_lv<32> ap_const_lv32_16;
    static const sc_lv<32> ap_const_lv32_1A;
    static const sc_lv<32> ap_const_lv32_E;
    static const sc_lv<32> ap_const_lv32_12;
    static const sc_logic ap_const_logic_0;
    // Thread declarations
    void thread_ap_phi_mux_p_0_phi_fu_81_p4();
    void thread_ap_ready();
    void thread_ap_return();
    void thread_lshr_ln1_fu_129_p4();
    void thread_lshr_ln56_1_fu_215_p4();
    void thread_lshr_ln56_2_fu_280_p4();
    void thread_lshr_ln56_3_fu_332_p4();
    void thread_lshr_ln56_s_fu_163_p4();
    void thread_lshr_ln60_1_fu_233_p4();
    void thread_lshr_ln60_2_fu_298_p4();
    void thread_lshr_ln60_3_fu_350_p4();
    void thread_lshr_ln60_s_fu_181_p4();
    void thread_lshr_ln_fu_111_p4();
    void thread_or_ln4_fu_143_p3();
    void thread_or_ln56_1_fu_225_p3();
    void thread_or_ln56_2_fu_290_p3();
    void thread_or_ln56_3_fu_342_p3();
    void thread_or_ln56_s_fu_173_p3();
    void thread_or_ln60_1_fu_247_p3();
    void thread_or_ln60_2_fu_312_p3();
    void thread_or_ln60_3_fu_364_p3();
    void thread_or_ln60_s_fu_195_p3();
    void thread_or_ln_fu_121_p3();
    void thread_select_ln54_11_fu_203_p3();
    void thread_select_ln54_12_fu_255_p3();
    void thread_select_ln54_13_fu_320_p3();
    void thread_select_ln54_14_fu_372_p3();
    void thread_select_ln54_fu_151_p3();
    void thread_tmp_6_fu_99_p3();
    void thread_tmp_fu_91_p3();
    void thread_trunc_ln56_11_fu_328_p1();
    void thread_trunc_ln56_12_fu_107_p1();
    void thread_trunc_ln56_13_fu_159_p1();
    void thread_trunc_ln56_14_fu_211_p1();
    void thread_trunc_ln56_fu_276_p1();
    void thread_trunc_ln60_11_fu_360_p1();
    void thread_trunc_ln60_12_fu_139_p1();
    void thread_trunc_ln60_13_fu_191_p1();
    void thread_trunc_ln60_14_fu_243_p1();
    void thread_trunc_ln60_fu_308_p1();
    void thread_xor_ln161_1_fu_269_p2();
    void thread_xor_ln161_fu_263_p2();
    void thread_xor_ln167_fu_380_p2();
};

}

using namespace ap_rtl;

#endif
