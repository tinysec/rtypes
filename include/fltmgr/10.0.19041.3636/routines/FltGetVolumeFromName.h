/**
 * @file FltGetVolumeFromName.h
 * @author tinysec
 * @brief
 * @version 0.0.1
    * 2024/03/16   init
 */
#ifndef __MY_FLTGETVOLUMEFROMNAME_HEADER_FILE__
#define __MY_FLTGETVOLUMEFROMNAME_HEADER_FILE__
//////////////////////////////////////////////////////////////////
#ifdef __cplusplus
extern "C"
    {
#endif // #ifdef __cplusplus
//////////////////////////////////////////////////////////////////
  
  
  
  
  
  
NTSTATUS __stdcall FltGetVolumeFromName(
 struct _FLT_FILTER *      Filter,
   PCUNICODE_STRING VolumeName,
  struct _FLT_VOLUME** RetVolume
);
  
  
  
  
  
//////////////////////////////////////////////////////////////////
#ifdef __cplusplus
}
#endif // #ifdef __cplusplus
//////////////////////////////////////////////////////////////////
#endif //__MY_FLTGETVOLUMEFROMNAME_HEADER_FILE__

