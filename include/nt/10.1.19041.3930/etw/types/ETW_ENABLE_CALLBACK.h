/**
 * @file ETW_ENABLE_CALLBACK.h
 * @author tinysec
 * @brief
 * @version 0.0.1
    * 2024/03/13   init
 */

#ifndef __MY_ETW_ENABLE_CALLBACK_HEADER_FILE__
#define __MY_ETW_ENABLE_CALLBACK_HEADER_FILE__
//////////////////////////////////////////////////////////////////
#ifdef __cplusplus
extern "C"
    {
#endif // #ifdef __cplusplus



#ifndef WDK_BUILD
//////////////////////////////////////////////////////////////////

typedef void ( __stdcall *PETWENABLECALLBACK) 
(
     LPCGUID SourceId,
     ULONG ControlCode,
     UCHAR Level,
     ULONGLONG MatchAnyKeyword,
     ULONGLONG MatchAllKeyword,
     PEVENT_FILTER_DESCRIPTOR FilterData,
     PVOID CallbackContext
);

//////////////////////////////////////////////////////////////////
#endif // #ifndef WDK_BUILD


#include <PopPack.h>
#ifdef __cplusplus
}
#endif // #ifdef __cplusplus
//////////////////////////////////////////////////////////////////
#endif //__MY_ETW_ENABLE_CALLBACK_HEADER_FILE__

 
