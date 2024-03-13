!IF "$(DRONE_BUILD_NUMBER)" == "" 
TARGETPATH=../../build
!ENDIF

C_DEFINES=$(C_DEFINES) /D_UNICODE /DUNICODE  /DWDK_BUILD

INCLUDES=$(INCLUDES);\
	..; \
	..\..\include; \
	..\inc;

SOURCES=$(SOURCES) \
	..\KdPrint.c \
	..\tests.cpp