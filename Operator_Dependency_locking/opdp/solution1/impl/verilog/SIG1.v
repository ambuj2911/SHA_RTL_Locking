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
        rtl_key_r,
        ap_return
);


output   ap_ready;
input  [31:0] x;
input  [31:0] rtl_key_r;
output  [31:0] ap_return;

wire   [31:0] xor_ln228_1_fu_223_p2;
reg   [31:0] ap_phi_mux_p_0_phi_fu_77_p4;
wire   [0:0] temp_fu_87_p1;
wire   [31:0] xor_ln232_1_fu_354_p2;
wire   [24:0] trunc_ln53_2_fu_99_p1;
wire   [6:0] lshr_ln53_2_fu_103_p4;
wire   [6:0] trunc_ln57_2_fu_131_p1;
wire   [24:0] lshr_ln57_2_fu_121_p4;
wire   [0:0] tmp_fu_91_p3;
wire   [31:0] or_ln57_2_fu_135_p3;
wire   [31:0] or_ln53_2_fu_113_p3;
wire   [13:0] trunc_ln53_3_fu_151_p1;
wire   [17:0] lshr_ln53_3_fu_155_p4;
wire   [17:0] trunc_ln57_3_fu_183_p1;
wire   [13:0] lshr_ln57_3_fu_173_p4;
wire   [31:0] or_ln57_3_fu_187_p3;
wire   [31:0] or_ln53_3_fu_165_p3;
wire   [28:0] lshr_ln6_fu_203_p4;
wire   [31:0] zext_ln228_fu_213_p1;
wire   [31:0] select_ln51_3_fu_195_p3;
wire   [31:0] xor_ln228_fu_217_p2;
wire   [31:0] select_ln51_2_fu_143_p3;
wire   [14:0] trunc_ln53_fu_230_p1;
wire   [16:0] lshr_ln_fu_234_p4;
wire   [16:0] trunc_ln57_fu_262_p1;
wire   [14:0] lshr_ln4_fu_252_p4;
wire   [31:0] or_ln1_fu_266_p3;
wire   [31:0] or_ln_fu_244_p3;
wire   [12:0] trunc_ln53_1_fu_282_p1;
wire   [18:0] lshr_ln53_1_fu_286_p4;
wire   [18:0] trunc_ln57_1_fu_314_p1;
wire   [12:0] lshr_ln57_1_fu_304_p4;
wire   [31:0] or_ln57_1_fu_318_p3;
wire   [31:0] or_ln53_1_fu_296_p3;
wire   [21:0] lshr_ln5_fu_334_p4;
wire   [31:0] zext_ln232_fu_344_p1;
wire   [31:0] select_ln51_1_fu_326_p3;
wire   [31:0] xor_ln232_fu_348_p2;
wire   [31:0] select_ln51_fu_274_p3;

always @ (*) begin
    if ((temp_fu_87_p1 == 1'd1)) begin
        ap_phi_mux_p_0_phi_fu_77_p4 = xor_ln232_1_fu_354_p2;
    end else if ((temp_fu_87_p1 == 1'd0)) begin
        ap_phi_mux_p_0_phi_fu_77_p4 = xor_ln228_1_fu_223_p2;
    end else begin
        ap_phi_mux_p_0_phi_fu_77_p4 = 'bx;
    end
end

assign ap_ready = 1'b1;

assign ap_return = ap_phi_mux_p_0_phi_fu_77_p4;

assign lshr_ln4_fu_252_p4 = {{x[31:17]}};

assign lshr_ln53_1_fu_286_p4 = {{x[31:13]}};

assign lshr_ln53_2_fu_103_p4 = {{x[31:25]}};

assign lshr_ln53_3_fu_155_p4 = {{x[31:14]}};

assign lshr_ln57_1_fu_304_p4 = {{x[31:19]}};

assign lshr_ln57_2_fu_121_p4 = {{x[31:7]}};

assign lshr_ln57_3_fu_173_p4 = {{x[31:18]}};

assign lshr_ln5_fu_334_p4 = {{x[31:10]}};

assign lshr_ln6_fu_203_p4 = {{x[31:3]}};

assign lshr_ln_fu_234_p4 = {{x[31:15]}};

assign or_ln1_fu_266_p3 = {{trunc_ln57_fu_262_p1}, {lshr_ln4_fu_252_p4}};

assign or_ln53_1_fu_296_p3 = {{trunc_ln53_1_fu_282_p1}, {lshr_ln53_1_fu_286_p4}};

assign or_ln53_2_fu_113_p3 = {{trunc_ln53_2_fu_99_p1}, {lshr_ln53_2_fu_103_p4}};

assign or_ln53_3_fu_165_p3 = {{trunc_ln53_3_fu_151_p1}, {lshr_ln53_3_fu_155_p4}};

assign or_ln57_1_fu_318_p3 = {{trunc_ln57_1_fu_314_p1}, {lshr_ln57_1_fu_304_p4}};

assign or_ln57_2_fu_135_p3 = {{trunc_ln57_2_fu_131_p1}, {lshr_ln57_2_fu_121_p4}};

assign or_ln57_3_fu_187_p3 = {{trunc_ln57_3_fu_183_p1}, {lshr_ln57_3_fu_173_p4}};

assign or_ln_fu_244_p3 = {{trunc_ln53_fu_230_p1}, {lshr_ln_fu_234_p4}};

assign select_ln51_1_fu_326_p3 = ((tmp_fu_91_p3[0:0] === 1'b1) ? or_ln57_1_fu_318_p3 : or_ln53_1_fu_296_p3);

assign select_ln51_2_fu_143_p3 = ((tmp_fu_91_p3[0:0] === 1'b1) ? or_ln57_2_fu_135_p3 : or_ln53_2_fu_113_p3);

assign select_ln51_3_fu_195_p3 = ((tmp_fu_91_p3[0:0] === 1'b1) ? or_ln57_3_fu_187_p3 : or_ln53_3_fu_165_p3);

assign select_ln51_fu_274_p3 = ((tmp_fu_91_p3[0:0] === 1'b1) ? or_ln1_fu_266_p3 : or_ln_fu_244_p3);

assign temp_fu_87_p1 = rtl_key_r[0:0];

assign tmp_fu_91_p3 = rtl_key_r[32'd6];

assign trunc_ln53_1_fu_282_p1 = x[12:0];

assign trunc_ln53_2_fu_99_p1 = x[24:0];

assign trunc_ln53_3_fu_151_p1 = x[13:0];

assign trunc_ln53_fu_230_p1 = x[14:0];

assign trunc_ln57_1_fu_314_p1 = x[18:0];

assign trunc_ln57_2_fu_131_p1 = x[6:0];

assign trunc_ln57_3_fu_183_p1 = x[17:0];

assign trunc_ln57_fu_262_p1 = x[16:0];

assign xor_ln228_1_fu_223_p2 = (xor_ln228_fu_217_p2 ^ select_ln51_2_fu_143_p3);

assign xor_ln228_fu_217_p2 = (zext_ln228_fu_213_p1 ^ select_ln51_3_fu_195_p3);

assign xor_ln232_1_fu_354_p2 = (xor_ln232_fu_348_p2 ^ select_ln51_fu_274_p3);

assign xor_ln232_fu_348_p2 = (zext_ln232_fu_344_p1 ^ select_ln51_1_fu_326_p3);

assign zext_ln228_fu_213_p1 = lshr_ln6_fu_203_p4;

assign zext_ln232_fu_344_p1 = lshr_ln5_fu_334_p4;

endmodule //SIG1
