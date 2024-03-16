/**
 * @file _FLT_SET_CONTEXT_OPERATION.h
 * @author tinysec
 * @brief
 * @version 0.0.1
    * 2024/03/16   init
 */
#ifndef __MY_FLT_SET_CONTEXT_OPERATION_HEADER_FILE__
#define __MY_FLT_SET_CONTEXT_OPERATION_HEADER_FILE__
//////////////////////////////////////////////////////////////////
#ifdef __cplusplus
extern "C"
    {
#endif // #ifdef __cplusplus
//////////////////////////////////////////////////////////////////
  
  
  
enum _FLT_SET_CONTEXT_OPERATION {

    //
    //  If a context already exists, replace with the given context.
    //  Return the old context.
    //

    FLT_SET_CONTEXT_REPLACE_IF_EXISTS,

    //
    //  If a context already exists, keep the old context and return an
    //  error status.  Return the old context (yes, we really do want to
    //  return the old context, the caller already has the new context).
    //  The context returned must later be released.
    //

    FLT_SET_CONTEXT_KEEP_IF_EXISTS

} ;
  
  
  
  
  
  
  
  
//////////////////////////////////////////////////////////////////
#ifdef __cplusplus
}
#endif // #ifdef __cplusplus
//////////////////////////////////////////////////////////////////
#endif //__MY_FLT_SET_CONTEXT_OPERATION_HEADER_FILE__

