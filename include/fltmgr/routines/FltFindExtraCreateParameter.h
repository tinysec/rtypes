/**
 * @file FltFindExtraCreateParameter.h
 * @author tinysec
 * @brief
 * @version 0.0.1
    * 2024/03/16   init
 */
#ifndef __MY_FLTFINDEXTRACREATEPARAMETER_HEADER_FILE__
#define __MY_FLTFINDEXTRACREATEPARAMETER_HEADER_FILE__
//////////////////////////////////////////////////////////////////
#ifdef __cplusplus
extern "C"
    {
#endif // #ifdef __cplusplus
//////////////////////////////////////////////////////////////////
  
  
  
  
NTSTATUS __stdcall FltFindExtraCreateParameter(
	struct _FLT_FILTER * Filter,
	struct _ECP_LIST**   EcpList,
	LPCGUID     EcpType,
	PVOID*	EcpContext,
	ULONG*	EcpContextSize
);  
  
  
  
  
  
  
  
//////////////////////////////////////////////////////////////////
#ifdef __cplusplus
}
#endif // #ifdef __cplusplus
//////////////////////////////////////////////////////////////////
#endif //__MY_FLTFINDEXTRACREATEPARAMETER_HEADER_FILE__

