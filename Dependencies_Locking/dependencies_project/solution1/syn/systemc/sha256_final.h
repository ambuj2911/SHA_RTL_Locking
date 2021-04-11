// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2019.1
// Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#ifndef _sha256_final_HH_
#define _sha256_final_HH_

#include "systemc.h"
#include "AESL_pkg.h"

#include "sha256_transform.h"

namespace ap_rtl {

struct sha256_final : public sc_module {
    // Port declarations 64
    sc_in_clk ap_clk;
    sc_in< sc_logic > ap_rst;
    sc_in< sc_logic > ap_start;
    sc_out< sc_logic > ap_done;
    sc_out< sc_logic > ap_idle;
    sc_out< sc_logic > ap_ready;
    sc_out< sc_lv<4> > ctx_data_0_address0;
    sc_out< sc_logic > ctx_data_0_ce0;
    sc_out< sc_logic > ctx_data_0_we0;
    sc_out< sc_lv<8> > ctx_data_0_d0;
    sc_in< sc_lv<8> > ctx_data_0_q0;
    sc_out< sc_lv<4> > ctx_data_0_address1;
    sc_out< sc_logic > ctx_data_0_ce1;
    sc_out< sc_logic > ctx_data_0_we1;
    sc_out< sc_lv<8> > ctx_data_0_d1;
    sc_in< sc_lv<8> > ctx_data_0_q1;
    sc_out< sc_lv<4> > ctx_data_1_address0;
    sc_out< sc_logic > ctx_data_1_ce0;
    sc_out< sc_logic > ctx_data_1_we0;
    sc_out< sc_lv<8> > ctx_data_1_d0;
    sc_in< sc_lv<8> > ctx_data_1_q0;
    sc_out< sc_lv<4> > ctx_data_1_address1;
    sc_out< sc_logic > ctx_data_1_ce1;
    sc_out< sc_logic > ctx_data_1_we1;
    sc_out< sc_lv<8> > ctx_data_1_d1;
    sc_in< sc_lv<8> > ctx_data_1_q1;
    sc_out< sc_lv<4> > ctx_data_2_address0;
    sc_out< sc_logic > ctx_data_2_ce0;
    sc_out< sc_logic > ctx_data_2_we0;
    sc_out< sc_lv<8> > ctx_data_2_d0;
    sc_in< sc_lv<8> > ctx_data_2_q0;
    sc_out< sc_lv<4> > ctx_data_2_address1;
    sc_out< sc_logic > ctx_data_2_ce1;
    sc_out< sc_logic > ctx_data_2_we1;
    sc_out< sc_lv<8> > ctx_data_2_d1;
    sc_in< sc_lv<8> > ctx_data_2_q1;
    sc_out< sc_lv<4> > ctx_data_3_address0;
    sc_out< sc_logic > ctx_data_3_ce0;
    sc_out< sc_logic > ctx_data_3_we0;
    sc_out< sc_lv<8> > ctx_data_3_d0;
    sc_in< sc_lv<8> > ctx_data_3_q0;
    sc_out< sc_lv<4> > ctx_data_3_address1;
    sc_out< sc_logic > ctx_data_3_ce1;
    sc_out< sc_logic > ctx_data_3_we1;
    sc_out< sc_lv<8> > ctx_data_3_d1;
    sc_in< sc_lv<8> > ctx_data_3_q1;
    sc_in< sc_lv<32> > ctx_datalen_read;
    sc_in< sc_lv<32> > p_read3;
    sc_in< sc_lv<32> > p_read4;
    sc_in< sc_lv<32> > p_read5;
    sc_in< sc_lv<32> > p_read6;
    sc_in< sc_lv<32> > p_read7;
    sc_in< sc_lv<32> > p_read8;
    sc_in< sc_lv<32> > p_read9;
    sc_in< sc_lv<32> > p_read10;
    sc_out< sc_lv<6> > hash_address0;
    sc_out< sc_logic > hash_ce0;
    sc_out< sc_logic > hash_we0;
    sc_out< sc_lv<8> > hash_d0;
    sc_out< sc_lv<6> > hash_address1;
    sc_out< sc_logic > hash_ce1;
    sc_out< sc_logic > hash_we1;
    sc_out< sc_lv<8> > hash_d1;
    sc_in< sc_lv<32> > dp_key_r;
    sc_signal< sc_logic > ap_var_for_const0;


    // Module declarations
    sha256_final(sc_module_name name);
    SC_HAS_PROCESS(sha256_final);

    ~sha256_final();

    sc_trace_file* mVcdFile;

    sha256_transform* grp_sha256_transform_fu_1363;
    sc_signal< sc_lv<301> > ap_CS_fsm;
    sc_signal< sc_logic > ap_CS_fsm_state1;
    sc_signal< sc_lv<1> > icmp_ln195_fu_1435_p2;
    sc_signal< sc_lv<1> > icmp_ln195_reg_1869;
    sc_signal< sc_lv<32> > i_1_fu_1465_p2;
    sc_signal< sc_logic > ap_CS_fsm_state2;
    sc_signal< sc_lv<32> > ctx_state_0_ret1_reg_1890;
    sc_signal< sc_logic > ap_CS_fsm_state140;
    sc_signal< sc_lv<32> > ctx_state_1_ret1_reg_1895;
    sc_signal< sc_lv<32> > ctx_state_2_ret1_reg_1900;
    sc_signal< sc_lv<32> > ctx_state_3_ret1_reg_1905;
    sc_signal< sc_lv<32> > ctx_state_4_ret1_reg_1910;
    sc_signal< sc_lv<32> > ctx_state_5_ret1_reg_1915;
    sc_signal< sc_lv<32> > ctx_state_6_ret1_reg_1920;
    sc_signal< sc_lv<32> > ctx_state_7_ret1_reg_1925;
    sc_signal< sc_lv<32> > i_fu_1509_p2;
    sc_signal< sc_logic > ap_CS_fsm_state148;
    sc_signal< sc_lv<8> > trunc_ln4_reg_1941;
    sc_signal< sc_logic > ap_CS_fsm_state285;
    sc_signal< sc_lv<8> > trunc_ln5_reg_1946;
    sc_signal< sc_lv<8> > trunc_ln6_reg_1951;
    sc_signal< sc_lv<8> > trunc_ln7_reg_1956;
    sc_signal< sc_lv<8> > trunc_ln8_reg_1961;
    sc_signal< sc_lv<8> > trunc_ln9_reg_1966;
    sc_signal< sc_lv<8> > trunc_ln_reg_1971;
    sc_signal< sc_lv<8> > trunc_ln1_reg_1976;
    sc_signal< sc_lv<8> > trunc_ln234_1_reg_1981;
    sc_signal< sc_lv<8> > trunc_ln235_1_reg_1986;
    sc_signal< sc_lv<8> > trunc_ln236_1_reg_1991;
    sc_signal< sc_lv<8> > trunc_ln237_1_reg_1996;
    sc_signal< sc_lv<8> > trunc_ln238_1_reg_2001;
    sc_signal< sc_lv<8> > trunc_ln239_1_reg_2006;
    sc_signal< sc_lv<8> > trunc_ln240_1_reg_2011;
    sc_signal< sc_lv<8> > trunc_ln241_1_reg_2016;
    sc_signal< sc_lv<8> > trunc_ln234_2_reg_2021;
    sc_signal< sc_lv<8> > trunc_ln235_2_reg_2026;
    sc_signal< sc_lv<8> > trunc_ln236_2_reg_2031;
    sc_signal< sc_lv<8> > trunc_ln237_2_reg_2036;
    sc_signal< sc_lv<8> > trunc_ln238_2_reg_2041;
    sc_signal< sc_lv<8> > trunc_ln239_2_reg_2046;
    sc_signal< sc_lv<8> > trunc_ln240_2_reg_2051;
    sc_signal< sc_lv<8> > trunc_ln241_2_reg_2056;
    sc_signal< sc_lv<8> > trunc_ln234_fu_1783_p1;
    sc_signal< sc_lv<8> > trunc_ln234_reg_2061;
    sc_signal< sc_lv<8> > trunc_ln235_fu_1787_p1;
    sc_signal< sc_lv<8> > trunc_ln235_reg_2066;
    sc_signal< sc_lv<8> > trunc_ln236_fu_1791_p1;
    sc_signal< sc_lv<8> > trunc_ln236_reg_2071;
    sc_signal< sc_lv<8> > trunc_ln237_fu_1795_p1;
    sc_signal< sc_lv<8> > trunc_ln237_reg_2076;
    sc_signal< sc_lv<8> > trunc_ln238_fu_1799_p1;
    sc_signal< sc_lv<8> > trunc_ln238_reg_2081;
    sc_signal< sc_lv<8> > trunc_ln239_fu_1803_p1;
    sc_signal< sc_lv<8> > trunc_ln239_reg_2086;
    sc_signal< sc_lv<8> > trunc_ln240_fu_1807_p1;
    sc_signal< sc_lv<8> > trunc_ln240_reg_2091;
    sc_signal< sc_lv<8> > trunc_ln241_fu_1811_p1;
    sc_signal< sc_lv<8> > trunc_ln241_reg_2096;
    sc_signal< sc_logic > grp_sha256_transform_fu_1363_ap_start;
    sc_signal< sc_logic > grp_sha256_transform_fu_1363_ap_done;
    sc_signal< sc_logic > grp_sha256_transform_fu_1363_ap_idle;
    sc_signal< sc_logic > grp_sha256_transform_fu_1363_ap_ready;
    sc_signal< sc_lv<32> > grp_sha256_transform_fu_1363_ctx_state_0_read;
    sc_signal< sc_lv<32> > grp_sha256_transform_fu_1363_ctx_state_1_read;
    sc_signal< sc_lv<32> > grp_sha256_transform_fu_1363_ctx_state_2_read;
    sc_signal< sc_lv<32> > grp_sha256_transform_fu_1363_ctx_state_3_read;
    sc_signal< sc_lv<32> > grp_sha256_transform_fu_1363_ctx_state_4_read;
    sc_signal< sc_lv<32> > grp_sha256_transform_fu_1363_ctx_state_5_read;
    sc_signal< sc_lv<32> > grp_sha256_transform_fu_1363_ctx_state_6_read;
    sc_signal< sc_lv<32> > grp_sha256_transform_fu_1363_ctx_state_7_read;
    sc_signal< sc_lv<4> > grp_sha256_transform_fu_1363_data_0_address0;
    sc_signal< sc_logic > grp_sha256_transform_fu_1363_data_0_ce0;
    sc_signal< sc_lv<4> > grp_sha256_transform_fu_1363_data_0_address1;
    sc_signal< sc_logic > grp_sha256_transform_fu_1363_data_0_ce1;
    sc_signal< sc_lv<4> > grp_sha256_transform_fu_1363_data_1_address0;
    sc_signal< sc_logic > grp_sha256_transform_fu_1363_data_1_ce0;
    sc_signal< sc_lv<4> > grp_sha256_transform_fu_1363_data_1_address1;
    sc_signal< sc_logic > grp_sha256_transform_fu_1363_data_1_ce1;
    sc_signal< sc_lv<4> > grp_sha256_transform_fu_1363_data_2_address0;
    sc_signal< sc_logic > grp_sha256_transform_fu_1363_data_2_ce0;
    sc_signal< sc_lv<4> > grp_sha256_transform_fu_1363_data_2_address1;
    sc_signal< sc_logic > grp_sha256_transform_fu_1363_data_2_ce1;
    sc_signal< sc_lv<4> > grp_sha256_transform_fu_1363_data_3_address0;
    sc_signal< sc_logic > grp_sha256_transform_fu_1363_data_3_ce0;
    sc_signal< sc_lv<4> > grp_sha256_transform_fu_1363_data_3_address1;
    sc_signal< sc_logic > grp_sha256_transform_fu_1363_data_3_ce1;
    sc_signal< sc_lv<32> > grp_sha256_transform_fu_1363_ap_return_0;
    sc_signal< sc_lv<32> > grp_sha256_transform_fu_1363_ap_return_1;
    sc_signal< sc_lv<32> > grp_sha256_transform_fu_1363_ap_return_2;
    sc_signal< sc_lv<32> > grp_sha256_transform_fu_1363_ap_return_3;
    sc_signal< sc_lv<32> > grp_sha256_transform_fu_1363_ap_return_4;
    sc_signal< sc_lv<32> > grp_sha256_transform_fu_1363_ap_return_5;
    sc_signal< sc_lv<32> > grp_sha256_transform_fu_1363_ap_return_6;
    sc_signal< sc_lv<32> > grp_sha256_transform_fu_1363_ap_return_7;
    sc_signal< sc_lv<32> > i_1_in_reg_1265;
    sc_signal< sc_lv<1> > icmp_ln206_fu_1481_p2;
    sc_signal< sc_lv<32> > i_0_in_reg_1274;
    sc_signal< sc_lv<1> > icmp_ln198_fu_1515_p2;
    sc_signal< sc_lv<32> > ctx_state_0_0_reg_1283;
    sc_signal< sc_logic > ap_CS_fsm_state147;
    sc_signal< sc_lv<32> > ctx_state_1_0_reg_1293;
    sc_signal< sc_lv<32> > ctx_state_2_0_reg_1303;
    sc_signal< sc_lv<32> > ctx_state_3_0_reg_1313;
    sc_signal< sc_lv<32> > ctx_state_4_0_reg_1323;
    sc_signal< sc_lv<32> > ctx_state_5_0_reg_1333;
    sc_signal< sc_lv<32> > ctx_state_6_0_reg_1343;
    sc_signal< sc_lv<32> > ctx_state_7_0_reg_1353;
    sc_signal< sc_logic > grp_sha256_transform_fu_1363_ap_start_reg;
    sc_signal< sc_logic > ap_CS_fsm_state8;
    sc_signal< sc_lv<301> > ap_NS_fsm;
    sc_signal< sc_logic > ap_NS_fsm_state9;
    sc_signal< sc_logic > ap_CS_fsm_state153;
    sc_signal< sc_logic > ap_NS_fsm_state154;
    sc_signal< sc_logic > ap_CS_fsm_state9;
    sc_signal< sc_logic > ap_CS_fsm_state154;
    sc_signal< sc_logic > ap_CS_fsm_state10;
    sc_signal< sc_logic > ap_CS_fsm_state11;
    sc_signal< sc_logic > ap_CS_fsm_state12;
    sc_signal< sc_logic > ap_CS_fsm_state13;
    sc_signal< sc_logic > ap_CS_fsm_state14;
    sc_signal< sc_logic > ap_CS_fsm_state15;
    sc_signal< sc_logic > ap_CS_fsm_state16;
    sc_signal< sc_logic > ap_CS_fsm_state17;
    sc_signal< sc_logic > ap_CS_fsm_state155;
    sc_signal< sc_logic > ap_CS_fsm_state156;
    sc_signal< sc_logic > ap_CS_fsm_state157;
    sc_signal< sc_logic > ap_CS_fsm_state158;
    sc_signal< sc_logic > ap_CS_fsm_state159;
    sc_signal< sc_logic > ap_CS_fsm_state160;
    sc_signal< sc_logic > ap_CS_fsm_state161;
    sc_signal< sc_logic > ap_CS_fsm_state162;
    sc_signal< sc_lv<64> > zext_ln205_fu_1445_p1;
    sc_signal< sc_lv<64> > zext_ln197_fu_1457_p1;
    sc_signal< sc_lv<64> > zext_ln208_fu_1501_p1;
    sc_signal< sc_logic > ap_CS_fsm_state141;
    sc_signal< sc_logic > ap_CS_fsm_state142;
    sc_signal< sc_logic > ap_CS_fsm_state143;
    sc_signal< sc_logic > ap_CS_fsm_state144;
    sc_signal< sc_logic > ap_CS_fsm_state145;
    sc_signal< sc_logic > ap_CS_fsm_state146;
    sc_signal< sc_lv<64> > zext_ln200_fu_1535_p1;
    sc_signal< sc_logic > ap_CS_fsm_state286;
    sc_signal< sc_logic > ap_CS_fsm_state287;
    sc_signal< sc_logic > ap_CS_fsm_state288;
    sc_signal< sc_logic > ap_CS_fsm_state289;
    sc_signal< sc_logic > ap_CS_fsm_state290;
    sc_signal< sc_logic > ap_CS_fsm_state291;
    sc_signal< sc_logic > ap_CS_fsm_state292;
    sc_signal< sc_logic > ap_CS_fsm_state293;
    sc_signal< sc_logic > ap_CS_fsm_state294;
    sc_signal< sc_logic > ap_CS_fsm_state295;
    sc_signal< sc_logic > ap_CS_fsm_state296;
    sc_signal< sc_logic > ap_CS_fsm_state297;
    sc_signal< sc_logic > ap_CS_fsm_state298;
    sc_signal< sc_logic > ap_CS_fsm_state299;
    sc_signal< sc_logic > ap_CS_fsm_state300;
    sc_signal< sc_logic > ap_CS_fsm_state301;
    sc_signal< sc_lv<2> > trunc_ln205_fu_1441_p1;
    sc_signal< sc_lv<2> > trunc_ln197_fu_1453_p1;
    sc_signal< sc_lv<2> > trunc_ln208_fu_1487_p1;
    sc_signal< sc_lv<2> > trunc_ln200_fu_1521_p1;
    sc_signal< sc_lv<30> > grp_fu_1393_p4;
    sc_signal< sc_lv<26> > tmp_1_fu_1471_p4;
    sc_signal< sc_lv<30> > lshr_ln3_fu_1491_p4;
    sc_signal< sc_lv<30> > lshr_ln2_fu_1525_p4;
    static const sc_logic ap_const_logic_1;
    static const sc_logic ap_const_logic_0;
    static const sc_lv<301> ap_ST_fsm_state1;
    static const sc_lv<301> ap_ST_fsm_state2;
    static const sc_lv<301> ap_ST_fsm_state3;
    static const sc_lv<301> ap_ST_fsm_state4;
    static const sc_lv<301> ap_ST_fsm_state5;
    static const sc_lv<301> ap_ST_fsm_state6;
    static const sc_lv<301> ap_ST_fsm_state7;
    static const sc_lv<301> ap_ST_fsm_state8;
    static const sc_lv<301> ap_ST_fsm_state9;
    static const sc_lv<301> ap_ST_fsm_state10;
    static const sc_lv<301> ap_ST_fsm_state11;
    static const sc_lv<301> ap_ST_fsm_state12;
    static const sc_lv<301> ap_ST_fsm_state13;
    static const sc_lv<301> ap_ST_fsm_state14;
    static const sc_lv<301> ap_ST_fsm_state15;
    static const sc_lv<301> ap_ST_fsm_state16;
    static const sc_lv<301> ap_ST_fsm_state17;
    static const sc_lv<301> ap_ST_fsm_state18;
    static const sc_lv<301> ap_ST_fsm_state19;
    static const sc_lv<301> ap_ST_fsm_state20;
    static const sc_lv<301> ap_ST_fsm_state21;
    static const sc_lv<301> ap_ST_fsm_state22;
    static const sc_lv<301> ap_ST_fsm_state23;
    static const sc_lv<301> ap_ST_fsm_state24;
    static const sc_lv<301> ap_ST_fsm_state25;
    static const sc_lv<301> ap_ST_fsm_state26;
    static const sc_lv<301> ap_ST_fsm_state27;
    static const sc_lv<301> ap_ST_fsm_state28;
    static const sc_lv<301> ap_ST_fsm_state29;
    static const sc_lv<301> ap_ST_fsm_state30;
    static const sc_lv<301> ap_ST_fsm_state31;
    static const sc_lv<301> ap_ST_fsm_state32;
    static const sc_lv<301> ap_ST_fsm_state33;
    static const sc_lv<301> ap_ST_fsm_state34;
    static const sc_lv<301> ap_ST_fsm_state35;
    static const sc_lv<301> ap_ST_fsm_state36;
    static const sc_lv<301> ap_ST_fsm_state37;
    static const sc_lv<301> ap_ST_fsm_state38;
    static const sc_lv<301> ap_ST_fsm_state39;
    static const sc_lv<301> ap_ST_fsm_state40;
    static const sc_lv<301> ap_ST_fsm_state41;
    static const sc_lv<301> ap_ST_fsm_state42;
    static const sc_lv<301> ap_ST_fsm_state43;
    static const sc_lv<301> ap_ST_fsm_state44;
    static const sc_lv<301> ap_ST_fsm_state45;
    static const sc_lv<301> ap_ST_fsm_state46;
    static const sc_lv<301> ap_ST_fsm_state47;
    static const sc_lv<301> ap_ST_fsm_state48;
    static const sc_lv<301> ap_ST_fsm_state49;
    static const sc_lv<301> ap_ST_fsm_state50;
    static const sc_lv<301> ap_ST_fsm_state51;
    static const sc_lv<301> ap_ST_fsm_state52;
    static const sc_lv<301> ap_ST_fsm_state53;
    static const sc_lv<301> ap_ST_fsm_state54;
    static const sc_lv<301> ap_ST_fsm_state55;
    static const sc_lv<301> ap_ST_fsm_state56;
    static const sc_lv<301> ap_ST_fsm_state57;
    static const sc_lv<301> ap_ST_fsm_state58;
    static const sc_lv<301> ap_ST_fsm_state59;
    static const sc_lv<301> ap_ST_fsm_state60;
    static const sc_lv<301> ap_ST_fsm_state61;
    static const sc_lv<301> ap_ST_fsm_state62;
    static const sc_lv<301> ap_ST_fsm_state63;
    static const sc_lv<301> ap_ST_fsm_state64;
    static const sc_lv<301> ap_ST_fsm_state65;
    static const sc_lv<301> ap_ST_fsm_state66;
    static const sc_lv<301> ap_ST_fsm_state67;
    static const sc_lv<301> ap_ST_fsm_state68;
    static const sc_lv<301> ap_ST_fsm_state69;
    static const sc_lv<301> ap_ST_fsm_state70;
    static const sc_lv<301> ap_ST_fsm_state71;
    static const sc_lv<301> ap_ST_fsm_state72;
    static const sc_lv<301> ap_ST_fsm_state73;
    static const sc_lv<301> ap_ST_fsm_state74;
    static const sc_lv<301> ap_ST_fsm_state75;
    static const sc_lv<301> ap_ST_fsm_state76;
    static const sc_lv<301> ap_ST_fsm_state77;
    static const sc_lv<301> ap_ST_fsm_state78;
    static const sc_lv<301> ap_ST_fsm_state79;
    static const sc_lv<301> ap_ST_fsm_state80;
    static const sc_lv<301> ap_ST_fsm_state81;
    static const sc_lv<301> ap_ST_fsm_state82;
    static const sc_lv<301> ap_ST_fsm_state83;
    static const sc_lv<301> ap_ST_fsm_state84;
    static const sc_lv<301> ap_ST_fsm_state85;
    static const sc_lv<301> ap_ST_fsm_state86;
    static const sc_lv<301> ap_ST_fsm_state87;
    static const sc_lv<301> ap_ST_fsm_state88;
    static const sc_lv<301> ap_ST_fsm_state89;
    static const sc_lv<301> ap_ST_fsm_state90;
    static const sc_lv<301> ap_ST_fsm_state91;
    static const sc_lv<301> ap_ST_fsm_state92;
    static const sc_lv<301> ap_ST_fsm_state93;
    static const sc_lv<301> ap_ST_fsm_state94;
    static const sc_lv<301> ap_ST_fsm_state95;
    static const sc_lv<301> ap_ST_fsm_state96;
    static const sc_lv<301> ap_ST_fsm_state97;
    static const sc_lv<301> ap_ST_fsm_state98;
    static const sc_lv<301> ap_ST_fsm_state99;
    static const sc_lv<301> ap_ST_fsm_state100;
    static const sc_lv<301> ap_ST_fsm_state101;
    static const sc_lv<301> ap_ST_fsm_state102;
    static const sc_lv<301> ap_ST_fsm_state103;
    static const sc_lv<301> ap_ST_fsm_state104;
    static const sc_lv<301> ap_ST_fsm_state105;
    static const sc_lv<301> ap_ST_fsm_state106;
    static const sc_lv<301> ap_ST_fsm_state107;
    static const sc_lv<301> ap_ST_fsm_state108;
    static const sc_lv<301> ap_ST_fsm_state109;
    static const sc_lv<301> ap_ST_fsm_state110;
    static const sc_lv<301> ap_ST_fsm_state111;
    static const sc_lv<301> ap_ST_fsm_state112;
    static const sc_lv<301> ap_ST_fsm_state113;
    static const sc_lv<301> ap_ST_fsm_state114;
    static const sc_lv<301> ap_ST_fsm_state115;
    static const sc_lv<301> ap_ST_fsm_state116;
    static const sc_lv<301> ap_ST_fsm_state117;
    static const sc_lv<301> ap_ST_fsm_state118;
    static const sc_lv<301> ap_ST_fsm_state119;
    static const sc_lv<301> ap_ST_fsm_state120;
    static const sc_lv<301> ap_ST_fsm_state121;
    static const sc_lv<301> ap_ST_fsm_state122;
    static const sc_lv<301> ap_ST_fsm_state123;
    static const sc_lv<301> ap_ST_fsm_state124;
    static const sc_lv<301> ap_ST_fsm_state125;
    static const sc_lv<301> ap_ST_fsm_state126;
    static const sc_lv<301> ap_ST_fsm_state127;
    static const sc_lv<301> ap_ST_fsm_state128;
    static const sc_lv<301> ap_ST_fsm_state129;
    static const sc_lv<301> ap_ST_fsm_state130;
    static const sc_lv<301> ap_ST_fsm_state131;
    static const sc_lv<301> ap_ST_fsm_state132;
    static const sc_lv<301> ap_ST_fsm_state133;
    static const sc_lv<301> ap_ST_fsm_state134;
    static const sc_lv<301> ap_ST_fsm_state135;
    static const sc_lv<301> ap_ST_fsm_state136;
    static const sc_lv<301> ap_ST_fsm_state137;
    static const sc_lv<301> ap_ST_fsm_state138;
    static const sc_lv<301> ap_ST_fsm_state139;
    static const sc_lv<301> ap_ST_fsm_state140;
    static const sc_lv<301> ap_ST_fsm_state141;
    static const sc_lv<301> ap_ST_fsm_state142;
    static const sc_lv<301> ap_ST_fsm_state143;
    static const sc_lv<301> ap_ST_fsm_state144;
    static const sc_lv<301> ap_ST_fsm_state145;
    static const sc_lv<301> ap_ST_fsm_state146;
    static const sc_lv<301> ap_ST_fsm_state147;
    static const sc_lv<301> ap_ST_fsm_state148;
    static const sc_lv<301> ap_ST_fsm_state149;
    static const sc_lv<301> ap_ST_fsm_state150;
    static const sc_lv<301> ap_ST_fsm_state151;
    static const sc_lv<301> ap_ST_fsm_state152;
    static const sc_lv<301> ap_ST_fsm_state153;
    static const sc_lv<301> ap_ST_fsm_state154;
    static const sc_lv<301> ap_ST_fsm_state155;
    static const sc_lv<301> ap_ST_fsm_state156;
    static const sc_lv<301> ap_ST_fsm_state157;
    static const sc_lv<301> ap_ST_fsm_state158;
    static const sc_lv<301> ap_ST_fsm_state159;
    static const sc_lv<301> ap_ST_fsm_state160;
    static const sc_lv<301> ap_ST_fsm_state161;
    static const sc_lv<301> ap_ST_fsm_state162;
    static const sc_lv<301> ap_ST_fsm_state163;
    static const sc_lv<301> ap_ST_fsm_state164;
    static const sc_lv<301> ap_ST_fsm_state165;
    static const sc_lv<301> ap_ST_fsm_state166;
    static const sc_lv<301> ap_ST_fsm_state167;
    static const sc_lv<301> ap_ST_fsm_state168;
    static const sc_lv<301> ap_ST_fsm_state169;
    static const sc_lv<301> ap_ST_fsm_state170;
    static const sc_lv<301> ap_ST_fsm_state171;
    static const sc_lv<301> ap_ST_fsm_state172;
    static const sc_lv<301> ap_ST_fsm_state173;
    static const sc_lv<301> ap_ST_fsm_state174;
    static const sc_lv<301> ap_ST_fsm_state175;
    static const sc_lv<301> ap_ST_fsm_state176;
    static const sc_lv<301> ap_ST_fsm_state177;
    static const sc_lv<301> ap_ST_fsm_state178;
    static const sc_lv<301> ap_ST_fsm_state179;
    static const sc_lv<301> ap_ST_fsm_state180;
    static const sc_lv<301> ap_ST_fsm_state181;
    static const sc_lv<301> ap_ST_fsm_state182;
    static const sc_lv<301> ap_ST_fsm_state183;
    static const sc_lv<301> ap_ST_fsm_state184;
    static const sc_lv<301> ap_ST_fsm_state185;
    static const sc_lv<301> ap_ST_fsm_state186;
    static const sc_lv<301> ap_ST_fsm_state187;
    static const sc_lv<301> ap_ST_fsm_state188;
    static const sc_lv<301> ap_ST_fsm_state189;
    static const sc_lv<301> ap_ST_fsm_state190;
    static const sc_lv<301> ap_ST_fsm_state191;
    static const sc_lv<301> ap_ST_fsm_state192;
    static const sc_lv<301> ap_ST_fsm_state193;
    static const sc_lv<301> ap_ST_fsm_state194;
    static const sc_lv<301> ap_ST_fsm_state195;
    static const sc_lv<301> ap_ST_fsm_state196;
    static const sc_lv<301> ap_ST_fsm_state197;
    static const sc_lv<301> ap_ST_fsm_state198;
    static const sc_lv<301> ap_ST_fsm_state199;
    static const sc_lv<301> ap_ST_fsm_state200;
    static const sc_lv<301> ap_ST_fsm_state201;
    static const sc_lv<301> ap_ST_fsm_state202;
    static const sc_lv<301> ap_ST_fsm_state203;
    static const sc_lv<301> ap_ST_fsm_state204;
    static const sc_lv<301> ap_ST_fsm_state205;
    static const sc_lv<301> ap_ST_fsm_state206;
    static const sc_lv<301> ap_ST_fsm_state207;
    static const sc_lv<301> ap_ST_fsm_state208;
    static const sc_lv<301> ap_ST_fsm_state209;
    static const sc_lv<301> ap_ST_fsm_state210;
    static const sc_lv<301> ap_ST_fsm_state211;
    static const sc_lv<301> ap_ST_fsm_state212;
    static const sc_lv<301> ap_ST_fsm_state213;
    static const sc_lv<301> ap_ST_fsm_state214;
    static const sc_lv<301> ap_ST_fsm_state215;
    static const sc_lv<301> ap_ST_fsm_state216;
    static const sc_lv<301> ap_ST_fsm_state217;
    static const sc_lv<301> ap_ST_fsm_state218;
    static const sc_lv<301> ap_ST_fsm_state219;
    static const sc_lv<301> ap_ST_fsm_state220;
    static const sc_lv<301> ap_ST_fsm_state221;
    static const sc_lv<301> ap_ST_fsm_state222;
    static const sc_lv<301> ap_ST_fsm_state223;
    static const sc_lv<301> ap_ST_fsm_state224;
    static const sc_lv<301> ap_ST_fsm_state225;
    static const sc_lv<301> ap_ST_fsm_state226;
    static const sc_lv<301> ap_ST_fsm_state227;
    static const sc_lv<301> ap_ST_fsm_state228;
    static const sc_lv<301> ap_ST_fsm_state229;
    static const sc_lv<301> ap_ST_fsm_state230;
    static const sc_lv<301> ap_ST_fsm_state231;
    static const sc_lv<301> ap_ST_fsm_state232;
    static const sc_lv<301> ap_ST_fsm_state233;
    static const sc_lv<301> ap_ST_fsm_state234;
    static const sc_lv<301> ap_ST_fsm_state235;
    static const sc_lv<301> ap_ST_fsm_state236;
    static const sc_lv<301> ap_ST_fsm_state237;
    static const sc_lv<301> ap_ST_fsm_state238;
    static const sc_lv<301> ap_ST_fsm_state239;
    static const sc_lv<301> ap_ST_fsm_state240;
    static const sc_lv<301> ap_ST_fsm_state241;
    static const sc_lv<301> ap_ST_fsm_state242;
    static const sc_lv<301> ap_ST_fsm_state243;
    static const sc_lv<301> ap_ST_fsm_state244;
    static const sc_lv<301> ap_ST_fsm_state245;
    static const sc_lv<301> ap_ST_fsm_state246;
    static const sc_lv<301> ap_ST_fsm_state247;
    static const sc_lv<301> ap_ST_fsm_state248;
    static const sc_lv<301> ap_ST_fsm_state249;
    static const sc_lv<301> ap_ST_fsm_state250;
    static const sc_lv<301> ap_ST_fsm_state251;
    static const sc_lv<301> ap_ST_fsm_state252;
    static const sc_lv<301> ap_ST_fsm_state253;
    static const sc_lv<301> ap_ST_fsm_state254;
    static const sc_lv<301> ap_ST_fsm_state255;
    static const sc_lv<301> ap_ST_fsm_state256;
    static const sc_lv<301> ap_ST_fsm_state257;
    static const sc_lv<301> ap_ST_fsm_state258;
    static const sc_lv<301> ap_ST_fsm_state259;
    static const sc_lv<301> ap_ST_fsm_state260;
    static const sc_lv<301> ap_ST_fsm_state261;
    static const sc_lv<301> ap_ST_fsm_state262;
    static const sc_lv<301> ap_ST_fsm_state263;
    static const sc_lv<301> ap_ST_fsm_state264;
    static const sc_lv<301> ap_ST_fsm_state265;
    static const sc_lv<301> ap_ST_fsm_state266;
    static const sc_lv<301> ap_ST_fsm_state267;
    static const sc_lv<301> ap_ST_fsm_state268;
    static const sc_lv<301> ap_ST_fsm_state269;
    static const sc_lv<301> ap_ST_fsm_state270;
    static const sc_lv<301> ap_ST_fsm_state271;
    static const sc_lv<301> ap_ST_fsm_state272;
    static const sc_lv<301> ap_ST_fsm_state273;
    static const sc_lv<301> ap_ST_fsm_state274;
    static const sc_lv<301> ap_ST_fsm_state275;
    static const sc_lv<301> ap_ST_fsm_state276;
    static const sc_lv<301> ap_ST_fsm_state277;
    static const sc_lv<301> ap_ST_fsm_state278;
    static const sc_lv<301> ap_ST_fsm_state279;
    static const sc_lv<301> ap_ST_fsm_state280;
    static const sc_lv<301> ap_ST_fsm_state281;
    static const sc_lv<301> ap_ST_fsm_state282;
    static const sc_lv<301> ap_ST_fsm_state283;
    static const sc_lv<301> ap_ST_fsm_state284;
    static const sc_lv<301> ap_ST_fsm_state285;
    static const sc_lv<301> ap_ST_fsm_state286;
    static const sc_lv<301> ap_ST_fsm_state287;
    static const sc_lv<301> ap_ST_fsm_state288;
    static const sc_lv<301> ap_ST_fsm_state289;
    static const sc_lv<301> ap_ST_fsm_state290;
    static const sc_lv<301> ap_ST_fsm_state291;
    static const sc_lv<301> ap_ST_fsm_state292;
    static const sc_lv<301> ap_ST_fsm_state293;
    static const sc_lv<301> ap_ST_fsm_state294;
    static const sc_lv<301> ap_ST_fsm_state295;
    static const sc_lv<301> ap_ST_fsm_state296;
    static const sc_lv<301> ap_ST_fsm_state297;
    static const sc_lv<301> ap_ST_fsm_state298;
    static const sc_lv<301> ap_ST_fsm_state299;
    static const sc_lv<301> ap_ST_fsm_state300;
    static const sc_lv<301> ap_ST_fsm_state301;
    static const sc_lv<32> ap_const_lv32_0;
    static const sc_lv<32> ap_const_lv32_1;
    static const sc_lv<32> ap_const_lv32_8B;
    static const sc_lv<32> ap_const_lv32_93;
    static const sc_lv<32> ap_const_lv32_11C;
    static const sc_lv<1> ap_const_lv1_0;
    static const sc_lv<1> ap_const_lv1_1;
    static const sc_lv<32> ap_const_lv32_92;
    static const sc_lv<32> ap_const_lv32_7;
    static const sc_lv<32> ap_const_lv32_8;
    static const sc_lv<32> ap_const_lv32_98;
    static const sc_lv<32> ap_const_lv32_99;
    static const sc_lv<32> ap_const_lv32_9;
    static const sc_lv<32> ap_const_lv32_A;
    static const sc_lv<32> ap_const_lv32_B;
    static const sc_lv<32> ap_const_lv32_C;
    static const sc_lv<32> ap_const_lv32_D;
    static const sc_lv<32> ap_const_lv32_E;
    static const sc_lv<32> ap_const_lv32_F;
    static const sc_lv<32> ap_const_lv32_10;
    static const sc_lv<32> ap_const_lv32_9A;
    static const sc_lv<32> ap_const_lv32_9B;
    static const sc_lv<32> ap_const_lv32_9C;
    static const sc_lv<32> ap_const_lv32_9D;
    static const sc_lv<32> ap_const_lv32_9E;
    static const sc_lv<32> ap_const_lv32_9F;
    static const sc_lv<32> ap_const_lv32_A0;
    static const sc_lv<32> ap_const_lv32_A1;
    static const sc_lv<64> ap_const_lv64_0;
    static const sc_lv<32> ap_const_lv32_8C;
    static const sc_lv<64> ap_const_lv64_1;
    static const sc_lv<64> ap_const_lv64_2;
    static const sc_lv<32> ap_const_lv32_8D;
    static const sc_lv<64> ap_const_lv64_3;
    static const sc_lv<64> ap_const_lv64_4;
    static const sc_lv<32> ap_const_lv32_8E;
    static const sc_lv<64> ap_const_lv64_5;
    static const sc_lv<64> ap_const_lv64_6;
    static const sc_lv<32> ap_const_lv32_8F;
    static const sc_lv<64> ap_const_lv64_7;
    static const sc_lv<64> ap_const_lv64_8;
    static const sc_lv<32> ap_const_lv32_90;
    static const sc_lv<64> ap_const_lv64_9;
    static const sc_lv<64> ap_const_lv64_A;
    static const sc_lv<32> ap_const_lv32_91;
    static const sc_lv<64> ap_const_lv64_B;
    static const sc_lv<64> ap_const_lv64_C;
    static const sc_lv<64> ap_const_lv64_D;
    static const sc_lv<64> ap_const_lv64_F;
    static const sc_lv<64> ap_const_lv64_E;
    static const sc_lv<32> ap_const_lv32_11D;
    static const sc_lv<32> ap_const_lv32_11E;
    static const sc_lv<64> ap_const_lv64_10;
    static const sc_lv<32> ap_const_lv32_11F;
    static const sc_lv<64> ap_const_lv64_14;
    static const sc_lv<64> ap_const_lv64_18;
    static const sc_lv<32> ap_const_lv32_120;
    static const sc_lv<64> ap_const_lv64_1C;
    static const sc_lv<32> ap_const_lv32_121;
    static const sc_lv<32> ap_const_lv32_122;
    static const sc_lv<64> ap_const_lv64_11;
    static const sc_lv<32> ap_const_lv32_123;
    static const sc_lv<64> ap_const_lv64_15;
    static const sc_lv<64> ap_const_lv64_19;
    static const sc_lv<32> ap_const_lv32_124;
    static const sc_lv<64> ap_const_lv64_1D;
    static const sc_lv<32> ap_const_lv32_125;
    static const sc_lv<32> ap_const_lv32_126;
    static const sc_lv<64> ap_const_lv64_12;
    static const sc_lv<32> ap_const_lv32_127;
    static const sc_lv<64> ap_const_lv64_16;
    static const sc_lv<64> ap_const_lv64_1A;
    static const sc_lv<32> ap_const_lv32_128;
    static const sc_lv<64> ap_const_lv64_1E;
    static const sc_lv<32> ap_const_lv32_129;
    static const sc_lv<32> ap_const_lv32_12A;
    static const sc_lv<64> ap_const_lv64_13;
    static const sc_lv<32> ap_const_lv32_12B;
    static const sc_lv<64> ap_const_lv64_17;
    static const sc_lv<64> ap_const_lv64_1B;
    static const sc_lv<32> ap_const_lv32_12C;
    static const sc_lv<64> ap_const_lv64_1F;
    static const sc_lv<2> ap_const_lv2_2;
    static const sc_lv<8> ap_const_lv8_80;
    static const sc_lv<2> ap_const_lv2_1;
    static const sc_lv<8> ap_const_lv8_0;
    static const sc_lv<2> ap_const_lv2_0;
    static const sc_lv<2> ap_const_lv2_3;
    static const sc_lv<32> ap_const_lv32_2;
    static const sc_lv<32> ap_const_lv32_1F;
    static const sc_lv<32> ap_const_lv32_38;
    static const sc_lv<32> ap_const_lv32_6;
    static const sc_lv<26> ap_const_lv26_0;
    static const sc_lv<32> ap_const_lv32_37;
    static const sc_lv<32> ap_const_lv32_18;
    static const sc_lv<32> ap_const_lv32_17;
    static const bool ap_const_boolean_1;
    // Thread declarations
    void thread_ap_var_for_const0();
    void thread_ap_clk_no_reset_();
    void thread_ap_CS_fsm_state1();
    void thread_ap_CS_fsm_state10();
    void thread_ap_CS_fsm_state11();
    void thread_ap_CS_fsm_state12();
    void thread_ap_CS_fsm_state13();
    void thread_ap_CS_fsm_state14();
    void thread_ap_CS_fsm_state140();
    void thread_ap_CS_fsm_state141();
    void thread_ap_CS_fsm_state142();
    void thread_ap_CS_fsm_state143();
    void thread_ap_CS_fsm_state144();
    void thread_ap_CS_fsm_state145();
    void thread_ap_CS_fsm_state146();
    void thread_ap_CS_fsm_state147();
    void thread_ap_CS_fsm_state148();
    void thread_ap_CS_fsm_state15();
    void thread_ap_CS_fsm_state153();
    void thread_ap_CS_fsm_state154();
    void thread_ap_CS_fsm_state155();
    void thread_ap_CS_fsm_state156();
    void thread_ap_CS_fsm_state157();
    void thread_ap_CS_fsm_state158();
    void thread_ap_CS_fsm_state159();
    void thread_ap_CS_fsm_state16();
    void thread_ap_CS_fsm_state160();
    void thread_ap_CS_fsm_state161();
    void thread_ap_CS_fsm_state162();
    void thread_ap_CS_fsm_state17();
    void thread_ap_CS_fsm_state2();
    void thread_ap_CS_fsm_state285();
    void thread_ap_CS_fsm_state286();
    void thread_ap_CS_fsm_state287();
    void thread_ap_CS_fsm_state288();
    void thread_ap_CS_fsm_state289();
    void thread_ap_CS_fsm_state290();
    void thread_ap_CS_fsm_state291();
    void thread_ap_CS_fsm_state292();
    void thread_ap_CS_fsm_state293();
    void thread_ap_CS_fsm_state294();
    void thread_ap_CS_fsm_state295();
    void thread_ap_CS_fsm_state296();
    void thread_ap_CS_fsm_state297();
    void thread_ap_CS_fsm_state298();
    void thread_ap_CS_fsm_state299();
    void thread_ap_CS_fsm_state300();
    void thread_ap_CS_fsm_state301();
    void thread_ap_CS_fsm_state8();
    void thread_ap_CS_fsm_state9();
    void thread_ap_NS_fsm_state154();
    void thread_ap_NS_fsm_state9();
    void thread_ap_done();
    void thread_ap_idle();
    void thread_ap_ready();
    void thread_ctx_data_0_address0();
    void thread_ctx_data_0_address1();
    void thread_ctx_data_0_ce0();
    void thread_ctx_data_0_ce1();
    void thread_ctx_data_0_d0();
    void thread_ctx_data_0_d1();
    void thread_ctx_data_0_we0();
    void thread_ctx_data_0_we1();
    void thread_ctx_data_1_address0();
    void thread_ctx_data_1_address1();
    void thread_ctx_data_1_ce0();
    void thread_ctx_data_1_ce1();
    void thread_ctx_data_1_d0();
    void thread_ctx_data_1_d1();
    void thread_ctx_data_1_we0();
    void thread_ctx_data_1_we1();
    void thread_ctx_data_2_address0();
    void thread_ctx_data_2_address1();
    void thread_ctx_data_2_ce0();
    void thread_ctx_data_2_ce1();
    void thread_ctx_data_2_d0();
    void thread_ctx_data_2_d1();
    void thread_ctx_data_2_we0();
    void thread_ctx_data_2_we1();
    void thread_ctx_data_3_address0();
    void thread_ctx_data_3_address1();
    void thread_ctx_data_3_ce0();
    void thread_ctx_data_3_ce1();
    void thread_ctx_data_3_d0();
    void thread_ctx_data_3_d1();
    void thread_ctx_data_3_we0();
    void thread_ctx_data_3_we1();
    void thread_grp_fu_1393_p4();
    void thread_grp_sha256_transform_fu_1363_ap_start();
    void thread_grp_sha256_transform_fu_1363_ctx_state_0_read();
    void thread_grp_sha256_transform_fu_1363_ctx_state_1_read();
    void thread_grp_sha256_transform_fu_1363_ctx_state_2_read();
    void thread_grp_sha256_transform_fu_1363_ctx_state_3_read();
    void thread_grp_sha256_transform_fu_1363_ctx_state_4_read();
    void thread_grp_sha256_transform_fu_1363_ctx_state_5_read();
    void thread_grp_sha256_transform_fu_1363_ctx_state_6_read();
    void thread_grp_sha256_transform_fu_1363_ctx_state_7_read();
    void thread_hash_address0();
    void thread_hash_address1();
    void thread_hash_ce0();
    void thread_hash_ce1();
    void thread_hash_d0();
    void thread_hash_d1();
    void thread_hash_we0();
    void thread_hash_we1();
    void thread_i_1_fu_1465_p2();
    void thread_i_fu_1509_p2();
    void thread_icmp_ln195_fu_1435_p2();
    void thread_icmp_ln198_fu_1515_p2();
    void thread_icmp_ln206_fu_1481_p2();
    void thread_lshr_ln2_fu_1525_p4();
    void thread_lshr_ln3_fu_1491_p4();
    void thread_tmp_1_fu_1471_p4();
    void thread_trunc_ln197_fu_1453_p1();
    void thread_trunc_ln200_fu_1521_p1();
    void thread_trunc_ln205_fu_1441_p1();
    void thread_trunc_ln208_fu_1487_p1();
    void thread_trunc_ln234_fu_1783_p1();
    void thread_trunc_ln235_fu_1787_p1();
    void thread_trunc_ln236_fu_1791_p1();
    void thread_trunc_ln237_fu_1795_p1();
    void thread_trunc_ln238_fu_1799_p1();
    void thread_trunc_ln239_fu_1803_p1();
    void thread_trunc_ln240_fu_1807_p1();
    void thread_trunc_ln241_fu_1811_p1();
    void thread_zext_ln197_fu_1457_p1();
    void thread_zext_ln200_fu_1535_p1();
    void thread_zext_ln205_fu_1445_p1();
    void thread_zext_ln208_fu_1501_p1();
    void thread_ap_NS_fsm();
};

}

using namespace ap_rtl;

#endif
