/**
 * @file version.h
 * @author tinysec
 * @brief
 * @version 0.0.1
    * 2006/11/05   init
 */
#ifndef __MY_VERSION_HEADER_FILE__
#define __MY_VERSION_HEADER_FILE__
//////////////////////////////////////////////////////////////////
#ifdef __cplusplus
extern "C"
    {
#endif // #ifdef __cplusplus
//////////////////////////////////////////////////////////////////

#ifndef _VERSION_HELPER_MAKE_ULONG64
	#define _VERSION_HELPER_MAKE_ULONG64(low , high )		((ULONG64)(((ULONG)((ULONG64)(low) & 0xffffffff)) | ((ULONG64)((ULONG)((ULONG64)(high) & 0xffffffff))) << 32))
#endif // #ifndef _VERSION_HELPER_MAKE_ULONG64


#ifndef _VERSION_HELPER_MAKE_ULONG
	#define _VERSION_HELPER_MAKE_ULONG(low , high )		((ULONG)(((USHORT)((ULONG_PTR)(low) & 0xffff)) | ((ULONG)((USHORT)((ULONG_PTR)(high) & 0xffff))) << 16))
#endif // #ifndef _VERSION_HELPER_MAKE_ULONG


#ifndef _VERSION_HELPER_MAKE_USHORT
	#define _VERSION_HELPER_MAKE_USHORT(low,high) 		((USHORT)(((UCHAR)(low)) | ((USHORT)((UCHAR)(high))) << 8))
#endif // #ifndef _VERSION_HELPER_MAKE_USHORT

#ifndef _VERSION_HELPER_MAKE_VERSION
	#define _VERSION_HELPER_MAKE_VERSION( v1 , v2 , v3 , v4 ) _VERSION_HELPER_MAKE_ULONG64( _VERSION_HELPER_MAKE_ULONG(v4 , v3 ) , _VERSION_HELPER_MAKE_ULONG(v2 , v1 ) )
#endif // #ifndef _VERSION_HELPER_MAKE_VERSION


// Version
#ifndef _VERSION_HELPER_MARCO_STRING_2
	#define _VERSION_HELPER_MARCO_STRING_2(x) #x
#endif // _VERSION_HELPER_MARCO_STRING_2


#ifndef _VERSION_HELPER_MARCO_STRING
	#define _VERSION_HELPER_MARCO_STRING(x ) _VERSION_HELPER_MARCO_STRING_2( x )
#endif // _VERSION_HELPER_MARCO_STRING


//////////////////////////////////////////////////////////////////////////


#define MY_VERSION_PART_1			0

#define MY_VERSION_PART_2			0

#define MY_VERSION_PART_3			0

#define MY_VERSION_PART_4			1


#define MY_SIMPLE_VERSION			MY_VERSION_PART_4

//////////////////////////////////////////////////////////////////////////



#define MY_VERSION_NUMBER			_VERSION_HELPER_MAKE_VERSION( MY_VERSION_PART_1 , MY_VERSION_PART_2 , MY_VERSION_PART_3 , MY_VERSION_PART_4 )

#define MY_VERSION_DOT_STRING		_VERSION_HELPER_MARCO_STRING(MY_VERSION_PART_1.MY_VERSION_PART_2.MY_VERSION_PART_3.MY_VERSION_PART_4)

#define MY_VERSION_COMMA_STRING		MY_VERSION_PART_1,MY_VERSION_PART_2,MY_VERSION_PART_3,MY_VERSION_PART_4



//////////////////////////////////////////////////////////////////////////

#if defined _WIN64
	
	#if DBG
		#define MY_VERSION_COMMENTS		"rtypes (amd64) (debug)\0"
	#else
		#define MY_VERSION_COMMENTS		"rtypes (amd64)\0"
	#endif
	
#elif defined _ARM64_

	#if DBG
		#define MY_VERSION_COMMENTS		"rtypes (arm64) (debug)\0"
	#else
		#define MY_VERSION_COMMENTS		"rtypes (arm64)\0"
	#endif

#else

	#if DBG
		#define MY_VERSION_COMMENTS		"rtypes (i386) (debug)\0"
	#else
		#define MY_VERSION_COMMENTS		"rtypes (i386)\0"
	#endif

#endif // #ifdef _WIN64


#define MY_VERSION_COMPANY_NAME			"tinysec.net\0"

#define MY_VERSION_FILE_DESCRIPTION		MY_VERSION_COMMENTS

#define MY_VERSION_FILE_VERSION			MY_VERSION_DOT_STRING

#ifdef BUILD_R0
	#define MY_VERSION_INTERNAL_NAME	"ktypes.sts\0"
#else
	#define MY_VERSION_INTERNAL_NAME	"utypes.exe\0"
#endif 


#define MY_VERSION_LEGAL_COPYRIGHT		"(c) tinysec.net Inc. All Rights Reserved\0"

#define MY_VERSION_LEGAL_TRADEMARKS		"tinysec.net\0"

#define MY_VERSION_ORIGINAL_FILENAME	MY_VERSION_INTERNAL_NAME

#define MY_VERSION_PRIVATE_BUILD		MY_VERSION_DOT_STRING

#define MY_VERSION_PRODUCT_NAME			"rtypes\0"

#define MY_VERSION_PRODUCT_VERSION		MY_VERSION_DOT_STRING

#define MY_VERSION_SPECIAL_BUILD		MY_VERSION_DOT_STRING



//////////////////////////////////////////////////////////////////
#ifdef __cplusplus
}
#endif // #ifdef __cplusplus
//////////////////////////////////////////////////////////////////
#endif //__MY_VERSION_HEADER_FILE__



