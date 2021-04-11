// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2019.1
// Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#ifndef _sha256_HH_
#define _sha256_HH_

#include "systemc.h"
#include "AESL_pkg.h"

#include "sha256_final.h"
#include "sha256_update.h"
#include "sha256_seg_buf.h"
#include "sha256_sha256ctx_bkb.h"
#include "sha256_AXILiteS_s_axi.h"

namespace ap_rtl {

template<unsigned int C_S_AXI_AXILITES_ADDR_WIDTH = 10,
         unsigned int C_S_AXI_AXILITES_DATA_WIDTH = 32>
struct sha256 : public sc_module {
    // Port declarations 23
    sc_in_clk ap_clk;
    sc_in< sc_logic > ap_rst_n;
    sc_in< sc_lv<32> > rtl_key;
    sc_in< sc_lv<32> > br_key;
    sc_in< sc_lv<32> > dp_key;
    sc_in< sc_logic > s_axi_AXILiteS_AWVALID;
    sc_out< sc_logic > s_axi_AXILiteS_AWREADY;
    sc_in< sc_uint<C_S_AXI_AXILITES_ADDR_WIDTH> > s_axi_AXILiteS_AWADDR;
    sc_in< sc_logic > s_axi_AXILiteS_WVALID;
    sc_out< sc_logic > s_axi_AXILiteS_WREADY;
    sc_in< sc_uint<C_S_AXI_AXILITES_DATA_WIDTH> > s_axi_AXILiteS_WDATA;
    sc_in< sc_uint<C_S_AXI_AXILITES_DATA_WIDTH/8> > s_axi_AXILiteS_WSTRB;
    sc_in< sc_logic > s_axi_AXILiteS_ARVALID;
    sc_out< sc_logic > s_axi_AXILiteS_ARREADY;
    sc_in< sc_uint<C_S_AXI_AXILITES_ADDR_WIDTH> > s_axi_AXILiteS_ARADDR;
    sc_out< sc_logic > s_axi_AXILiteS_RVALID;
    sc_in< sc_logic > s_axi_AXILiteS_RREADY;
    sc_out< sc_uint<C_S_AXI_AXILITES_DATA_WIDTH> > s_axi_AXILiteS_RDATA;
    sc_out< sc_lv<2> > s_axi_AXILiteS_RRESP;
    sc_out< sc_logic > s_axi_AXILiteS_BVALID;
    sc_in< sc_logic > s_axi_AXILiteS_BREADY;
    sc_out< sc_lv<2> > s_axi_AXILiteS_BRESP;
    sc_out< sc_logic > interrupt;
    sc_signal< sc_logic > ap_var_for_const0;


    // Module declarations
    sha256(sc_module_name name);
    SC_HAS_PROCESS(sha256);

    ~sha256();

    sc_trace_file* mVcdFile;

    ofstream mHdltvinHandle;
    ofstream mHdltvoutHandle;
    sha256_AXILiteS_s_axi<C_S_AXI_AXILITES_ADDR_WIDTH,C_S_AXI_AXILITES_DATA_WIDTH>* sha256_AXILiteS_s_axi_U;
    sha256_seg_buf* seg_buf_U;
    sha256_sha256ctx_bkb* sha256ctx_data_0_U;
    sha256_sha256ctx_bkb* sha256ctx_data_1_U;
    sha256_sha256ctx_bkb* sha256ctx_data_2_U;
    sha256_sha256ctx_bkb* sha256ctx_data_3_U;
    sha256_final* grp_sha256_final_fu_311;
    sha256_update* grp_sha256_update_fu_335;
    sc_signal< sc_logic > ap_rst_n_inv;
    sc_signal< sc_logic > ap_start;
    sc_signal< sc_logic > ap_done;
    sc_signal< sc_logic > ap_idle;
    sc_signal< sc_lv<10> > ap_CS_fsm;
    sc_signal< sc_logic > ap_CS_fsm_state1;
    sc_signal< sc_logic > ap_ready;
    sc_signal< sc_lv<8> > data_address0;
    sc_signal< sc_logic > data_ce0;
    sc_signal< sc_lv<8> > data_q0;
    sc_signal< sc_lv<32> > base_offset;
    sc_signal< sc_lv<32> > bytes;
    sc_signal< sc_lv<5> > digest_address0;
    sc_signal< sc_logic > digest_ce0;
    sc_signal< sc_logic > digest_we0;
    sc_signal< sc_lv<32> > rtl_key_r;
    sc_signal< sc_lv<32> > br_key_r;
    sc_signal< sc_lv<32> > dp_key_r;
    sc_signal< sc_lv<32> > reg_490;
    sc_signal< sc_logic > ap_CS_fsm_state2;
    sc_signal< sc_lv<1> > icmp_ln36_fu_624_p2;
    sc_signal< sc_logic > ap_CS_fsm_state3;
    sc_signal< sc_lv<1> > icmp_ln41_fu_650_p2;
    sc_signal< sc_lv<32> > reg_496;
    sc_signal< sc_lv<32> > reg_502;
    sc_signal< sc_lv<32> > reg_508;
    sc_signal< sc_lv<32> > reg_514;
    sc_signal< sc_lv<32> > reg_520;
    sc_signal< sc_lv<32> > reg_526;
    sc_signal< sc_lv<32> > reg_532;
    sc_signal< sc_lv<32> > reg_538;
    sc_signal< sc_lv<10> > trunc_ln36_fu_562_p1;
    sc_signal< sc_lv<10> > trunc_ln36_reg_846;
    sc_signal< sc_lv<32> > n_0_load_reg_852;
    sc_signal< sc_lv<1> > icmp_ln39_fu_640_p2;
    sc_signal< sc_lv<1> > icmp_ln39_reg_862;
    sc_signal< sc_lv<10> > trunc_ln39_fu_646_p1;
    sc_signal< sc_lv<10> > trunc_ln39_reg_866;
    sc_signal< sc_lv<7> > i_4_fu_656_p2;
    sc_signal< sc_lv<7> > i_4_reg_875;
    sc_signal< sc_lv<6> > i_3_fu_716_p2;
    sc_signal< sc_lv<6> > i_3_reg_888;
    sc_signal< sc_logic > ap_CS_fsm_state6;
    sc_signal< sc_lv<1> > icmp_ln49_fu_711_p2;
    sc_signal< sc_lv<32> > sha256ctx_datalen_1_1_reg_898;
    sc_signal< sc_lv<32> > sha256ctx_state_7_2_2_reg_903;
    sc_signal< sc_lv<32> > sha256ctx_state_6_2_2_reg_908;
    sc_signal< sc_lv<32> > sha256ctx_state_0_2_2_reg_913;
    sc_signal< sc_lv<32> > sha256ctx_state_1_2_2_reg_918;
    sc_signal< sc_lv<32> > sha256ctx_state_2_2_2_reg_923;
    sc_signal< sc_lv<32> > sha256ctx_state_3_2_2_reg_928;
    sc_signal< sc_lv<32> > sha256ctx_state_4_2_2_reg_933;
    sc_signal< sc_lv<32> > sha256ctx_state_5_2_2_reg_938;
    sc_signal< sc_lv<6> > i_fu_757_p2;
    sc_signal< sc_lv<6> > i_reg_946;
    sc_signal< sc_logic > ap_CS_fsm_state9;
    sc_signal< sc_lv<64> > zext_ln62_fu_763_p1;
    sc_signal< sc_lv<64> > zext_ln62_reg_951;
    sc_signal< sc_lv<1> > icmp_ln60_fu_751_p2;
    sc_signal< sc_lv<6> > seg_buf_address0;
    sc_signal< sc_logic > seg_buf_ce0;
    sc_signal< sc_logic > seg_buf_we0;
    sc_signal< sc_lv<8> > seg_buf_d0;
    sc_signal< sc_lv<8> > seg_buf_q0;
    sc_signal< sc_logic > seg_buf_ce1;
    sc_signal< sc_logic > seg_buf_we1;
    sc_signal< sc_lv<4> > sha256ctx_data_0_address0;
    sc_signal< sc_logic > sha256ctx_data_0_ce0;
    sc_signal< sc_logic > sha256ctx_data_0_we0;
    sc_signal< sc_lv<8> > sha256ctx_data_0_d0;
    sc_signal< sc_lv<8> > sha256ctx_data_0_q0;
    sc_signal< sc_lv<4> > sha256ctx_data_0_address1;
    sc_signal< sc_logic > sha256ctx_data_0_ce1;
    sc_signal< sc_logic > sha256ctx_data_0_we1;
    sc_signal< sc_lv<8> > sha256ctx_data_0_q1;
    sc_signal< sc_lv<4> > sha256ctx_data_1_address0;
    sc_signal< sc_logic > sha256ctx_data_1_ce0;
    sc_signal< sc_logic > sha256ctx_data_1_we0;
    sc_signal< sc_lv<8> > sha256ctx_data_1_d0;
    sc_signal< sc_lv<8> > sha256ctx_data_1_q0;
    sc_signal< sc_lv<4> > sha256ctx_data_1_address1;
    sc_signal< sc_logic > sha256ctx_data_1_ce1;
    sc_signal< sc_logic > sha256ctx_data_1_we1;
    sc_signal< sc_lv<8> > sha256ctx_data_1_q1;
    sc_signal< sc_lv<4> > sha256ctx_data_2_address0;
    sc_signal< sc_logic > sha256ctx_data_2_ce0;
    sc_signal< sc_logic > sha256ctx_data_2_we0;
    sc_signal< sc_lv<8> > sha256ctx_data_2_d0;
    sc_signal< sc_lv<8> > sha256ctx_data_2_q0;
    sc_signal< sc_lv<4> > sha256ctx_data_2_address1;
    sc_signal< sc_logic > sha256ctx_data_2_ce1;
    sc_signal< sc_logic > sha256ctx_data_2_we1;
    sc_signal< sc_lv<8> > sha256ctx_data_2_q1;
    sc_signal< sc_lv<4> > sha256ctx_data_3_address0;
    sc_signal< sc_logic > sha256ctx_data_3_ce0;
    sc_signal< sc_logic > sha256ctx_data_3_we0;
    sc_signal< sc_lv<8> > sha256ctx_data_3_d0;
    sc_signal< sc_lv<8> > sha256ctx_data_3_q0;
    sc_signal< sc_lv<4> > sha256ctx_data_3_address1;
    sc_signal< sc_logic > sha256ctx_data_3_ce1;
    sc_signal< sc_logic > sha256ctx_data_3_we1;
    sc_signal< sc_lv<8> > sha256ctx_data_3_q1;
    sc_signal< sc_logic > grp_sha256_final_fu_311_ap_start;
    sc_signal< sc_logic > grp_sha256_final_fu_311_ap_done;
    sc_signal< sc_logic > grp_sha256_final_fu_311_ap_idle;
    sc_signal< sc_logic > grp_sha256_final_fu_311_ap_ready;
    sc_signal< sc_lv<4> > grp_sha256_final_fu_311_ctx_data_0_address0;
    sc_signal< sc_logic > grp_sha256_final_fu_311_ctx_data_0_ce0;
    sc_signal< sc_logic > grp_sha256_final_fu_311_ctx_data_0_we0;
    sc_signal< sc_lv<8> > grp_sha256_final_fu_311_ctx_data_0_d0;
    sc_signal< sc_lv<4> > grp_sha256_final_fu_311_ctx_data_0_address1;
    sc_signal< sc_logic > grp_sha256_final_fu_311_ctx_data_0_ce1;
    sc_signal< sc_logic > grp_sha256_final_fu_311_ctx_data_0_we1;
    sc_signal< sc_lv<8> > grp_sha256_final_fu_311_ctx_data_0_d1;
    sc_signal< sc_lv<4> > grp_sha256_final_fu_311_ctx_data_1_address0;
    sc_signal< sc_logic > grp_sha256_final_fu_311_ctx_data_1_ce0;
    sc_signal< sc_logic > grp_sha256_final_fu_311_ctx_data_1_we0;
    sc_signal< sc_lv<8> > grp_sha256_final_fu_311_ctx_data_1_d0;
    sc_signal< sc_lv<4> > grp_sha256_final_fu_311_ctx_data_1_address1;
    sc_signal< sc_logic > grp_sha256_final_fu_311_ctx_data_1_ce1;
    sc_signal< sc_logic > grp_sha256_final_fu_311_ctx_data_1_we1;
    sc_signal< sc_lv<8> > grp_sha256_final_fu_311_ctx_data_1_d1;
    sc_signal< sc_lv<4> > grp_sha256_final_fu_311_ctx_data_2_address0;
    sc_signal< sc_logic > grp_sha256_final_fu_311_ctx_data_2_ce0;
    sc_signal< sc_logic > grp_sha256_final_fu_311_ctx_data_2_we0;
    sc_signal< sc_lv<8> > grp_sha256_final_fu_311_ctx_data_2_d0;
    sc_signal< sc_lv<4> > grp_sha256_final_fu_311_ctx_data_2_address1;
    sc_signal< sc_logic > grp_sha256_final_fu_311_ctx_data_2_ce1;
    sc_signal< sc_logic > grp_sha256_final_fu_311_ctx_data_2_we1;
    sc_signal< sc_lv<8> > grp_sha256_final_fu_311_ctx_data_2_d1;
    sc_signal< sc_lv<4> > grp_sha256_final_fu_311_ctx_data_3_address0;
    sc_signal< sc_logic > grp_sha256_final_fu_311_ctx_data_3_ce0;
    sc_signal< sc_logic > grp_sha256_final_fu_311_ctx_data_3_we0;
    sc_signal< sc_lv<8> > grp_sha256_final_fu_311_ctx_data_3_d0;
    sc_signal< sc_lv<4> > grp_sha256_final_fu_311_ctx_data_3_address1;
    sc_signal< sc_logic > grp_sha256_final_fu_311_ctx_data_3_ce1;
    sc_signal< sc_logic > grp_sha256_final_fu_311_ctx_data_3_we1;
    sc_signal< sc_lv<8> > grp_sha256_final_fu_311_ctx_data_3_d1;
    sc_signal< sc_lv<6> > grp_sha256_final_fu_311_hash_address0;
    sc_signal< sc_logic > grp_sha256_final_fu_311_hash_ce0;
    sc_signal< sc_logic > grp_sha256_final_fu_311_hash_we0;
    sc_signal< sc_lv<8> > grp_sha256_final_fu_311_hash_d0;
    sc_signal< sc_lv<6> > grp_sha256_final_fu_311_hash_address1;
    sc_signal< sc_logic > grp_sha256_final_fu_311_hash_ce1;
    sc_signal< sc_logic > grp_sha256_final_fu_311_hash_we1;
    sc_signal< sc_lv<8> > grp_sha256_final_fu_311_hash_d1;
    sc_signal< sc_logic > grp_sha256_update_fu_335_ap_start;
    sc_signal< sc_logic > grp_sha256_update_fu_335_ap_done;
    sc_signal< sc_logic > grp_sha256_update_fu_335_ap_idle;
    sc_signal< sc_logic > grp_sha256_update_fu_335_ap_ready;
    sc_signal< sc_lv<4> > grp_sha256_update_fu_335_ctx_data_0_address0;
    sc_signal< sc_logic > grp_sha256_update_fu_335_ctx_data_0_ce0;
    sc_signal< sc_logic > grp_sha256_update_fu_335_ctx_data_0_we0;
    sc_signal< sc_lv<8> > grp_sha256_update_fu_335_ctx_data_0_d0;
    sc_signal< sc_lv<4> > grp_sha256_update_fu_335_ctx_data_0_address1;
    sc_signal< sc_logic > grp_sha256_update_fu_335_ctx_data_0_ce1;
    sc_signal< sc_lv<4> > grp_sha256_update_fu_335_ctx_data_1_address0;
    sc_signal< sc_logic > grp_sha256_update_fu_335_ctx_data_1_ce0;
    sc_signal< sc_logic > grp_sha256_update_fu_335_ctx_data_1_we0;
    sc_signal< sc_lv<8> > grp_sha256_update_fu_335_ctx_data_1_d0;
    sc_signal< sc_lv<4> > grp_sha256_update_fu_335_ctx_data_1_address1;
    sc_signal< sc_logic > grp_sha256_update_fu_335_ctx_data_1_ce1;
    sc_signal< sc_lv<4> > grp_sha256_update_fu_335_ctx_data_2_address0;
    sc_signal< sc_logic > grp_sha256_update_fu_335_ctx_data_2_ce0;
    sc_signal< sc_logic > grp_sha256_update_fu_335_ctx_data_2_we0;
    sc_signal< sc_lv<8> > grp_sha256_update_fu_335_ctx_data_2_d0;
    sc_signal< sc_lv<4> > grp_sha256_update_fu_335_ctx_data_2_address1;
    sc_signal< sc_logic > grp_sha256_update_fu_335_ctx_data_2_ce1;
    sc_signal< sc_lv<4> > grp_sha256_update_fu_335_ctx_data_3_address0;
    sc_signal< sc_logic > grp_sha256_update_fu_335_ctx_data_3_ce0;
    sc_signal< sc_logic > grp_sha256_update_fu_335_ctx_data_3_we0;
    sc_signal< sc_lv<8> > grp_sha256_update_fu_335_ctx_data_3_d0;
    sc_signal< sc_lv<4> > grp_sha256_update_fu_335_ctx_data_3_address1;
    sc_signal< sc_logic > grp_sha256_update_fu_335_ctx_data_3_ce1;
    sc_signal< sc_lv<32> > grp_sha256_update_fu_335_ctx_datalen_read;
    sc_signal< sc_lv<32> > grp_sha256_update_fu_335_p_read1;
    sc_signal< sc_lv<32> > grp_sha256_update_fu_335_p_read2;
    sc_signal< sc_lv<32> > grp_sha256_update_fu_335_p_read3;
    sc_signal< sc_lv<32> > grp_sha256_update_fu_335_p_read4;
    sc_signal< sc_lv<32> > grp_sha256_update_fu_335_p_read5;
    sc_signal< sc_lv<32> > grp_sha256_update_fu_335_p_read6;
    sc_signal< sc_lv<32> > grp_sha256_update_fu_335_p_read7;
    sc_signal< sc_lv<32> > grp_sha256_update_fu_335_p_read8;
    sc_signal< sc_lv<6> > grp_sha256_update_fu_335_data_address0;
    sc_signal< sc_logic > grp_sha256_update_fu_335_data_ce0;
    sc_signal< sc_lv<32> > grp_sha256_update_fu_335_len;
    sc_signal< sc_lv<32> > grp_sha256_update_fu_335_ap_return_0;
    sc_signal< sc_lv<32> > grp_sha256_update_fu_335_ap_return_1;
    sc_signal< sc_lv<32> > grp_sha256_update_fu_335_ap_return_2;
    sc_signal< sc_lv<32> > grp_sha256_update_fu_335_ap_return_3;
    sc_signal< sc_lv<32> > grp_sha256_update_fu_335_ap_return_4;
    sc_signal< sc_lv<32> > grp_sha256_update_fu_335_ap_return_5;
    sc_signal< sc_lv<32> > grp_sha256_update_fu_335_ap_return_6;
    sc_signal< sc_lv<32> > grp_sha256_update_fu_335_ap_return_7;
    sc_signal< sc_lv<32> > grp_sha256_update_fu_335_ap_return_8;
    sc_signal< sc_lv<7> > i_0_reg_276;
    sc_signal< sc_logic > ap_CS_fsm_state4;
    sc_signal< sc_lv<6> > i_1_reg_288;
    sc_signal< sc_logic > ap_CS_fsm_state7;
    sc_signal< sc_lv<6> > i_2_reg_300;
    sc_signal< sc_logic > ap_CS_fsm_state8;
    sc_signal< sc_logic > ap_CS_fsm_state10;
    sc_signal< sc_logic > grp_sha256_final_fu_311_ap_start_reg;
    sc_signal< sc_logic > grp_sha256_update_fu_335_ap_start_reg;
    sc_signal< sc_logic > ap_CS_fsm_state5;
    sc_signal< sc_lv<64> > zext_ln42_2_fu_676_p1;
    sc_signal< sc_lv<64> > zext_ln42_fu_691_p1;
    sc_signal< sc_lv<64> > zext_ln51_2_fu_736_p1;
    sc_signal< sc_lv<64> > zext_ln51_fu_746_p1;
    sc_signal< sc_lv<32> > n_0_fu_120;
    sc_signal< sc_lv<32> > n_fu_681_p2;
    sc_signal< sc_lv<32> > sha256ctx_datalen_1_fu_124;
    sc_signal< bool > ap_block_state5_on_subcall_done;
    sc_signal< sc_lv<32> > sha256ctx_state_7_2_fu_128;
    sc_signal< sc_lv<32> > sha256ctx_state_6_2_fu_132;
    sc_signal< sc_lv<32> > sha256ctx_state_0_2_fu_136;
    sc_signal< sc_lv<32> > sha256ctx_state_1_2_fu_140;
    sc_signal< sc_lv<32> > sha256ctx_state_2_2_fu_144;
    sc_signal< sc_lv<32> > sha256ctx_state_3_2_fu_148;
    sc_signal< sc_lv<32> > sha256ctx_state_4_2_fu_152;
    sc_signal< sc_lv<32> > sha256ctx_state_5_2_fu_156;
    sc_signal< sc_lv<32> > seg_offset_1_fu_160;
    sc_signal< sc_lv<32> > seg_offset_fu_696_p2;
    sc_signal< sc_lv<26> > tmp_3_fu_630_p4;
    sc_signal< sc_lv<10> > zext_ln42_1_fu_662_p1;
    sc_signal< sc_lv<10> > add_ln42_fu_666_p2;
    sc_signal< sc_lv<10> > add_ln42_1_fu_671_p2;
    sc_signal< sc_lv<32> > zext_ln49_fu_707_p1;
    sc_signal< sc_lv<10> > zext_ln51_1_fu_722_p1;
    sc_signal< sc_lv<10> > add_ln51_fu_726_p2;
    sc_signal< sc_lv<10> > add_ln51_1_fu_731_p2;
    sc_signal< sc_lv<10> > ap_NS_fsm;
    static const sc_logic ap_const_logic_1;
    static const sc_logic ap_const_logic_0;
    static const sc_lv<10> ap_ST_fsm_state1;
    static const sc_lv<10> ap_ST_fsm_state2;
    static const sc_lv<10> ap_ST_fsm_state3;
    static const sc_lv<10> ap_ST_fsm_state4;
    static const sc_lv<10> ap_ST_fsm_state5;
    static const sc_lv<10> ap_ST_fsm_state6;
    static const sc_lv<10> ap_ST_fsm_state7;
    static const sc_lv<10> ap_ST_fsm_state8;
    static const sc_lv<10> ap_ST_fsm_state9;
    static const sc_lv<10> ap_ST_fsm_state10;
    static const sc_lv<32> ap_const_lv32_0;
    static const sc_lv<32> ap_const_lv32_3;
    static const sc_lv<32> ap_const_lv32_2;
    static const int C_S_AXI_DATA_WIDTH;
    static const sc_lv<32> ap_const_lv32_1;
    static const sc_lv<1> ap_const_lv1_1;
    static const sc_lv<1> ap_const_lv1_0;
    static const sc_lv<32> ap_const_lv32_5;
    static const sc_lv<32> ap_const_lv32_8;
    static const sc_lv<7> ap_const_lv7_0;
    static const sc_lv<32> ap_const_lv32_6;
    static const sc_lv<6> ap_const_lv6_0;
    static const sc_lv<32> ap_const_lv32_7;
    static const sc_lv<32> ap_const_lv32_9;
    static const sc_lv<32> ap_const_lv32_4;
    static const sc_lv<32> ap_const_lv32_40;
    static const bool ap_const_boolean_0;
    static const sc_lv<32> ap_const_lv32_5BE0CD19;
    static const sc_lv<32> ap_const_lv32_1F83D9AB;
    static const sc_lv<32> ap_const_lv32_6A09E667;
    static const sc_lv<32> ap_const_lv32_BB67AE85;
    static const sc_lv<32> ap_const_lv32_3C6EF372;
    static const sc_lv<32> ap_const_lv32_A54FF53A;
    static const sc_lv<32> ap_const_lv32_510E527F;
    static const sc_lv<32> ap_const_lv32_9B05688C;
    static const sc_lv<32> ap_const_lv32_1F;
    static const sc_lv<26> ap_const_lv26_0;
    static const sc_lv<7> ap_const_lv7_40;
    static const sc_lv<7> ap_const_lv7_1;
    static const sc_lv<32> ap_const_lv32_FFFFFFC0;
    static const sc_lv<6> ap_const_lv6_1;
    static const sc_lv<6> ap_const_lv6_20;
    static const bool ap_const_boolean_1;
    // Thread declarations
    void thread_ap_var_for_const0();
    void thread_ap_clk_no_reset_();
    void thread_add_ln42_1_fu_671_p2();
    void thread_add_ln42_fu_666_p2();
    void thread_add_ln51_1_fu_731_p2();
    void thread_add_ln51_fu_726_p2();
    void thread_ap_CS_fsm_state1();
    void thread_ap_CS_fsm_state10();
    void thread_ap_CS_fsm_state2();
    void thread_ap_CS_fsm_state3();
    void thread_ap_CS_fsm_state4();
    void thread_ap_CS_fsm_state5();
    void thread_ap_CS_fsm_state6();
    void thread_ap_CS_fsm_state7();
    void thread_ap_CS_fsm_state8();
    void thread_ap_CS_fsm_state9();
    void thread_ap_block_state5_on_subcall_done();
    void thread_ap_done();
    void thread_ap_idle();
    void thread_ap_ready();
    void thread_ap_rst_n_inv();
    void thread_data_address0();
    void thread_data_ce0();
    void thread_digest_address0();
    void thread_digest_ce0();
    void thread_digest_we0();
    void thread_grp_sha256_final_fu_311_ap_start();
    void thread_grp_sha256_update_fu_335_ap_start();
    void thread_grp_sha256_update_fu_335_ctx_datalen_read();
    void thread_grp_sha256_update_fu_335_len();
    void thread_grp_sha256_update_fu_335_p_read1();
    void thread_grp_sha256_update_fu_335_p_read2();
    void thread_grp_sha256_update_fu_335_p_read3();
    void thread_grp_sha256_update_fu_335_p_read4();
    void thread_grp_sha256_update_fu_335_p_read5();
    void thread_grp_sha256_update_fu_335_p_read6();
    void thread_grp_sha256_update_fu_335_p_read7();
    void thread_grp_sha256_update_fu_335_p_read8();
    void thread_i_3_fu_716_p2();
    void thread_i_4_fu_656_p2();
    void thread_i_fu_757_p2();
    void thread_icmp_ln36_fu_624_p2();
    void thread_icmp_ln39_fu_640_p2();
    void thread_icmp_ln41_fu_650_p2();
    void thread_icmp_ln49_fu_711_p2();
    void thread_icmp_ln60_fu_751_p2();
    void thread_n_fu_681_p2();
    void thread_seg_buf_address0();
    void thread_seg_buf_ce0();
    void thread_seg_buf_ce1();
    void thread_seg_buf_d0();
    void thread_seg_buf_we0();
    void thread_seg_buf_we1();
    void thread_seg_offset_fu_696_p2();
    void thread_sha256ctx_data_0_address0();
    void thread_sha256ctx_data_0_address1();
    void thread_sha256ctx_data_0_ce0();
    void thread_sha256ctx_data_0_ce1();
    void thread_sha256ctx_data_0_d0();
    void thread_sha256ctx_data_0_we0();
    void thread_sha256ctx_data_0_we1();
    void thread_sha256ctx_data_1_address0();
    void thread_sha256ctx_data_1_address1();
    void thread_sha256ctx_data_1_ce0();
    void thread_sha256ctx_data_1_ce1();
    void thread_sha256ctx_data_1_d0();
    void thread_sha256ctx_data_1_we0();
    void thread_sha256ctx_data_1_we1();
    void thread_sha256ctx_data_2_address0();
    void thread_sha256ctx_data_2_address1();
    void thread_sha256ctx_data_2_ce0();
    void thread_sha256ctx_data_2_ce1();
    void thread_sha256ctx_data_2_d0();
    void thread_sha256ctx_data_2_we0();
    void thread_sha256ctx_data_2_we1();
    void thread_sha256ctx_data_3_address0();
    void thread_sha256ctx_data_3_address1();
    void thread_sha256ctx_data_3_ce0();
    void thread_sha256ctx_data_3_ce1();
    void thread_sha256ctx_data_3_d0();
    void thread_sha256ctx_data_3_we0();
    void thread_sha256ctx_data_3_we1();
    void thread_tmp_3_fu_630_p4();
    void thread_trunc_ln36_fu_562_p1();
    void thread_trunc_ln39_fu_646_p1();
    void thread_zext_ln42_1_fu_662_p1();
    void thread_zext_ln42_2_fu_676_p1();
    void thread_zext_ln42_fu_691_p1();
    void thread_zext_ln49_fu_707_p1();
    void thread_zext_ln51_1_fu_722_p1();
    void thread_zext_ln51_2_fu_736_p1();
    void thread_zext_ln51_fu_746_p1();
    void thread_zext_ln62_fu_763_p1();
    void thread_ap_NS_fsm();
    void thread_hdltv_gen();
};

}

using namespace ap_rtl;

#endif
