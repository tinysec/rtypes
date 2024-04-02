/**
 * @file RtlUnicodeToMultiByteSize.h
 * @author tinysec
 * @brief
 * @version 0.0.1
    * 2024/03/26   init
 */

#ifndef __MY_RTLUNICODETOMULTIBYTESIZE_HEADER_FILE__
#define __MY_RTLUNICODETOMULTIBYTESIZE_HEADER_FILE__
//////////////////////////////////////////////////////////////////
#ifdef __cplusplus
extern "C"
    {
#endif // #ifdef __cplusplus
//////////////////////////////////////////////////////////////////
 
 
 
 
NTSTATUS __stdcall RtlUnicodeToMultiByteSize(
	PULONG BytesInMultiByteString,
	PWCHAR   UnicodeString,
	ULONG  BytesInUnicodeString
);
 
 
 
 
 
 
 
//////////////////////////////////////////////////////////////////
#ifdef __cplusplus
}
#endif // #ifdef __cplusplus
//////////////////////////////////////////////////////////////////
#endif //__MY_RTLUNICODETOMULTIBYTESIZE_HEADER_FILE__

