/**
 * @file PFLT_INSTANCE_QUERY_TEARDOWN_CALLBACK.h
 * @author tinysec
 * @brief
 * @version 0.0.1
    * 2024/03/14   init
 */

#ifndef __MY_PFLT_INSTANCE_QUERY_TEARDOWN_CALLBACK_HEADER_FILE__
#define __MY_PFLT_INSTANCE_QUERY_TEARDOWN_CALLBACK_HEADER_FILE__
//////////////////////////////////////////////////////////////////
#ifdef __cplusplus
extern "C"
    {
#endif // #ifdef __cplusplus
//////////////////////////////////////////////////////////////////
 
 
 
 
 
 
 

typedef NTSTATUS
(__stdcall *PFLT_INSTANCE_QUERY_TEARDOWN_CALLBACK) (
 struct _FLT_RELATED_OBJECTS* FltObjects,
 ULONG  Flags
);

 
 
//////////////////////////////////////////////////////////////////
#ifdef __cplusplus
}
#endif // #ifdef __cplusplus
//////////////////////////////////////////////////////////////////
#endif //__MY_PFLT_INSTANCE_QUERY_TEARDOWN_CALLBACK_HEADER_FILE__

