/**
 * @file RtlDecompressBufferEx.h
 * @author tinysec
 * @brief
 * @version 0.0.1
    * 2024/03/16   init
 */
#ifndef __MY_RTLDECOMPRESSBUFFEREX_HEADER_FILE__
#define __MY_RTLDECOMPRESSBUFFEREX_HEADER_FILE__
//////////////////////////////////////////////////////////////////
#ifdef __cplusplus
extern "C"
    {
#endif // #ifdef __cplusplus
//////////////////////////////////////////////////////////////////
  
  
  
  
NTSTATUS __stdcall RtlDecompressBufferEx(
	USHORT CompressionFormat,
	PUCHAR UncompressedBuffer,
	ULONG  UncompressedBufferSize,
	PUCHAR CompressedBuffer,
	ULONG  CompressedBufferSize,
	PULONG FinalUncompressedSize,
	PVOID  WorkSpace
);
  
  
  
  
  
  
  
//////////////////////////////////////////////////////////////////
#ifdef __cplusplus
}
#endif // #ifdef __cplusplus
//////////////////////////////////////////////////////////////////
#endif //__MY_RTLDECOMPRESSBUFFEREX_HEADER_FILE__

