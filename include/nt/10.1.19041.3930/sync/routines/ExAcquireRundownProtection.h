/**
 * @file ExAcquireRundownProtection.h
 * @author tinysec
 * @brief
 * @version 0.0.1
    * 2024/03/16   init
 */
#ifndef __MY_EXACQUIRERUNDOWNPROTECTION_HEADER_FILE__
#define __MY_EXACQUIRERUNDOWNPROTECTION_HEADER_FILE__
//////////////////////////////////////////////////////////////////
#ifdef __cplusplus
extern "C"
    {
#endif // #ifdef __cplusplus
//////////////////////////////////////////////////////////////////
  
  
  
  
  BOOLEAN __stdcall ExAcquireRundownProtection(
  struct _EX_RUNDOWN_REF* RunRef
);
  
  
  
  
  
  
  
//////////////////////////////////////////////////////////////////
#ifdef __cplusplus
}
#endif // #ifdef __cplusplus
//////////////////////////////////////////////////////////////////
#endif //__MY_EXACQUIRERUNDOWNPROTECTION_HEADER_FILE__

