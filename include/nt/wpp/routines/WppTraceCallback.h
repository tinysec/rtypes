/**
 * @file WppTraceCallback.h
 * @author tinysec
 * @brief
 * @version 0.0.1
    * 2024/03/14   init
 */

#ifndef __MY_WPPTRACECALLBACK_HEADER_FILE__
#define __MY_WPPTRACECALLBACK_HEADER_FILE__
//////////////////////////////////////////////////////////////////
#ifdef __cplusplus
extern "C"
    {
#endif // #ifdef __cplusplus
//////////////////////////////////////////////////////////////////
 
 
 
 
 

 NTSTATUS __stdcall WppTraceCallback(
	  UCHAR MinorFunction,
	  PVOID DataPath,
	  ULONG BufferLength,
	  PVOID Buffer,
	  PVOID Context,
	  PULONG Size
);
 
 
 
 
 
//////////////////////////////////////////////////////////////////
#ifdef __cplusplus
}
#endif // #ifdef __cplusplus
//////////////////////////////////////////////////////////////////
#endif //__MY_WPPTRACECALLBACK_HEADER_FILE__

