/**
 * @file _FILE_STAT_INFORMATION.h
 * @author tinysec
 * @brief
 * @version 0.0.1
    * 2024/03/14   init
 */
#ifndef __MY__FILE_STAT_INFORMATION_HEADER_FILE__
#define __MY__FILE_STAT_INFORMATION_HEADER_FILE__
//////////////////////////////////////////////////////////////////
#ifdef __cplusplus
extern "C"
    {
#endif // #ifdef __cplusplus
//////////////////////////////////////////////////////////////////
  
  
  
  
  
struct _FILE_STAT_INFORMATION {
  LARGE_INTEGER FileId;
  LARGE_INTEGER CreationTime;
  LARGE_INTEGER LastAccessTime;
  LARGE_INTEGER LastWriteTime;
  LARGE_INTEGER ChangeTime;
  LARGE_INTEGER AllocationSize;
  LARGE_INTEGER EndOfFile;
  ULONG         FileAttributes;
  ULONG         ReparseTag;
  ULONG         NumberOfLinks;
  ACCESS_MASK   EffectiveAccess;
};
  
  
  
  
  
  
//////////////////////////////////////////////////////////////////
#ifdef __cplusplus
}
#endif // #ifdef __cplusplus
//////////////////////////////////////////////////////////////////
#endif //__MY__FILE_STAT_INFORMATION_HEADER_FILE__

