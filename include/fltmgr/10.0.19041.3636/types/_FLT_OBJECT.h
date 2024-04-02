/**
 * @file _FLT_OBJECT.h
 * @author tinysec
 * @brief
 * @version 0.0.1
    * 2024/03/15   init
 */

#ifndef __MY__FLT_OBJECT_HEADER_FILE__
#define __MY__FLT_OBJECT_HEADER_FILE__
//////////////////////////////////////////////////////////////////
#ifdef __cplusplus
extern "C"
    {
#endif // #ifdef __cplusplus
//////////////////////////////////////////////////////////////////
 
 
#include "../../nt/sync/types/_EX_RUNDOWN_REF.h"
 

// size = 0x030
struct _FLT_OBJECT
{
	// offset = 0x000;
	UINT32 Flags;

	// offset = 0x004;
	UINT32 PointerCount;

	// offset = 0x008;
	struct _EX_RUNDOWN_REF RundownRef;

	// offset = 0x010;
	struct _LIST_ENTRY PrimaryLink;

	// offset = 0x020;
	struct _GUID UniqueIdentifier;
};

 
 
 
 
//////////////////////////////////////////////////////////////////
#ifdef __cplusplus
}
#endif // #ifdef __cplusplus
//////////////////////////////////////////////////////////////////
#endif //__MY__FLT_OBJECT_HEADER_FILE__

