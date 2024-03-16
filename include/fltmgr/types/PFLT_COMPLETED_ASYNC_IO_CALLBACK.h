/**
 * @file PFLT_COMPLETED_ASYNC_IO_CALLBACK.h
 * @author tinysec
 * @brief
 * @version 0.0.1
    * 2024/03/16   init
 */
#ifndef __MY_PFLT_COMPLETED_ASYNC_IO_CALLBACK_HEADER_FILE__
#define __MY_PFLT_COMPLETED_ASYNC_IO_CALLBACK_HEADER_FILE__
//////////////////////////////////////////////////////////////////
#ifdef __cplusplus
extern "C"
    {
#endif // #ifdef __cplusplus
//////////////////////////////////////////////////////////////////
  
  
  
  
  
typedef void (__stdcall *PFLT_COMPLETED_ASYNC_IO_CALLBACK)(
     struct _FLT_CALLBACK_DATA* CallbackData,
     PVOID Context
    );

  
  
  
  
  
  
//////////////////////////////////////////////////////////////////
#ifdef __cplusplus
}
#endif // #ifdef __cplusplus
//////////////////////////////////////////////////////////////////
#endif //__MY_PFLT_COMPLETED_ASYNC_IO_CALLBACK_HEADER_FILE__

