/**
 * @file _OPEN_REPARSE_LIST_ENTRY.h
 * @author tinysec
 * @brief
 * @version 0.0.1
    * 2024/03/16   init
 */
#ifndef __MY__OPEN_REPARSE_LIST_ENTRY_HEADER_FILE__
#define __MY__OPEN_REPARSE_LIST_ENTRY_HEADER_FILE__
//////////////////////////////////////////////////////////////////
#ifdef __cplusplus
extern "C"
    {
#endif // #ifdef __cplusplus
//////////////////////////////////////////////////////////////////
  
  
  
  
struct _OPEN_REPARSE_LIST_ENTRY 
{
 // 0x00
  LIST_ENTRY OpenReparseListEntry;

  // 0x08
  ULONG      ReparseTag;

  // 0x0C
  ULONG      Flags;

  // 0x10
  GUID       ReparseGuid;

  // 0x20
  USHORT     Size;

  // 0x22
  USHORT     RemainingLength;

};
  
  
  
  
  
  
  
//////////////////////////////////////////////////////////////////
#ifdef __cplusplus
}
#endif // #ifdef __cplusplus
//////////////////////////////////////////////////////////////////
#endif //__MY__OPEN_REPARSE_LIST_ENTRY_HEADER_FILE__

