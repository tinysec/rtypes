/**
 * @file PFLT_NORMALIZE_NAME_COMPONENT.h
 * @author tinysec
 * @brief
 * @version 0.0.1
    * 2024/03/14   init
 */

#ifndef __MY_PFLT_NORMALIZE_NAME_COMPONENT_HEADER_FILE__
#define __MY_PFLT_NORMALIZE_NAME_COMPONENT_HEADER_FILE__
//////////////////////////////////////////////////////////////////
#ifdef __cplusplus
extern "C"
    {
#endif // #ifdef __cplusplus
//////////////////////////////////////////////////////////////////
 
 
 
 
typedef NTSTATUS (__stdcall *PFLT_NORMALIZE_NAME_COMPONENT) 
(
	 struct _FLT_INSTANCE* Instance,

	 struct _UNICODE_STRING* ParentDirectory,

	 USHORT VolumeNameLength,

	 struct _UNICODE_STRING* Component,

	 struct _FILE_NAMES_INFORMATION* ExpandComponentName,

	 ULONG ExpandComponentNameLength,

	 ULONG  Flags,

	 PVOID *NormalizationContext
);

 
 
 
 
 
 
//////////////////////////////////////////////////////////////////
#ifdef __cplusplus
}
#endif // #ifdef __cplusplus
//////////////////////////////////////////////////////////////////
#endif //__MY_PFLT_NORMALIZE_NAME_COMPONENT_HEADER_FILE__

