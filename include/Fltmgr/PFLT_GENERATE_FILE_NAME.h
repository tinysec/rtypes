/**
 * @file PFLT_GENERATE_FILE_NAME.h
 * @author tinysec
 * @brief
 * @version 0.0.1
    * 2024/03/14   init
 */

#ifndef __MY_PFLT_GENERATE_FILE_NAME_HEADER_FILE__
#define __MY_PFLT_GENERATE_FILE_NAME_HEADER_FILE__
//////////////////////////////////////////////////////////////////
#ifdef __cplusplus
extern "C"
    {
#endif // #ifdef __cplusplus
//////////////////////////////////////////////////////////////////
 
 
 
 
 
		typedef NTSTATUS
			(__stdcall *PFLT_GENERATE_FILE_NAME) (
			 struct _FLT_INSTANCE*  Instance,
			 struct _FILE_OBJECT * FileObject,
			  struct _FLT_CALLBACK_DATA* CallbackData,
			 ULONG  NameOptions,
			 PBOOLEAN CacheFileNameInformation,
			 struct _FLT_NAME_CONTROL* FileName
			);
 
 
 
 
 
 
//////////////////////////////////////////////////////////////////
#ifdef __cplusplus
}
#endif // #ifdef __cplusplus
//////////////////////////////////////////////////////////////////
#endif //__MY_PFLT_GENERATE_FILE_NAME_HEADER_FILE__

