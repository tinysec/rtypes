/**
 * @file PFLT_CONTEXT_FREE_CALLBACK.h
 * @author tinysec
 * @brief
 * @version 0.0.1
    * 2024/03/14   init
 */

#ifndef __MY_PFLT_CONTEXT_FREE_CALLBACK_HEADER_FILE__
#define __MY_PFLT_CONTEXT_FREE_CALLBACK_HEADER_FILE__
//////////////////////////////////////////////////////////////////
#ifdef __cplusplus
extern "C"
    {
#endif // #ifdef __cplusplus
//////////////////////////////////////////////////////////////////
 
 
 
 
 
 
		typedef void
			(__stdcall *PFLT_CONTEXT_FREE_CALLBACK)(
			 PVOID Pool,
			 USHORT ContextType
			);

 
 
 
 
 
//////////////////////////////////////////////////////////////////
#ifdef __cplusplus
}
#endif // #ifdef __cplusplus
//////////////////////////////////////////////////////////////////
#endif //__MY_PFLT_CONTEXT_FREE_CALLBACK_HEADER_FILE__

