/**
 * @file W32GetThreadWin32Thread.h
 * @author tinysec
 * @brief
 * @version 0.0.1
    * 2024/03/27   init
 */

#ifndef __MY_W32GETTHREADWIN32THREAD_HEADER_FILE__
#define __MY_W32GETTHREADWIN32THREAD_HEADER_FILE__
//////////////////////////////////////////////////////////////////
#ifdef __cplusplus
extern "C"
    {
#endif // #ifdef __cplusplus
//////////////////////////////////////////////////////////////////
 
 
 
 
struct tagTHREADINFO* __stdcall W32GetThreadWin32Thread(struct _ETHREAD* thread);
 
 
 
 
 
 
 
//////////////////////////////////////////////////////////////////
#ifdef __cplusplus
}
#endif // #ifdef __cplusplus
//////////////////////////////////////////////////////////////////
#endif //__MY_W32GETTHREADWIN32THREAD_HEADER_FILE__

