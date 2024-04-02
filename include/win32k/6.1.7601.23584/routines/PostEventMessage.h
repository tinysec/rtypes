/**
 * @file PostEventMessage.h
 * @author tinysec
 * @brief
 * @version 0.0.1
    * 2024/04/02   init
 */

#ifndef __MY_POSTEVENTMESSAGE_HEADER_FILE__
#define __MY_POSTEVENTMESSAGE_HEADER_FILE__
//////////////////////////////////////////////////////////////////
#ifdef __cplusplus
extern "C"
    {
#endif // #ifdef __cplusplus
//////////////////////////////////////////////////////////////////
 
 
BOOL __stdcall PostEventMessage(
	struct tagTHREADINFO* pti,
	struct tagQ*    pq,
	DWORD dwQEvent,
	struct tagWND*  pwnd,
	UINT  message,
	WPARAM wParam,
	LPARAM lParam
);
 
 
 
 
 
 
 
 
//////////////////////////////////////////////////////////////////
#ifdef __cplusplus
}
#endif // #ifdef __cplusplus
//////////////////////////////////////////////////////////////////
#endif //__MY_POSTEVENTMESSAGE_HEADER_FILE__

