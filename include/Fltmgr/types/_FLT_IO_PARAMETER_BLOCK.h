/**
 * @file _FLT_IO_PARAMETER_BLOCK.h
 * @author tinysec
 * @brief
 * @version 0.0.1
    * 2024/03/14   init
 */
#ifndef __MY__FLT_IO_PARAMETER_BLOCK_HEADER_FILE__
#define __MY__FLT_IO_PARAMETER_BLOCK_HEADER_FILE__
//////////////////////////////////////////////////////////////////
#ifdef __cplusplus
extern "C"
    {
#endif // #ifdef __cplusplus
//////////////////////////////////////////////////////////////////
  
  
  
  

struct _FLT_IO_PARAMETER_BLOCK {


    //
    //  Fields from IRP
    //  Flags

    ULONG IrpFlags;

    //
    //  Major/minor functions from IRP
    //

    UCHAR MajorFunction;
    UCHAR MinorFunction;

    //
    //  The flags associated with operations.
    //  The IO_STACK_LOCATION.Flags field in the old model (SL_* flags)
    //

    UCHAR OperationFlags;

    //
    //  For alignment
    //

    UCHAR Reserved;




    //
    //  The FileObject that is the target for this
    //  IO operation.
    //

    struct _FILE_OBJECT* TargetFileObject;

    //
    //  Instance that i/o is directed to
    //

    struct _FLT_INSTANCE*  TargetInstance;

    //
    //  Normalized parameters for the operation
    //

    union _FLT_PARAMETERS Parameters;

};

  
  
  
  
  
  
  
//////////////////////////////////////////////////////////////////
#ifdef __cplusplus
}
#endif // #ifdef __cplusplus
//////////////////////////////////////////////////////////////////
#endif //__MY__FLT_IO_PARAMETER_BLOCK_HEADER_FILE__

