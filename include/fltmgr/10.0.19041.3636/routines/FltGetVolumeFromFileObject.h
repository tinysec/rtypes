/**
 * @file FltGetVolumeFromFileObject.h
 * @author tinysec
 * @brief
 * @version 0.0.1
    * 2024/03/15   init
 */

#ifndef __MY_FLTGETVOLUMEFROMFILEOBJECT_HEADER_FILE__
#define __MY_FLTGETVOLUMEFROMFILEOBJECT_HEADER_FILE__
//////////////////////////////////////////////////////////////////
#ifdef __cplusplus
extern "C"
    {
#endif // #ifdef __cplusplus
//////////////////////////////////////////////////////////////////
 
 
 
 
 
 
 NTSTATUS __stdcall FltGetVolumeFromFileObject(
   struct _FLT_FILTER*  Filter,
    struct _FILE_OBJECT* FileObject,
   struct _FLT_VOLUME** RetVolume
);
 
 
 
 
 
//////////////////////////////////////////////////////////////////
#ifdef __cplusplus
}
#endif // #ifdef __cplusplus
//////////////////////////////////////////////////////////////////
#endif //__MY_FLTGETVOLUMEFROMFILEOBJECT_HEADER_FILE__

