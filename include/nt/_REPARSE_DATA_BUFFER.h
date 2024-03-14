/**
 * @file _REPARSE_DATA_BUFFER.h
 * @author tinysec
 * @brief
 * @version 0.0.1
    * 2024/03/14   init
 */

#ifndef __MY_REPARSE_DATA_BUFFER_HEADER_FILE__
#define __MY_REPARSE_DATA_BUFFER_HEADER_FILE__
//////////////////////////////////////////////////////////////////
#ifdef __cplusplus
extern "C"
    {
#endif // #ifdef __cplusplus
//////////////////////////////////////////////////////////////////
 
 
 
 
 struct _REPARSE_DATA_BUFFER {
  ULONG  ReparseTag;
  USHORT ReparseDataLength;
  USHORT Reserved;

  union {

    struct {
      USHORT SubstituteNameOffset;
      USHORT SubstituteNameLength;
      USHORT PrintNameOffset;
      USHORT PrintNameLength;
      ULONG  Flags;
      WCHAR  PathBuffer[1];
    } SymbolicLinkReparseBuffer;

    struct {
      USHORT SubstituteNameOffset;
      USHORT SubstituteNameLength;
      USHORT PrintNameOffset;
      USHORT PrintNameLength;
      WCHAR  PathBuffer[1];
    } MountPointReparseBuffer;

    struct {
      UCHAR DataBuffer[1];
    } GenericReparseBuffer;

	struct {
		USHORT Flags;    // 0x8000 = not compressed
		USHORT Length;  
		BYTE RawData[1]; 
	} HsmReparseBufferRaw;

  } DUMMYUNIONNAME;

};
 
 
 
 
 
 
 
//////////////////////////////////////////////////////////////////
#ifdef __cplusplus
}
#endif // #ifdef __cplusplus
//////////////////////////////////////////////////////////////////
#endif //__MY_REPARSE_DATA_BUFFER_HEADER_FILE__

