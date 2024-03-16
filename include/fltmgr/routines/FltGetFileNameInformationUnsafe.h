/**
 * @file FltGetFileNameInformationUnsafe.h
 * @author tinysec
 * @brief
 * @version 0.0.1
    * 2024/03/16   init
 */
#ifndef __MY_FLTGETFILENAMEINFORMATIONUNSAFE_HEADER_FILE__
#define __MY_FLTGETFILENAMEINFORMATIONUNSAFE_HEADER_FILE__
//////////////////////////////////////////////////////////////////
#ifdef __cplusplus
extern "C"
    {
#endif // #ifdef __cplusplus
//////////////////////////////////////////////////////////////////
  
  
  
  
  
NTSTATUS __stdcall FltGetFileNameInformationUnsafe(
	PFILE_OBJECT               FileObject,
	struct _FLT_INSTANCE *              Instance,
	ULONG      NameOptions,
	struct _FLT_FILE_NAME_INFORMATION** FileNameInformation
);
  
  
  
  
  
  
//////////////////////////////////////////////////////////////////
#ifdef __cplusplus
}
#endif // #ifdef __cplusplus
//////////////////////////////////////////////////////////////////
#endif //__MY_FLTGETFILENAMEINFORMATIONUNSAFE_HEADER_FILE__

