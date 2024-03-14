/**
 * @file PFLT_FILTER_UNLOAD_CALLBACK.h
 * @author tinysec
 * @brief
 * @version 0.0.1
    * 2024/03/14   init
 */

#ifndef __MY_PFLT_FILTER_UNLOAD_CALLBACK_HEADER_FILE__
#define __MY_PFLT_FILTER_UNLOAD_CALLBACK_HEADER_FILE__
//////////////////////////////////////////////////////////////////
#ifdef __cplusplus
extern "C"
    {
#endif // #ifdef __cplusplus
//////////////////////////////////////////////////////////////////
 
 
 
 
 typedef ULONG FLT_FILTER_UNLOAD_FLAGS;
 
 

typedef NTSTATUS (__stdcall *PFLT_FILTER_UNLOAD_CALLBACK) (FLT_FILTER_UNLOAD_FLAGS Flags);

 
 
//////////////////////////////////////////////////////////////////
#ifdef __cplusplus
}
#endif // #ifdef __cplusplus
//////////////////////////////////////////////////////////////////
#endif //__MY_PFLT_FILTER_UNLOAD_CALLBACK_HEADER_FILE__

