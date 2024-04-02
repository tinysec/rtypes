/**
 * @file _KERNEL_HANDLE_ENTRY.h
 * @author tinysec
 * @brief
 * @version 0.0.1
    * 2024/03/27   init
 */

#ifndef __MY__KERNEL_HANDLE_ENTRY_HEADER_FILE__
#define __MY__KERNEL_HANDLE_ENTRY_HEADER_FILE__
//////////////////////////////////////////////////////////////////
#ifdef __cplusplus
extern "C"
    {
#endif // #ifdef __cplusplus
//////////////////////////////////////////////////////////////////
 
 
 
 // size = 0x018
struct _KERNEL_HANDLE_ENTRY
{
	// offset = 0x000
	PVOID offset_0x000;

	// offset = 0x008
	UINT32 offset_0x008;

	// offset = 0x00c
	UINT32 offset_0x00c;


	// offset = 0x010
	UINT32 offset_0x010;

	// offset = 0x014
	UINT32 offset_0x014;
};

 
 
 
 
 
 
 
//////////////////////////////////////////////////////////////////
#ifdef __cplusplus
}
#endif // #ifdef __cplusplus
//////////////////////////////////////////////////////////////////
#endif //__MY__KERNEL_HANDLE_ENTRY_HEADER_FILE__

