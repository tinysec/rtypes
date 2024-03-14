/**
 * @file PFLT_MESSAGE_NOTIFY.h
 * @author tinysec
 * @brief
 * @version 0.0.1
    * 2024/03/14   init
 */

#ifndef __MY_PFLT_MESSAGE_NOTIFY_HEADER_FILE__
#define __MY_PFLT_MESSAGE_NOTIFY_HEADER_FILE__
//////////////////////////////////////////////////////////////////
#ifdef __cplusplus
extern "C"
    {
#endif // #ifdef __cplusplus
//////////////////////////////////////////////////////////////////
 
 
 
 
 
typedef NTSTATUS (__stdcall *PFLT_MESSAGE_NOTIFY) 
(
	  PVOID PortCookie,
	 PVOID InputBuffer,
	  ULONG InputBufferLength,
	  PVOID OutputBuffer,
	  ULONG OutputBufferLength,
	 PULONG ReturnOutputBufferLength
);
 
 
 
 
 
 
 
//////////////////////////////////////////////////////////////////
#ifdef __cplusplus
}
#endif // #ifdef __cplusplus
//////////////////////////////////////////////////////////////////
#endif //__MY_PFLT_MESSAGE_NOTIFY_HEADER_FILE__

