/**
 * @file PsGetThreadWin32Thread.h
 * @author tinysec
 * @brief
 * @version 0.0.1
    * 2024/03/27   init
 */

#ifndef __MY_PSGETTHREADWIN32THREAD_HEADER_FILE__
#define __MY_PSGETTHREADWIN32THREAD_HEADER_FILE__
//////////////////////////////////////////////////////////////////
#ifdef __cplusplus
extern "C"
    {
#endif // #ifdef __cplusplus
//////////////////////////////////////////////////////////////////
 
 
 
 
struct _W32THREAD* __stdcall PsGetThreadWin32Thread(struct _ETHREAD* thread);
 
 
 
 
 
 
//////////////////////////////////////////////////////////////////
#ifdef __cplusplus
}
#endif // #ifdef __cplusplus
//////////////////////////////////////////////////////////////////
#endif //__MY_PSGETTHREADWIN32THREAD_HEADER_FILE__

