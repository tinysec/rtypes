/**
 * @file _FLT_CALLBACK_DATA.h
 * @author tinysec
 * @brief
 * @version 0.0.1
    * 2024/03/14   init
 */
#ifndef __MY__FLT_CALLBACK_DATA_HEADER_FILE__
#define __MY__FLT_CALLBACK_DATA_HEADER_FILE__
//////////////////////////////////////////////////////////////////
#ifdef __cplusplus
extern "C"
    {
#endif // #ifdef __cplusplus
//////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////////////
  
  
struct _FLT_CALLBACK_DATA 
{
  ULONG     Flags;

  struct _ETHREAD*					Thread;

  struct _FLT_IO_PARAMETER_BLOCK*   Iopb;

  IO_STATUS_BLOCK					IoStatus;

  struct _FLT_TAG_DATA_BUFFER*		TagData;

  union {

    struct {
      LIST_ENTRY QueueLinks;

      PVOID      QueueContext[2];
    };

    PVOID FilterContext[4];
  };

  KPROCESSOR_MODE             RequestorMode;
};
  
  
  
  
  
  
  
  
//////////////////////////////////////////////////////////////////
#ifdef __cplusplus
}
#endif // #ifdef __cplusplus
//////////////////////////////////////////////////////////////////
#endif //__MY__FLT_CALLBACK_DATA_HEADER_FILE__

