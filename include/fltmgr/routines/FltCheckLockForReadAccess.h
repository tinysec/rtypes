/**
 * @file FltCheckLockForReadAccess.h
 * @author tinysec
 * @brief
 * @version 0.0.1
    * 2024/03/16   init
 */
#ifndef __MY_FLTCHECKLOCKFORREADACCESS_HEADER_FILE__
#define __MY_FLTCHECKLOCKFORREADACCESS_HEADER_FILE__
//////////////////////////////////////////////////////////////////
#ifdef __cplusplus
extern "C"
    {
#endif // #ifdef __cplusplus
//////////////////////////////////////////////////////////////////
  
  
  
  
  
BOOLEAN __stdcall FltCheckLockForReadAccess(
  struct _FILE_LOCK*         FileLock,
    struct _FLT_CALLBACK_DATA* CallbackData
);
  
  
  
  
  
  
//////////////////////////////////////////////////////////////////
#ifdef __cplusplus
}
#endif // #ifdef __cplusplus
//////////////////////////////////////////////////////////////////
#endif //__MY_FLTCHECKLOCKFORREADACCESS_HEADER_FILE__

