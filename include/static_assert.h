/**
 * @file static_assert.h
 * @author tinysec
 * @brief 
 * @version 0.0.1
    * 2018/07/01   init
 */
#ifndef __MY_STATIC_ASSERT_HEADER_FILE__
#define __MY_STATIC_ASSERT_HEADER_FILE__

#ifdef __cplusplus
extern "C" {
#endif //#ifdef __cplusplus
//--------------------------------------------------------

#ifndef CONCAT
	#define CONCAT(A, B) A##B
#endif

#ifndef _STATIC_ASSERT0
	#define _STATIC_ASSERT0( _cond, _msg) typedef char CONCAT(static_assertion_, _msg)[(!!(_cond)) * 2 - 1]
#endif


#ifndef _STATIC_ASSERT1
	#define _STATIC_ASSERT1( _cond, _line) _STATIC_ASSERT0( (_cond) , CONCAT(at_line_, _line))
#endif


#ifndef STATIC_ASSERT
	#define STATIC_ASSERT(_cond) _STATIC_ASSERT1( ( _cond ), __LINE__)
#endif





//--------------------------------------------------------
#ifdef __cplusplus
}
#endif //#ifdef __cplusplus

#endif //__MY_STATIC_ASSERT_HEADER_FILE__
