/**
 * @file tagTHREADINFO.h
 * @author tinysec
 * @brief
 * @version 0.0.1
    * 2024/03/13   init
 */

#ifndef __MY_TAGTHREADINFO_HEADER_FILE__
#define __MY_TAGTHREADINFO_HEADER_FILE__
//////////////////////////////////////////////////////////////////
#ifdef __cplusplus
extern "C"
    {
#endif // #ifdef __cplusplus
//////////////////////////////////////////////////////////////////
 

//////////////////////////////////////////////////////////////////////////

// init at win32kbase!tagTHREADINFO::Initialize(struct tagTHREADINFO *this)
// gptiCurrent
struct tagTHREADINFO
{
	// offset = 0x000
	struct _ETHREAD* pEThread;

	// offset = 0x008
	UINT32 offset_0x008;

	// offset = 0x00c
	UINT32 offset_0x00c;


	// offset = 0x010
	UINT32 offset_0x010;

	// offset = 0x014
	UINT32 offset_0x014;

	// offset = 0x018
	UINT32 offset_0x018;

	// offset = 0x01c
	UINT32 offset_0x01c;


	// offset = 0x020
	UINT32 offset_0x020;

	// offset = 0x024
	UINT32 offset_0x024;

	// offset = 0x028
	UINT32 offset_0x028;

	// offset = 0x02c
	UINT32 offset_0x02c;


	// offset = 0x030
	UINT32 offset_0x030;

	// offset = 0x034
	UINT32 offset_0x034;

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
	UINT64 offset_0x188;



	// offset = 0x190
	UINT64 offset_0x190;


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
	UINT64 offset_0x1b0;


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
	LIST_ENTRY offset_0x208;

	



	// offset = 0x218
	UINT32 offset_0x218;

	// offset = 0x21c
	UINT32 offset_0x21c;


	// offset = 0x220
	UINT64 offset_0x220;

	// offset = 0x228
	UINT64 offset_0x228;



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
	LIST_ENTRY offset_0x2e8;




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
	UINT64 offset_0x350;


	// offset = 0x358
	UINT64 offset_0x358;




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
	UINT64 offset_0x410;


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


	// offset = 0x440
	UINT32 offset_0x440;

	// offset = 0x444
	UINT32 offset_0x444;

	// offset = 0x448
	UINT32 offset_0x448;

	// offset = 0x44c
	UINT32 offset_0x44c;


	// offset = 0x450
	UINT32 offset_0x450;

	// offset = 0x454
	UINT32 offset_0x454;


	// offset = 0x458
	LIST_ENTRY offset_0x458;



	// offset = 0x468
	UINT32 offset_0x468;

	// offset = 0x46c
	UINT32 offset_0x46c;


	// offset = 0x470
	UINT32 offset_0x470;

	// offset = 0x474
	UINT32 offset_0x474;

	// offset = 0x478
	UINT32 offset_0x478;

	// offset = 0x47c
	UINT32 offset_0x47c;


	// offset = 0x480
	UINT32 offset_0x480;

	// offset = 0x484
	UINT32 offset_0x484;

	// offset = 0x488
	UINT32 offset_0x488;

	// offset = 0x48c
	UINT32 offset_0x48c;



	// offset = 0x490
	LIST_ENTRY offset_0x490;


	// offset = 0x4a0
	UINT32 offset_0x4a0;

	// offset = 0x4a4
	UINT32 offset_0x4a4;

	// offset = 0x4a8
	UINT32 offset_0x4a8;

	// offset = 0x4ac
	UINT32 offset_0x4ac;


	// offset = 0x4b0
	UINT32 offset_0x4b0;

	// offset = 0x4b4
	UINT32 offset_0x4b4;

	// offset = 0x4b8
	UINT32 offset_0x4b8;

	// offset = 0x4bc
	UINT32 offset_0x4bc;


	// offset = 0x4c0
	UINT32 offset_0x4c0;

	// offset = 0x4c4
	UINT32 offset_0x4c4;

	// offset = 0x4c8
	UINT32 offset_0x4c8;

	// offset = 0x4cc
	UINT32 offset_0x4cc;


	// offset = 0x4d0
	UINT32 offset_0x4d0;

	// offset = 0x4d4
	UINT32 offset_0x4d4;


	// offset = 0x4d8
	LIST_ENTRY offset_0x4d8;





	// offset = 0x4e8
	UINT32 offset_0x4e8;

	// offset = 0x4ec
	UINT32 offset_0x4ec;


	// offset = 0x4f0
	UINT32 offset_0x4f0;

	// offset = 0x4f4
	UINT32 offset_0x4f4;

	// offset = 0x4f8
	UINT32 offset_0x4f8;

	// offset = 0x4fc
	UINT32 offset_0x4fc;


	// offset = 0x500
	UINT32 offset_0x500;

	// offset = 0x504
	UINT32 offset_0x504;

	// offset = 0x508
	UINT32 offset_0x508;

	// offset = 0x50c
	UINT32 offset_0x50c;


	// offset = 0x510
	UINT32 offset_0x510;

	// offset = 0x514
	UINT32 offset_0x514;

	// offset = 0x518
	UINT32 offset_0x518;

	// offset = 0x51c
	UINT32 offset_0x51c;


	// offset = 0x520
	UINT32 offset_0x520;

	// offset = 0x524
	UINT32 offset_0x524;

	// offset = 0x528
	UINT32 offset_0x528;

	// offset = 0x52c
	UINT32 offset_0x52c;


	// offset = 0x530
	UINT32 offset_0x530;

	// offset = 0x534
	UINT32 offset_0x534;

	// offset = 0x538
	UINT32 offset_0x538;

	// offset = 0x53c
	UINT32 offset_0x53c;


	// offset = 0x540
	UINT32 offset_0x540;

	// offset = 0x544
	UINT32 offset_0x544;

	// offset = 0x548
	UINT32 offset_0x548;

	// offset = 0x54c
	UINT32 offset_0x54c;


	// offset = 0x550
	UINT32 offset_0x550;

	// offset = 0x554
	UINT32 offset_0x554;

	// offset = 0x558
	UINT32 offset_0x558;

	// offset = 0x55c
	UINT32 offset_0x55c;


	// offset = 0x560
	UINT32 offset_0x560;

	// offset = 0x564
	UINT32 offset_0x564;

	// offset = 0x568
	UINT64 offset_0x568;


	// offset = 0x570
	UINT32 offset_0x570;

	// offset = 0x574
	UINT32 offset_0x574;

	// offset = 0x578
	PVOID offset_0x578;



	// offset = 0x580
	UINT32 offset_0x580;

	// offset = 0x584
	UINT32 offset_0x584;

	// offset = 0x588
	UINT32 offset_0x588;

	// offset = 0x58c
	UINT32 offset_0x58c;


	// offset = 0x590
	UINT32 offset_0x590;

	// offset = 0x594
	UINT32 offset_0x594;

	// offset = 0x598
	UINT32 offset_0x598;

	// offset = 0x59c
	UINT32 offset_0x59c;


	// offset = 0x5a0
	UINT32 offset_0x5a0;

	// offset = 0x5a4
	UINT32 offset_0x5a4;

	// offset = 0x5a8
	UINT32 offset_0x5a8;

	// offset = 0x5ac
	UINT32 offset_0x5ac;


	// offset = 0x5b0
	UINT32 offset_0x5b0;

	// offset = 0x5b4
	UINT32 offset_0x5b4;

	// offset = 0x5b8
	UINT32 offset_0x5b8;

	// offset = 0x5bc
	UINT32 offset_0x5bc;


	// offset = 0x5c0
	UINT64 offset_0x5c0;



	// offset = 0x5c8
	UINT32 offset_0x5c8;

	// offset = 0x5cc
	UINT32 offset_0x5cc;


	// offset = 0x5d0
	UINT64 offset_0x5d0;


	// offset = 0x5d8
	UINT32 offset_0x5d8;

	// offset = 0x5dc
	UINT32 offset_0x5dc;


	// offset = 0x5e0
	UINT32 offset_0x5e0;

	// offset = 0x5e4
	UINT32 offset_0x5e4;

	// offset = 0x5e8
	UINT32 offset_0x5e8;

	// offset = 0x5ec
	UINT32 offset_0x5ec;


	// offset = 0x5f0
	UINT32 offset_0x5f0;

	// offset = 0x5f4
	UINT32 offset_0x5f4;

	// offset = 0x5f8
	UINT32 offset_0x5f8;

	// offset = 0x5fc
	UINT32 offset_0x5fc;

};


//////////////////////////////////////////////////////////////////
#ifdef __cplusplus
}
#endif // #ifdef __cplusplus
//////////////////////////////////////////////////////////////////
#endif //__MY_TAGTHREADINFO_HEADER_FILE__

