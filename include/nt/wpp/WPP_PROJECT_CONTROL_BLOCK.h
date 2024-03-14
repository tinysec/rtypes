/**
 * @file WPP_PROJECT_CONTROL_BLOCK.h
 * @author tinysec
 * @brief
 * @version 0.0.1
    * 2024/03/14   init
 */

#ifndef __MY_WPP_PROJECT_CONTROL_BLOCK_HEADER_FILE__
#define __MY_WPP_PROJECT_CONTROL_BLOCK_HEADER_FILE__
//////////////////////////////////////////////////////////////////
#ifdef __cplusplus
extern "C"
    {
#endif // #ifdef __cplusplus
//////////////////////////////////////////////////////////////////
 
 
#include "_WPP_TRACE_CONTROL_BLOCK.h"


//////////////////////////////////////////////////////////////////////////
 
union WPP_PROJECT_CONTROL_BLOCK
{
	struct _WPP_TRACE_CONTROL_BLOCK* Control;

	UCHAR	ReserveSpace[64];
};
 
 
 
 
 
 
 
 
//////////////////////////////////////////////////////////////////
#ifdef __cplusplus
}
#endif // #ifdef __cplusplus
//////////////////////////////////////////////////////////////////
#endif //__MY_WPP_PROJECT_CONTROL_BLOCK_HEADER_FILE__

