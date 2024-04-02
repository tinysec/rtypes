/**
 * @file FltSendMessage.h
 * @author tinysec
 * @brief
 * @version 0.0.1
    * 2024/03/16   init
 */
#ifndef __MY_FLTSENDMESSAGE_HEADER_FILE__
#define __MY_FLTSENDMESSAGE_HEADER_FILE__
//////////////////////////////////////////////////////////////////
#ifdef __cplusplus
extern "C"
    {
#endif // #ifdef __cplusplus
//////////////////////////////////////////////////////////////////
  
  
  
  
  
NTSTATUS __stdcall FltSendMessage(
struct _FLT_FILTER *    Filter,
struct _FLT_PORT**	ClientPort,
PVOID          SenderBuffer,
ULONG          SenderBufferLength,
PVOID          ReplyBuffer,
PULONG         ReplyLength,
PLARGE_INTEGER Timeout
);  
  
  
  
        
  
//////////////////////////////////////////////////////////////////
#ifdef __cplusplus
}
#endif // #ifdef __cplusplus
//////////////////////////////////////////////////////////////////
#endif //__MY_FLTSENDMESSAGE_HEADER_FILE__

