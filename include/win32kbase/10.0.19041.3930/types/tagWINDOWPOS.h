/**
 * @file tagWINDOWPOS.h
 * @author tinysec
 * @brief
 * @version 0.0.1
    * 2024/03/26   init
 */

#ifndef __MY_TAGWINDOWPOS_HEADER_FILE__
#define __MY_TAGWINDOWPOS_HEADER_FILE__
//////////////////////////////////////////////////////////////////
#ifdef __cplusplus
extern "C"
    {
#endif // #ifdef __cplusplus
//////////////////////////////////////////////////////////////////
 
 
 
 
struct tagWINDOWPOS {

	HWND hwnd;

	HWND hwndInsertAfter;

	int  x;

	int  y;

	int  cx;

	int  cy;

	UINT flags;
};
 
 
 
 
 
 
 
//////////////////////////////////////////////////////////////////
#ifdef __cplusplus
}
#endif // #ifdef __cplusplus
//////////////////////////////////////////////////////////////////
#endif //__MY_TAGWINDOWPOS_HEADER_FILE__

