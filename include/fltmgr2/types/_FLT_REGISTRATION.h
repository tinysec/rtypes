/**
 * @file _FLT_REGISTRATION.h
 * @author tinysec
 * @brief
 * @version 0.0.1
    * 2024/03/14   init
 */

#ifndef __MY__FLT_REGISTRATION_HEADER_FILE__
#define __MY__FLT_REGISTRATION_HEADER_FILE__
//////////////////////////////////////////////////////////////////
#ifdef __cplusplus
extern "C"
    {
#endif // #ifdef __cplusplus
//////////////////////////////////////////////////////////////////
 

#include "PFLT_FILTER_UNLOAD_CALLBACK.h"

#include "PFLT_INSTANCE_SETUP_CALLBACK.h"

#include "PFLT_INSTANCE_QUERY_TEARDOWN_CALLBACK.h"

#include "PFLT_INSTANCE_TEARDOWN_CALLBACK.h"

#include "PFLT_GENERATE_FILE_NAME.h"

#include "PFLT_NORMALIZE_NAME_COMPONENT.h"

#include "PFLT_NORMALIZE_CONTEXT_CLEANUP.h"

#include "PFLT_TRANSACTION_NOTIFICATION_CALLBACK.h"

#include "PFLT_NORMALIZE_NAME_COMPONENT_EX.h"

#include "PFLT_SECTION_CONFLICT_NOTIFICATION_CALLBACK.h"


//////////////////////////////////////////////////////////////////////////

 

struct _FLT_REGISTRATION 
{
	USHORT                                      Size;
	USHORT                                      Version;

	ULONG										Flags;

	struct _FLT_CONTEXT_REGISTRATION*			ContextRegistration;

	struct _FLT_OPERATION_REGISTRATION*			OperationRegistration;

	PFLT_FILTER_UNLOAD_CALLBACK                 FilterUnloadCallback;

	PFLT_INSTANCE_SETUP_CALLBACK                InstanceSetupCallback;

	PFLT_INSTANCE_QUERY_TEARDOWN_CALLBACK       InstanceQueryTeardownCallback;

	PFLT_INSTANCE_TEARDOWN_CALLBACK             InstanceTeardownStartCallback;

	PFLT_INSTANCE_TEARDOWN_CALLBACK             InstanceTeardownCompleteCallback;

	PFLT_GENERATE_FILE_NAME                     GenerateFileNameCallback;

	PFLT_NORMALIZE_NAME_COMPONENT               NormalizeNameComponentCallback;

	PFLT_NORMALIZE_CONTEXT_CLEANUP              NormalizeContextCleanupCallback;

	PFLT_TRANSACTION_NOTIFICATION_CALLBACK      TransactionNotificationCallback;

	PFLT_NORMALIZE_NAME_COMPONENT_EX            NormalizeNameComponentExCallback;

	PFLT_SECTION_CONFLICT_NOTIFICATION_CALLBACK SectionNotificationCallback;
};


 
 
 
 
 
//////////////////////////////////////////////////////////////////
#ifdef __cplusplus
}
#endif // #ifdef __cplusplus
//////////////////////////////////////////////////////////////////
#endif //__MY__FLT_REGISTRATION_HEADER_FILE__

