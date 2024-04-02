/**
 * @file tagWINDOWCOMPOSITIONATTRIBDATA.h
 * @author tinysec
 * @brief
 * @version 0.0.1
    * 2024/03/27   init
 */

#ifndef __MY_TAG_WINDOW_COMPOSITION_ATTRIB_DATA_HEADER_FILE__
#define __MY_TAG_WINDOW_COMPOSITION_ATTRIB_DATA_HEADER_FILE__
//////////////////////////////////////////////////////////////////
#ifdef __cplusplus
extern "C"
    {
#endif // #ifdef __cplusplus
//////////////////////////////////////////////////////////////////
 

 
 // size = 0x018
struct tagWINDOWCOMPOSITIONATTRIBDATA
{
	// offset = 0x000
	UINT32 Attrib;

	// offset = 0x004
	UINT32 offset_0x004;

	// offset = 0x008
	PVOID pvData;

	// offset = 0x010
	UINT32 cbData;

	// offset = 0x014
	UINT32 offset_0x014;
};
 
 
 
 
 
 
 
//////////////////////////////////////////////////////////////////
#ifdef __cplusplus
}
#endif // #ifdef __cplusplus
//////////////////////////////////////////////////////////////////
#endif //__MY_TAG_WINDOW_COMPOSITION_ATTRIB_DATA_HEADER_FILE__

