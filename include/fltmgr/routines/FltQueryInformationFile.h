/**
 * @file FltQueryInformationFile.h
 * @author tinysec
 * @brief
 * @version 0.0.1
    * 2024/03/15   init
 */

#ifndef __MY_FLTQUERYINFORMATIONFILE_HEADER_FILE__
#define __MY_FLTQUERYINFORMATIONFILE_HEADER_FILE__
//////////////////////////////////////////////////////////////////
#ifdef __cplusplus
extern "C"
    {
#endif // #ifdef __cplusplus
//////////////////////////////////////////////////////////////////
 
 
 
 
 
 
NTSTATUS __stdcall FltQueryInformationFile(
	struct _FLT_INSTANCE *          Instance,
	struct _FILE_OBJECT *           FileObject,
	PVOID                  FileInformation,
	ULONG                  Length,
	FILE_INFORMATION_CLASS FileInformationClass,
	PULONG                 LengthReturned
);


 
 
 
//////////////////////////////////////////////////////////////////
#ifdef __cplusplus
}
#endif // #ifdef __cplusplus
//////////////////////////////////////////////////////////////////
#endif //__MY_FLTQUERYINFORMATIONFILE_HEADER_FILE__

