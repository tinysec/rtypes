/**
 * @file FltAllocateCallbackData.h
 * @author tinysec
 * @brief
 * @version 0.0.1
    * 2024/03/15   init
 */

#ifndef __MY_FLTALLOCATECALLBACKDATA_HEADER_FILE__
#define __MY_FLTALLOCATECALLBACKDATA_HEADER_FILE__
//////////////////////////////////////////////////////////////////
#ifdef __cplusplus
extern "C"
    {
#endif // #ifdef __cplusplus
//////////////////////////////////////////////////////////////////
 
 
 
 
 
 
 
NTSTATUS __stdcall FltAllocateCallbackData(
	struct _FLT_INSTANCE *      Instance,
	struct _FILE_OBJECT *       FileObject,
	struct _FLT_CALLBACK_DATA** RetNewCallbackData
);
 
 
 
 
//////////////////////////////////////////////////////////////////
#ifdef __cplusplus
}
#endif // #ifdef __cplusplus
//////////////////////////////////////////////////////////////////
#endif //__MY_FLTALLOCATECALLBACKDATA_HEADER_FILE__

