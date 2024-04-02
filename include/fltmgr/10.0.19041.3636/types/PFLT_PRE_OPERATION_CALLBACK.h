/**
 * @file PFLT_PRE_OPERATION_CALLBACK.h
 * @author tinysec
 * @brief
 * @version 0.0.1
    * 2024/03/14   init
 */

#ifndef __MY_PFLT_PRE_OPERATION_CALLBACK_HEADER_FILE__
#define __MY_PFLT_PRE_OPERATION_CALLBACK_HEADER_FILE__
//////////////////////////////////////////////////////////////////
#ifdef __cplusplus
extern "C"
    {
#endif // #ifdef __cplusplus
//////////////////////////////////////////////////////////////////
 
 
 
 
 typedef ULONG (__stdcall *PFLT_PRE_OPERATION_CALLBACK) (
     struct _FLT_CALLBACK_DATA* Data,
     struct _FLT_RELATED_OBJECTS*  FltObjects,
     PVOID *CompletionContext
);


 
 
 
 
 
 
 
//////////////////////////////////////////////////////////////////
#ifdef __cplusplus
}
#endif // #ifdef __cplusplus
//////////////////////////////////////////////////////////////////
#endif //__MY_PFLT_PRE_OPERATION_CALLBACK_HEADER_FILE__

