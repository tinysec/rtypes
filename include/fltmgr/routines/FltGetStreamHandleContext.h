/**
 * @file FltGetStreamHandleContext.h
 * @author tinysec
 * @brief
 * @version 0.0.1
    * 2024/03/16   init
 */
#ifndef __MY_FLTGETSTREAMHANDLECONTEXT_HEADER_FILE__
#define __MY_FLTGETSTREAMHANDLECONTEXT_HEADER_FILE__
//////////////////////////////////////////////////////////////////
#ifdef __cplusplus
extern "C"
    {
#endif // #ifdef __cplusplus
//////////////////////////////////////////////////////////////////
  
  
  
NTSTATUS __stdcall FltGetStreamHandleContext(
struct _FLT_INSTANCE * Instance,
PFILE_OBJECT  FileObject,
void** Context
);
  
  
  
  
  
  
  
  
//////////////////////////////////////////////////////////////////
#ifdef __cplusplus
}
#endif // #ifdef __cplusplus
//////////////////////////////////////////////////////////////////
#endif //__MY_FLTGETSTREAMHANDLECONTEXT_HEADER_FILE__

