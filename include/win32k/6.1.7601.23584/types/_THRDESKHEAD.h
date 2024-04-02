/**
 * @file _THRDESKHEAD.h
 * @author tinysec
 * @brief
 * @version 0.0.1
    * 2024/04/01   init
 */

#ifndef __MY__THRDESKHEAD_HEADER_FILE__
#define __MY__THRDESKHEAD_HEADER_FILE__
//////////////////////////////////////////////////////////////////
#ifdef __cplusplus
extern "C"
    {
#endif // #ifdef __cplusplus
//////////////////////////////////////////////////////////////////
 
 
 
 
 
 
 
// size = 0x028
struct _THRDESKHEAD
{
	// offset = 0x000
	PVOID h;

	// offset = 0x008
	UINT32 cLockObj;

	// offset = 0x00c
	UINT32 offset_0x00c;

	// offset = 0x010
	struct tagTHREADINFO* pti;

	// offset = 0x018
	struct tagDESKTOP* rpdesk;

	// offset = 0x020
	struct _THRDESKHEAD* pSelf;
};
 
 
 
 
 
//////////////////////////////////////////////////////////////////
#ifdef __cplusplus
}
#endif // #ifdef __cplusplus
//////////////////////////////////////////////////////////////////
#endif //__MY__THRDESKHEAD_HEADER_FILE__

