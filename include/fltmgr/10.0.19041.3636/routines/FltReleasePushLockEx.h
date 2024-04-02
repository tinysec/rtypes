/**
 * @file FltReleasePushLockEx.h
 * @author tinysec
 * @brief
 * @version 0.0.1
    * 2024/03/16   init
 */
#ifndef __MY_FLTRELEASEPUSHLOCKEX_HEADER_FILE__
#define __MY_FLTRELEASEPUSHLOCKEX_HEADER_FILE__
//////////////////////////////////////////////////////////////////
#ifdef __cplusplus
extern "C"
    {
#endif // #ifdef __cplusplus
//////////////////////////////////////////////////////////////////
  
  
  
  
  
void __stdcall FltReleasePushLockEx(
  ULONG_PTR* PushLock,
  ULONG         Flags
);
  
  
  
  
  
  
//////////////////////////////////////////////////////////////////
#ifdef __cplusplus
}
#endif // #ifdef __cplusplus
//////////////////////////////////////////////////////////////////
#endif //__MY_FLTRELEASEPUSHLOCKEX_HEADER_FILE__

