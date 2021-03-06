-- ==============================================================
-- RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
-- Version: 2019.1
-- Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
-- 
-- ===========================================================

library IEEE;
use IEEE.std_logic_1164.all;
use IEEE.numeric_std.all;

entity SIG0 is
port (
    ap_ready : OUT STD_LOGIC;
    x : IN STD_LOGIC_VECTOR (31 downto 0);
    rtl_key_r : IN STD_LOGIC_VECTOR (31 downto 0);
    ap_return : OUT STD_LOGIC_VECTOR (31 downto 0) );
end;


architecture behav of SIG0 is 
    constant ap_const_logic_1 : STD_LOGIC := '1';
    constant ap_const_boolean_1 : BOOLEAN := true;
    constant ap_const_lv1_0 : STD_LOGIC_VECTOR (0 downto 0) := "0";
    constant ap_const_lv1_1 : STD_LOGIC_VECTOR (0 downto 0) := "1";
    constant ap_const_lv32_1 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000001";
    constant ap_const_lv32_6 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000110";
    constant ap_const_lv32_19 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000011001";
    constant ap_const_lv32_1F : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000011111";
    constant ap_const_lv32_7 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000111";
    constant ap_const_lv32_E : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000001110";
    constant ap_const_lv32_12 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000010010";
    constant ap_const_lv32_3 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000011";
    constant ap_const_lv32_1A : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000011010";
    constant ap_const_lv32_18 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000011000";
    constant ap_const_lv32_8 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000001000";
    constant ap_const_logic_0 : STD_LOGIC := '0';

    signal xor_ln205_1_fu_223_p2 : STD_LOGIC_VECTOR (31 downto 0);
    signal ap_phi_mux_p_0_phi_fu_73_p4 : STD_LOGIC_VECTOR (31 downto 0);
    signal tmp_fu_83_p3 : STD_LOGIC_VECTOR (0 downto 0);
    signal xor_ln210_fu_334_p2 : STD_LOGIC_VECTOR (31 downto 0);
    signal trunc_ln56_5_fu_99_p1 : STD_LOGIC_VECTOR (24 downto 0);
    signal lshr_ln_fu_103_p4 : STD_LOGIC_VECTOR (6 downto 0);
    signal trunc_ln60_5_fu_131_p1 : STD_LOGIC_VECTOR (6 downto 0);
    signal lshr_ln7_fu_121_p4 : STD_LOGIC_VECTOR (24 downto 0);
    signal tmp_3_fu_91_p3 : STD_LOGIC_VECTOR (0 downto 0);
    signal or_ln2_fu_135_p3 : STD_LOGIC_VECTOR (31 downto 0);
    signal or_ln_fu_113_p3 : STD_LOGIC_VECTOR (31 downto 0);
    signal trunc_ln56_6_fu_151_p1 : STD_LOGIC_VECTOR (13 downto 0);
    signal lshr_ln56_4_fu_155_p4 : STD_LOGIC_VECTOR (17 downto 0);
    signal trunc_ln60_6_fu_183_p1 : STD_LOGIC_VECTOR (17 downto 0);
    signal lshr_ln60_4_fu_173_p4 : STD_LOGIC_VECTOR (13 downto 0);
    signal or_ln60_4_fu_187_p3 : STD_LOGIC_VECTOR (31 downto 0);
    signal or_ln56_4_fu_165_p3 : STD_LOGIC_VECTOR (31 downto 0);
    signal lshr_ln8_fu_203_p4 : STD_LOGIC_VECTOR (28 downto 0);
    signal zext_ln205_fu_213_p1 : STD_LOGIC_VECTOR (31 downto 0);
    signal select_ln54_4_fu_195_p3 : STD_LOGIC_VECTOR (31 downto 0);
    signal xor_ln205_fu_217_p2 : STD_LOGIC_VECTOR (31 downto 0);
    signal select_ln54_fu_143_p3 : STD_LOGIC_VECTOR (31 downto 0);
    signal trunc_ln56_fu_230_p1 : STD_LOGIC_VECTOR (25 downto 0);
    signal lshr_ln56_5_fu_234_p4 : STD_LOGIC_VECTOR (5 downto 0);
    signal trunc_ln60_fu_262_p1 : STD_LOGIC_VECTOR (5 downto 0);
    signal lshr_ln60_5_fu_252_p4 : STD_LOGIC_VECTOR (25 downto 0);
    signal or_ln60_5_fu_266_p3 : STD_LOGIC_VECTOR (31 downto 0);
    signal or_ln56_5_fu_244_p3 : STD_LOGIC_VECTOR (31 downto 0);
    signal trunc_ln56_4_fu_282_p1 : STD_LOGIC_VECTOR (23 downto 0);
    signal lshr_ln56_6_fu_286_p4 : STD_LOGIC_VECTOR (7 downto 0);
    signal trunc_ln60_4_fu_314_p1 : STD_LOGIC_VECTOR (7 downto 0);
    signal lshr_ln60_6_fu_304_p4 : STD_LOGIC_VECTOR (23 downto 0);
    signal or_ln60_6_fu_318_p3 : STD_LOGIC_VECTOR (31 downto 0);
    signal or_ln56_6_fu_296_p3 : STD_LOGIC_VECTOR (31 downto 0);
    signal select_ln54_6_fu_326_p3 : STD_LOGIC_VECTOR (31 downto 0);
    signal select_ln54_5_fu_274_p3 : STD_LOGIC_VECTOR (31 downto 0);


begin




    ap_phi_mux_p_0_phi_fu_73_p4_assign_proc : process(xor_ln205_1_fu_223_p2, tmp_fu_83_p3, xor_ln210_fu_334_p2)
    begin
        if ((tmp_fu_83_p3 = ap_const_lv1_1)) then 
            ap_phi_mux_p_0_phi_fu_73_p4 <= xor_ln210_fu_334_p2;
        elsif ((tmp_fu_83_p3 = ap_const_lv1_0)) then 
            ap_phi_mux_p_0_phi_fu_73_p4 <= xor_ln205_1_fu_223_p2;
        else 
            ap_phi_mux_p_0_phi_fu_73_p4 <= "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
        end if; 
    end process;

    ap_ready <= ap_const_logic_1;
    ap_return <= ap_phi_mux_p_0_phi_fu_73_p4;
    lshr_ln56_4_fu_155_p4 <= x(31 downto 14);
    lshr_ln56_5_fu_234_p4 <= x(31 downto 26);
    lshr_ln56_6_fu_286_p4 <= x(31 downto 24);
    lshr_ln60_4_fu_173_p4 <= x(31 downto 18);
    lshr_ln60_5_fu_252_p4 <= x(31 downto 6);
    lshr_ln60_6_fu_304_p4 <= x(31 downto 8);
    lshr_ln7_fu_121_p4 <= x(31 downto 7);
    lshr_ln8_fu_203_p4 <= x(31 downto 3);
    lshr_ln_fu_103_p4 <= x(31 downto 25);
    or_ln2_fu_135_p3 <= (trunc_ln60_5_fu_131_p1 & lshr_ln7_fu_121_p4);
    or_ln56_4_fu_165_p3 <= (trunc_ln56_6_fu_151_p1 & lshr_ln56_4_fu_155_p4);
    or_ln56_5_fu_244_p3 <= (trunc_ln56_fu_230_p1 & lshr_ln56_5_fu_234_p4);
    or_ln56_6_fu_296_p3 <= (trunc_ln56_4_fu_282_p1 & lshr_ln56_6_fu_286_p4);
    or_ln60_4_fu_187_p3 <= (trunc_ln60_6_fu_183_p1 & lshr_ln60_4_fu_173_p4);
    or_ln60_5_fu_266_p3 <= (trunc_ln60_fu_262_p1 & lshr_ln60_5_fu_252_p4);
    or_ln60_6_fu_318_p3 <= (trunc_ln60_4_fu_314_p1 & lshr_ln60_6_fu_304_p4);
    or_ln_fu_113_p3 <= (trunc_ln56_5_fu_99_p1 & lshr_ln_fu_103_p4);
    select_ln54_4_fu_195_p3 <= 
        or_ln60_4_fu_187_p3 when (tmp_3_fu_91_p3(0) = '1') else 
        or_ln56_4_fu_165_p3;
    select_ln54_5_fu_274_p3 <= 
        or_ln60_5_fu_266_p3 when (tmp_3_fu_91_p3(0) = '1') else 
        or_ln56_5_fu_244_p3;
    select_ln54_6_fu_326_p3 <= 
        or_ln60_6_fu_318_p3 when (tmp_3_fu_91_p3(0) = '1') else 
        or_ln56_6_fu_296_p3;
    select_ln54_fu_143_p3 <= 
        or_ln2_fu_135_p3 when (tmp_3_fu_91_p3(0) = '1') else 
        or_ln_fu_113_p3;
    tmp_3_fu_91_p3 <= rtl_key_r(6 downto 6);
    tmp_fu_83_p3 <= rtl_key_r(1 downto 1);
    trunc_ln56_4_fu_282_p1 <= x(24 - 1 downto 0);
    trunc_ln56_5_fu_99_p1 <= x(25 - 1 downto 0);
    trunc_ln56_6_fu_151_p1 <= x(14 - 1 downto 0);
    trunc_ln56_fu_230_p1 <= x(26 - 1 downto 0);
    trunc_ln60_4_fu_314_p1 <= x(8 - 1 downto 0);
    trunc_ln60_5_fu_131_p1 <= x(7 - 1 downto 0);
    trunc_ln60_6_fu_183_p1 <= x(18 - 1 downto 0);
    trunc_ln60_fu_262_p1 <= x(6 - 1 downto 0);
    xor_ln205_1_fu_223_p2 <= (xor_ln205_fu_217_p2 xor select_ln54_fu_143_p3);
    xor_ln205_fu_217_p2 <= (zext_ln205_fu_213_p1 xor select_ln54_4_fu_195_p3);
    xor_ln210_fu_334_p2 <= (select_ln54_6_fu_326_p3 xor select_ln54_5_fu_274_p3);
    zext_ln205_fu_213_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(lshr_ln8_fu_203_p4),32));
end behav;
