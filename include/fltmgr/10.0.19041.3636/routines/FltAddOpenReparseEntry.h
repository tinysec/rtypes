/**
 * @file FltAddOpenReparseEntry.h
 * @author tinysec
 * @brief
 * @version 0.0.1
    * 2024/03/16   init
 */
#ifndef __MY_FLTADDOPENREPARSEENTRY_HEADER_FILE__
#define __MY_FLTADDOPENREPARSEENTRY_HEADER_FILE__
//////////////////////////////////////////////////////////////////
#ifdef __cplusplus
extern "C"
    {
#endif // #ifdef __cplusplus
//////////////////////////////////////////////////////////////////
  
  
  
NTSTATUS __stdcall FltAddOpenReparseEntry(
struct _FLT_FILTER *              Filter,
struct _FLT_CALLBACK_DATA*       Data,
struct _OPEN_REPARSE_LIST_ENTRY* OpenReparseEntry
);
  
  
  
  
  
  
  
  
//////////////////////////////////////////////////////////////////
#ifdef __cplusplus
}
#endif // #ifdef __cplusplus
//////////////////////////////////////////////////////////////////
#endif //__MY_FLTADDOPENREPARSEENTRY_HEADER_FILE__

