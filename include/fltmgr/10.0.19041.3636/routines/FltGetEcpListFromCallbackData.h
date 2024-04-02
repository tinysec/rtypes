/**
 * @file FltGetEcpListFromCallbackData.h
 * @author tinysec
 * @brief
 * @version 0.0.1
    * 2024/03/16   init
 */
#ifndef __MY_FLTGETECPLISTFROMCALLBACKDATA_HEADER_FILE__
#define __MY_FLTGETECPLISTFROMCALLBACKDATA_HEADER_FILE__
//////////////////////////////////////////////////////////////////
#ifdef __cplusplus
extern "C"
    {
#endif // #ifdef __cplusplus
//////////////////////////////////////////////////////////////////
  
  
  
  
  
NTSTATUS __stdcall FltGetEcpListFromCallbackData(
	struct _FLT_FILTER*        Filter,
	struct _FLT_CALLBACK_DATA* CallbackData,
	struct _ECP_LIST**	EcpList
);
  
  
   
  
  
  
//////////////////////////////////////////////////////////////////
#ifdef __cplusplus
}
#endif // #ifdef __cplusplus
//////////////////////////////////////////////////////////////////
#endif //__MY_FLTGETECPLISTFROMCALLBACKDATA_HEADER_FILE__

