/**
 * @file _W32THREAD.h
 * @author tinysec
 * @brief
 * @version 0.0.1
    * 2024/03/13   init
 */

#ifndef __MY__W32THREAD_HEADER_FILE__
#define __MY__W32THREAD_HEADER_FILE__
//////////////////////////////////////////////////////////////////
#ifdef __cplusplus
extern "C"
    {
#endif // #ifdef __cplusplus
#include <PshPack1.h>
//////////////////////////////////////////////////////////////////
 
 
 

struct _W32THREAD
{
	struct _ETHREAD* pEThread;
};


 
 
//////////////////////////////////////////////////////////////////
#include <PopPack.h>
#ifdef __cplusplus
}
#endif // #ifdef __cplusplus
//////////////////////////////////////////////////////////////////
#endif //__MY__W32THREAD_HEADER_FILE__

