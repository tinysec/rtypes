/**
 * @file _CHECK_POINT_PROP.h
 * @author tinysec
 * @brief
 * @version 0.0.1
    * 2024/03/27   init
 */

#ifndef __MY__CHECK_POINT_PROP_HEADER_FILE__
#define __MY__CHECK_POINT_PROP_HEADER_FILE__
//////////////////////////////////////////////////////////////////
#ifdef __cplusplus
extern "C"
    {
#endif // #ifdef __cplusplus
//////////////////////////////////////////////////////////////////
 
 
// size is 0x34 , alloc at win32kfull!CkptRestore
struct _CHECK_POINT_PROP
{
	// offset = 0x000
	UINT32 offset_0x000;

	// offset = 0x004
	UINT32 offset_0x004;

	// offset = 0x008
	UINT32 offset_0x008;

	// offset = 0x00c
	UINT32 offset_0x00c;


	// offset = 0x010
	UINT32 offset_0x010;

	// offset = 0x014
	UINT32 offset_0x014;

	// offset = 0x018
	UINT32 offset_0x018;

	// offset = 0x01c
	UINT32 offset_0x01c;


	// offset = 0x020
	UINT32 offset_0x020;

	// offset = 0x024
	UINT32 offset_0x024;

	// offset = 0x028
	UINT32 offset_0x028;

	// offset = 0x02c
	UINT32 offset_0x02c;


	// offset = 0x030
	UINT32 offset_0x030;

};
 
 
 
 
 
 
 
 
//////////////////////////////////////////////////////////////////
#ifdef __cplusplus
}
#endif // #ifdef __cplusplus
//////////////////////////////////////////////////////////////////
#endif //__MY__CHECK_POINT_PROP_HEADER_FILE__

