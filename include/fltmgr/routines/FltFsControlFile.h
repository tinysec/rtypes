/**
 * @file FltFsControlFile.h
 * @author tinysec
 * @brief
 * @version 0.0.1
    * 2024/03/15   init
 */

#ifndef __MY_FLTFSCONTROLFILE_HEADER_FILE__
#define __MY_FLTFSCONTROLFILE_HEADER_FILE__
//////////////////////////////////////////////////////////////////
#ifdef __cplusplus
extern "C"
    {
#endif // #ifdef __cplusplus
//////////////////////////////////////////////////////////////////
 
 
 
 
 NTSTATUS __stdcall FltFsControlFile(
	struct _FLT_INSTANCE * Instance,
	PFILE_OBJECT  FileObject,
	ULONG         FsControlCode,
	PVOID         InputBuffer,
	ULONG         InputBufferLength,
	PVOID         OutputBuffer,
	ULONG         OutputBufferLength,
	PULONG        LengthReturned
);
 
 
 
 
 
 
 
//////////////////////////////////////////////////////////////////
#ifdef __cplusplus
}
#endif // #ifdef __cplusplus
//////////////////////////////////////////////////////////////////
#endif //__MY_FLTFSCONTROLFILE_HEADER_FILE__

