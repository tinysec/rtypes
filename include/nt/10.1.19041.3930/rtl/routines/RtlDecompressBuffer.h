/**
 * @file RtlDecompressBuffer.h
 * @author tinysec
 * @brief
 * @version 0.0.1
    * 2024/03/14   init
 */

#ifndef __MY_RTLDECOMPRESSBUFFER_HEADER_FILE__
#define __MY_RTLDECOMPRESSBUFFER_HEADER_FILE__
//////////////////////////////////////////////////////////////////
#ifdef __cplusplus
extern "C"
    {
#endif // #ifdef __cplusplus
//////////////////////////////////////////////////////////////////
 
 
 
 
 
 
NTSTATUS __stdcall RtlDecompressBuffer(
    USHORT CompressionFormat,
   PUCHAR UncompressedBuffer,
    ULONG  UncompressedBufferSize,
    PUCHAR CompressedBuffer,
    ULONG  CompressedBufferSize,
   PULONG FinalUncompressedSize
);
 
 
 
 
 
//////////////////////////////////////////////////////////////////
#ifdef __cplusplus
}
#endif // #ifdef __cplusplus
//////////////////////////////////////////////////////////////////
#endif //__MY_RTLDECOMPRESSBUFFER_HEADER_FILE__

