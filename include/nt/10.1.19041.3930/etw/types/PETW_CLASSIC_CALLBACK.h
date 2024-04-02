/**
 * @file PETW_CLASSIC_CALLBACK.h
 * @author tinysec
 * @brief
 * @version 0.0.1
    * 2024/03/14   init
 */

#ifndef __MY_PETW_CLASSIC_CALLBACK_HEADER_FILE__
#define __MY_PETW_CLASSIC_CALLBACK_HEADER_FILE__
//////////////////////////////////////////////////////////////////
#ifdef __cplusplus
extern "C"
    {
#endif // #ifdef __cplusplus
//////////////////////////////////////////////////////////////////
 

 
typedef void (__stdcall *PETW_CLASSIC_CALLBACK)
(
    LPCGUID Guid,
    UCHAR ControlCode, 
    PVOID EnableContext, 
    PVOID CallbackContext
);
 
 
 
 
 
//////////////////////////////////////////////////////////////////
#ifdef __cplusplus
}
#endif // #ifdef __cplusplus
//////////////////////////////////////////////////////////////////
#endif //__MY_PETW_CLASSIC_CALLBACK_HEADER_FILE__

