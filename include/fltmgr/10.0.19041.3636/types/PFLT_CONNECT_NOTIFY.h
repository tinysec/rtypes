/**
 * @file PFLT_CONNECT_NOTIFY.h
 * @author tinysec
 * @brief
 * @version 0.0.1
    * 2024/03/14   init
 */

#ifndef __MY_PFLT_CONNECT_NOTIFY_HEADER_FILE__
#define __MY_PFLT_CONNECT_NOTIFY_HEADER_FILE__
//////////////////////////////////////////////////////////////////
#ifdef __cplusplus
extern "C"
    {
#endif // #ifdef __cplusplus
//////////////////////////////////////////////////////////////////
 
 
 typedef NTSTATUS (__stdcall *PFLT_CONNECT_NOTIFY) 
(
	 struct _FLT_PORT* ClientPort,
	 PVOID ServerPortCookie,
	PVOID ConnectionContext,
	 ULONG SizeOfContext,
	PVOID *ConnectionPortCookie
);

 
 
 
//////////////////////////////////////////////////////////////////
#ifdef __cplusplus
}
#endif // #ifdef __cplusplus
//////////////////////////////////////////////////////////////////
#endif //__MY_PFLT_CONNECT_NOTIFY_HEADER_FILE__




