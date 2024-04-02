/**
 * @file _RTL_USER_PROCESS_PARAMETERS.h
 * @author tinysec
 * @brief
 * @version 0.0.1
    * 2024/03/26   init
 */

#ifndef __MY__RTL_USER_PROCESS_PARAMETERS_HEADER_FILE__
#define __MY__RTL_USER_PROCESS_PARAMETERS_HEADER_FILE__
//////////////////////////////////////////////////////////////////
#ifdef __cplusplus
extern "C"
    {
#endif // #ifdef __cplusplus
//////////////////////////////////////////////////////////////////
 



// size = 0x440
struct _RTL_USER_PROCESS_PARAMETERS
{
	// offset = 0x000
	UINT32 MaximumLength;

	// offset = 0x004
	UINT32 Length;

	// offset = 0x008
	UINT32 Flags;

	// offset = 0x00c
	UINT32 DebugFlags;


	// offset = 0x010
	void* ConsoleHandle;



	// offset = 0x018
	UINT32 ConsoleFlags;

	// offset = 0x01c
	UINT32 offset_0x01c;


	// offset = 0x020
	void* StandardInput;



	// offset = 0x028
	void* StandardOutput;



	// offset = 0x030
	void*  StandardError;


	// offset = 0x038
	UINT32 offset_0x038;

	// offset = 0x03c
	UINT32 offset_0x03c;


	// offset = 0x040
	UINT32 offset_0x040;

	// offset = 0x044
	UINT32 offset_0x044;

	// offset = 0x048
	UINT32 offset_0x048;

	// offset = 0x04c
	UINT32 offset_0x04c;


	// offset = 0x050
	UINT32 offset_0x050;

	// offset = 0x054
	UINT32 offset_0x054;

	// offset = 0x058
	UINT32 offset_0x058;

	// offset = 0x05c
	UINT32 offset_0x05c;


	// offset = 0x060
	UINT32 offset_0x060;

	// offset = 0x064
	UINT32 offset_0x064;

	// offset = 0x068
	UINT32 offset_0x068;

	// offset = 0x06c
	UINT32 offset_0x06c;


	// offset = 0x070
	UINT32 offset_0x070;

	// offset = 0x074
	UINT32 offset_0x074;

	// offset = 0x078
	UINT32 offset_0x078;

	// offset = 0x07c
	UINT32 offset_0x07c;


	// offset = 0x080
	UINT32 offset_0x080;

	// offset = 0x084
	UINT32 offset_0x084;

	// offset = 0x088
	UINT32 offset_0x088;

	// offset = 0x08c
	UINT32 offset_0x08c;


	// offset = 0x090
	UINT32 offset_0x090;

	// offset = 0x094
	UINT32 offset_0x094;

	// offset = 0x098
	UINT32 offset_0x098;

	// offset = 0x09c
	UINT32 offset_0x09c;


	// offset = 0x0a0
	UINT32 offset_0x0a0;

	// offset = 0x0a4
	UINT32 offset_0x0a4;

	// offset = 0x0a8
	UINT32 offset_0x0a8;

	// offset = 0x0ac
	UINT32 offset_0x0ac;


	// offset = 0x0b0
	UINT32 offset_0x0b0;

	// offset = 0x0b4
	UINT32 offset_0x0b4;

	// offset = 0x0b8
	UINT32 offset_0x0b8;

	// offset = 0x0bc
	UINT32 offset_0x0bc;


	// offset = 0x0c0
	UINT32 offset_0x0c0;

	// offset = 0x0c4
	UINT32 offset_0x0c4;

	// offset = 0x0c8
	UINT32 offset_0x0c8;

	// offset = 0x0cc
	UINT32 offset_0x0cc;


	// offset = 0x0d0
	UINT32 offset_0x0d0;

	// offset = 0x0d4
	UINT32 offset_0x0d4;

	// offset = 0x0d8
	UINT32 offset_0x0d8;

	// offset = 0x0dc
	UINT32 offset_0x0dc;


	// offset = 0x0e0
	UINT32 offset_0x0e0;

	// offset = 0x0e4
	UINT32 offset_0x0e4;

	// offset = 0x0e8
	UINT32 offset_0x0e8;

	// offset = 0x0ec
	UINT32 offset_0x0ec;


	// offset = 0x0f0
	UINT32 offset_0x0f0;

	// offset = 0x0f4
	UINT32 offset_0x0f4;

	// offset = 0x0f8
	UINT32 offset_0x0f8;

	// offset = 0x0fc
	UINT32 offset_0x0fc;


	// offset = 0x100
	UINT32 offset_0x100;

	// offset = 0x104
	UINT32 offset_0x104;

	// offset = 0x108
	UINT32 offset_0x108;

	// offset = 0x10c
	UINT32 offset_0x10c;


	// offset = 0x110
	UINT32 offset_0x110;

	// offset = 0x114
	UINT32 offset_0x114;

	// offset = 0x118
	UINT32 offset_0x118;

	// offset = 0x11c
	UINT32 offset_0x11c;


	// offset = 0x120
	UINT32 offset_0x120;

	// offset = 0x124
	UINT32 offset_0x124;

	// offset = 0x128
	UINT32 offset_0x128;

	// offset = 0x12c
	UINT32 offset_0x12c;


	// offset = 0x130
	UINT32 offset_0x130;

	// offset = 0x134
	UINT32 offset_0x134;

	// offset = 0x138
	UINT32 offset_0x138;

	// offset = 0x13c
	UINT32 offset_0x13c;


	// offset = 0x140
	UINT32 offset_0x140;

	// offset = 0x144
	UINT32 offset_0x144;

	// offset = 0x148
	UINT32 offset_0x148;

	// offset = 0x14c
	UINT32 offset_0x14c;


	// offset = 0x150
	UINT32 offset_0x150;

	// offset = 0x154
	UINT32 offset_0x154;

	// offset = 0x158
	UINT32 offset_0x158;

	// offset = 0x15c
	UINT32 offset_0x15c;


	// offset = 0x160
	UINT32 offset_0x160;

	// offset = 0x164
	UINT32 offset_0x164;

	// offset = 0x168
	UINT32 offset_0x168;

	// offset = 0x16c
	UINT32 offset_0x16c;


	// offset = 0x170
	UINT32 offset_0x170;

	// offset = 0x174
	UINT32 offset_0x174;

	// offset = 0x178
	UINT32 offset_0x178;

	// offset = 0x17c
	UINT32 offset_0x17c;


	// offset = 0x180
	UINT32 offset_0x180;

	// offset = 0x184
	UINT32 offset_0x184;

	// offset = 0x188
	UINT32 offset_0x188;

	// offset = 0x18c
	UINT32 offset_0x18c;


	// offset = 0x190
	UINT32 offset_0x190;

	// offset = 0x194
	UINT32 offset_0x194;

	// offset = 0x198
	UINT32 offset_0x198;

	// offset = 0x19c
	UINT32 offset_0x19c;


	// offset = 0x1a0
	UINT32 offset_0x1a0;

	// offset = 0x1a4
	UINT32 offset_0x1a4;

	// offset = 0x1a8
	UINT32 offset_0x1a8;

	// offset = 0x1ac
	UINT32 offset_0x1ac;


	// offset = 0x1b0
	UINT32 offset_0x1b0;

	// offset = 0x1b4
	UINT32 offset_0x1b4;

	// offset = 0x1b8
	UINT32 offset_0x1b8;

	// offset = 0x1bc
	UINT32 offset_0x1bc;


	// offset = 0x1c0
	UINT32 offset_0x1c0;

	// offset = 0x1c4
	UINT32 offset_0x1c4;

	// offset = 0x1c8
	UINT32 offset_0x1c8;

	// offset = 0x1cc
	UINT32 offset_0x1cc;


	// offset = 0x1d0
	UINT32 offset_0x1d0;

	// offset = 0x1d4
	UINT32 offset_0x1d4;

	// offset = 0x1d8
	UINT32 offset_0x1d8;

	// offset = 0x1dc
	UINT32 offset_0x1dc;


	// offset = 0x1e0
	UINT32 offset_0x1e0;

	// offset = 0x1e4
	UINT32 offset_0x1e4;

	// offset = 0x1e8
	UINT32 offset_0x1e8;

	// offset = 0x1ec
	UINT32 offset_0x1ec;


	// offset = 0x1f0
	UINT32 offset_0x1f0;

	// offset = 0x1f4
	UINT32 offset_0x1f4;

	// offset = 0x1f8
	UINT32 offset_0x1f8;

	// offset = 0x1fc
	UINT32 offset_0x1fc;


	// offset = 0x200
	UINT32 offset_0x200;

	// offset = 0x204
	UINT32 offset_0x204;

	// offset = 0x208
	UINT32 offset_0x208;

	// offset = 0x20c
	UINT32 offset_0x20c;


	// offset = 0x210
	UINT32 offset_0x210;

	// offset = 0x214
	UINT32 offset_0x214;

	// offset = 0x218
	UINT32 offset_0x218;

	// offset = 0x21c
	UINT32 offset_0x21c;


	// offset = 0x220
	UINT32 offset_0x220;

	// offset = 0x224
	UINT32 offset_0x224;

	// offset = 0x228
	UINT32 offset_0x228;

	// offset = 0x22c
	UINT32 offset_0x22c;


	// offset = 0x230
	UINT32 offset_0x230;

	// offset = 0x234
	UINT32 offset_0x234;

	// offset = 0x238
	UINT32 offset_0x238;

	// offset = 0x23c
	UINT32 offset_0x23c;


	// offset = 0x240
	UINT32 offset_0x240;

	// offset = 0x244
	UINT32 offset_0x244;

	// offset = 0x248
	UINT32 offset_0x248;

	// offset = 0x24c
	UINT32 offset_0x24c;


	// offset = 0x250
	UINT32 offset_0x250;

	// offset = 0x254
	UINT32 offset_0x254;

	// offset = 0x258
	UINT32 offset_0x258;

	// offset = 0x25c
	UINT32 offset_0x25c;


	// offset = 0x260
	UINT32 offset_0x260;

	// offset = 0x264
	UINT32 offset_0x264;

	// offset = 0x268
	UINT32 offset_0x268;

	// offset = 0x26c
	UINT32 offset_0x26c;


	// offset = 0x270
	UINT32 offset_0x270;

	// offset = 0x274
	UINT32 offset_0x274;

	// offset = 0x278
	UINT32 offset_0x278;

	// offset = 0x27c
	UINT32 offset_0x27c;


	// offset = 0x280
	UINT32 offset_0x280;

	// offset = 0x284
	UINT32 offset_0x284;

	// offset = 0x288
	UINT32 offset_0x288;

	// offset = 0x28c
	UINT32 offset_0x28c;


	// offset = 0x290
	UINT32 offset_0x290;

	// offset = 0x294
	UINT32 offset_0x294;

	// offset = 0x298
	UINT32 offset_0x298;

	// offset = 0x29c
	UINT32 offset_0x29c;


	// offset = 0x2a0
	UINT32 offset_0x2a0;

	// offset = 0x2a4
	UINT32 offset_0x2a4;

	// offset = 0x2a8
	UINT32 offset_0x2a8;

	// offset = 0x2ac
	UINT32 offset_0x2ac;


	// offset = 0x2b0
	UINT32 offset_0x2b0;

	// offset = 0x2b4
	UINT32 offset_0x2b4;


	UINT32 offset_0x2b8;

	// offset = 0x2bc
	UINT32 offset_0x2bc;


	// offset = 0x2c0
	UINT32 offset_0x2c0;

	// offset = 0x2c4
	UINT32 offset_0x2c4;

	// offset = 0x2c8
	UINT32 offset_0x2c8;

	// offset = 0x2cc
	UINT32 offset_0x2cc;


	// offset = 0x2d0
	UINT32 offset_0x2d0;

	// offset = 0x2d4
	UINT32 offset_0x2d4;

	// offset = 0x2d8
	UINT32 offset_0x2d8;

	// offset = 0x2dc
	UINT32 offset_0x2dc;


	// offset = 0x2e0
	UINT32 offset_0x2e0;

	// offset = 0x2e4
	UINT32 offset_0x2e4;

	// offset = 0x2e8
	UINT32 offset_0x2e8;

	// offset = 0x2ec
	UINT32 offset_0x2ec;


	// offset = 0x2f0
	UINT32 offset_0x2f0;

	// offset = 0x2f4
	UINT32 offset_0x2f4;

	// offset = 0x2f8
	UINT32 offset_0x2f8;

	// offset = 0x2fc
	UINT32 offset_0x2fc;


	// offset = 0x300
	UINT32 offset_0x300;

	// offset = 0x304
	UINT32 offset_0x304;

	// offset = 0x308
	UINT32 offset_0x308;

	// offset = 0x30c
	UINT32 offset_0x30c;


	// offset = 0x310
	UINT32 offset_0x310;

	// offset = 0x314
	UINT32 offset_0x314;

	// offset = 0x318
	UINT32 offset_0x318;

	// offset = 0x31c
	UINT32 offset_0x31c;


	// offset = 0x320
	UINT32 offset_0x320;

	// offset = 0x324
	UINT32 offset_0x324;

	// offset = 0x328
	UINT32 offset_0x328;

	// offset = 0x32c
	UINT32 offset_0x32c;


	// offset = 0x330
	UINT32 offset_0x330;

	// offset = 0x334
	UINT32 offset_0x334;

	// offset = 0x338
	UINT32 offset_0x338;

	// offset = 0x33c
	UINT32 offset_0x33c;


	// offset = 0x340
	UINT32 offset_0x340;

	// offset = 0x344
	UINT32 offset_0x344;

	// offset = 0x348
	UINT32 offset_0x348;

	// offset = 0x34c
	UINT32 offset_0x34c;


	// offset = 0x350
	UINT32 offset_0x350;

	// offset = 0x354
	UINT32 offset_0x354;

	// offset = 0x358
	UINT32 offset_0x358;

	// offset = 0x35c
	UINT32 offset_0x35c;


	// offset = 0x360
	UINT32 offset_0x360;

	// offset = 0x364
	UINT32 offset_0x364;

	// offset = 0x368
	UINT32 offset_0x368;

	// offset = 0x36c
	UINT32 offset_0x36c;


	// offset = 0x370
	UINT32 offset_0x370;

	// offset = 0x374
	UINT32 offset_0x374;

	// offset = 0x378
	UINT32 offset_0x378;

	// offset = 0x37c
	UINT32 offset_0x37c;


	// offset = 0x380
	UINT32 offset_0x380;

	// offset = 0x384
	UINT32 offset_0x384;

	// offset = 0x388
	UINT32 offset_0x388;

	// offset = 0x38c
	UINT32 offset_0x38c;


	// offset = 0x390
	UINT32 offset_0x390;

	// offset = 0x394
	UINT32 offset_0x394;

	// offset = 0x398
	UINT32 offset_0x398;

	// offset = 0x39c
	UINT32 offset_0x39c;


	// offset = 0x3a0
	UINT32 offset_0x3a0;

	// offset = 0x3a4
	UINT32 offset_0x3a4;

	// offset = 0x3a8
	UINT32 offset_0x3a8;

	// offset = 0x3ac
	UINT32 offset_0x3ac;


	// offset = 0x3b0
	UINT32 offset_0x3b0;

	// offset = 0x3b4
	UINT32 offset_0x3b4;

	// offset = 0x3b8
	UINT32 offset_0x3b8;

	// offset = 0x3bc
	UINT32 offset_0x3bc;


	// offset = 0x3c0
	UINT32 offset_0x3c0;

	// offset = 0x3c4
	UINT32 offset_0x3c4;

	// offset = 0x3c8
	UINT32 offset_0x3c8;

	// offset = 0x3cc
	UINT32 offset_0x3cc;


	// offset = 0x3d0
	UINT32 offset_0x3d0;

	// offset = 0x3d4
	UINT32 offset_0x3d4;

	// offset = 0x3d8
	UINT32 offset_0x3d8;

	// offset = 0x3dc
	UINT32 offset_0x3dc;


	// offset = 0x3e0
	UINT32 offset_0x3e0;

	// offset = 0x3e4
	UINT32 offset_0x3e4;

	// offset = 0x3e8
	UINT32 offset_0x3e8;

	// offset = 0x3ec
	UINT32 offset_0x3ec;


	// offset = 0x3f0
	UINT32 offset_0x3f0;

	// offset = 0x3f4
	UINT32 offset_0x3f4;

	// offset = 0x3f8
	UINT32 offset_0x3f8;

	// offset = 0x3fc
	UINT32 offset_0x3fc;


	// offset = 0x400
	UINT32 offset_0x400;

	// offset = 0x404
	UINT32 offset_0x404;

	// offset = 0x408
	UINT32 offset_0x408;

	// offset = 0x40c
	UINT32 offset_0x40c;


	// offset = 0x410
	UINT32 offset_0x410;

	// offset = 0x414
	UINT32 offset_0x414;

	// offset = 0x418
	UINT32 offset_0x418;

	// offset = 0x41c
	UINT32 offset_0x41c;


	// offset = 0x420
	UINT32 offset_0x420;

	// offset = 0x424
	UINT32 offset_0x424;

	// offset = 0x428
	UINT32 offset_0x428;

	// offset = 0x42c
	UINT32 offset_0x42c;


	// offset = 0x430
	UINT32 offset_0x430;

	// offset = 0x434
	UINT32 offset_0x434;

	// offset = 0x438
	UINT32 offset_0x438;

	// offset = 0x43c
	UINT32 offset_0x43c;

};

 
 
//////////////////////////////////////////////////////////////////
#ifdef __cplusplus
}
#endif // #ifdef __cplusplus
//////////////////////////////////////////////////////////////////
#endif //__MY__RTL_USER_PROCESS_PARAMETERS_HEADER_FILE__

