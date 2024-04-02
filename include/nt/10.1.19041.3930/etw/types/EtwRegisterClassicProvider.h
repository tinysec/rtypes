/**
 * @file EtwRegisterClassicProvider.h
 * @author tinysec
 * @brief
 * @version 0.0.1
    * 2024/03/14   init
 */

#ifndef __MY_ETWREGISTERCLASSICPROVIDER_HEADER_FILE__
#define __MY_ETWREGISTERCLASSICPROVIDER_HEADER_FILE__
//////////////////////////////////////////////////////////////////
#ifdef __cplusplus
extern "C"
    {
#endif // #ifdef __cplusplus
//////////////////////////////////////////////////////////////////
 
 
#include "PETW_CLASSIC_CALLBACK.h"

typedef ULONGLONG REGHANDLE, *PREGHANDLE;
 
NTSTATUS __stdcall EtwRegisterClassicProvider 
(
    LPCGUID ProviderId, 
    ULONG Type, 
    PETW_CLASSIC_CALLBACK EnableCallback,
    PVOID CallbackContext,
    REGHANDLE *RegHandle
);
 
 
 
 
 
 
 
 
//////////////////////////////////////////////////////////////////
#ifdef __cplusplus
}
#endif // #ifdef __cplusplus
//////////////////////////////////////////////////////////////////
#endif //__MY_ETWREGISTERCLASSICPROVIDER_HEADER_FILE__

