// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2019.1
// Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

`timescale 1 ns / 1 ps 

module SIG1 (
        ap_ready,
        x,
        ap_return
);


output   ap_ready;
input  [31:0] x;
output  [31:0] ap_return;

wire   [16:0] trunc_ln52_fu_38_p1;
wire   [14:0] lshr_ln_fu_28_p4;
wire   [18:0] trunc_ln52_1_fu_60_p1;
wire   [12:0] lshr_ln52_1_fu_50_p4;
wire   [21:0] lshr_ln4_fu_72_p4;
wire   [31:0] zext_ln84_fu_82_p1;
wire   [31:0] or_ln52_1_fu_64_p3;
wire   [31:0] xor_ln84_fu_86_p2;
wire   [31:0] or_ln_fu_42_p3;

assign ap_ready = 1'b1;

assign ap_return = (xor_ln84_fu_86_p2 ^ or_ln_fu_42_p3);

assign lshr_ln4_fu_72_p4 = {{x[31:10]}};

assign lshr_ln52_1_fu_50_p4 = {{x[31:19]}};

assign lshr_ln_fu_28_p4 = {{x[31:17]}};

assign or_ln52_1_fu_64_p3 = {{trunc_ln52_1_fu_60_p1}, {lshr_ln52_1_fu_50_p4}};

assign or_ln_fu_42_p3 = {{trunc_ln52_fu_38_p1}, {lshr_ln_fu_28_p4}};

assign trunc_ln52_1_fu_60_p1 = x[18:0];

assign trunc_ln52_fu_38_p1 = x[16:0];

assign xor_ln84_fu_86_p2 = (zext_ln84_fu_82_p1 ^ or_ln52_1_fu_64_p3);

assign zext_ln84_fu_82_p1 = lshr_ln4_fu_72_p4;

endmodule //SIG1
