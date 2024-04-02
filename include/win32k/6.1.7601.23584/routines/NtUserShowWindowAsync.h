/**
 * @file NtUserShowWindowAsync.h
 * @author tinysec
 * @brief
 * @version 0.0.1
    * 2024/04/02   init
 */

#ifndef __MY_NTUSERSHOWWINDOWASYNC_HEADER_FILE__
#define __MY_NTUSERSHOWWINDOWASYNC_HEADER_FILE__
//////////////////////////////////////////////////////////////////
#ifdef __cplusplus
extern "C"
    {
#endif // #ifdef __cplusplus
//////////////////////////////////////////////////////////////////
 
 
 
BOOL __stdcall NtUserShowWindowAsync(
	HWND hwnd,
	int nCmdShow
);
 
 
 
 
 
 
 
 
//////////////////////////////////////////////////////////////////
#ifdef __cplusplus
}
#endif // #ifdef __cplusplus
//////////////////////////////////////////////////////////////////
#endif //__MY_NTUSERSHOWWINDOWASYNC_HEADER_FILE__

