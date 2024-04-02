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

		// offset=0x00
        struct _IO_SECURITY_CONTEXT* SecurityContext;

        //
        //  The low 24 bits contains CreateOptions flag values.
        //  The high 8 bits contains the CreateDisposition values.
        //

		// offset=0x08
        ULONG Options;

		#ifdef _WIN64
			ULONG	_dummy1;
		#endif	

		// offset=0x10
        USHORT  FileAttributes;

		// offset=0x12
        USHORT ShareAccess;


		#ifdef _WIN64
			ULONG	_dummy2;
		#endif	

		// offset=0x18
        ULONG  EaLength;

		#ifdef _WIN64
			ULONG	_dummy3;
		#endif	

		// offset=0x20
        PVOID EaBuffer;                 //Not in IO_STACK_LOCATION parameters list

		// offset=0x28
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
        struct _IO_SECURITY_CONTEXT* SecurityContext;

		// offset=0x08
        ULONG Options;

		#ifdef _WIN64
			ULONG	_dummy1;
		#endif	

		// offset=0x10
        USHORT  Reserved;

		// offset=0x12
        USHORT ShareAccess;

		#ifdef _WIN64
			ULONG	_dummy2;
		#endif	

		// offset=0x18
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
        struct _IO_SECURITY_CONTEXT* SecurityContext;

		// offset=0x08
        ULONG Options;

#ifdef _WIN64
		ULONG	_dummy1;
#endif	

		// offset=0x10
        USHORT  Reserved;

		// offset=0x12
        USHORT ShareAccess;

#ifdef _WIN64
		ULONG	_dummy2;
#endif	

		// offset=0x18
        PVOID Parameters; // PMAILSLOT_CREATE_PARAMETERS

    } CreateMailslot;

    //
    //  IRP_MJ_READ
    //

    struct 
	{
		// offset=0x00
        ULONG Length;                   //Length of transfer

#ifdef _WIN64
		ULONG	_dummy1;
#endif	

		// offset=0x08
        ULONG  Key;

#ifdef _WIN64
		ULONG	_dummy2;
#endif	

		// offset=0x10
        LARGE_INTEGER ByteOffset;       //Offset to read from

		// offset=0x18
        PVOID ReadBuffer;       //Not in IO_STACK_LOCATION parameters list

		// offset=0x20
        struct _MDL* MdlAddress;        //Mdl address for the buffer  (maybe NULL)
    } Read;

    //
    //  IRP_MJ_WRITE
    //

    struct {

		// offset=0x00
        ULONG Length;                   //Length of transfer

		#ifdef _WIN64
			ULONG	_dummy1;
		#endif	

		// offset=0x08
        ULONG  Key;

		#ifdef _WIN64
			ULONG	_dummy2;
		#endif	

		// offset=0x10
        LARGE_INTEGER ByteOffset;       //Offset to write to

		// offset=0x18
        PVOID WriteBuffer;      //Not in IO_STACK_LOCATION parameters list

		// offset=0x20
        struct _MDL* MdlAddress;        //Mdl address for the buffer  (maybe NULL)
    } Write;

    //
    //  IRP_MJ_QUERY_INFORMATION
    //

    struct {

		// offset=0x00
        ULONG Length;           //Length of buffer

		#ifdef _WIN64
			ULONG	_dummy1;
		#endif	

		// offset=0x08
        ULONG  FileInformationClass; //Class of information to query


		#ifdef _WIN64
			ULONG	_dummy2;
		#endif	

		// offset=0x10
        PVOID InfoBuffer;       //Not in IO_STACK_LOCATION parameters list
    } QueryFileInformation;

    //
    //  IRP_MJ_SET_INFORMATION
    //

    struct {

		// offset=0x00
        ULONG Length;

		#ifdef _WIN64
			ULONG	_dummy1;
		#endif	

		// offset=0x08
        ULONG  FileInformationClass;

		// offset=0x10
        struct _FILE_OBJECT*  ParentOfTarget;

        union {

            struct {

				// offset=0x18
                BOOLEAN ReplaceIfExists;

				// offset=0x19
                BOOLEAN AdvanceOnly;
            };

			// offset=0x18
            ULONG ClusterCount;

			// offset=0x18
            HANDLE DeleteHandle;
        };

		// offset=0x20
        PVOID InfoBuffer;       //Not in IO_STACK_LOCATION parameters list

    } SetFileInformation;

    //
    //  IRP_MJ_QUERY_EA
    //

    struct {

		// offset=0x00
        ULONG Length;

		#ifdef _WIN64
			ULONG	_dummy1;
		#endif	

		// offset=0x08
        PVOID EaList;

		// offset=0x10
        ULONG EaListLength;

		#ifdef _WIN64
			ULONG	_dummy2;
		#endif	

		// offset=0x18
        ULONG  EaIndex;

		// offset=0x20
        PVOID EaBuffer;         //Not in IO_STACK_LOCATION parameters list

		// offset=0x28
        struct _MDL* MdlAddress;        //Mdl address for the buffer  (maybe NULL)
    } QueryEa;

    //
    //  IRP_MJ_SET_EA
    //

    struct {

		// offset=0x00
        ULONG Length;

		#ifdef _WIN64
			ULONG	_dummy1;
		#endif	

		// offset=0x08
        PVOID EaBuffer;         //Not in IO_STACK_LOCATION parameters list


		// offset=0x10
        struct _MDL* MdlAddress;        //Mdl address for the buffer  (maybe NULL)
    } SetEa;

    //
    //  IRP_MJ_QUERY_VOLUME_INFORMATION
    //

    struct {

		// offset=0x00
        ULONG Length;

		#ifdef _WIN64
			ULONG	_dummy1;
		#endif	

		// offset=0x08
        ULONG  FsInformationClass;


		#ifdef _WIN64
			ULONG	_dummy2;
		#endif	

		// offset=0x10
        PVOID VolumeBuffer;     //Not in IO_STACK_LOCATION parameters list

    } QueryVolumeInformation;

    //
    //  IRP_MJ_SET_VOLUME_INFORMATION
    //

    struct {
        ULONG Length;
		
		#ifdef _WIN64
			ULONG	_dummy1;
		#endif	

		// offset=0x08
        ULONG  FsInformationClass;


		#ifdef _WIN64
			ULONG	_dummy2;
		#endif	

		// offset=0x10
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

			#ifdef _WIN64
				ULONG	_dummy1;
			#endif	

			// offset=0x08
            struct _UNICODE_STRING* FileName;

			// offset=0x10
            ULONG FileInformationClass;

			#ifdef _WIN64
				ULONG	_dummy2;
			#endif	

			// offset=0x18
            ULONG  FileIndex;

			#ifdef _WIN64
				ULONG	_dummy3;
			#endif	

			// offset=0x20
            PVOID DirectoryBuffer;  //Not in IO_STACK_LOCATION parameters list

			// offset=0x28
            struct _MDL* MdlAddress;        //Mdl address for the buffer  (maybe NULL)

        } QueryDirectory;

        //
        //  IRP_MN_NOTIFY_CHANGE_DIRECTORY
        //

        struct {

            ULONG Length;


			#ifdef _WIN64
				ULONG	_dummy1;
			#endif	


			// offset=0x08
            ULONG  CompletionFilter;

			#ifdef _WIN64
				ULONG	_dummy2;
			#endif	

            //
            // These spares ensure that the offset of DirectoryBuffer is
            // exactly the same as that for QueryDirectory minor code. This
            // needs to be the same because filter manager code makes the assumption
            // they are the same
            //
	
			// offset=0x10
            ULONG  Spare1;

			#ifdef _WIN64
				ULONG	_dummy3;
			#endif	

			// offset=0x18
            ULONG  Spare2;

			#ifdef _WIN64
				ULONG	_dummy4;
			#endif	

			// offset=0x20
            PVOID DirectoryBuffer;  //Not in IO_STACK_LOCATION parameters list

			// offset=0x28
            struct _MDL* MdlAddress;        //Mdl address for the buffer  (maybe NULL)
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

			// offset = 0x00
            ULONG OutputBufferLength;

			#ifdef _WIN64
				ULONG	_dummy1;
			#endif

			// offset = 0x08
            ULONG  InputBufferLength;

			#ifdef _WIN64
				ULONG	_dummy2;
			#endif

			// offset = 0x10
            ULONG  FsControlCode;

			#ifdef _WIN64
				ULONG	_dummy3;
			#endif

        } Common;

        //
        //  METHOD_NEITHER Fsctl parameters
        //

        struct {

			// offset =0x00
            ULONG OutputBufferLength;

			#ifdef _WIN64
				ULONG	_dummy1;
			#endif
			
			// offset = 0x08
            ULONG  InputBufferLength;

			#ifdef _WIN64
				ULONG	_dummy2;
			#endif

			
			// offset = 0x10
            ULONG  FsControlCode;

			#ifdef _WIN64
				ULONG	_dummy3;
			#endif


            //
            //  Type3InputBuffer: name changed from IO_STACK_LOCATION parameters
            //  Note for this mothod, both input & output buffers are 'raw',
            //  i.e. unbuffered, and should be treated with caution ( either
            //  probed & captured before access, or use try-except to enclose
            //  access to the buffer)
            //

			// offset = 0x18
            PVOID InputBuffer;

			// offset = 0x20
            PVOID OutputBuffer;

            //
            //  Mdl address for the output buffer  (maybe NULL)
            //

			// offset = 0x28
            struct _MDL* OutputMdlAddress;
        } Neither;

        //
        //  METHOD_BUFFERED Fsctl parameters
        //

        struct {

			// offset = 0x00
            ULONG OutputBufferLength;

			#ifdef _WIN64
				ULONG	_dummy1;
			#endif

			// offset =0x08
            ULONG  InputBufferLength;

			#ifdef _WIN64
				ULONG	_dummy2;
			#endif


			// offset = 0x10
            ULONG  FsControlCode;

			#ifdef _WIN64
				ULONG	_dummy3;
			#endif

            //
            //  For method buffered, this buffer is used both for input and
            //  output
            //
			// offset = 0x18
            PVOID SystemBuffer;

        } Buffered;

        //
        //  METHOD_IN_DIRECT/METHOD_OUT_DIRECT Fsctl parameters
        //

        struct {

			// offset = 0x00
            ULONG OutputBufferLength;

			#ifdef _WIN64
				ULONG	_dummy1;
			#endif
		
			// offset = 0x08
            ULONG  InputBufferLength;
			
			#ifdef _WIN64
				ULONG	_dummy2;
			#endif

			// offset = 0x10
            ULONG  FsControlCode;

			#ifdef _WIN64
				ULONG	_dummy3;
			#endif

            //
            //  Note the input buffer is already captured & buffered here - so
            //  can be safely accessed from kernel mode.  The output buffer is
            //  locked down - so also safe to access, however the OutputBuffer
            //  pointer is the user virtual address, so if the driver wishes to
            //  access the buffer in a different process context than that of
            //  the original i/o - it will have to obtain the system address
            //  from the MDL
            //

			// offset = 0x18
            PVOID InputSystemBuffer;

            //
            //  User virtual address of output buffer
            //

			// offset = 0x20
            PVOID OutputBuffer;

            //
            //  Mdl address for the locked down output buffer (should be
            //  non-NULL)
            //

			// offset =0x28
            struct _MDL* OutputMdlAddress;
        } Direct;

    } FileSystemControl;

    //
    //  IRP_MJ_DEVICE_CONTROL or IRP_MJ_INTERNAL_DEVICE_CONTROL
    //

    union {

        struct {

			// offset = 0x00
            ULONG OutputBufferLength;


			#ifdef _WIN64
					ULONG	_dummy1;
			#endif


			// offset = 0x08
            ULONG  InputBufferLength;


			#ifdef _WIN64
					ULONG	_dummy2;
			#endif


			// offset = 0x10
            ULONG  IoControlCode;

			#ifdef _WIN64
				ULONG	_dummy3;
			#endif

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

			// offset = 0x00
            ULONG OutputBufferLength;

			#ifdef _WIN64
				ULONG	_dummy1;
			#endif


			// offset = 0x08
            ULONG  InputBufferLength;

			#ifdef _WIN64
				ULONG	_dummy2;
			#endif

		
			// offset = 0x10
            ULONG  IoControlCode;


			#ifdef _WIN64
				ULONG	_dummy3;
			#endif
            //
            //  Type3InputBuffer: name changed from IO_STACK_LOCATION parameters
            //  Note for this mothod, both input & output buffers are 'raw',
            //  i.e. unbuffered, and should be treated with caution ( either
            //  probed & captured before access, or use try-except to enclose
            //  access to the buffer)
            //

			// offset = 0x18
            PVOID InputBuffer;


			// offset = 0x20
            PVOID OutputBuffer;

            //
            //  Mdl address for the output buffer  (maybe NULL)
            //

			// offset = 0x28
            struct _MDL* OutputMdlAddress;
        } Neither;

        //
        //  METHOD_BUFFERED Ioctl parameters for IRP path
        //

        struct {

			// offset = 0x00
            ULONG OutputBufferLength;

			#ifdef _WIN64
				ULONG	_dummy1;
			#endif

			// offset = 0x08
            ULONG  InputBufferLength;


			#ifdef _WIN64
				ULONG	_dummy2;
			#endif


			// offset = 0x10
            ULONG  IoControlCode;


			#ifdef _WIN64
				ULONG	_dummy3;
			#endif

            //
            //  For method buffered, this buffer is used both for input and
            //  output
            //

			// offset = 0x18
            PVOID SystemBuffer;

        } Buffered;

        //
        //  METHOD_IN_DIRECT/METHOD_OUT_DIRECT Ioctl parameters
        //

        struct {

			// offset = 0x00
            ULONG OutputBufferLength;

			#ifdef _WIN64
				ULONG	_dummy1;
			#endif


			// offset = 0x08
            ULONG  InputBufferLength;


			#ifdef _WIN64
				ULONG	_dummy2;
			#endif

			// offset = 0x10
            ULONG  IoControlCode;


			#ifdef _WIN64
				ULONG	_dummy3;
			#endif

            //
            //  Note the input buffer is already captured & buffered here - so
            //  can be safely accessed from kernel mode.  The output buffer is
            //  locked down - so also safe to access, however the OutputBuffer
            //  pointer is the user virtual address, so if the driver wishes to
            //  access the buffer in a different process context than that of
            //  the original i/o - it will have to obtain the system address
            //  from the MDL
            //

			// offset = 0x18
            PVOID InputSystemBuffer;

            //
            //  User virtual address of output buffer
            //

			// offset = 0x20
            PVOID OutputBuffer;

            //
            //  Mdl address for the locked down output buffer (should be non-NULL)
            //
		
			// offset = 0x28
            struct _MDL* OutputMdlAddress;
        } Direct;

        //
        //  Regardless of method, if the CALLBACK_DATA represents a fast i/o
        //  device IOCTL, this structure must be used to access the parameters
        //

        struct {

			// offset = 0x00
            ULONG OutputBufferLength;


			#ifdef _WIN64
				ULONG	_dummy1;
			#endif

			// offset = 0x08
            ULONG  InputBufferLength;

			#ifdef _WIN64
				ULONG	_dummy2;
			#endif

			// offset = 0x10
            ULONG  IoControlCode;


			#ifdef _WIN64
				ULONG	_dummy3;
			#endif

            //
            //  Both buffers are 'raw', i.e. unbuffered
            //

			// offset = 0x18
            PVOID InputBuffer;


			// offset = 0x20
            PVOID OutputBuffer;

        } FastIo;

    } DeviceIoControl;

    //
    //  IRP_MJ_LOCK_CONTROL
    //

    struct {

		// offset = 0x00
        PLARGE_INTEGER Length;

		// offset = 0x08
        ULONG  Key;

		#ifdef _WIN64
			ULONG	_dummy1;
		#endif

		// offset = 0x10
        LARGE_INTEGER ByteOffset;

		// offset = 0x18
        struct _EPROCESS* ProcessId;        //  Only meaningful for FastIo locking operations.

		// offset=0x20
        BOOLEAN FailImmediately;    //  Only meaningful for FastIo locking operations.

		// offset=0x21
        BOOLEAN ExclusiveLock;      //  Only meaningful for FastIo locking operations.

    } LockControl;

    //
    //  IRP_MJ_QUERY_SECURITY
    //

    struct {

		// offset = 0x00
        SECURITY_INFORMATION SecurityInformation;

		// offset = 0x08
        ULONG  Length;

		#ifdef _WIN64
			ULONG	_dummy1;
		#endif

		// offset = 0x10
        PVOID SecurityBuffer;   //Not in IO_STACK_LOCATION parameters list

		// offset = 0x18
        struct _MDL* MdlAddress;        //Mdl address for the buffer  (maybe NULL)

    } QuerySecurity;

    //
    //  IRP_MJ_SET_SECURITY
    //

    struct {
        SECURITY_INFORMATION SecurityInformation;
		
		#ifdef _WIN64
			ULONG	_dummy1;
		#endif

		// offset = 0x08
        PSECURITY_DESCRIPTOR SecurityDescriptor;
    } SetSecurity;

    //
    //  IRP_MJ_SYSTEM_CONTROL
    //

    struct {

		// offset = 0x00
        ULONG_PTR ProviderId;

		// offset = 0x08
        PVOID DataPath;

		// offset = 0x10
        ULONG BufferSize;

		#ifdef _WIN64
			ULONG	_dummy1;
		#endif

		// offset = 0x18
        PVOID Buffer;

    } WMI;

    //
    //  IRP_MJ_QUERY_QUOTA
    //

    struct {

        ULONG Length;

		// offset = 0x08
        PSID StartSid;

		// offset = 0x10
        struct _FILE_GET_QUOTA_INFORMATION * SidList;

		// offset = 0x18
        ULONG SidListLength;

		#ifdef _WIN64
				ULONG	_dummy1;
		#endif

		// offset = 0x20
        PVOID QuotaBuffer;      //Not in IO_STACK_LOCATION parameters list


		// offset = 0x28
        struct _MDL* MdlAddress;        //Mdl address for the buffer  (maybe NULL)

    } QueryQuota;

    //
    //  IRP_MJ_SET_QUOTA
    //

    struct {
        ULONG Length;

		#ifdef _WIN64
				ULONG	_dummy1;
		#endif

		// offset = 0x08
        PVOID QuotaBuffer;      //Not in IO_STACK_LOCATION parameters list

		// offset = 0x10
        struct _MDL* MdlAddress;        //Mdl address for the buffer  (maybe NULL)
    } SetQuota;

    //
    //  IRP_MJ_PNP
    //

    union {

        //
        //  IRP_MN_START_DEVICE
        //

        struct {
            struct _CM_RESOURCE_LIST* AllocatedResources;
            struct _CM_RESOURCE_LIST* AllocatedResourcesTranslated;
        } StartDevice;

        //
        //  IRP_MN_QUERY_DEVICE_RELATIONS
        //

        struct {
            ULONG Type;
        } QueryDeviceRelations;

        //
        //  IRP_MN_QUERY_INTERFACE
        //

        struct {
            GUID *InterfaceType;

			// offset = 0x08
            USHORT Size;

			// offset = 0x0A
            USHORT Version;

			#ifdef _WIN64
				ULONG	_dummy1;
			#endif


			// offset = 0x10
            struct _INTERFACE* Interface;

			// offset = 0x18
            PVOID InterfaceSpecificData;
        } QueryInterface;

        //
        //  IRP_MN_QUERY_CAPABILITIES
        //

        struct {
            struct _DEVICE_CAPABILITIES* Capabilities;
        } DeviceCapabilities;

        //
        //  IRP_MN_FILTER_RESOURCE_REQUIREMENTS
        //

        struct {
            struct _IO_RESOURCE_REQUIREMENTS_LIST* IoResourceRequirementList;
        } FilterResourceRequirements;

        //
        //  IRP_MN_READ_CONFIG and IRP_MN_WRITE_CONFIG
        //

        struct {

			// offset = 0x00
            ULONG WhichSpace;

			#ifdef _WIN64
				ULONG	_dummy1;
			#endif

			// offset = 0x08
            PVOID Buffer;

			// offset = 0x10
            ULONG Offset;

			#ifdef _WIN64
				ULONG	_dummy2;
			#endif


			// offset = 0x18
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
            ULONG IdType;
        } QueryId;

        //
        //  IRP_MN_QUERY_DEVICE_TEXT
        //

        struct {

            ULONG DeviceTextType;

			#ifdef _WIN64
				ULONG	_dummy1;
			#endif


			// offset = 0x08
            LCID  LocaleId;

        } QueryDeviceText;

        //
        //  IRP_MN_DEVICE_USAGE_NOTIFICATION
        //

        struct {
            BOOLEAN InPath;

			// offset = 0x01
            BOOLEAN Reserved[3];

			#ifdef _WIN64
				ULONG	_dummy1;
			#endif

			// offset = 0x08
            ULONG  Type;

        } UsageNotification;

    } Pnp;

    //
    //  ***** Start of Emulated IRP definitions
    //

    //
    //  IRP_MJ_ACQUIRE_FOR_SECTION_SYNCHRONIZATION
    //

    struct {

		// offset = 0x00
        ULONG SyncType;

		// offset = 0x04
        ULONG PageProtection;
    } AcquireForSectionSynchronization;

    //
    //  IRP_MJ_ACQUIRE_FOR_MOD_WRITE
    //

    struct {

		// offset = 0x00
        PLARGE_INTEGER EndingOffset;

		// offset = 0x08
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

		// offset = 0x00
        LARGE_INTEGER FileOffset;

		// offset = 0x08
        ULONG Length;

		#ifdef _WIN64
			ULONG	_dummy1;
		#endif

		// offset = 0x10
        ULONG  LockKey;

		#ifdef _WIN64
			ULONG	_dummy2;
		#endif

		// offset = 0x18
        BOOLEAN  CheckForReadOperation;

    } FastIoCheckIfPossible;



	struct {

		// offset = 0x00
		struct _IRP*                   Irp;

		// offset = 0x08
		union
		{
			struct _FILE_STAT_INFORMATION* FileStat;

			PVOID                  FileInformation;
		};
		
		// offset = 0x10
		PULONG                 Length;

		// offset = 0x18
		ULONG			FileInformationClass;

	} QueryOpen;


    //
    //  IRP_MJ_NETWORK_QUERY_OPEN
    //

    struct {
        struct _IRP* Irp;
        struct _FILE_NETWORK_OPEN_INFORMATION* NetworkInformation;
    } NetworkQueryOpen;

    //
    //  IRP_MJ_MDL_READ
    //

    struct {
        LARGE_INTEGER FileOffset;

		// offset = 0x08
        ULONG  Length;

		#ifdef _WIN64
			ULONG	_dummy1;
		#endif

		// offset = 0x10
        ULONG  Key;

		#ifdef _WIN64
			ULONG	_dummy2;
		#endif

		// offset = 0x18
        struct _MDL** MdlChain;


    } MdlRead;

    //
    //  IRP_MJ_MDL_READ_COMPLETE
    //

    struct {
        struct _MDL* MdlChain;
    } MdlReadComplete;

    //
    //  IRP_MJ_PREPARE_MDL_WRITE
    //

    struct {
        LARGE_INTEGER FileOffset;

		// offset = 0x08
        ULONG  Length;

		#ifdef _WIN64
			ULONG	_dummy1;
		#endif

		// offset = 0x10
        ULONG  Key;

		#ifdef _WIN64
			ULONG	_dummy2;
		#endif
		
		// offset = 0x18
        struct _MDL** MdlChain;

    } PrepareMdlWrite;

    //
    //  IRP_MJ_MDL_WRITE_COMPLETE
    //

    struct {
        LARGE_INTEGER FileOffset;

		// offset = 0x08
        struct _MDL* MdlChain;
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

		// offset = 0x00
        PVOID Argument1;

		// offset = 0x08
        PVOID Argument2;

		// offset = 0x10
        PVOID Argument3;

		// offset = 0x18
        PVOID Argument4;

		// offset = 0x20
        PVOID Argument5;

		// offset = 0x28
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

