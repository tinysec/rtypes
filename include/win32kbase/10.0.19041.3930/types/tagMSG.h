/**
 * @file tagMSG.h
 * @author tinysec
 * @brief
 * @version 0.0.1
    * 2024/03/25   init
 */

#ifndef __MY_TAGMSG_HEADER_FILE__
#define __MY_TAGMSG_HEADER_FILE__
//////////////////////////////////////////////////////////////////
#ifdef __cplusplus
extern "C"
    {
#endif // #ifdef __cplusplus
//////////////////////////////////////////////////////////////////
 
 
 
// 0x30
struct tagMSG 
{
	// 0x00
	HWND   hwnd;

	// offset 0x08
	UINT32   message;

#ifdef _WIN64
	UINT32 dummy_01;
#endif

	// 0x010
	WPARAM wParam;

	// 0x18
	LPARAM lParam;

	// 0x20
	DWORD  time;

	// 0x24
	POINT  pt;
	
	// 0x2C
	DWORD  lPrivate;
};
 
 

 
 
 
 
//////////////////////////////////////////////////////////////////
#ifdef __cplusplus
}
#endif // #ifdef __cplusplus
//////////////////////////////////////////////////////////////////
#endif //__MY_TAGMSG_HEADER_FILE__

