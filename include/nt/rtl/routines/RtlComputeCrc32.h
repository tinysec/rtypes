/**
 * @file RtlComputeCrc32.h
 * @author tinysec
 * @brief
 * @version 0.0.1
    * 2024/03/15   init
 */

#ifndef __MY_RTLCOMPUTECRC32_HEADER_FILE__
#define __MY_RTLCOMPUTECRC32_HEADER_FILE__
//////////////////////////////////////////////////////////////////
#ifdef __cplusplus
extern "C"
    {
#endif // #ifdef __cplusplus
//////////////////////////////////////////////////////////////////
 
 
 
 
 
UINT32 __stdcall  RtlComputeCrc32
(
  UINT32    dwInitial,
  UCHAR*	pData,
  INT       DataSize
);
 
 
 
 
 
 
//////////////////////////////////////////////////////////////////
#ifdef __cplusplus
}
#endif // #ifdef __cplusplus
//////////////////////////////////////////////////////////////////
#endif //__MY_RTLCOMPUTECRC32_HEADER_FILE__

