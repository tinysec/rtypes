/**
 * @file FltRegisterFilter.h
 * @author tinysec
 * @brief
 * @version 0.0.1
    * 2024/03/14   init
 */

#ifndef __MY_FLTREGISTERFILTER_HEADER_FILE__
#define __MY_FLTREGISTERFILTER_HEADER_FILE__
//////////////////////////////////////////////////////////////////
#ifdef __cplusplus
extern "C"
    {
#endif // #ifdef __cplusplus
//////////////////////////////////////////////////////////////////
 
 
#include "_FLT_REGISTRATION.h"


//////////////////////////////////////////////////////////////////////////
 
 
 
 
 NTSTATUS __stdcall FltRegisterFilter(
    struct _DRIVER_OBJECT*         Driver,
    const struct _FLT_REGISTRATION *Registration,
   struct _FLT_FILTER*            *RetFilter
);
 
 
 
 
//////////////////////////////////////////////////////////////////
#ifdef __cplusplus
}
#endif // #ifdef __cplusplus
//////////////////////////////////////////////////////////////////
#endif //__MY_FLTREGISTERFILTER_HEADER_FILE__

