/**
 * @file IoQueryFullDriverPath.h
 * @author tinysec
 * @brief
 * @version 0.0.1
    * 2024/03/14   init
 */

#ifndef __MY_IOQUERYFULLDRIVERPATH_HEADER_FILE__
#define __MY_IOQUERYFULLDRIVERPATH_HEADER_FILE__
//////////////////////////////////////////////////////////////////
#ifdef __cplusplus
extern "C"
    {
#endif // #ifdef __cplusplus
//////////////////////////////////////////////////////////////////
 
 
 
 NTSTATUS __stdcall IoQueryFullDriverPath(
    struct _DRIVER_OBJECT*  DriverObject,
   struct _UNICODE_STRING*  FullPath
);
 
 
 
 
 
 
 
 
//////////////////////////////////////////////////////////////////
#ifdef __cplusplus
}
#endif // #ifdef __cplusplus
//////////////////////////////////////////////////////////////////
#endif //__MY_IOQUERYFULLDRIVERPATH_HEADER_FILE__

