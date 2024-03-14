/**
 * @file _WPP_TRACE_CONTROL_BLOCK.h
 * @author tinysec
 * @brief
 * @version 0.0.1
    * 2024/03/14   init
 */

#ifndef __MY__WPP_TRACE_CONTROL_BLOCK_HEADER_FILE__
#define __MY__WPP_TRACE_CONTROL_BLOCK_HEADER_FILE__
//////////////////////////////////////////////////////////////////
#ifdef __cplusplus
extern "C"
    {
#endif // #ifdef __cplusplus
//////////////////////////////////////////////////////////////////

struct _WPP_TRACE_CONTROL_BLOCK
{
	LONG*	Callback;

	GUID*	ControlGuid;

	struct _WPP_TRACE_CONTROL_BLOCK* Next;

	INT64	Logger;

	struct _UNICODE_STRING*	RegistryPath;

	UCHAR	FlagsLen;

	UCHAR	Level;

	USHORT	Reserved;
	

	UINT32	Flags[1];

	UINT32	ReservedFlags;

	UINT64	RegHandle;

};
 
 
//////////////////////////////////////////////////////////////////
#ifdef __cplusplus
}
#endif // #ifdef __cplusplus
//////////////////////////////////////////////////////////////////
#endif //__MY__WPP_TRACE_CONTROL_BLOCK_HEADER_FILE__

