/**
 * @file RtlGetCompressionWorkSpaceSize.h
 * @author tinysec
 * @brief
 * @version 0.0.1
    * 2024/03/16   init
 */
#ifndef __MY_RTLGETCOMPRESSIONWORKSPACESIZE_HEADER_FILE__
#define __MY_RTLGETCOMPRESSIONWORKSPACESIZE_HEADER_FILE__
//////////////////////////////////////////////////////////////////
#ifdef __cplusplus
extern "C"
    {
#endif // #ifdef __cplusplus
//////////////////////////////////////////////////////////////////
  
  
  
  
  
NTSTATUS __stdcall RtlGetCompressionWorkSpaceSize(
    USHORT CompressionFormatAndEngine,
   PULONG CompressBufferWorkSpaceSize,
   PULONG CompressFragmentWorkSpaceSize
);
  
  
  
  
  
  
//////////////////////////////////////////////////////////////////
#ifdef __cplusplus
}
#endif // #ifdef __cplusplus
//////////////////////////////////////////////////////////////////
#endif //__MY_RTLGETCOMPRESSIONWORKSPACESIZE_HEADER_FILE__

