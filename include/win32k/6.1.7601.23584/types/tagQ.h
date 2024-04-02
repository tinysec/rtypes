/**
 * @file tagQ.h
 * @author tinysec
 * @brief
 * @version 0.0.1
    * 2024/04/01   init
 */

#ifndef __MY_TAGQ_HEADER_FILE__
#define __MY_TAGQ_HEADER_FILE__
//////////////////////////////////////////////////////////////////
#ifdef __cplusplus
extern "C"
    {
#endif // #ifdef __cplusplus
//////////////////////////////////////////////////////////////////
 
#include "tagMLIST.h"

#include "tagCARET.h"
 
//////////////////////////////////////////////////////////////////////////

// size = 0x158
struct tagQ
{
	// offset = 0x000
	struct tagMLIST mlInput;

	// offset = 0x018
	struct tagTHREADINFO* ptiSysLock;


	// offset = 0x020
	UINT64 idSysLock;

	// offset = 0x028
	UINT64 idSysPeek;


	// offset = 0x030
	struct tagTHREADINFO* ptiMouse;

	// offset = 0x038
	struct tagTHREADINFO* ptiKeyboard;



	// offset = 0x040
	struct tagWND* spwndCapture;

	// offset = 0x048
	struct tagWND*  spwndFocus;

	// offset = 0x050
	struct tagWND*  spwndActive;

	// offset = 0x058
	struct tagWND*  spwndActivePrev;

	// offset = 0x060
	UINT32 codeCapture;

	// offset = 0x064
	UINT32 msgDblClk;

	// offset = 0x068
	UINT16 xbtnDblClk;

	// offset = 0x06A
	UINT16 offset_0x06A;

	// offset = 0x06c
	UINT32 timeDblClk;


	// offset = 0x070
	HWND hwndDblClk;

	// offset = 0x078
	struct tagPOINT ptDblClk;

	// offset = 0x080
	struct tagPOINT ptMouseMove;

	// offset = 0x088
	UCHAR afKeyRecentDown[32];

	// offset = 0x0a8
	UCHAR afKeyState[64];

	
	// offset = 0x0e8 , 0x48 bytes
	struct tagCARET caret;



	// offset = 0x130
	struct tagCURSOR* spcurCurrent;


	// offset = 0x138
	INT32 iCursorLevel;

	// offset = 0x13c
	UINT32 QF_flags;


	// offset = 0x140
	UINT16 cThreads;

	// offset = 0x140
	UINT16 cLockCount;




	// offset = 0x144
	UINT32 msgJournal;

	// offset = 0x148
	INT64 ExtraInfo;


	// offset = 0x150
	UINT32 ulEtwReserved1;

#ifdef _WIN64
	// offset = 0x154
	UINT32 offset_0x154;
#endif
	
};

 
 
 
 
 
//////////////////////////////////////////////////////////////////
#ifdef __cplusplus
}
#endif // #ifdef __cplusplus
//////////////////////////////////////////////////////////////////
#endif //__MY_TAGQ_HEADER_FILE__

