-- ==============================================================
-- RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
-- Version: 2019.1
-- Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
-- 
-- ===========================================================

library IEEE;
use IEEE.std_logic_1164.all;
use IEEE.numeric_std.all;

entity CH is
port (
    ap_ready : OUT STD_LOGIC;
    x : IN STD_LOGIC_VECTOR (31 downto 0);
    y : IN STD_LOGIC_VECTOR (31 downto 0);
    z : IN STD_LOGIC_VECTOR (31 downto 0);
    rtl_key_r : IN STD_LOGIC_VECTOR (31 downto 0);
    ap_return : OUT STD_LOGIC_VECTOR (31 downto 0) );
end;


architecture behav of CH is 
    constant ap_const_logic_1 : STD_LOGIC := '1';
    constant ap_const_boolean_1 : BOOLEAN := true;
    constant ap_const_lv32_5 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000101";
    constant ap_const_lv32_FFFFFFFF : STD_LOGIC_VECTOR (31 downto 0) := "11111111111111111111111111111111";
    constant ap_const_logic_0 : STD_LOGIC := '0';

    signal xor_ln93_fu_46_p2 : STD_LOGIC_VECTOR (31 downto 0);
    signal or_ln93_fu_52_p2 : STD_LOGIC_VECTOR (31 downto 0);
    signal and_ln97_1_fu_70_p2 : STD_LOGIC_VECTOR (31 downto 0);
    signal and_ln97_fu_64_p2 : STD_LOGIC_VECTOR (31 downto 0);
    signal tmp_fu_38_p3 : STD_LOGIC_VECTOR (0 downto 0);
    signal xor_ln97_fu_76_p2 : STD_LOGIC_VECTOR (31 downto 0);
    signal or_ln93_1_fu_58_p2 : STD_LOGIC_VECTOR (31 downto 0);


begin



    and_ln97_1_fu_70_p2 <= (z and xor_ln93_fu_46_p2);
    and_ln97_fu_64_p2 <= (y and x);
    ap_ready <= ap_const_logic_1;
    ap_return <= 
        xor_ln97_fu_76_p2 when (tmp_fu_38_p3(0) = '1') else 
        or_ln93_1_fu_58_p2;
    or_ln93_1_fu_58_p2 <= (y or or_ln93_fu_52_p2);
    or_ln93_fu_52_p2 <= (z or xor_ln93_fu_46_p2);
    tmp_fu_38_p3 <= rtl_key_r(5 downto 5);
    xor_ln93_fu_46_p2 <= (x xor ap_const_lv32_FFFFFFFF);
    xor_ln97_fu_76_p2 <= (and_ln97_fu_64_p2 xor and_ln97_1_fu_70_p2);
end behav;