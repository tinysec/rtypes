/**
 * @file EtwRegister.h
 * @author tinysec
 * @brief
 * @version 0.0.1
    * 2014/02/05   init
 */
#ifndef __MY_ETW_REGISTER_HEADER_FILE__
#define __MY_ETW_REGISTER_HEADER_FILE__
//////////////////////////////////////////////////////////////////
#ifdef __cplusplus
extern "C"
    {
#endif // #ifdef __cplusplus
//////////////////////////////////////////////////////////////////
 
 

#ifndef WDK_BUILD
	#include "ETW_ENABLE_CALLBACK.h"
#endif


//////////////////////////////////////////////////////////////////////////


NTSTATUS __stdcall EtwRegister(
	LPCGUID            ProviderId,
	PETWENABLECALLBACK EnableCallback,
	PVOID              CallbackContext,
	PREGHANDLE         RegHandle
);
 
 
//////////////////////////////////////////////////////////////////
#ifdef __cplusplus
}
#endif // #ifdef __cplusplus
//////////////////////////////////////////////////////////////////
#endif //__MY_ETW_REGISTER_HEADER_FILE__

