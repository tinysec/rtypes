/**
 * @file tagCARET.h
 * @author tinysec
 * @brief
 * @version 0.0.1
    * 2024/04/01   init
 */

#ifndef __MY_TAGCARET_HEADER_FILE__
#define __MY_TAGCARET_HEADER_FILE__
//////////////////////////////////////////////////////////////////
#ifdef __cplusplus
extern "C"
    {
#endif // #ifdef __cplusplus
//////////////////////////////////////////////////////////////////
 
 
 
 
// size = 0x048
struct tagCARET
{
	// offset = 0x000
	struct tagWND* offset_0x000;



	// offset = 0x008
	UINT32 fVisible : 1;

	UINT32 fOn : 1;


	// offset = 0x00c
	INT32 iHideLevel;


	// offset = 0x010
	INT32 x;

	// offset = 0x014
	INT32 y;

	// offset = 0x018
	INT32 cy;

	// offset = 0x01c
	INT32 cx;


	// offset = 0x020
	HBITMAP hBitmap;



	// offset = 0x028
	UINT64 hTimer;




	// offset = 0x030
	UINT32 tid;

	// offset = 0x034
	INT32 xOwnDc;

	// offset = 0x038
	INT32 yOwnDc;

	// offset = 0x03c
	INT32 cxOwnDc;


	// offset = 0x040
	UINT32 cyOwnDc;


#ifdef _WIN64
	// offset = 0x044
	UINT32 offset_0x044;
#endif
	
};
 
 
 
 
 
 
//////////////////////////////////////////////////////////////////
#ifdef __cplusplus
}
#endif // #ifdef __cplusplus
//////////////////////////////////////////////////////////////////
#endif //__MY_TAGCARET_HEADER_FILE__

