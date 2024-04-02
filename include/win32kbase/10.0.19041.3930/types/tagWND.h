/**
 * @file tagWND.h
 * @author tinysec
 * @brief tagWND after win10
 * @version 0.0.1
    * 2024/03/13   init
 */

#ifndef __MY_TAGWND_V10_HEADER_FILE__
#define __MY_TAGWND_V10_HEADER_FILE__
//////////////////////////////////////////////////////////////////
#ifdef __cplusplus
extern "C"
    {
#endif // #ifdef __cplusplus

//////////////////////////////////////////////////////////////////
 
 
#include "_THRDESKHEAD.h"

#include "tagObjLock.h"


//////////////////////////////////////////////////////////////////////////

 
// at 10.0.22000.2538 x64 is 0x148
struct tagWND
{
	struct _THRDESKHEAD head;

	// offset = 0x028;
	struct tagWNDK* pWndK;


	// offset = 0x030;
	UINT64 offset_0x030;

	// offset = 0x038;
	struct tagObjLock* ObjLock1;


	// offset = 0x040;
	UINT64 offset_0x040;

	// offset = 0x048;
	UINT64 offset_0x048;


	// offset = 0x050;
	UINT64 offset_0x050;

	// offset = 0x058;
	UINT64 offset_0x058;


	// offset = 0x060;
	UINT64 offset_0x060;

	// offset = 0x068 , if 
	UINT64 offset_0x068;


	// offset = 0x070;
	UINT64 offset_0x070;

	// offset = 0x078;
	UINT64 offset_0x078;


	// offset = 0x080;
	UINT64 offset_0x080;

	// offset = 0x088;
	UINT64 offset_0x088;


	// offset = 0x090;
	PVOID offset_0x090;

	// offset = 0x098;
	UINT64 offset_0x098;


	// offset = 0x0a0;
	UINT64 offset_0x0a0;

	// offset = 0x0a8;
	UINT64 offset_0x0a8;





	// offset = 0x0b0;
	UINT64 offset_0x0b0;

	// offset = 0x0b8;
	UINT64 offset_0x0b8;


	// offset = 0x0c0;
	UINT64 offset_0x0c0;

	// offset = 0x0c8;
	UINT64 offset_0x0c8;


	// offset = 0x0d0;
	UINT64 offset_0x0d0;

	// offset = 0x0d8;
	UINT64 offset_0x0d8;


	// offset = 0x0e0;
	UINT64 offset_0x0e0;

	// offset = 0x0e8;
	UINT32 UnknownFlags_0x0e8;

	UINT32 offset_0x0ec;


	// offset = 0x0f0;
	UINT64 offset_0x0f0;

	// offset = 0x0f8;
	UINT64 offset_0x0f8;


	// offset = 0x100;
	UINT64 offset_0x100;

	// offset = 0x108;
	UINT64 offset_0x108;


	// offset = 0x110;
	UINT64 offset_0x110;

	// offset = 0x118;
	UINT64 offset_0x118;


	// offset = 0x120;
	UINT64 offset_0x120;

	// offset = 0x128
	union
	{
		PVOID	pExtraBytes;
		UINT64	ExtraBytes;
	};

	


	// offset = 0x130;
	UINT64 offset_0x130;

	// offset = 0x138;
	UINT64 offset_0x138;


	// offset = 0x140;
	UINT64 offset_0x140;
};
 
 
 
 
 
 
//////////////////////////////////////////////////////////////////
#ifdef __cplusplus
}
#endif // #ifdef __cplusplus
//////////////////////////////////////////////////////////////////
#endif //__MY_TAGWND_V10_HEADER_FILE__

