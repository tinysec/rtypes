/**
 * @file FltReadFile.h
 * @author tinysec
 * @brief
 * @version 0.0.1
    * 2024/03/16   init
 */
#ifndef __MY_FLTREADFILE_HEADER_FILE__
#define __MY_FLTREADFILE_HEADER_FILE__
//////////////////////////////////////////////////////////////////
#ifdef __cplusplus
extern "C"
    {
#endif // #ifdef __cplusplus
//////////////////////////////////////////////////////////////////
  
  
  
  
NTSTATUS __stdcall FltReadFile(
	struct _FLT_INSTANCE *                    InitiatingInstance,
	PFILE_OBJECT                     FileObject,
	PLARGE_INTEGER                   ByteOffset,
	ULONG                            Length,
	PVOID                            Buffer,
	ULONG           Flags,
	PULONG                           BytesRead,
	PFLT_COMPLETED_ASYNC_IO_CALLBACK CallbackRoutine,
	PVOID                            CallbackContext
);
  
  
  
  
  
  
  
//////////////////////////////////////////////////////////////////
#ifdef __cplusplus
}
#endif // #ifdef __cplusplus
//////////////////////////////////////////////////////////////////
#endif //__MY_FLTREADFILE_HEADER_FILE__

