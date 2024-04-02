/**
 * @file _FLT_FILE_NAME_INFORMATION.h
 * @author tinysec
 * @brief
 * @version 0.0.1
    * 2024/03/16   init
 */
#ifndef __MY__FLT_FILE_NAME_INFORMATION_HEADER_FILE__
#define __MY__FLT_FILE_NAME_INFORMATION_HEADER_FILE__
//////////////////////////////////////////////////////////////////
#ifdef __cplusplus
extern "C"
    {
#endif // #ifdef __cplusplus
//////////////////////////////////////////////////////////////////
  
  
  
  
struct _FLT_FILE_NAME_INFORMATION 
{
  USHORT    Size;

  USHORT	 NamesParsed;

  ULONG      Format;

  UNICODE_STRING             Name;
  UNICODE_STRING             Volume;
  UNICODE_STRING             Share;
  UNICODE_STRING             Extension;
  UNICODE_STRING             Stream;
  UNICODE_STRING             FinalComponent;
  UNICODE_STRING             ParentDir;
};
  
  
  
  
  
  
  
//////////////////////////////////////////////////////////////////
#ifdef __cplusplus
}
#endif // #ifdef __cplusplus
//////////////////////////////////////////////////////////////////
#endif //__MY__FLT_FILE_NAME_INFORMATION_HEADER_FILE__

