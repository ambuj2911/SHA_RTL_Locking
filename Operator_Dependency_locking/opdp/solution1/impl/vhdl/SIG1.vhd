-- ==============================================================
-- RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
-- Version: 2019.1
-- Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
-- 
-- ===========================================================

library IEEE;
use IEEE.std_logic_1164.all;
use IEEE.numeric_std.all;

entity SIG1 is
port (
    ap_ready : OUT STD_LOGIC;
    x : IN STD_LOGIC_VECTOR (31 downto 0);
    rtl_key_r : IN STD_LOGIC_VECTOR (31 downto 0);
    ap_return : OUT STD_LOGIC_VECTOR (31 downto 0) );
end;


architecture behav of SIG1 is 
    constant ap_const_logic_1 : STD_LOGIC := '1';
    constant ap_const_boolean_1 : BOOLEAN := true;
    constant ap_const_lv1_0 : STD_LOGIC_VECTOR (0 downto 0) := "0";
    constant ap_const_lv1_1 : STD_LOGIC_VECTOR (0 downto 0) := "1";
    constant ap_const_lv32_6 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000110";
    constant ap_const_lv32_19 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000011001";
    constant ap_const_lv32_1F : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000011111";
    constant ap_const_lv32_7 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000111";
    constant ap_const_lv32_E : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000001110";
    constant ap_const_lv32_12 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000010010";
    constant ap_const_lv32_3 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000011";
    constant ap_const_lv32_F : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000001111";
    constant ap_const_lv32_11 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000010001";
    constant ap_const_lv32_D : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000001101";
    constant ap_const_lv32_13 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000010011";
    constant ap_const_lv32_A : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000001010";
    constant ap_const_logic_0 : STD_LOGIC := '0';

    signal xor_ln228_1_fu_223_p2 : STD_LOGIC_VECTOR (31 downto 0);
    signal ap_phi_mux_p_0_phi_fu_77_p4 : STD_LOGIC_VECTOR (31 downto 0);
    signal temp_fu_87_p1 : STD_LOGIC_VECTOR (0 downto 0);
    signal xor_ln232_1_fu_354_p2 : STD_LOGIC_VECTOR (31 downto 0);
    signal trunc_ln53_2_fu_99_p1 : STD_LOGIC_VECTOR (24 downto 0);
    signal lshr_ln53_2_fu_103_p4 : STD_LOGIC_VECTOR (6 downto 0);
    signal trunc_ln57_2_fu_131_p1 : STD_LOGIC_VECTOR (6 downto 0);
    signal lshr_ln57_2_fu_121_p4 : STD_LOGIC_VECTOR (24 downto 0);
    signal tmp_fu_91_p3 : STD_LOGIC_VECTOR (0 downto 0);
    signal or_ln57_2_fu_135_p3 : STD_LOGIC_VECTOR (31 downto 0);
    signal or_ln53_2_fu_113_p3 : STD_LOGIC_VECTOR (31 downto 0);
    signal trunc_ln53_3_fu_151_p1 : STD_LOGIC_VECTOR (13 downto 0);
    signal lshr_ln53_3_fu_155_p4 : STD_LOGIC_VECTOR (17 downto 0);
    signal trunc_ln57_3_fu_183_p1 : STD_LOGIC_VECTOR (17 downto 0);
    signal lshr_ln57_3_fu_173_p4 : STD_LOGIC_VECTOR (13 downto 0);
    signal or_ln57_3_fu_187_p3 : STD_LOGIC_VECTOR (31 downto 0);
    signal or_ln53_3_fu_165_p3 : STD_LOGIC_VECTOR (31 downto 0);
    signal lshr_ln6_fu_203_p4 : STD_LOGIC_VECTOR (28 downto 0);
    signal zext_ln228_fu_213_p1 : STD_LOGIC_VECTOR (31 downto 0);
    signal select_ln51_3_fu_195_p3 : STD_LOGIC_VECTOR (31 downto 0);
    signal xor_ln228_fu_217_p2 : STD_LOGIC_VECTOR (31 downto 0);
    signal select_ln51_2_fu_143_p3 : STD_LOGIC_VECTOR (31 downto 0);
    signal trunc_ln53_fu_230_p1 : STD_LOGIC_VECTOR (14 downto 0);
    signal lshr_ln_fu_234_p4 : STD_LOGIC_VECTOR (16 downto 0);
    signal trunc_ln57_fu_262_p1 : STD_LOGIC_VECTOR (16 downto 0);
    signal lshr_ln4_fu_252_p4 : STD_LOGIC_VECTOR (14 downto 0);
    signal or_ln1_fu_266_p3 : STD_LOGIC_VECTOR (31 downto 0);
    signal or_ln_fu_244_p3 : STD_LOGIC_VECTOR (31 downto 0);
    signal trunc_ln53_1_fu_282_p1 : STD_LOGIC_VECTOR (12 downto 0);
    signal lshr_ln53_1_fu_286_p4 : STD_LOGIC_VECTOR (18 downto 0);
    signal trunc_ln57_1_fu_314_p1 : STD_LOGIC_VECTOR (18 downto 0);
    signal lshr_ln57_1_fu_304_p4 : STD_LOGIC_VECTOR (12 downto 0);
    signal or_ln57_1_fu_318_p3 : STD_LOGIC_VECTOR (31 downto 0);
    signal or_ln53_1_fu_296_p3 : STD_LOGIC_VECTOR (31 downto 0);
    signal lshr_ln5_fu_334_p4 : STD_LOGIC_VECTOR (21 downto 0);
    signal zext_ln232_fu_344_p1 : STD_LOGIC_VECTOR (31 downto 0);
    signal select_ln51_1_fu_326_p3 : STD_LOGIC_VECTOR (31 downto 0);
    signal xor_ln232_fu_348_p2 : STD_LOGIC_VECTOR (31 downto 0);
    signal select_ln51_fu_274_p3 : STD_LOGIC_VECTOR (31 downto 0);


begin




    ap_phi_mux_p_0_phi_fu_77_p4_assign_proc : process(xor_ln228_1_fu_223_p2, temp_fu_87_p1, xor_ln232_1_fu_354_p2)
    begin
        if ((temp_fu_87_p1 = ap_const_lv1_1)) then 
            ap_phi_mux_p_0_phi_fu_77_p4 <= xor_ln232_1_fu_354_p2;
        elsif ((temp_fu_87_p1 = ap_const_lv1_0)) then 
            ap_phi_mux_p_0_phi_fu_77_p4 <= xor_ln228_1_fu_223_p2;
        else 
            ap_phi_mux_p_0_phi_fu_77_p4 <= "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
        end if; 
    end process;

    ap_ready <= ap_const_logic_1;
    ap_return <= ap_phi_mux_p_0_phi_fu_77_p4;
    lshr_ln4_fu_252_p4 <= x(31 downto 17);
    lshr_ln53_1_fu_286_p4 <= x(31 downto 13);
    lshr_ln53_2_fu_103_p4 <= x(31 downto 25);
    lshr_ln53_3_fu_155_p4 <= x(31 downto 14);
    lshr_ln57_1_fu_304_p4 <= x(31 downto 19);
    lshr_ln57_2_fu_121_p4 <= x(31 downto 7);
    lshr_ln57_3_fu_173_p4 <= x(31 downto 18);
    lshr_ln5_fu_334_p4 <= x(31 downto 10);
    lshr_ln6_fu_203_p4 <= x(31 downto 3);
    lshr_ln_fu_234_p4 <= x(31 downto 15);
    or_ln1_fu_266_p3 <= (trunc_ln57_fu_262_p1 & lshr_ln4_fu_252_p4);
    or_ln53_1_fu_296_p3 <= (trunc_ln53_1_fu_282_p1 & lshr_ln53_1_fu_286_p4);
    or_ln53_2_fu_113_p3 <= (trunc_ln53_2_fu_99_p1 & lshr_ln53_2_fu_103_p4);
    or_ln53_3_fu_165_p3 <= (trunc_ln53_3_fu_151_p1 & lshr_ln53_3_fu_155_p4);
    or_ln57_1_fu_318_p3 <= (trunc_ln57_1_fu_314_p1 & lshr_ln57_1_fu_304_p4);
    or_ln57_2_fu_135_p3 <= (trunc_ln57_2_fu_131_p1 & lshr_ln57_2_fu_121_p4);
    or_ln57_3_fu_187_p3 <= (trunc_ln57_3_fu_183_p1 & lshr_ln57_3_fu_173_p4);
    or_ln_fu_244_p3 <= (trunc_ln53_fu_230_p1 & lshr_ln_fu_234_p4);
    select_ln51_1_fu_326_p3 <= 
        or_ln57_1_fu_318_p3 when (tmp_fu_91_p3(0) = '1') else 
        or_ln53_1_fu_296_p3;
    select_ln51_2_fu_143_p3 <= 
        or_ln57_2_fu_135_p3 when (tmp_fu_91_p3(0) = '1') else 
        or_ln53_2_fu_113_p3;
    select_ln51_3_fu_195_p3 <= 
        or_ln57_3_fu_187_p3 when (tmp_fu_91_p3(0) = '1') else 
        or_ln53_3_fu_165_p3;
    select_ln51_fu_274_p3 <= 
        or_ln1_fu_266_p3 when (tmp_fu_91_p3(0) = '1') else 
        or_ln_fu_244_p3;
    temp_fu_87_p1 <= rtl_key_r(1 - 1 downto 0);
    tmp_fu_91_p3 <= rtl_key_r(6 downto 6);
    trunc_ln53_1_fu_282_p1 <= x(13 - 1 downto 0);
    trunc_ln53_2_fu_99_p1 <= x(25 - 1 downto 0);
    trunc_ln53_3_fu_151_p1 <= x(14 - 1 downto 0);
    trunc_ln53_fu_230_p1 <= x(15 - 1 downto 0);
    trunc_ln57_1_fu_314_p1 <= x(19 - 1 downto 0);
    trunc_ln57_2_fu_131_p1 <= x(7 - 1 downto 0);
    trunc_ln57_3_fu_183_p1 <= x(18 - 1 downto 0);
    trunc_ln57_fu_262_p1 <= x(17 - 1 downto 0);
    xor_ln228_1_fu_223_p2 <= (xor_ln228_fu_217_p2 xor select_ln51_2_fu_143_p3);
    xor_ln228_fu_217_p2 <= (zext_ln228_fu_213_p1 xor select_ln51_3_fu_195_p3);
    xor_ln232_1_fu_354_p2 <= (xor_ln232_fu_348_p2 xor select_ln51_fu_274_p3);
    xor_ln232_fu_348_p2 <= (zext_ln232_fu_344_p1 xor select_ln51_1_fu_326_p3);
    zext_ln228_fu_213_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(lshr_ln6_fu_203_p4),32));
    zext_ln232_fu_344_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(lshr_ln5_fu_334_p4),32));
end behav;
