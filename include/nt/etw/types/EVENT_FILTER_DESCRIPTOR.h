/**
 * @file EVENT_FILTER_DESCRIPTOR.h
 * @author tinysec
 * @brief
 * @version 0.0.1
    * 2024/03/13   init
 */

#ifndef __MY_EVENT_FILTER_DESCRIPTOR_HEADER_FILE__
#define __MY_EVENT_FILTER_DESCRIPTOR_HEADER_FILE__
//////////////////////////////////////////////////////////////////
#ifdef __cplusplus
extern "C"
    {
#endif // #ifdef __cplusplus
//////////////////////////////////////////////////////////////////
 
 
//
// EVENT_FILTER_DESCRIPTOR is used to pass in enable filter
// data item to a user callback function.
// 
typedef struct _EVENT_FILTER_DESCRIPTOR {

	ULONGLONG   Ptr;
	ULONG       Size;
	ULONG       Type;

} EVENT_FILTER_DESCRIPTOR, *PEVENT_FILTER_DESCRIPTOR;


 
//////////////////////////////////////////////////////////////////
#ifdef __cplusplus
}
#endif // #ifdef __cplusplus
//////////////////////////////////////////////////////////////////
#endif //__MY_EVENT_FILTER_DESCRIPTOR_HEADER_FILE__


