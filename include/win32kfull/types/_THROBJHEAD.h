/**
 * @file _THROBJHEAD.h
 * @author tinysec
 * @brief
 * @version 0.0.1
    * 2024/03/13   init
 */

#ifndef __MY__THROBJHEAD_HEADER_FILE__
#define __MY__THROBJHEAD_HEADER_FILE__
//////////////////////////////////////////////////////////////////
#ifdef __cplusplus
extern "C"
    {
#endif // #ifdef __cplusplus
//////////////////////////////////////////////////////////////////
 
#include "_HEAD.h"

//////////////////////////////////////////////////////////////////////////
 
struct _THROBJHEAD
{
	struct _HEAD head;
	
	struct tagTHREADINFO* pti;
};
 
 
 
//////////////////////////////////////////////////////////////////
#ifdef __cplusplus
}
#endif // #ifdef __cplusplus
//////////////////////////////////////////////////////////////////
#endif //__MY__THROBJHEAD_HEADER_FILE__

