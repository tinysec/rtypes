/**
 * @file _FLT_RELATED_OBJECTS.h
 * @author tinysec
 * @brief
 * @version 0.0.1
    * 2024/03/14   init
 */
#ifndef __MY__FLT_RELATED_OBJECTS_HEADER_FILE__
#define __MY__FLT_RELATED_OBJECTS_HEADER_FILE__
//////////////////////////////////////////////////////////////////
#ifdef __cplusplus
extern "C"
    {
#endif // #ifdef __cplusplus
//////////////////////////////////////////////////////////////////
  
  
  
  
//
//  This structure is passed to a filter's pre/post operation callback
//  routines and defines all of the handles associated with the given
//  operation.
//

struct _FLT_RELATED_OBJECTS {

	USHORT  Size;
	USHORT  TransactionContext;            //TxF mini-version
	struct _FLT_FILTER *  Filter;
	struct _FLT_VOLUME *  Volume;
	struct _FLT_INSTANCE *  Instance;
	struct _FILE_OBJECT *  FileObject;
	struct _KTRANSACTION*  Transaction;
} ;



  
  
  
  
  
//////////////////////////////////////////////////////////////////
#ifdef __cplusplus
}
#endif // #ifdef __cplusplus
//////////////////////////////////////////////////////////////////
#endif //__MY__FLT_RELATED_OBJECTS_HEADER_FILE__

