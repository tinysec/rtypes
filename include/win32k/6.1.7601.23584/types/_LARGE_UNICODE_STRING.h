/**
 * @file _LARGE_UNICODE_STRING.h
 * @author tinysec
 * @brief
 * @version 0.0.1
    * 2024/04/01   init
 */

#ifndef __MY__LARGE_UNICODE_STRING_HEADER_FILE__
#define __MY__LARGE_UNICODE_STRING_HEADER_FILE__
//////////////////////////////////////////////////////////////////
#ifdef __cplusplus
extern "C"
    {
#endif // #ifdef __cplusplus
//////////////////////////////////////////////////////////////////
 
 
// size = 0x010
struct _LARGE_UNICODE_STRING
{
	// offset = 0x000
	UINT32 Length;

	// offset = 0x004
	UINT32 MaximumLength : 31;
	UINT32 bAnsi: 1;

	// offset = 0x008
	WCHAR* Buffer;

};

 
 
 
 
 
 
//////////////////////////////////////////////////////////////////
#ifdef __cplusplus
}
#endif // #ifdef __cplusplus
//////////////////////////////////////////////////////////////////
#endif //__MY__LARGE_UNICODE_STRING_HEADER_FILE__

