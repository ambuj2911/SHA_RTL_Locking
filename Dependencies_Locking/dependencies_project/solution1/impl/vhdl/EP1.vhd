-- ==============================================================
-- RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
-- Version: 2019.1
-- Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
-- 
-- ===========================================================

library IEEE;
use IEEE.std_logic_1164.all;
use IEEE.numeric_std.all;

entity EP1 is
port (
    ap_ready : OUT STD_LOGIC;
    x : IN STD_LOGIC_VECTOR (31 downto 0);
    ap_return : OUT STD_LOGIC_VECTOR (31 downto 0) );
end;


architecture behav of EP1 is 
    constant ap_const_logic_1 : STD_LOGIC := '1';
    constant ap_const_boolean_1 : BOOLEAN := true;
    constant ap_const_lv32_6 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000110";
    constant ap_const_lv32_1F : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000011111";
    constant ap_const_lv32_B : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000001011";
    constant ap_const_lv32_19 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000011001";
    constant ap_const_logic_0 : STD_LOGIC := '0';

    signal trunc_ln51_fu_40_p1 : STD_LOGIC_VECTOR (5 downto 0);
    signal lshr_ln_fu_30_p4 : STD_LOGIC_VECTOR (25 downto 0);
    signal trunc_ln51_3_fu_62_p1 : STD_LOGIC_VECTOR (10 downto 0);
    signal lshr_ln51_3_fu_52_p4 : STD_LOGIC_VECTOR (20 downto 0);
    signal trunc_ln51_4_fu_84_p1 : STD_LOGIC_VECTOR (24 downto 0);
    signal lshr_ln51_4_fu_74_p4 : STD_LOGIC_VECTOR (6 downto 0);
    signal or_ln_fu_44_p3 : STD_LOGIC_VECTOR (31 downto 0);
    signal or_ln51_4_fu_88_p3 : STD_LOGIC_VECTOR (31 downto 0);
    signal xor_ln67_fu_96_p2 : STD_LOGIC_VECTOR (31 downto 0);
    signal or_ln51_3_fu_66_p3 : STD_LOGIC_VECTOR (31 downto 0);


begin



    ap_ready <= ap_const_logic_1;
    ap_return <= (xor_ln67_fu_96_p2 xor or_ln51_3_fu_66_p3);
    lshr_ln51_3_fu_52_p4 <= x(31 downto 11);
    lshr_ln51_4_fu_74_p4 <= x(31 downto 25);
    lshr_ln_fu_30_p4 <= x(31 downto 6);
    or_ln51_3_fu_66_p3 <= (trunc_ln51_3_fu_62_p1 & lshr_ln51_3_fu_52_p4);
    or_ln51_4_fu_88_p3 <= (trunc_ln51_4_fu_84_p1 & lshr_ln51_4_fu_74_p4);
    or_ln_fu_44_p3 <= (trunc_ln51_fu_40_p1 & lshr_ln_fu_30_p4);
    trunc_ln51_3_fu_62_p1 <= x(11 - 1 downto 0);
    trunc_ln51_4_fu_84_p1 <= x(25 - 1 downto 0);
    trunc_ln51_fu_40_p1 <= x(6 - 1 downto 0);
    xor_ln67_fu_96_p2 <= (or_ln_fu_44_p3 xor or_ln51_4_fu_88_p3);
end behav;