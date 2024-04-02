/**
 * @file _HANDLEENTRY.h
 * @author tinysec
 * @brief
 * @version 0.0.1
    * 2024/03/27   init
 */

#ifndef __MY__HANDLE_ENTRY_HEADER_FILE__
#define __MY__HANDLE_ENTRY_HEADER_FILE__
//////////////////////////////////////////////////////////////////
#ifdef __cplusplus
extern "C"
    {
#endif // #ifdef __cplusplus
//////////////////////////////////////////////////////////////////
 
 
 
 
 
 // size = 0x010
struct _HANDLEENTRY
{
	// offset = 0x000
	struct _HEAD* phead;

	// offset = 0x008
	UINT32 offset_0x008;

	// offset = 0x00c
	UINT32 offset_0x00c;

};
 
 
 
 
 
 
//////////////////////////////////////////////////////////////////
#ifdef __cplusplus
}
#endif // #ifdef __cplusplus
//////////////////////////////////////////////////////////////////
#endif //__MY__HANDLE_ENTRY_HEADER_FILE__

