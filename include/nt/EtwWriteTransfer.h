/**
 * @file EtwWriteTransfer.h
 * @author tinysec
 * @brief
 * @version 0.0.1
    * 2014/02/05   init
 */
#ifndef __MY_ETW_WRITE_TRANSFER_HEADER_FILE__
#define __MY_ETW_WRITE_TRANSFER_HEADER_FILE__
//////////////////////////////////////////////////////////////////
#ifdef __cplusplus
extern "C"
    {
#endif // #ifdef __cplusplus
//////////////////////////////////////////////////////////////////
 
typedef ULONGLONG REGHANDLE, *PREGHANDLE;
 
 NTSTATUS __stdcall EtwWriteTransfer(
	REGHANDLE              RegHandle,
	PCEVENT_DESCRIPTOR     EventDescriptor,
	LPCGUID                ActivityId,
	LPCGUID                RelatedActivityId,
	ULONG                  UserDataCount,
	PEVENT_DATA_DESCRIPTOR UserData
);
 
 
 
//////////////////////////////////////////////////////////////////
#ifdef __cplusplus
}
#endif // #ifdef __cplusplus
//////////////////////////////////////////////////////////////////
#endif //__MY_ETW_WRITE_TRANSFER_HEADER_FILE__

