#include "omsp_system.h"
#include "timerA.h"
#include "gfx_controller.h"


#define TEST_16_BPP
//#define TEST_8_BPP
//#define TEST_4_BPP
//#define TEST_2_BPP
//#define TEST_1_BPP

void init_mem(unsigned int, unsigned int, unsigned int, unsigned int);
void dma_test(unsigned int, unsigned int, unsigned int);


/**
Main function
*/
int main(void) {

//  unsigned int idx;
//  unsigned int lfsr = 0xACE1;
//  unsigned int lfsr_lsb;
  volatile unsigned int temp1, temp2, temp3, temp4;
  unsigned int idx;

  WDTCTL = WDTPW | WDTHOLD;   // Disable watchdog timer

  init_lt24();                // Initialize LCD

#ifdef TEST_16_BPP
  GFX_CTRL = GFX_16_BPP | GFX_REFR_DONE_IRQ_DIS ; // Configure Video mode
#endif
#ifdef TEST_8_BPP
  GFX_CTRL = GFX_8_BPP  | GFX_REFR_DONE_IRQ_DIS ;
#endif
#ifdef TEST_4_BPP
  GFX_CTRL = GFX_4_BPP  | GFX_REFR_DONE_IRQ_DIS ;
#endif
#ifdef TEST_2_BPP
  GFX_CTRL = GFX_2_BPP  | GFX_REFR_DONE_IRQ_DIS ;
#endif
#ifdef TEST_1_BPP
  GFX_CTRL = GFX_1_BPP  | GFX_REFR_DONE_IRQ_DIS ;
#endif

  //VID_RAM0_CFG     = VID_RAM_NO_RMW_MODE | VID_RAM_WIN_MODE | VID_RAM_WIN_X_SWAP | VID_RAM_WIN_Y_SWAP | VID_RAM_WIN_CL_SWAP;
  //VID_RAM0_WIDTH   = 8;
  VID_RAM0_WIDTH   = 5;
  VID_RAM0_ADDR_HI = 0x0000;
  //VID_RAM0_ADDR_LO = 27;
  VID_RAM0_ADDR_LO = 86;

#ifdef TEST_16_BPP
  __nop();
  __nop();
  VID_RAM0_DATA    =  0;
  VID_RAM0_DATA    =  1;
  VID_RAM0_DATA    =  2;
  VID_RAM0_DATA    =  3;
  VID_RAM0_DATA    =  4;
  VID_RAM0_DATA    =  5;
  VID_RAM0_DATA    =  6;
  VID_RAM0_DATA    =  7;
  VID_RAM0_DATA    =  8;
  VID_RAM0_DATA    =  9;
  VID_RAM0_DATA    = 10;
  VID_RAM0_DATA    = 11;
  VID_RAM0_DATA    = 12;
  VID_RAM0_DATA    = 13;
  VID_RAM0_DATA    = 14;
  VID_RAM0_DATA    = 15;
  VID_RAM0_DATA    = 16;
  VID_RAM0_DATA    = 17;
  VID_RAM0_DATA    = 18;
  VID_RAM0_DATA    = 19;
  VID_RAM0_DATA    = 20;
  VID_RAM0_DATA    = 21;
  VID_RAM0_DATA    = 22;
  VID_RAM0_DATA    = 23;
  VID_RAM0_DATA    = 24;
  VID_RAM0_DATA    = 25;
  VID_RAM0_DATA    = 26;
  VID_RAM0_DATA    = 27;
  VID_RAM0_DATA    = 28;
  VID_RAM0_DATA    = 29;
  VID_RAM0_DATA    = 30;
  VID_RAM0_DATA    = 31;
  VID_RAM0_DATA    = 32;
  VID_RAM0_DATA    = 33;
  VID_RAM0_DATA    = 34;
  VID_RAM0_DATA    = 35;
  VID_RAM0_DATA    = 36;
  VID_RAM0_DATA    = 37;
  VID_RAM0_DATA    = 38;
  VID_RAM0_DATA    = 39;
  VID_RAM0_DATA    = 40;
  VID_RAM0_DATA    = 41;
  VID_RAM0_DATA    = 42;
  VID_RAM0_DATA    = 43;
  VID_RAM0_DATA    = 44;
  VID_RAM0_DATA    = 45;
  VID_RAM0_DATA    = 46;
  VID_RAM0_DATA    = 47;
  VID_RAM0_DATA    = 48;
  VID_RAM0_DATA    = 49;
  VID_RAM0_DATA    = 50;
  VID_RAM0_DATA    = 51;
  VID_RAM0_DATA    = 52;
  VID_RAM0_DATA    = 53;
  VID_RAM0_DATA    = 54;
  VID_RAM0_DATA    = 55;
  VID_RAM0_DATA    = 56;
  VID_RAM0_DATA    = 57;
  VID_RAM0_DATA    = 58;
  VID_RAM0_DATA    = 59;
  VID_RAM0_DATA    = 60;
  VID_RAM0_DATA    = 61;
  VID_RAM0_DATA    = 62;
  VID_RAM0_DATA    = 63;
  VID_RAM0_DATA    = 64;
  VID_RAM0_DATA    = 65;
  VID_RAM0_DATA    = 66;
  VID_RAM0_DATA    = 67;
  VID_RAM0_DATA    = 68;
  VID_RAM0_DATA    = 69;
  VID_RAM0_DATA    = 70;
  VID_RAM0_DATA    = 71;
  VID_RAM0_DATA    = 72;
  VID_RAM0_DATA    = 73;
  VID_RAM0_DATA    = 74;
  VID_RAM0_DATA    = 75;
  VID_RAM0_DATA    = 76;
  VID_RAM0_DATA    = 77;
  VID_RAM0_DATA    = 78;
  VID_RAM0_DATA    = 79;
  VID_RAM0_DATA    = 80;
  VID_RAM0_DATA    = 81;
  VID_RAM0_DATA    = 82;
  VID_RAM0_DATA    = 83;
  VID_RAM0_DATA    = 84;
  VID_RAM0_DATA    = 85;
  VID_RAM0_DATA    = 86;
  VID_RAM0_DATA    = 87;
  VID_RAM0_DATA    = 88;
  VID_RAM0_DATA    = 89;
  VID_RAM0_DATA    = 90;
  VID_RAM0_DATA    = 91;
  VID_RAM0_DATA    = 92;
  VID_RAM0_DATA    = 93;
  VID_RAM0_DATA    = 94;
  VID_RAM0_DATA    = 95;
  VID_RAM0_DATA    = 96;
  VID_RAM0_DATA    = 97;
  VID_RAM0_DATA    = 98;
  VID_RAM0_DATA    = 99;
  VID_RAM0_DATA    = 100;
  VID_RAM0_DATA    = 101;
  VID_RAM0_DATA    = 102;
  VID_RAM0_DATA    = 103;
  VID_RAM0_DATA    = 104;
  VID_RAM0_DATA    = 105;
  VID_RAM0_DATA    = 106;
  VID_RAM0_DATA    = 107;
  VID_RAM0_DATA    = 108;
  VID_RAM0_DATA    = 109;
  VID_RAM0_DATA    = 110;
  VID_RAM0_DATA    = 111;
  VID_RAM0_DATA    = 112;
  VID_RAM0_DATA    = 113;
  VID_RAM0_DATA    = 114;
  VID_RAM0_DATA    = 115;
  VID_RAM0_DATA    = 116;
  VID_RAM0_DATA    = 117;
  VID_RAM0_DATA    = 118;
  VID_RAM0_DATA    = 119;
  VID_RAM0_DATA    = 120;
  VID_RAM0_DATA    = 121;
  VID_RAM0_DATA    = 122;
  VID_RAM0_DATA    = 123;
  VID_RAM0_DATA    = 124;
  VID_RAM0_DATA    = 125;
  VID_RAM0_DATA    = 126;
  VID_RAM0_DATA    = 127;
  VID_RAM0_DATA    = 128;
  VID_RAM0_DATA    = 129;
  VID_RAM0_DATA    = 130;
  VID_RAM0_DATA    = 131;
  VID_RAM0_DATA    = 132;
  VID_RAM0_DATA    = 133;
  VID_RAM0_DATA    = 134;
  VID_RAM0_DATA    = 135;
  VID_RAM0_DATA    = 136;
  VID_RAM0_DATA    = 137;
  VID_RAM0_DATA    = 138;
  VID_RAM0_DATA    = 139;
  VID_RAM0_DATA    = 140;
  VID_RAM0_DATA    = 141;
  VID_RAM0_DATA    = 142;
  VID_RAM0_DATA    = 143;
  VID_RAM0_DATA    = 144;
  VID_RAM0_DATA    = 145;
  VID_RAM0_DATA    = 146;
  VID_RAM0_DATA    = 147;
  VID_RAM0_DATA    = 148;
  VID_RAM0_DATA    = 149;
  VID_RAM0_DATA    = 150;
  VID_RAM0_DATA    = 151;
  VID_RAM0_DATA    = 152;
  VID_RAM0_DATA    = 153;
  VID_RAM0_DATA    = 154;
  VID_RAM0_DATA    = 155;
  VID_RAM0_DATA    = 156;
  VID_RAM0_DATA    = 157;
  VID_RAM0_DATA    = 158;
  VID_RAM0_DATA    = 159;
  VID_RAM0_DATA    = 160;
  VID_RAM0_DATA    = 161;
  VID_RAM0_DATA    = 162;
  VID_RAM0_DATA    = 163;
  VID_RAM0_DATA    = 164;
  VID_RAM0_DATA    = 165;
  VID_RAM0_DATA    = 166;
  VID_RAM0_DATA    = 167;
  VID_RAM0_DATA    = 168;
  VID_RAM0_DATA    = 169;
  VID_RAM0_DATA    = 170;
  VID_RAM0_DATA    = 171;
  VID_RAM0_DATA    = 172;
  VID_RAM0_DATA    = 173;
  VID_RAM0_DATA    = 174;
  VID_RAM0_DATA    = 175;
  VID_RAM0_DATA    = 176;
  VID_RAM0_DATA    = 177;
  VID_RAM0_DATA    = 178;
  VID_RAM0_DATA    = 179;
  VID_RAM0_DATA    = 180;
  VID_RAM0_DATA    = 181;
  VID_RAM0_DATA    = 182;
  VID_RAM0_DATA    = 183;
  VID_RAM0_DATA    = 184;
  VID_RAM0_DATA    = 185;
  VID_RAM0_DATA    = 186;
  VID_RAM0_DATA    = 187;
  VID_RAM0_DATA    = 188;
  VID_RAM0_DATA    = 189;
#endif
#ifdef TEST_8_BPP
  VID_RAM0_DATA    = ( 1 << 8) |   0;
  VID_RAM0_DATA    = ( 3 << 8) |   2;
  VID_RAM0_DATA    = ( 5 << 8) |   4;
  VID_RAM0_DATA    = ( 7 << 8) |   6;
  VID_RAM0_DATA    = ( 9 << 8) |   8;
  VID_RAM0_DATA    = (11 << 8) |  10;
  VID_RAM0_DATA    = (13 << 8) |  12;
  VID_RAM0_DATA    = (15 << 8) |  14;
  VID_RAM0_DATA    = (17 << 8) |  16;
  VID_RAM0_DATA    = (19 << 8) |  18;
  VID_RAM0_DATA    = (21 << 8) |  20;
  VID_RAM0_DATA    = (23 << 8) |  22;
  VID_RAM0_DATA    = (25 << 8) |  24;
  VID_RAM0_DATA    = (27 << 8) |  26;
  VID_RAM0_DATA    = (29 << 8) |  28;
  VID_RAM0_DATA    = (31 << 8) |  30;
  VID_RAM0_DATA    = (33 << 8) |  32;
  VID_RAM0_DATA    = (35 << 8) |  34;
  VID_RAM0_DATA    = (37 << 8) |  36;
  VID_RAM0_DATA    = (39 << 8) |  38;
  VID_RAM0_DATA    = (41 << 8) |  40;
#endif
#ifdef TEST_4_BPP
  VID_RAM0_DATA    = ( 3 << 12) | ( 2 << 8) | ( 1 << 4) |  0;
  VID_RAM0_DATA    = ( 7 << 12) | ( 6 << 8) | ( 5 << 4) |  4;
  VID_RAM0_DATA    = (11 << 12) | (10 << 8) | ( 9 << 4) |  8;
  VID_RAM0_DATA    = (15 << 12) | (14 << 8) | (13 << 4) | 12;
  VID_RAM0_DATA    = (12 << 12) | (13 << 8) | (14 << 4) | 15;
  VID_RAM0_DATA    = ( 8 << 12) | ( 9 << 8) | (10 << 4) | 11;
  VID_RAM0_DATA    = ( 4 << 12) | ( 5 << 8) | ( 6 << 4) |  7;
  VID_RAM0_DATA    = ( 0 << 12) | ( 1 << 8) | ( 2 << 4) |  3;
  VID_RAM0_DATA    = ( 2 << 12) | ( 3 << 8) | ( 0 << 4) |  1;
  VID_RAM0_DATA    = ( 5 << 12) | ( 4 << 8) | ( 7 << 4) |  6;
  VID_RAM0_DATA    = ( 9 << 12) | ( 8 << 8) | (11 << 4) | 10;
#endif
#ifdef TEST_2_BPP
  VID_RAM0_DATA    = ( 3 << 14) | ( 2 << 12) | ( 1 << 10) | ( 0 << 8) | ( 3 << 6) | ( 2 << 4) | ( 1 << 2) |  0;
  VID_RAM0_DATA    = ( 0 << 14) | ( 3 << 12) | ( 2 << 10) | ( 1 << 8) | ( 0 << 6) | ( 3 << 4) | ( 2 << 2) |  1;
  VID_RAM0_DATA    = ( 1 << 14) | ( 0 << 12) | ( 3 << 10) | ( 2 << 8) | ( 1 << 6) | ( 0 << 4) | ( 3 << 2) |  2;
  VID_RAM0_DATA    = ( 2 << 14) | ( 1 << 12) | ( 0 << 10) | ( 3 << 8) | ( 2 << 6) | ( 1 << 4) | ( 0 << 2) |  3;
  VID_RAM0_DATA    = ( 3 << 14) | ( 2 << 12) | ( 1 << 10) | ( 0 << 8) | ( 3 << 6) | ( 2 << 4) | ( 1 << 2) |  0;
  VID_RAM0_DATA    = ( 0 << 14) | ( 3 << 12) | ( 2 << 10) | ( 1 << 8) | ( 0 << 6) | ( 3 << 4) | ( 2 << 2) |  1;
#endif
#ifdef TEST_1_BPP
  VID_RAM0_DATA    = 0b1001110100110101;
  VID_RAM0_DATA    = 0b0110001011001010;
  VID_RAM0_DATA    = 0b1001110100110101;
#endif

  VID_RAM1_ADDR_HI = 0x0001;
  VID_RAM1_ADDR_LO = 0x0000;

  VID_RAM1_DATA    = 0x1111;
  VID_RAM1_DATA    = 0x2222;
  VID_RAM1_DATA    = 0x3333;
  VID_RAM1_DATA    = 0x4444;

  VID_RAM0_ADDR_HI = 0x0001;
  VID_RAM0_ADDR_HI = 0x0000;
  VID_RAM0_ADDR_HI = 0x0001;
  VID_RAM0_ADDR_LO = 0x0000;
  //__nop();
  //__nop();
  //__nop();
  //__nop();
  //__nop();
  //__nop();
  temp1           = VID_RAM0_DATA;
  __nop();
  temp2           = VID_RAM0_DATA;
  temp3           = VID_RAM0_DATA;
  temp4           = VID_RAM0_DATA;

  VID_RAM1_ADDR_LO = 0x0002;
  __nop();
  temp1           = VID_RAM1_DATA;
  temp2           = VID_RAM1_DATA;
  temp3           = VID_RAM1_DATA;
  temp4           = VID_RAM1_DATA;

  //
  LUT_RAM_ADDR    = 0x0234;

  LUT_RAM_DATA    = 0x5555;
  LUT_RAM_DATA    = 0x6666;
  LUT_RAM_DATA    = 0x7777;
  LUT_RAM_DATA    = 0x8888;

  LUT_RAM_ADDR    = 0x0234;
  __nop();
  temp1           = LUT_RAM_DATA;
  temp2           = LUT_RAM_DATA;
  temp3           = LUT_RAM_DATA;
  temp4           = LUT_RAM_DATA;

  // Update LUT
  LUT_RAM_ADDR = 0x0000;
  for( idx = 0; idx < 256; idx = idx + 1 ) {
    LUT_RAM_DATA    = idx<<8;
  }

  LT24_CMD      = 0x0004 | LT24_CMD_NO_PARAM;

//  FRAME0_PTR_HI   = 0x0001;
//  FRAME0_PTR_LO   = 0x2345;

  FRAME0_PTR_HI   = 0x0000;
  FRAME0_PTR_LO   = 0x0000;

  FRAME1_PTR_HI   = 0x0000;
  FRAME1_PTR_LO   = 0xfff8;

  FRAME_SELECT    = REFRESH_FRAME0_SELECT;


  LT24_REFRESH_SYNC = LT24_REFR_SYNC  | 0x0000;
  LT24_REFRESH      = LT24_REFR_START | LT24_REFR_1MS;

  // Try GPU
  GFX_CTRL = GFX_CTRL | GFX_GPU_EN;


  GPU_CMD  = GPU_REC_WIDTH   | 0x0123;
  GPU_CMD  = GPU_REC_HEIGHT  | 0x0456;

  GPU_CMD  = GPU_SRC_PX_ADDR | 0x00AD; GPU_CMD = 0xBEEF;
  GPU_CMD  = GPU_DST_PX_ADDR | 0x00DE; GPU_CMD = 0xC001;

  GPU_CMD  = GPU_OF0_ADDR    | 0x0001; GPU_CMD = 0x2345;
  GPU_CMD  = GPU_OF1_ADDR    | 0x0067; GPU_CMD = 0x89AB;
  GPU_CMD  = GPU_OF2_ADDR    | 0x00CD; GPU_CMD = 0xEF01;
  GPU_CMD  = GPU_OF3_ADDR    | 0x0065; GPU_CMD = 0x4321;

  GPU_CMD  = GPU_SET_FILL            ; GPU_CMD = 0xA55A;
  GPU_CMD  = GPU_SET_TRANS           ; GPU_CMD = 0x5AA5;



  // Real test
  GPU_CMD  = GPU_REC_WIDTH   | 0x0003;
  GPU_CMD  = GPU_REC_HEIGHT  | 0x0002;
  GPU_CMD  = GPU_OF0_ADDR    | 0x0000; GPU_CMD = 0x0000;
  GPU_CMD  = GPU_DST_PX_ADDR | 0x0000; GPU_CMD = 100;
  GPU_CMD  = GPU_SRC_PX_ADDR | 0x0000; GPU_CMD = 0;

  //-------------------------------------------- FILL --------------------------------------------------------
  for( idx = 0; idx < 500; idx = idx + 1 ) {__nop();}


  init_mem(0x1234, 0x5678, 0x9ABC, 0xDEF0);
  GPU_CMD  = GPU_SET_TRANS; GPU_CMD = 0x1234;
  dma_test(GPU_EXEC_FILL, GPU_PXOP_0, 0xDEAD);           //  0xDEAD               # 0 #        S

  init_mem(0x1234, 0x5678, 0x9ABC, 0xDEF0);
  GPU_CMD  = GPU_SET_TRANS; GPU_CMD = 0x5678;
  dma_test(GPU_EXEC_FILL, GPU_PXOP_1, 0xDEAD);           //  0x2152               # 1 #   not S

  init_mem(0x1234, 0x5678, 0x9ABC, 0xDEF0);
  GPU_CMD  = GPU_SET_TRANS; GPU_CMD = 0x1234;
  dma_test(GPU_EXEC_FILL, GPU_PXOP_2, 0xDEAD);           //  0x6543   / 0x210F    # 2 #   not D

  init_mem(0x1234, 0x5678, 0x9ABC, 0xDEF0);
  GPU_CMD  = GPU_SET_TRANS; GPU_CMD = 0x5678;
  dma_test(GPU_EXEC_FILL, GPU_PXOP_3, 0xDEAD);           //  0x9AAC   / 0xDEA0    # 3 # S and D

  init_mem(0x1234, 0x5678, 0x9ABC, 0xDEF0);
  GPU_CMD  = GPU_SET_TRANS; GPU_CMD = 0x1234;
  dma_test(GPU_EXEC_FILL, GPU_PXOP_4, 0xDEAD);           //  0xDEBD   / 0xDEFD    # 4 # S or  D

  init_mem(0x1234, 0x5678, 0x9ABC, 0xDEF0);
  GPU_CMD  = GPU_SET_TRANS; GPU_CMD = 0x5678;
  dma_test(GPU_EXEC_FILL, GPU_PXOP_5, 0xDEAD);           //  0x4411   / 0x005D    # 5 # S xor D

  init_mem(0x1234, 0x5678, 0x9ABC, 0xDEF0);
  GPU_CMD  = GPU_SET_TRANS; GPU_CMD = 0x1234;
  dma_test(GPU_EXEC_FILL, GPU_PXOP_6, 0xDEAD);           //  0x6553   / 0x215F    # 6 # not (S and D)

  init_mem(0x1234, 0x5678, 0x9ABC, 0xDEF0);
  GPU_CMD  = GPU_SET_TRANS; GPU_CMD = 0x5678;
  dma_test(GPU_EXEC_FILL, GPU_PXOP_7, 0xDEAD);           //  0x2142   / 0x2102    # 7 # not (S or  D)

  init_mem(0x1234, 0x5678, 0x9ABC, 0xDEF0);
  GPU_CMD  = GPU_SET_TRANS; GPU_CMD = 0x1234;
  dma_test(GPU_EXEC_FILL, GPU_PXOP_8, 0xDEAD);           //  0xBBEE   / 0xFFA2    # 8 # not (S xor D)

  init_mem(0x1234, 0x5678, 0x9ABC, 0xDEF0);
  GPU_CMD  = GPU_SET_TRANS; GPU_CMD = 0x5678;
  dma_test(GPU_EXEC_FILL, GPU_PXOP_9, 0xDEAD);           //  0x0010   / 0x0050    # 9 # (not S) and      D

  init_mem(0x1234, 0x5678, 0x9ABC, 0xDEF0);
  GPU_CMD  = GPU_SET_TRANS; GPU_CMD = 0x1234;
  dma_test(GPU_EXEC_FILL, GPU_PXOP_A, 0xDEAD);           //  0x4401   / 0x000D    # A #      S  and (not D)

  init_mem(0x1234, 0x5678, 0x9ABC, 0xDEF0);
  GPU_CMD  = GPU_SET_TRANS; GPU_CMD = 0x5678;
  dma_test(GPU_EXEC_FILL, GPU_PXOP_B, 0xDEAD);           //  0xBBFE   / 0xFFF2    # B # (not S) or       D

  init_mem(0x1234, 0x5678, 0x9ABC, 0xDEF0);
  GPU_CMD  = GPU_SET_TRANS; GPU_CMD = 0x1234;
  dma_test(GPU_EXEC_FILL, GPU_PXOP_C, 0xDEAD);           //  0xFFEF   / 0xFFAF    # C #      S  or  (not D)

  init_mem(0x1234, 0x5678, 0x9ABC, 0xDEF0);
  GPU_CMD  = GPU_SET_TRANS; GPU_CMD = 0x1234;
  dma_test(GPU_EXEC_FILL, GPU_PXOP_D, 0xDEAD);           //  0x0000               # D # Fill 0            if S not transparent

  init_mem(0x1234, 0x5678, 0x9ABC, 0xDEF0);
  GPU_CMD  = GPU_SET_TRANS; GPU_CMD = 0xDEAD;
  dma_test(GPU_EXEC_FILL, GPU_PXOP_D, 0xDEAD);           //  no-write             # D # Fill 0            if S not transparent

  init_mem(0x1234, 0x5678, 0x9ABC, 0xDEF0);
  GPU_CMD  = GPU_SET_TRANS; GPU_CMD = 0x5678;
  dma_test(GPU_EXEC_FILL, GPU_PXOP_E, 0xDEAD);           //  0xFFFF               # E # Fill 1            if S not transparent

  init_mem(0x1234, 0x5678, 0x9ABC, 0xDEF0);
  GPU_CMD  = GPU_SET_TRANS; GPU_CMD = 0xDEAD;
  dma_test(GPU_EXEC_FILL, GPU_PXOP_E, 0xDEAD);           //  no-write             # E # Fill 1            if S not transparent

  init_mem(0x1234, 0x5678, 0x9ABC, 0xDEF0);
  GPU_CMD  = GPU_SET_TRANS; GPU_CMD = 0x1234;
  dma_test(GPU_EXEC_FILL, GPU_PXOP_F, 0xDEAD);           //  0xDEAD               # F # Fill 'fill_color' if S not transparent

  init_mem(0x1234, 0x5678, 0x9ABC, 0xDEF0);
  GPU_CMD  = GPU_SET_TRANS; GPU_CMD = 0xDEAD;
  dma_test(GPU_EXEC_FILL, GPU_PXOP_F, 0xDEAD);           //  no-write             # F # Fill 'fill_color' if S not transparent


  //-------------------------------------------- COPY --------------------------------------------------------
  for( idx = 0; idx < 500; idx = idx + 1 ) {__nop();}

  init_mem(0x1234, 0x9ABC, 0x5678, 0xDEF0);
  GPU_CMD  = GPU_SET_TRANS; GPU_CMD = 0x1234;
  dma_test(GPU_EXEC_COPY, GPU_PXOP_0, 0xDEAD);           //  0x1234   / 0x9ABC    # 0 #        S

  init_mem(0x1234, 0x9ABC, 0x5678, 0xDEF0);
  GPU_CMD  = GPU_SET_TRANS; GPU_CMD = 0x9ABC;
  dma_test(GPU_EXEC_COPY, GPU_PXOP_1, 0xDEAD);           //  0xEDCB   / 0x6543    # 1 #   not S

  init_mem(0x1234, 0x9ABC, 0x5678, 0xDEF0);
  GPU_CMD  = GPU_SET_TRANS; GPU_CMD = 0x1234;
  dma_test(GPU_EXEC_COPY, GPU_PXOP_2, 0xDEAD);           //  0xA987   / 0x210F    # 2 #   not D

  init_mem(0x1234, 0x9ABC, 0x5678, 0xDEF0);
  GPU_CMD  = GPU_SET_TRANS; GPU_CMD = 0x9ABC;
  dma_test(GPU_EXEC_COPY, GPU_PXOP_3, 0xDEAD);           //  0x1230   / 0x9AB0    # 3 # S and D

  init_mem(0x1234, 0x9ABC, 0x5678, 0xDEF0);
  GPU_CMD  = GPU_SET_TRANS; GPU_CMD = 0x1234;
  dma_test(GPU_EXEC_COPY, GPU_PXOP_4, 0xDEAD);           //  0x567C   / 0xDEFC    # 4 # S or  D

  init_mem(0x1234, 0x9ABC, 0x5678, 0xDEFE);
  GPU_CMD  = GPU_SET_TRANS; GPU_CMD = 0x9ABC;
  dma_test(GPU_EXEC_COPY, GPU_PXOP_5, 0xDEAD);           //  0x444C   / 0x4442    # 5 # S xor D

  init_mem(0x1234, 0x9ABC, 0x5678, 0xDEF0);
  GPU_CMD  = GPU_SET_TRANS; GPU_CMD = 0x1234;
  dma_test(GPU_EXEC_COPY, GPU_PXOP_6, 0xDEAD);           //  0xEDCF   / 0x654F    # 6 # not (S and D)

  init_mem(0x1234, 0x9ABC, 0x5678, 0xDEF0);
  GPU_CMD  = GPU_SET_TRANS; GPU_CMD = 0x9ABC;
  dma_test(GPU_EXEC_COPY, GPU_PXOP_7, 0xDEAD);           //  0xA983   / 0x2103    # 7 # not (S or  D)

  init_mem(0x1234, 0x9ABC, 0x5678, 0xDEFE);
  GPU_CMD  = GPU_SET_TRANS; GPU_CMD = 0x1234;
  dma_test(GPU_EXEC_COPY, GPU_PXOP_8, 0xDEAD);           //  0xBBB3   / 0xBBBD    # 8 # not (S xor D)

  init_mem(0x1234, 0x9ABC, 0x5678, 0xDEF0);
  GPU_CMD  = GPU_SET_TRANS; GPU_CMD = 0x9ABC;
  dma_test(GPU_EXEC_COPY, GPU_PXOP_9, 0xDEAD);           //  0x4448   / 0x4440    # 9 # (not S) and      D

  init_mem(0x1234, 0x9ABC, 0x5678, 0xDEF0);
  GPU_CMD  = GPU_SET_TRANS; GPU_CMD = 0x1234;
  dma_test(GPU_EXEC_COPY, GPU_PXOP_A, 0xDEAD);           //  0x0004   / 0x000C    # A #      S  and (not D)

  init_mem(0x1234, 0x9ABC, 0x5678, 0xDEF0);
  GPU_CMD  = GPU_SET_TRANS; GPU_CMD = 0x9ABC;
  dma_test(GPU_EXEC_COPY, GPU_PXOP_B, 0xDEAD);           //  0xFFFB   / 0xFFF3    # B # (not S) or       D

  init_mem(0x1234, 0x9ABC, 0x5678, 0xDEF0);
  GPU_CMD  = GPU_SET_TRANS; GPU_CMD = 0x1234;
  dma_test(GPU_EXEC_COPY, GPU_PXOP_C, 0xDEAD);           //  0xBBB7   / 0xBBBF    # C #      S  or  (not D)

  init_mem(0x1234, 0x9ABC, 0x5678, 0xDEF0);
  GPU_CMD  = GPU_SET_TRANS; GPU_CMD = 0x5AA5;
  dma_test(GPU_EXEC_COPY, GPU_PXOP_D, 0xDEAD);           //  0x0000   / 0x0000    # D # Fill 0            if S not transparent

  init_mem(0x1234, 0x9ABC, 0x5678, 0xDEF0);
  GPU_CMD  = GPU_SET_TRANS; GPU_CMD = 0x9ABC;
  dma_test(GPU_EXEC_COPY, GPU_PXOP_D, 0xDEAD);           //  0x0000   / no-write  # D # Fill 0            if S not transparent

  init_mem(0x1234, 0x9ABC, 0x5678, 0xDEF0);
  GPU_CMD  = GPU_SET_TRANS; GPU_CMD = 0x5AA5;
  dma_test(GPU_EXEC_COPY, GPU_PXOP_E, 0xDEAD);           //  0xFFFF   / 0xFFFF    # E # Fill 1            if S not transparent

  init_mem(0x1234, 0x9ABC, 0x5678, 0xDEF0);
  GPU_CMD  = GPU_SET_TRANS; GPU_CMD = 0x1234;
  dma_test(GPU_EXEC_COPY, GPU_PXOP_E, 0xDEAD);           //  no-write / 0xFFFF    # E # Fill 1            if S not transparent

  init_mem(0x1234, 0x9ABC, 0x5678, 0xDEF0);
  GPU_CMD  = GPU_SET_TRANS; GPU_CMD = 0x5AA5;
  dma_test(GPU_EXEC_COPY, GPU_PXOP_F, 0xDEAD);           //  0xDEAD   / 0xDEAD    # F # Fill 'fill_color' if S not transparent

  init_mem(0x1234, 0x9ABC, 0x5678, 0xDEF0);
  GPU_CMD  = GPU_SET_TRANS; GPU_CMD = 0x9ABC;
  dma_test(GPU_EXEC_COPY, GPU_PXOP_F, 0xDEAD);           //  0xDEAD   / no-write  # F # Fill 'fill_color' if S not transparent


  //-------------------------------------------- COPY TRANSPARENT --------------------------------------------------------
  for( idx = 0; idx < 500; idx = idx + 1 ) {__nop();}

  init_mem(0x1234, 0x9ABC, 0xDEF0, 0x5678);
  GPU_CMD  = GPU_SET_TRANS; GPU_CMD = 0x5AA5;
  dma_test(GPU_EXEC_COPY_TRANS, GPU_PXOP_0, 0xDEAD);     //  0x1234   / 0x9ABC    # 0 #       S

  init_mem(0x1234, 0x9ABC, 0xDEF0, 0x5678);
  GPU_CMD  = GPU_SET_TRANS; GPU_CMD = 0x9ABC;
  dma_test(GPU_EXEC_COPY_TRANS, GPU_PXOP_0, 0xDEAD);     //  0x1234   / no-write  # 0 #       S

  init_mem(0x1234, 0x9ABC, 0xDEF0, 0x5678);
  GPU_CMD  = GPU_SET_TRANS; GPU_CMD = 0x5AA5;
  dma_test(GPU_EXEC_COPY_TRANS, GPU_PXOP_1, 0xDEAD);     //  0xEDCB   / 0x6543    # 1 #   not S

  init_mem(0x1234, 0x9ABC, 0xDEF0, 0x5678);
  GPU_CMD  = GPU_SET_TRANS; GPU_CMD = 0x1234;
  dma_test(GPU_EXEC_COPY_TRANS, GPU_PXOP_1, 0xDEAD);     //  no-write / 0x6543    # 1 #   not S

  init_mem(0x1234, 0x9ABC, 0xDEF0, 0x5678);
  GPU_CMD  = GPU_SET_TRANS; GPU_CMD = 0x5AA5;
  dma_test(GPU_EXEC_COPY_TRANS, GPU_PXOP_2, 0xDEAD);     //  0x210F   / 0xA987    # 2 #   not D

  init_mem(0x1234, 0x9ABC, 0xDEF0, 0x5678);
  GPU_CMD  = GPU_SET_TRANS; GPU_CMD = 0x9ABC;
  dma_test(GPU_EXEC_COPY_TRANS, GPU_PXOP_2, 0xDEAD);     //  0x210F   / 0xA987    # 2 #   not D

  init_mem(0x1234, 0x9ABC, 0xDEF0, 0x5678);
  GPU_CMD  = GPU_SET_TRANS; GPU_CMD = 0x5AA5;
  dma_test(GPU_EXEC_COPY_TRANS, GPU_PXOP_3, 0xDEAD);     //  0x1230   / 0x1238    # 3 # S and D

  init_mem(0x1234, 0x9ABC, 0xDEF0, 0x5678);
  GPU_CMD  = GPU_SET_TRANS; GPU_CMD = 0x1234;
  dma_test(GPU_EXEC_COPY_TRANS, GPU_PXOP_3, 0xDEAD);     //  no-write / 0x1238    # 3 # S and D

  init_mem(0x1234, 0x9ABC, 0xDEF0, 0x5678);
  GPU_CMD  = GPU_SET_TRANS; GPU_CMD = 0x5AA5;
  dma_test(GPU_EXEC_COPY_TRANS, GPU_PXOP_4, 0xDEAD);     //  0xDEF4   / 0xDEFC    # 4 # S or  D

  init_mem(0x1234, 0x9ABC, 0xDEF0, 0x5678);
  GPU_CMD  = GPU_SET_TRANS; GPU_CMD = 0x9ABC;
  dma_test(GPU_EXEC_COPY_TRANS, GPU_PXOP_4, 0xDEAD);     //  0xDEF4   / no-write  # 4 # S or  D

  init_mem(0x1234, 0x9ABC, 0xDEFE, 0x5678);
  GPU_CMD  = GPU_SET_TRANS; GPU_CMD = 0x5AA5;
  dma_test(GPU_EXEC_COPY_TRANS, GPU_PXOP_5, 0xDEAD);     //  0xCCCA   / 0xCCC4    # 5 # S xor D

  init_mem(0x1234, 0x9ABC, 0xDEFE, 0x5678);
  GPU_CMD  = GPU_SET_TRANS; GPU_CMD = 0x1234;
  dma_test(GPU_EXEC_COPY_TRANS, GPU_PXOP_5, 0xDEAD);     //  no-write / 0xCCC4    # 5 # S xor D

  init_mem(0x1234, 0x9ABC, 0xDEF0, 0x5678);
  GPU_CMD  = GPU_SET_TRANS; GPU_CMD = 0x5AA5;
  dma_test(GPU_EXEC_COPY_TRANS, GPU_PXOP_6, 0xDEAD);     //  0xEDCF   / 0xEDC7    # 6 # not (S and D)

  init_mem(0x1234, 0x9ABC, 0xDEF0, 0x5678);
  GPU_CMD  = GPU_SET_TRANS; GPU_CMD = 0x9ABC;
  dma_test(GPU_EXEC_COPY_TRANS, GPU_PXOP_6, 0xDEAD);     //  0xEDCF   / no-write  # 6 # not (S and D)

  init_mem(0x1234, 0x9ABC, 0xDEF0, 0x5678);
  GPU_CMD  = GPU_SET_TRANS; GPU_CMD = 0x5AA5;
  dma_test(GPU_EXEC_COPY_TRANS, GPU_PXOP_7, 0xDEAD);     //  0x210B   / 0x2103    # 7 # not (S or  D)

  init_mem(0x1234, 0x9ABC, 0xDEF0, 0x5678);
  GPU_CMD  = GPU_SET_TRANS; GPU_CMD = 0x1234;
  dma_test(GPU_EXEC_COPY_TRANS, GPU_PXOP_7, 0xDEAD);     //  no-write / 0x2103    # 7 # not (S or  D)

  init_mem(0x1234, 0x9ABC, 0xDEFE, 0x5678);
  GPU_CMD  = GPU_SET_TRANS; GPU_CMD = 0x5AA5;
  dma_test(GPU_EXEC_COPY_TRANS, GPU_PXOP_8, 0xDEAD);     //  0x3335   / 0x333B    # 8 # not (S xor D)

  init_mem(0x1234, 0x9ABC,  0xDEFE, 0x5678);
  GPU_CMD  = GPU_SET_TRANS; GPU_CMD = 0x9ABC;
  dma_test(GPU_EXEC_COPY_TRANS, GPU_PXOP_8, 0xDEAD);     //  0x3335   / no-write  # 8 # not (S xor D)

  init_mem(0x1234, 0x9ABC, 0xDEF0, 0x5678);
  GPU_CMD  = GPU_SET_TRANS; GPU_CMD = 0x5AA5;
  dma_test(GPU_EXEC_COPY_TRANS, GPU_PXOP_9, 0xDEAD);     //  0xCCC0   / 0x4440    # 9 # (not S) and      D

  init_mem(0x1234, 0x9ABC, 0xDEF0, 0x5678);
  GPU_CMD  = GPU_SET_TRANS; GPU_CMD = 0x1234;
  dma_test(GPU_EXEC_COPY_TRANS, GPU_PXOP_9, 0xDEAD);     //  no-write / 0x4440    # 9 # (not S) and      D

  init_mem(0x1234, 0x9ABC, 0xDEF0, 0x5678);
  GPU_CMD  = GPU_SET_TRANS; GPU_CMD = 0x5AA5;
  dma_test(GPU_EXEC_COPY_TRANS, GPU_PXOP_A, 0xDEAD);     //  0x0004   / 0x8884    # A #      S  and (not D)

  init_mem(0x1234, 0x9ABC, 0xDEF0, 0x5678);
  GPU_CMD  = GPU_SET_TRANS; GPU_CMD = 0x9ABC;
  dma_test(GPU_EXEC_COPY_TRANS, GPU_PXOP_A, 0xDEAD);     //  0x0004   / no-write  # A #      S  and (not D)

  init_mem(0x1234, 0x9ABC, 0xDEF0, 0x5678);
  GPU_CMD  = GPU_SET_TRANS; GPU_CMD = 0x5AA5;
  dma_test(GPU_EXEC_COPY_TRANS, GPU_PXOP_B, 0xDEAD);     //  0xFFFB   / 0x777B    # B # (not S) or       D

  init_mem(0x1234, 0x9ABC, 0xDEF0, 0x5678);
  GPU_CMD  = GPU_SET_TRANS; GPU_CMD = 0x1234;
  dma_test(GPU_EXEC_COPY_TRANS, GPU_PXOP_B, 0xDEAD);     //  no-write / 0x777B    # B # (not S) or       D

  init_mem(0x1234, 0x9ABC, 0xDEF0, 0x5678);
  GPU_CMD  = GPU_SET_TRANS; GPU_CMD = 0x5AA5;
  dma_test(GPU_EXEC_COPY_TRANS, GPU_PXOP_C, 0xDEAD);     //  0x333F   / 0xBBBF    # C #      S  or  (not D)

  init_mem(0x1234, 0x9ABC, 0xDEF0, 0x5678);
  GPU_CMD  = GPU_SET_TRANS; GPU_CMD = 0x9ABC;
  dma_test(GPU_EXEC_COPY_TRANS, GPU_PXOP_C, 0xDEAD);     //  0x333F   / no-wrte   # C #      S  or  (not D)

  init_mem(0x1234, 0x9ABC, 0xDEF0, 0x5678);
  GPU_CMD  = GPU_SET_TRANS; GPU_CMD = 0x5AA5;
  dma_test(GPU_EXEC_COPY_TRANS, GPU_PXOP_D, 0xDEAD);     //  0x0000   / 0x0000    # D # Fill 0            if S not transparent

  init_mem(0x1234, 0x9ABC, 0xDEF0, 0x5678);
  GPU_CMD  = GPU_SET_TRANS; GPU_CMD = 0x9ABC;
  dma_test(GPU_EXEC_COPY_TRANS, GPU_PXOP_D, 0xDEAD);     //  0x0000   / no-write  # D # Fill 0            if S not transparent

  init_mem(0x1234, 0x9ABC, 0xDEF0, 0x5678);
  GPU_CMD  = GPU_SET_TRANS; GPU_CMD = 0x5AA5;
  dma_test(GPU_EXEC_COPY_TRANS, GPU_PXOP_E, 0xDEAD);     //  0xFFFF   / 0xFFFF    # E # Fill 1            if S not transparent

  init_mem(0x1234, 0x9ABC, 0xDEF0, 0x5678);
  GPU_CMD  = GPU_SET_TRANS; GPU_CMD = 0x1234;
  dma_test(GPU_EXEC_COPY_TRANS, GPU_PXOP_E, 0xDEAD);     //  no-write / 0xFFFF    # E # Fill 1            if S not transparent

  init_mem(0x1234, 0x9ABC, 0xDEF0, 0x5678);
  GPU_CMD  = GPU_SET_TRANS; GPU_CMD = 0x5AA5;
  dma_test(GPU_EXEC_COPY_TRANS, GPU_PXOP_F, 0xDEAD);     //  0xDEAD   / 0xDEAD    # F # Fill 'fill_color' if S not transparent

  init_mem(0x1234, 0x9ABC, 0xDEF0, 0x5678);
  GPU_CMD  = GPU_SET_TRANS; GPU_CMD = 0x9ABC;
  dma_test(GPU_EXEC_COPY_TRANS, GPU_PXOP_F, 0xDEAD);     //  0xDEAD   / no-write  # F # Fill 'fill_color' if S not transparent


  //-------------------------------------------- COPY ADDRESSING MODES --------------------------------------------------------
  for( idx = 0; idx < 500; idx = idx + 1 ) {__nop();}

  // Configure
  DISPLAY_WIDTH  = 13;
  DISPLAY_HEIGHT = 15;
  GPU_CMD        = GPU_REC_WIDTH   | 0x0008;
  GPU_CMD        = GPU_REC_HEIGHT  | 0x0005;
  GPU_CMD        = GPU_OF0_ADDR    | 0x0000; GPU_CMD = 0x0000;

  // COPY  = NO_X - NO_Y - NO_CL
  GPU_CMD  = GPU_SRC_PX_ADDR | 0x0000; GPU_CMD = 27;
  GPU_CMD  = GPU_DST_PX_ADDR | 0x0000; GPU_CMD = 27;//121;
  GPU_CMD  = GPU_EXEC_COPY   | GPU_PXOP_3 | GPU_SRC_OF0 | GPU_SRC_NO_X_SWP | GPU_SRC_NO_Y_SWP | GPU_SRC_NO_CL_SWP |
                                            GPU_DST_OF0 | GPU_DST_NO_X_SWP | GPU_DST_NO_Y_SWP | GPU_DST_NO_CL_SWP ;
  while((GPU_STAT & GPU_STAT_FIFO_EMPTY)==0);
  for( idx = 0; idx < 30; idx = idx + 1 ) {__nop();}

  // COPY  =    X - NO_Y - NO_CL
  GPU_CMD  = GPU_SRC_PX_ADDR | 0x0000; GPU_CMD = 34;
  GPU_CMD  = GPU_DST_PX_ADDR | 0x0000; GPU_CMD = 34;//128;
  GPU_CMD  = GPU_EXEC_COPY   | GPU_PXOP_3 | GPU_SRC_OF0 | GPU_SRC_X_SWP    | GPU_SRC_NO_Y_SWP | GPU_SRC_NO_CL_SWP |
                                            GPU_DST_OF0 | GPU_DST_X_SWP    | GPU_DST_NO_Y_SWP | GPU_DST_NO_CL_SWP ;
  while((GPU_STAT & GPU_STAT_FIFO_EMPTY)==0);
  for( idx = 0; idx < 30; idx = idx + 1 ) {__nop();}

  // COPY  = NO_X -    Y - NO_CL
  GPU_CMD  = GPU_SRC_PX_ADDR | 0x0000; GPU_CMD = 79;
  GPU_CMD  = GPU_DST_PX_ADDR | 0x0000; GPU_CMD = 79;//173;
  GPU_CMD  = GPU_EXEC_COPY   | GPU_PXOP_3 | GPU_SRC_OF0 | GPU_SRC_NO_X_SWP | GPU_SRC_Y_SWP    | GPU_SRC_NO_CL_SWP |
                                            GPU_DST_OF0 | GPU_DST_NO_X_SWP | GPU_DST_Y_SWP    | GPU_DST_NO_CL_SWP ;
  while((GPU_STAT & GPU_STAT_FIFO_EMPTY)==0);
  for( idx = 0; idx < 30; idx = idx + 1 ) {__nop();}

  // COPY  =    X -    Y - NO_CL
  GPU_CMD  = GPU_SRC_PX_ADDR | 0x0000; GPU_CMD = 86;
  GPU_CMD  = GPU_DST_PX_ADDR | 0x0000; GPU_CMD = 86;//180;
  GPU_CMD  = GPU_EXEC_COPY   | GPU_PXOP_3 | GPU_SRC_OF0 | GPU_SRC_X_SWP    | GPU_SRC_Y_SWP    | GPU_SRC_NO_CL_SWP |
                                            GPU_DST_OF0 | GPU_DST_X_SWP    | GPU_DST_Y_SWP    | GPU_DST_NO_CL_SWP ;
  while((GPU_STAT & GPU_STAT_FIFO_EMPTY)==0);
  for( idx = 0; idx < 30; idx = idx + 1 ) {__nop();}

  // COPY  = NO_X - NO_Y -    CL
  GPU_CMD  = GPU_SRC_PX_ADDR | 0x0000; GPU_CMD = 27;
  GPU_CMD  = GPU_DST_PX_ADDR | 0x0000; GPU_CMD = 27;//121;
  GPU_CMD  = GPU_EXEC_COPY   | GPU_PXOP_3 | GPU_SRC_OF0 | GPU_SRC_NO_X_SWP | GPU_SRC_NO_Y_SWP | GPU_SRC_CL_SWP    |
                                            GPU_DST_OF0 | GPU_DST_NO_X_SWP | GPU_DST_NO_Y_SWP | GPU_DST_CL_SWP    ;
  while((GPU_STAT & GPU_STAT_FIFO_EMPTY)==0);
  for( idx = 0; idx < 30; idx = idx + 1 ) {__nop();}

  // COPY  =    X - NO_Y -    CL
  GPU_CMD  = GPU_SRC_PX_ADDR | 0x0000; GPU_CMD = 34;
  GPU_CMD  = GPU_DST_PX_ADDR | 0x0000; GPU_CMD = 34;//128;
  GPU_CMD  = GPU_EXEC_COPY   | GPU_PXOP_3 | GPU_SRC_OF0 | GPU_SRC_X_SWP    | GPU_SRC_NO_Y_SWP | GPU_SRC_CL_SWP    |
                                            GPU_DST_OF0 | GPU_DST_X_SWP    | GPU_DST_NO_Y_SWP | GPU_DST_CL_SWP    ;
  while((GPU_STAT & GPU_STAT_FIFO_EMPTY)==0);
  for( idx = 0; idx < 30; idx = idx + 1 ) {__nop();}

  // COPY  = NO_X -    Y -    CL
  GPU_CMD  = GPU_SRC_PX_ADDR | 0x0000; GPU_CMD = 79;
  GPU_CMD  = GPU_DST_PX_ADDR | 0x0000; GPU_CMD = 79;//173;
  GPU_CMD  = GPU_EXEC_COPY   | GPU_PXOP_3 | GPU_SRC_OF0 | GPU_SRC_NO_X_SWP | GPU_SRC_Y_SWP    | GPU_SRC_CL_SWP    |
                                            GPU_DST_OF0 | GPU_DST_NO_X_SWP | GPU_DST_Y_SWP    | GPU_DST_CL_SWP    ;
  while((GPU_STAT & GPU_STAT_FIFO_EMPTY)==0);
  for( idx = 0; idx < 30; idx = idx + 1 ) {__nop();}

  // COPY  =    X -    Y -    CL
  GPU_CMD  = GPU_SRC_PX_ADDR | 0x0000; GPU_CMD = 86;
  GPU_CMD  = GPU_DST_PX_ADDR | 0x0000; GPU_CMD = 86;//180;
  GPU_CMD  = GPU_EXEC_COPY   | GPU_PXOP_3 | GPU_SRC_OF0 | GPU_SRC_X_SWP    | GPU_SRC_Y_SWP    | GPU_SRC_CL_SWP    |
                                            GPU_DST_OF0 | GPU_DST_X_SWP    | GPU_DST_Y_SWP    | GPU_DST_CL_SWP    ;
  while((GPU_STAT & GPU_STAT_FIFO_EMPTY)==0);
  for( idx = 0; idx < 30; idx = idx + 1 ) {__nop();}

  return 0;
}

void init_mem(unsigned int src_data1, unsigned int src_data2, unsigned int dst_data1, unsigned int dst_data2) {

  // Init memory for test
  VID_RAM0_CFG     = VID_RAM_NO_RMW_MODE | VID_RAM_WIN_MODE | VID_RAM_WIN_NO_X_SWAP | VID_RAM_WIN_NO_Y_SWAP | VID_RAM_WIN_NO_CL_SWAP;
  VID_RAM0_WIDTH   = 3;

  // SRC
  VID_RAM0_ADDR_HI =  0;
  VID_RAM0_ADDR_LO =  0;
  VID_RAM0_DATA    =  src_data1;
  VID_RAM0_DATA    =  src_data2;
  VID_RAM0_DATA    =  src_data1;
  VID_RAM0_DATA    =  src_data2;
  VID_RAM0_DATA    =  src_data1;
  VID_RAM0_DATA    =  src_data2;

  // DST
  VID_RAM0_ADDR_HI =  0;
  VID_RAM0_ADDR_LO =  100;
  VID_RAM0_DATA    =  dst_data1;
  VID_RAM0_DATA    =  dst_data2;
  VID_RAM0_DATA    =  dst_data1;
  VID_RAM0_DATA    =  dst_data2;
  VID_RAM0_DATA    =  dst_data1;
  VID_RAM0_DATA    =  dst_data2;

}

void dma_test(unsigned int dma_mode, unsigned int pixel_op, unsigned int fill_data) {


  GPU_CMD  = dma_mode | pixel_op | GPU_SRC_OF0 | GPU_SRC_NO_X_SWP | GPU_SRC_NO_Y_SWP | GPU_SRC_NO_CL_SWP |
                                   GPU_DST_OF0 | GPU_DST_NO_X_SWP | GPU_DST_NO_Y_SWP | GPU_DST_NO_CL_SWP ;

  if (dma_mode==GPU_EXEC_FILL) {
    GPU_CMD  = fill_data;
  }

  while((GPU_STAT & GPU_STAT_FIFO_EMPTY)==0);
}