/**
 * @file PFLT_TRANSACTION_NOTIFICATION_CALLBACK.h
 * @author tinysec
 * @brief
 * @version 0.0.1
    * 2024/03/14   init
 */

#ifndef __MY_PFLT_TRANSACTION_NOTIFICATION_CALLBACK_HEADER_FILE__
#define __MY_PFLT_TRANSACTION_NOTIFICATION_CALLBACK_HEADER_FILE__
//////////////////////////////////////////////////////////////////
#ifdef __cplusplus
extern "C"
    {
#endif // #ifdef __cplusplus
//////////////////////////////////////////////////////////////////
 
 
 
 
 
 
 
 
		typedef NTSTATUS
			(__stdcall *PFLT_TRANSACTION_NOTIFICATION_CALLBACK) (
			 struct _FLT_RELATED_OBJECTS * FltObjects,
			 struct _FLT_CONTEXT* TransactionContext,
			 ULONG NotificationMask
			);
 
 
 
//////////////////////////////////////////////////////////////////
#ifdef __cplusplus
}
#endif // #ifdef __cplusplus
//////////////////////////////////////////////////////////////////
#endif //__MY_PFLT_TRANSACTION_NOTIFICATION_CALLBACK_HEADER_FILE__

