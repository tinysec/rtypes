/**
 * @file FltGetInstanceContext.h
 * @author tinysec
 * @brief
 * @version 0.0.1
    * 2024/03/14   init
 */
#ifndef __MY_FLTGETINSTANCECONTEXT_HEADER_FILE__
#define __MY_FLTGETINSTANCECONTEXT_HEADER_FILE__
//////////////////////////////////////////////////////////////////
#ifdef __cplusplus
extern "C"
    {
#endif // #ifdef __cplusplus
//////////////////////////////////////////////////////////////////
  
  
  
  
  
NTSTATUS __stdcall FltGetInstanceContext (
     struct _FLT_INSTANCE * Instance,
     void** Context
);

  
  
  
  
  
  
//////////////////////////////////////////////////////////////////
#ifdef __cplusplus
}
#endif // #ifdef __cplusplus
//////////////////////////////////////////////////////////////////
#endif //__MY_FLTGETINSTANCECONTEXT_HEADER_FILE__

