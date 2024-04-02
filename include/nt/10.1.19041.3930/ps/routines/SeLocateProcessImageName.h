/**
 * @file SeLocateProcessImageName.h
 * @author tinysec
 * @brief
 * @version 0.0.1
    * 2024/03/15   init
 */

#ifndef __MY_SELOCATEPROCESSIMAGENAME_HEADER_FILE__
#define __MY_SELOCATEPROCESSIMAGENAME_HEADER_FILE__
//////////////////////////////////////////////////////////////////
#ifdef __cplusplus
extern "C"
    {
#endif // #ifdef __cplusplus
//////////////////////////////////////////////////////////////////
 
 
 
 
 NTSTATUS __stdcall SeLocateProcessImageName(
  struct _EPROCESS*       Process,
  PUNICODE_STRING* pImageFileName
);
 
 
 
 
 
 
 
//////////////////////////////////////////////////////////////////
#ifdef __cplusplus
}
#endif // #ifdef __cplusplus
//////////////////////////////////////////////////////////////////
#endif //__MY_SELOCATEPROCESSIMAGENAME_HEADER_FILE__

