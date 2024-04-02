/**
 * @file tagPOINT.h
 * @author tinysec
 * @brief
 * @version 0.0.1
    * 2024/04/01   init
 */

#ifndef __MY_TAGPOINT_HEADER_FILE__
#define __MY_TAGPOINT_HEADER_FILE__
//////////////////////////////////////////////////////////////////
#ifdef __cplusplus
extern "C"
    {
#endif // #ifdef __cplusplus
//////////////////////////////////////////////////////////////////
 
 


// size = 0x008
struct tagPOINT
{
	// offset = 0x000
	INT32 x;

	// offset = 0x004
	INT32 y;
};

 
 
 
 
 
 
 
 
//////////////////////////////////////////////////////////////////
#ifdef __cplusplus
}
#endif // #ifdef __cplusplus
//////////////////////////////////////////////////////////////////
#endif //__MY_TAGPOINT_HEADER_FILE__

