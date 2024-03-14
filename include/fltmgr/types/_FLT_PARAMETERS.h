/**
 * @file _FLT_PARAMETERS.h
 * @author tinysec
 * @brief
 * @version 0.0.1
    * 2024/03/14   init
 */
#ifndef __MY__FLT_PARAMETERS_HEADER_FILE__
#define __MY__FLT_PARAMETERS_HEADER_FILE__
//////////////////////////////////////////////////////////////////
#ifdef __cplusplus
extern "C"
    {
#endif // #ifdef __cplusplus


//////////////////////////////////////////////////////////////////
  
  
  
#include "_FILE_STAT_INFORMATION.h"

//////////////////////////////////////////////////////////////////////////
  

union _FLT_PARAMETERS 
{

    //
    //  IRP_MJ_CREATE
    //

    struct {
        PIO_SECURITY_CONTEXT SecurityContext;

        //
        //  The low 24 bits contains CreateOptions flag values.
        //  The high 8 bits contains the CreateDisposition values.
        //

        ULONG Options;

        USHORT  FileAttributes;
        USHORT ShareAccess;


        ULONG  EaLength;

        PVOID EaBuffer;                 //Not in IO_STACK_LOCATION parameters list
        LARGE_INTEGER AllocationSize;   //Not in IO_STACK_LOCATION parameters list
    } Create;

    //
    //  IRP_MJ_CREATE_NAMED_PIPE
    //
    //  Notice that the fields in the following parameter structure must
    //  match those for the create structure other than the last longword.
    //  This is so that no distinctions need be made by the I/O system's
    //  parse routine other than for the last longword.
    //

    struct {
        PIO_SECURITY_CONTEXT SecurityContext;

        ULONG Options;

        USHORT  Reserved;

        USHORT ShareAccess;

        PVOID Parameters; // PNAMED_PIPE_CREATE_PARAMETERS
    } CreatePipe;

    //
    //  IRP_MJ_CREATE_MAILSLOT
    //
    //  Notice that the fields in the following parameter structure must
    //  match those for the create structure other than the last longword.
    //  This is so that no distinctions need be made by the I/O system's
    //  parse routine other than for the last longword.
    //

    struct 
	{
        PIO_SECURITY_CONTEXT SecurityContext;

        ULONG Options;

        USHORT  Reserved;

        USHORT ShareAccess;

        PVOID Parameters; // PMAILSLOT_CREATE_PARAMETERS

    } CreateMailslot;

    //
    //  IRP_MJ_READ
    //

    struct 
	{
        ULONG Length;                   //Length of transfer
        ULONG  Key;

        LARGE_INTEGER ByteOffset;       //Offset to read from

        PVOID ReadBuffer;       //Not in IO_STACK_LOCATION parameters list
        PMDL MdlAddress;        //Mdl address for the buffer  (maybe NULL)
    } Read;

    //
    //  IRP_MJ_WRITE
    //

    struct {
        ULONG Length;                   //Length of transfer
        ULONG  Key;

        LARGE_INTEGER ByteOffset;       //Offset to write to

        PVOID WriteBuffer;      //Not in IO_STACK_LOCATION parameters list
        PMDL MdlAddress;        //Mdl address for the buffer  (maybe NULL)
    } Write;

    //
    //  IRP_MJ_QUERY_INFORMATION
    //

    struct {
        ULONG Length;           //Length of buffer
        FILE_INFORMATION_CLASS  FileInformationClass; //Class of information to query

        PVOID InfoBuffer;       //Not in IO_STACK_LOCATION parameters list
    } QueryFileInformation;

    //
    //  IRP_MJ_SET_INFORMATION
    //

    struct {
        ULONG Length;
        FILE_INFORMATION_CLASS  FileInformationClass;
        PFILE_OBJECT ParentOfTarget;
        union {
            struct {
                BOOLEAN ReplaceIfExists;
                BOOLEAN AdvanceOnly;
            };
            ULONG ClusterCount;
            HANDLE DeleteHandle;
        };

        PVOID InfoBuffer;       //Not in IO_STACK_LOCATION parameters list
    } SetFileInformation;

    //
    //  IRP_MJ_QUERY_EA
    //

    struct {
        ULONG Length;
        PVOID EaList;
        ULONG EaListLength;
        ULONG  EaIndex;

        PVOID EaBuffer;         //Not in IO_STACK_LOCATION parameters list
        PMDL MdlAddress;        //Mdl address for the buffer  (maybe NULL)
    } QueryEa;

    //
    //  IRP_MJ_SET_EA
    //

    struct {
        ULONG Length;

        PVOID EaBuffer;         //Not in IO_STACK_LOCATION parameters list
        PMDL MdlAddress;        //Mdl address for the buffer  (maybe NULL)
    } SetEa;

    //
    //  IRP_MJ_QUERY_VOLUME_INFORMATION
    //

    struct {
        ULONG Length;
        FS_INFORMATION_CLASS  FsInformationClass;

        PVOID VolumeBuffer;     //Not in IO_STACK_LOCATION parameters list
    } QueryVolumeInformation;

    //
    //  IRP_MJ_SET_VOLUME_INFORMATION
    //

    struct {
        ULONG Length;
        FS_INFORMATION_CLASS  FsInformationClass;

        PVOID VolumeBuffer;     //Not in IO_STACK_LOCATION parameters list
    } SetVolumeInformation;

    //
    //  IRP_MJ_DIRECTORY_CONTROL
    //

    union {

        //
        //  IRP_MN_QUERY_DIRECTORY or IRP_MN_QUERY_OLE_DIRECTORY
        //

        struct {
            ULONG Length;
            PUNICODE_STRING FileName;
            FILE_INFORMATION_CLASS FileInformationClass;
            ULONG  FileIndex;

            PVOID DirectoryBuffer;  //Not in IO_STACK_LOCATION parameters list
            PMDL MdlAddress;        //Mdl address for the buffer  (maybe NULL)
        } QueryDirectory;

        //
        //  IRP_MN_NOTIFY_CHANGE_DIRECTORY
        //

        struct {
            ULONG Length;
            ULONG  CompletionFilter;

            //
            // These spares ensure that the offset of DirectoryBuffer is
            // exactly the same as that for QueryDirectory minor code. This
            // needs to be the same because filter manager code makes the assumption
            // they are the same
            //

            ULONG  Spare1;
            ULONG  Spare2;

            PVOID DirectoryBuffer;  //Not in IO_STACK_LOCATION parameters list
            PMDL MdlAddress;        //Mdl address for the buffer  (maybe NULL)
        } NotifyDirectory;

    } DirectoryControl;

    //
    //  IRP_MJ_FILE_SYSTEM_CONTROL
    //
    //  Note that the user's output buffer is stored in the UserBuffer field
    //  and the user's input buffer is stored in the SystemBuffer field.
    //

    union {

        //
        //  IRP_MN_VERIFY_VOLUME
        //

        struct {
            struct _VPB* Vpb;
            struct _DEVICE_OBJECT* DeviceObject;
        } VerifyVolume;

        //
        //  IRP_MN_KERNEL_CALL and IRP_MN_USER_FS_REQUEST
        //  The parameters are broken out into 3 separate unions based on the
        //  method of the FSCTL Drivers should use the method-appropriate
        //  union for accessing parameters
        //

        struct {
            ULONG OutputBufferLength;

#ifdef _WIN64
			ULONG	_dummy1;
#endif


            ULONG  InputBufferLength;
            ULONG  FsControlCode;
        } Common;

        //
        //  METHOD_NEITHER Fsctl parameters
        //

        struct {
            ULONG OutputBufferLength;

#ifdef _WIN64
			ULONG	_dummy1;
#endif

            ULONG  InputBufferLength;


            ULONG  FsControlCode;

            //
            //  Type3InputBuffer: name changed from IO_STACK_LOCATION parameters
            //  Note for this mothod, both input & output buffers are 'raw',
            //  i.e. unbuffered, and should be treated with caution ( either
            //  probed & captured before access, or use try-except to enclose
            //  access to the buffer)
            //

            PVOID InputBuffer;

            PVOID OutputBuffer;

            //
            //  Mdl address for the output buffer  (maybe NULL)
            //

            PMDL OutputMdlAddress;
        } Neither;

        //
        //  METHOD_BUFFERED Fsctl parameters
        //

        struct {
            ULONG OutputBufferLength;

#ifdef _WIN64
			ULONG	_dummy1;
#endif

            ULONG  InputBufferLength;
            ULONG  FsControlCode;

            //
            //  For method buffered, this buffer is used both for input and
            //  output
            //

            PVOID SystemBuffer;

        } Buffered;

        //
        //  METHOD_IN_DIRECT/METHOD_OUT_DIRECT Fsctl parameters
        //

        struct {
            ULONG OutputBufferLength;

#ifdef _WIN64
		ULONG	_dummy1;
#endif
		
			// align to pointer
            ULONG  InputBufferLength;




            ULONG  FsControlCode;

            //
            //  Note the input buffer is already captured & buffered here - so
            //  can be safely accessed from kernel mode.  The output buffer is
            //  locked down - so also safe to access, however the OutputBuffer
            //  pointer is the user virtual address, so if the driver wishes to
            //  access the buffer in a different process context than that of
            //  the original i/o - it will have to obtain the system address
            //  from the MDL
            //

            PVOID InputSystemBuffer;

            //
            //  User virtual address of output buffer
            //

            PVOID OutputBuffer;

            //
            //  Mdl address for the locked down output buffer (should be
            //  non-NULL)
            //

            PMDL OutputMdlAddress;
        } Direct;

    } FileSystemControl;

    //
    //  IRP_MJ_DEVICE_CONTROL or IRP_MJ_INTERNAL_DEVICE_CONTROL
    //

    union {

        struct {
            ULONG OutputBufferLength;
            ULONG  InputBufferLength;
            ULONG  IoControlCode;
        } Common;

        //
        //  The parameters are broken out into 3 separate unions based on the
        //  method of the IOCTL.  Drivers should use the method-appropriate
        //  union for accessing parameters.
        //

        //
        //  METHOD_NEITHER Ioctl parameters for IRP path
        //

        struct {
            ULONG OutputBufferLength;
            ULONG  InputBufferLength;
            ULONG  IoControlCode;

            //
            //  Type3InputBuffer: name changed from IO_STACK_LOCATION parameters
            //  Note for this mothod, both input & output buffers are 'raw',
            //  i.e. unbuffered, and should be treated with caution ( either
            //  probed & captured before access, or use try-except to enclose
            //  access to the buffer)
            //

            PVOID InputBuffer;
            PVOID OutputBuffer;

            //
            //  Mdl address for the output buffer  (maybe NULL)
            //

            PMDL OutputMdlAddress;
        } Neither;

        //
        //  METHOD_BUFFERED Ioctl parameters for IRP path
        //

        struct {
            ULONG OutputBufferLength;
            ULONG  InputBufferLength;
            ULONG  IoControlCode;

            //
            //  For method buffered, this buffer is used both for input and
            //  output
            //

            PVOID SystemBuffer;

        } Buffered;

        //
        //  METHOD_IN_DIRECT/METHOD_OUT_DIRECT Ioctl parameters
        //

        struct {
            ULONG OutputBufferLength;
            ULONG  InputBufferLength;
            ULONG  IoControlCode;

            //
            //  Note the input buffer is already captured & buffered here - so
            //  can be safely accessed from kernel mode.  The output buffer is
            //  locked down - so also safe to access, however the OutputBuffer
            //  pointer is the user virtual address, so if the driver wishes to
            //  access the buffer in a different process context than that of
            //  the original i/o - it will have to obtain the system address
            //  from the MDL
            //

            PVOID InputSystemBuffer;

            //
            //  User virtual address of output buffer
            //

            PVOID OutputBuffer;

            //
            //  Mdl address for the locked down output buffer (should be non-NULL)
            //

            PMDL OutputMdlAddress;
        } Direct;

        //
        //  Regardless of method, if the CALLBACK_DATA represents a fast i/o
        //  device IOCTL, this structure must be used to access the parameters
        //

        struct {
            ULONG OutputBufferLength;
            ULONG  InputBufferLength;
            ULONG  IoControlCode;

            //
            //  Both buffers are 'raw', i.e. unbuffered
            //

            PVOID InputBuffer;
            PVOID OutputBuffer;

        } FastIo;

    } DeviceIoControl;

    //
    //  IRP_MJ_LOCK_CONTROL
    //

    struct {
        PLARGE_INTEGER Length;
        ULONG  Key;
        LARGE_INTEGER ByteOffset;

        PEPROCESS ProcessId;        //  Only meaningful for FastIo locking operations.
        BOOLEAN FailImmediately;    //  Only meaningful for FastIo locking operations.
        BOOLEAN ExclusiveLock;      //  Only meaningful for FastIo locking operations.
    } LockControl;

    //
    //  IRP_MJ_QUERY_SECURITY
    //

    struct {
        SECURITY_INFORMATION SecurityInformation;
        ULONG  Length;

        PVOID SecurityBuffer;   //Not in IO_STACK_LOCATION parameters list
        PMDL MdlAddress;        //Mdl address for the buffer  (maybe NULL)
    } QuerySecurity;

    //
    //  IRP_MJ_SET_SECURITY
    //

    struct {
        SECURITY_INFORMATION SecurityInformation;
        PSECURITY_DESCRIPTOR SecurityDescriptor;
    } SetSecurity;

    //
    //  IRP_MJ_SYSTEM_CONTROL
    //

    struct {
        ULONG_PTR ProviderId;
        PVOID DataPath;
        ULONG BufferSize;
        PVOID Buffer;
    } WMI;

    //
    //  IRP_MJ_QUERY_QUOTA
    //

    struct {
        ULONG Length;
        PSID StartSid;
        struct _FILE_GET_QUOTA_INFORMATION * SidList;
        ULONG SidListLength;

        PVOID QuotaBuffer;      //Not in IO_STACK_LOCATION parameters list
        PMDL MdlAddress;        //Mdl address for the buffer  (maybe NULL)
    } QueryQuota;

    //
    //  IRP_MJ_SET_QUOTA
    //

    struct {
        ULONG Length;

        PVOID QuotaBuffer;      //Not in IO_STACK_LOCATION parameters list
        PMDL MdlAddress;        //Mdl address for the buffer  (maybe NULL)
    } SetQuota;

    //
    //  IRP_MJ_PNP
    //

    union {

        //
        //  IRP_MN_START_DEVICE
        //

        struct {
            PCM_RESOURCE_LIST AllocatedResources;
            PCM_RESOURCE_LIST AllocatedResourcesTranslated;
        } StartDevice;

        //
        //  IRP_MN_QUERY_DEVICE_RELATIONS
        //

        struct {
            DEVICE_RELATION_TYPE Type;
        } QueryDeviceRelations;

        //
        //  IRP_MN_QUERY_INTERFACE
        //

        struct {
            GUID *InterfaceType;
            USHORT Size;
            USHORT Version;
            PINTERFACE Interface;
            PVOID InterfaceSpecificData;
        } QueryInterface;

        //
        //  IRP_MN_QUERY_CAPABILITIES
        //

        struct {
            PDEVICE_CAPABILITIES Capabilities;
        } DeviceCapabilities;

        //
        //  IRP_MN_FILTER_RESOURCE_REQUIREMENTS
        //

        struct {
            PIO_RESOURCE_REQUIREMENTS_LIST IoResourceRequirementList;
        } FilterResourceRequirements;

        //
        //  IRP_MN_READ_CONFIG and IRP_MN_WRITE_CONFIG
        //

        struct {
            ULONG WhichSpace;
            PVOID Buffer;
            ULONG Offset;
            ULONG  Length;
        } ReadWriteConfig;

        //
        //  IRP_MN_SET_LOCK
        //

        struct {
            BOOLEAN Lock;
        } SetLock;

        //
        //  IRP_MN_QUERY_ID
        //

        struct {
            BUS_QUERY_ID_TYPE IdType;
        } QueryId;

        //
        //  IRP_MN_QUERY_DEVICE_TEXT
        //

        struct {
            DEVICE_TEXT_TYPE DeviceTextType;
            LCID  LocaleId;
        } QueryDeviceText;

        //
        //  IRP_MN_DEVICE_USAGE_NOTIFICATION
        //

        struct {
            BOOLEAN InPath;
            BOOLEAN Reserved[3];
            DEVICE_USAGE_NOTIFICATION_TYPE  Type;
        } UsageNotification;

    } Pnp;

    //
    //  ***** Start of Emulated IRP definitions
    //

    //
    //  IRP_MJ_ACQUIRE_FOR_SECTION_SYNCHRONIZATION
    //

    struct {
        ULONG SyncType;
        ULONG PageProtection;
    } AcquireForSectionSynchronization;

    //
    //  IRP_MJ_ACQUIRE_FOR_MOD_WRITE
    //

    struct {
        PLARGE_INTEGER EndingOffset;
        struct _ERESOURCE** ResourceToRelease;
    } AcquireForModifiedPageWriter;

    //
    //  IRP_MJ_RELEASE_FOR_MOD_WRITE
    //

    struct {
        struct _ERESOURCE* ResourceToRelease;
    } ReleaseForModifiedPageWriter;


    //
    //  FAST_IO_CHECK_IF_POSSIBLE
    //

    struct {
        LARGE_INTEGER FileOffset;
        ULONG Length;
        ULONG  LockKey;
        BOOLEAN  CheckForReadOperation;
    } FastIoCheckIfPossible;



	struct {
		PIRP                   Irp;

		union
		{
			struct _FILE_STAT_INFORMATION* FileStat;
			PVOID                  FileInformation;
		};
		

		PULONG                 Length;
		FILE_INFORMATION_CLASS FileInformationClass;
	} QueryOpen;


    //
    //  IRP_MJ_NETWORK_QUERY_OPEN
    //

    struct {
        PIRP Irp;
        PFILE_NETWORK_OPEN_INFORMATION NetworkInformation;
    } NetworkQueryOpen;

    //
    //  IRP_MJ_MDL_READ
    //

    struct {
        LARGE_INTEGER FileOffset;
        ULONG  Length;
        ULONG  Key;
        PMDL *MdlChain;
    } MdlRead;

    //
    //  IRP_MJ_MDL_READ_COMPLETE
    //

    struct {
        PMDL MdlChain;
    } MdlReadComplete;

    //
    //  IRP_MJ_PREPARE_MDL_WRITE
    //

    struct {
        LARGE_INTEGER FileOffset;
        ULONG  Length;
        ULONG  Key;
        PMDL *MdlChain;
    } PrepareMdlWrite;

    //
    //  IRP_MJ_MDL_WRITE_COMPLETE
    //

    struct {
        LARGE_INTEGER FileOffset;
        PMDL MdlChain;
    } MdlWriteComplete;

    //
    //  IRP_MJ_VOLUME_MOUNT
    //

    struct {
        ULONG DeviceType;
    } MountVolume;


    //
    // Others - driver-specific
    //

    struct {
        PVOID Argument1;
        PVOID Argument2;
        PVOID Argument3;
        PVOID Argument4;
        PVOID Argument5;
        LARGE_INTEGER Argument6;
    } Others;

};

  
  
  
  
//////////////////////////////////////////////////////////////////
//#pragma pack(pop)

#ifdef __cplusplus
}
#endif // #ifdef __cplusplus
//////////////////////////////////////////////////////////////////
#endif //__MY__FLT_PARAMETERS_HEADER_FILE__

