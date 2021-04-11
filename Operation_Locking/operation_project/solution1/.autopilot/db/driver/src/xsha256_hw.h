// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.1 (64-bit)
// Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
// ==============================================================
// AXILiteS
// 0x000 : Control signals
//         bit 0  - ap_start (Read/Write/COH)
//         bit 1  - ap_done (Read/COR)
//         bit 2  - ap_idle (Read)
//         bit 3  - ap_ready (Read)
//         bit 7  - auto_restart (Read/Write)
//         others - reserved
// 0x004 : Global Interrupt Enable Register
//         bit 0  - Global Interrupt Enable (Read/Write)
//         others - reserved
// 0x008 : IP Interrupt Enable Register (Read/Write)
//         bit 0  - Channel 0 (ap_done)
//         bit 1  - Channel 1 (ap_ready)
//         others - reserved
// 0x00c : IP Interrupt Status Register (Read/TOW)
//         bit 0  - Channel 0 (ap_done)
//         bit 1  - Channel 1 (ap_ready)
//         others - reserved
// 0x200 : Data signal of base_offset
//         bit 31~0 - base_offset[31:0] (Read/Write)
// 0x204 : reserved
// 0x208 : Data signal of bytes
//         bit 31~0 - bytes[31:0] (Read/Write)
// 0x20c : reserved
// 0x100 ~
// 0x1ff : Memory 'data' (256 * 8b)
//         Word n : bit [ 7: 0] - data[4n]
//                  bit [15: 8] - data[4n+1]
//                  bit [23:16] - data[4n+2]
//                  bit [31:24] - data[4n+3]
// 0x220 ~
// 0x23f : Memory 'digest' (32 * 8b)
//         Word n : bit [ 7: 0] - digest[4n]
//                  bit [15: 8] - digest[4n+1]
//                  bit [23:16] - digest[4n+2]
//                  bit [31:24] - digest[4n+3]
// (SC = Self Clear, COR = Clear on Read, TOW = Toggle on Write, COH = Clear on Handshake)

#define XSHA256_AXILITES_ADDR_AP_CTRL          0x000
#define XSHA256_AXILITES_ADDR_GIE              0x004
#define XSHA256_AXILITES_ADDR_IER              0x008
#define XSHA256_AXILITES_ADDR_ISR              0x00c
#define XSHA256_AXILITES_ADDR_BASE_OFFSET_DATA 0x200
#define XSHA256_AXILITES_BITS_BASE_OFFSET_DATA 32
#define XSHA256_AXILITES_ADDR_BYTES_DATA       0x208
#define XSHA256_AXILITES_BITS_BYTES_DATA       32
#define XSHA256_AXILITES_ADDR_DATA_BASE        0x100
#define XSHA256_AXILITES_ADDR_DATA_HIGH        0x1ff
#define XSHA256_AXILITES_WIDTH_DATA            8
#define XSHA256_AXILITES_DEPTH_DATA            256
#define XSHA256_AXILITES_ADDR_DIGEST_BASE      0x220
#define XSHA256_AXILITES_ADDR_DIGEST_HIGH      0x23f
#define XSHA256_AXILITES_WIDTH_DIGEST          8
#define XSHA256_AXILITES_DEPTH_DIGEST          32

