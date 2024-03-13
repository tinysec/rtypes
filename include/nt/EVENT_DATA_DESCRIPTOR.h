/**
 * @file EVENT_DATA_DESCRIPTOR.h
 * @author tinysec
 * @brief
 * @version 0.0.1
    * 2024/03/13   init
 */

#ifndef __MY_EVENT_DATA_DESCRIPTOR_HEADER_FILE__
#define __MY_EVENT_DATA_DESCRIPTOR_HEADER_FILE__
//////////////////////////////////////////////////////////////////
#ifdef __cplusplus
extern "C"
    {
#endif // #ifdef __cplusplus


//////////////////////////////////////////////////////////////////



#ifdef WDK_BUILD
	
	#include <evntprov.h>

//////////////////////////////////////////////////////////////////
#else
//////////////////////////////////////////////////////////////////
 
//
// EVENT_DATA_DESCRIPTOR is used to pass in user data items
// in events.
// 
typedef struct _EVENT_DATA_DESCRIPTOR {

	ULONGLONG   Ptr;        // Pointer to data
	ULONG       Size;       // Size of data in bytes
	ULONG       Reserved;

} EVENT_DATA_DESCRIPTOR, *PEVENT_DATA_DESCRIPTOR;


//////////////////////////////////////////////////////////////////
#endif // #ifndef WDK_BUILD

#ifdef __cplusplus
}
#endif // #ifdef __cplusplus
//////////////////////////////////////////////////////////////////
#endif //__MY_EVENT_DATA_DESCRIPTOR_HEADER_FILE__




