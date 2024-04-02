C_DEFINES=$(C_DEFINES) /D_UNICODE /DUNICODE  /DWDK_BUILD

INCLUDES=$(INCLUDES);\
	..; \
	..\..\include; \
	..\inc;

SOURCES=$(SOURCES) \
	..\KdPrint.c