/**
 * @file EVENT_DESCRIPTOR.h
 * @author tinysec
 * @brief
 * @version 0.0.1
    * 2024/03/13   init
 */

#ifndef __MY_EVENT_DESCRIPTOR_HEADER_FILE__
#define __MY_EVENT_DESCRIPTOR_HEADER_FILE__
//////////////////////////////////////////////////////////////////
#ifdef __cplusplus
extern "C"
    {
#endif // #ifdef __cplusplus
#include <PshPack1.h>
//////////////////////////////////////////////////////////////////
 
 
 
//
// EVENT_DESCRIPTOR describes and categorizes an event.
// 
typedef struct _EVENT_DESCRIPTOR {

	USHORT      Id;
	UCHAR       Version;
	UCHAR       Channel;
	UCHAR       Level;
	UCHAR       Opcode;
	USHORT      Task;
	ULONGLONG   Keyword;

} EVENT_DESCRIPTOR, *PEVENT_DESCRIPTOR;

 
//////////////////////////////////////////////////////////////////
#include <PopPack.h>
#ifdef __cplusplus
}
#endif // #ifdef __cplusplus
//////////////////////////////////////////////////////////////////
#endif //__MY_EVENT_DESCRIPTOR_HEADER_FILE__



