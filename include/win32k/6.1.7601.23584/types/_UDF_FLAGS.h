/**
 * @file _UDF_FLAGS.h
 * @author tinysec
 * @brief
 * @version 0.0.1
    * 2024/04/02   init
 */

#ifndef __MY__UDF_FLAGS_HEADER_FILE__
#define __MY__UDF_FLAGS_HEADER_FILE__
//////////////////////////////////////////////////////////////////
#ifdef __cplusplus
extern "C"
    {
#endif // #ifdef __cplusplus
//////////////////////////////////////////////////////////////////
 
 
 
 
/*
*
* ACCF_ and PUDF_ flags share the same field. ACCF fields
* are so named because they may later move to a differnt
* struct.
*/
enum _UDF_FLAGS
{

ACCF_DEFAULTFILTERKEYSON        = 0x00000001 ,

ACCF_DEFAULTSTICKYKEYSON        = 0x00000002,

ACCF_DEFAULTMOUSEKEYSON         = 0x00000004,

ACCF_DEFAULTTOGGLEKEYSON        = 0x00000008,

ACCF_DEFAULTTIMEOUTON           = 0x00000010,

ACCF_DEFAULTKEYBOARDPREF        = 0x00000020,

ACCF_DEFAULTSCREENREADER        = 0x00000040,

ACCF_DEFAULTHIGHCONTRASTON      = 0x00000080,

ACCF_ACCESSENABLED              = 0x00000100,

ACCF_IGNOREBREAKCODE            = 0x00000400,

ACCF_FKMAKECODEPROCESSED        = 0x00000800,

ACCF_MKVIRTUALMOUSE             = 0x00001000,

ACCF_MKREPEATVK                 = 0x00002000,

ACCF_FIRSTTICK                  = 0x00004000,

ACCF_SHOWSOUNDSON               = 0x00008000,


/*
 * NOTE: PUDF_ANIMATE must have the same value as MINMAX_ANIMATE.
 */
PUDF_ANIMATE                    = 0x00010000,


ACCF_KEYBOARDPREF               = 0x00020000,

ACCF_SCREENREADER               = 0x00040000,

PUDF_BEEP                       = 0x00080000,  /* Warning beeps allowed?                   */

PUDF_DRAGFULLWINDOWS            = 0x00100000,  /* Drag xor rect or full windows            */

PUDF_ICONTITLEWRAP              = 0x00200000,  /* Wrap icon titles or just use single line */

PUDF_FONTSARELOADED             = 0x00400000,

PUDF_POPUPINUSE                 = 0x00800000,

PUDF_EXTENDEDSOUNDS             = 0x01000000,

PUDF_MENUSTATEINUSE             = 0x02000000,

PUDF_VDMBOUNDSACTIVE            = 0x04000000,

PUDF_ALLOWFOREGROUNDACTIVATE    = 0x08000000,

PUDF_DRAGGINGFULLWINDOW         = 0x10000000,

PUDF_LOCKFULLSCREEN             = 0x20000000,

PUDF_GSMWPINUSE                 = 0x40000000

};
 
 
 
 
 
 
//////////////////////////////////////////////////////////////////
#ifdef __cplusplus
}
#endif // #ifdef __cplusplus
//////////////////////////////////////////////////////////////////
#endif //__MY__UDF_FLAGS_HEADER_FILE__

