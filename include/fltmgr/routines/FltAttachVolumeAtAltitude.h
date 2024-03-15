/**
 * @file FltAttachVolumeAtAltitude.h
 * @author tinysec
 * @brief
 * @version 0.0.1
    * 2024/03/15   init
 */

#ifndef __MY_FLTATTACHVOLUMEATALTITUDE_HEADER_FILE__
#define __MY_FLTATTACHVOLUMEATALTITUDE_HEADER_FILE__
//////////////////////////////////////////////////////////////////
#ifdef __cplusplus
extern "C"
    {
#endif // #ifdef __cplusplus
//////////////////////////////////////////////////////////////////
 
 
 
 
 
 
 NTSTATUS __stdcall FltAttachVolumeAtAltitude(
         struct _FLT_FILTER *      Filter,
       struct _FLT_VOLUME *      Volume,
           PCUNICODE_STRING Altitude,
   PCUNICODE_STRING InstanceName,
    struct _FLT_INSTANCE**	RetInstance
);
 
 
 
 
 
//////////////////////////////////////////////////////////////////
#ifdef __cplusplus
}
#endif // #ifdef __cplusplus
//////////////////////////////////////////////////////////////////
#endif //__MY_FLTATTACHVOLUMEATALTITUDE_HEADER_FILE__

