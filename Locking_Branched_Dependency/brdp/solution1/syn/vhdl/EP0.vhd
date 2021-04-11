-- ==============================================================
-- RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
-- Version: 2019.1
-- Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
-- 
-- ===========================================================

library IEEE;
use IEEE.std_logic_1164.all;
use IEEE.numeric_std.all;

entity EP0 is
port (
    ap_ready : OUT STD_LOGIC;
    x : IN STD_LOGIC_VECTOR (31 downto 0);
    ap_return : OUT STD_LOGIC_VECTOR (31 downto 0) );
end;


architecture behav of EP0 is 
    constant ap_const_logic_1 : STD_LOGIC := '1';
    constant ap_const_boolean_1 : BOOLEAN := true;
    constant ap_const_lv32_2 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000010";
    constant ap_const_lv32_1F : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000011111";
    constant ap_const_lv32_D : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000001101";
    constant ap_const_lv32_16 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000010110";
    constant ap_const_logic_0 : STD_LOGIC := '0';

    signal trunc_ln52_fu_40_p1 : STD_LOGIC_VECTOR (1 downto 0);
    signal lshr_ln_fu_30_p4 : STD_LOGIC_VECTOR (29 downto 0);
    signal trunc_ln52_5_fu_62_p1 : STD_LOGIC_VECTOR (12 downto 0);
    signal lshr_ln52_5_fu_52_p4 : STD_LOGIC_VECTOR (18 downto 0);
    signal trunc_ln52_6_fu_84_p1 : STD_LOGIC_VECTOR (21 downto 0);
    signal lshr_ln52_6_fu_74_p4 : STD_LOGIC_VECTOR (9 downto 0);
    signal or_ln_fu_44_p3 : STD_LOGIC_VECTOR (31 downto 0);
    signal or_ln52_6_fu_88_p3 : STD_LOGIC_VECTOR (31 downto 0);
    signal xor_ln72_fu_96_p2 : STD_LOGIC_VECTOR (31 downto 0);
    signal or_ln52_5_fu_66_p3 : STD_LOGIC_VECTOR (31 downto 0);


begin



    ap_ready <= ap_const_logic_1;
    ap_return <= (xor_ln72_fu_96_p2 xor or_ln52_5_fu_66_p3);
    lshr_ln52_5_fu_52_p4 <= x(31 downto 13);
    lshr_ln52_6_fu_74_p4 <= x(31 downto 22);
    lshr_ln_fu_30_p4 <= x(31 downto 2);
    or_ln52_5_fu_66_p3 <= (trunc_ln52_5_fu_62_p1 & lshr_ln52_5_fu_52_p4);
    or_ln52_6_fu_88_p3 <= (trunc_ln52_6_fu_84_p1 & lshr_ln52_6_fu_74_p4);
    or_ln_fu_44_p3 <= (trunc_ln52_fu_40_p1 & lshr_ln_fu_30_p4);
    trunc_ln52_5_fu_62_p1 <= x(13 - 1 downto 0);
    trunc_ln52_6_fu_84_p1 <= x(22 - 1 downto 0);
    trunc_ln52_fu_40_p1 <= x(2 - 1 downto 0);
    xor_ln72_fu_96_p2 <= (or_ln_fu_44_p3 xor or_ln52_6_fu_88_p3);
end behav;
