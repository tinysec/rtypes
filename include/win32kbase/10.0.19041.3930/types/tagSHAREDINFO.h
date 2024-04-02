/**
 * @file tagSHAREDINFO.h
 * @author tinysec
 * @brief
 * @version 0.0.1
    * 2024/03/27   init
 */

#ifndef __MY_TAGSHAREDINFO_HEADER_FILE__
#define __MY_TAGSHAREDINFO_HEADER_FILE__
//////////////////////////////////////////////////////////////////
#ifdef __cplusplus
extern "C"
    {
#endif // #ifdef __cplusplus
//////////////////////////////////////////////////////////////////
 
 
// gSharedInfo
struct tagSHAREDINFO
{
	// offset = 0x000
	struct tagSERVERINFO* psi;

	// offset = 0x008
	struct _HANDLEENTRY* aheList;

	// offset = 0x010
	UINT32 HeEntrySize;

	// offset = 0x014 
	UINT32 offset_0x014;

	// offset = 0x018
	struct tagDISPLAYINFO* pDispInfo;

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

};

 
 
 
 
 
 
 
//////////////////////////////////////////////////////////////////
#ifdef __cplusplus
}
#endif // #ifdef __cplusplus
//////////////////////////////////////////////////////////////////
#endif //__MY_TAGSHAREDINFO_HEADER_FILE__

