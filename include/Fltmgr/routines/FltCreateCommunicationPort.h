/**
 * @file FltCreateCommunicationPort.h
 * @author tinysec
 * @brief
 * @version 0.0.1
    * 2024/03/14   init
 */

#ifndef __MY_FLTCREATECOMMUNICATIONPORT_HEADER_FILE__
#define __MY_FLTCREATECOMMUNICATIONPORT_HEADER_FILE__
//////////////////////////////////////////////////////////////////
#ifdef __cplusplus
extern "C"
    {
#endif // #ifdef __cplusplus
//////////////////////////////////////////////////////////////////
 
#include "PFLT_CONNECT_NOTIFY.h"

#include "PFLT_DISCONNECT_NOTIFY.h"

#include "PFLT_MESSAGE_NOTIFY.h"


//////////////////////////////////////////////////////////////////////////


NTSTATUS __stdcall FltCreateCommunicationPort
(
	struct _FLT_FILTER*    Filter,

	struct _FLT_PORT**	   ServerPort,

	OBJECT_ATTRIBUTES*     ObjectAttributes,

	PVOID                  ServerPortCookie,

	PFLT_CONNECT_NOTIFY    ConnectNotifyCallback,

	PFLT_DISCONNECT_NOTIFY DisconnectNotifyCallback,

	PFLT_MESSAGE_NOTIFY    MessageNotifyCallback,

	LONG                   MaxConnections
);

 
 
//////////////////////////////////////////////////////////////////
#ifdef __cplusplus
}
#endif // #ifdef __cplusplus
//////////////////////////////////////////////////////////////////
#endif //__MY_FLTCREATECOMMUNICATIONPORT_HEADER_FILE__

