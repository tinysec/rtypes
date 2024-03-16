/**
 * @file ExAllocatePool2.h
 * @author tinysec
 * @brief
 * @version 0.0.1
    * 2024/03/16   init
 */
#ifndef __MY_EXALLOCATEPOOL2_HEADER_FILE__
#define __MY_EXALLOCATEPOOL2_HEADER_FILE__
//////////////////////////////////////////////////////////////////
#ifdef __cplusplus
extern "C"
    {
#endif // #ifdef __cplusplus
//////////////////////////////////////////////////////////////////
  
  
  
  
  
PVOID __stdcall ExAllocatePool2(
  ULONG64 Flags,
  SIZE_T     NumberOfBytes,
  ULONG      Tag
);
  
  
  
  
  
  
//////////////////////////////////////////////////////////////////
#ifdef __cplusplus
}
#endif // #ifdef __cplusplus
//////////////////////////////////////////////////////////////////
#endif //__MY_EXALLOCATEPOOL2_HEADER_FILE__

