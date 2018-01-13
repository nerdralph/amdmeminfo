
#AMD driver settings
#AMDAPPSDK_PATH=/opt/AMDAPP
#AMDAPPSDK_ARCH=x86
AMDAPPSDK_PATH=/opt/amdgpu-pro
AMDAPPSDK_ARCH=x86_64-linux-gnu

PROGRAM_NAME := amdmeminfo

SRC := $(wildcard *.c)
OBJS := ${SRC:.c=.o}

#INCLUDE_DIRS := $(AMDAPPSDK_PATH)/include
LIBRARY_DIRS := $(AMDAPPSDK_PATH)/lib/$(AMDAPPSDK_ARCH)
LIBRARIES := pci OpenCL

#check if this is an ethos distribution... if so add the correct directory for fglrx
ifneq ("$(wildcard /opt/ethos/etc/version)","")
LIBRARY_DIRS += /opt/driver-switching/fglrx/runtime-lib
endif

#compiler settings
CC := gcc
CFLAGS := -O3

CFLAGS += $(foreach incdir,$(INCLUDE_DIRS),-I$(incdir))
LDFLAGS += $(foreach librarydir,$(LIBRARY_DIRS),-L$(librarydir))
LDFLAGS += $(foreach library,$(LIBRARIES),-l$(library))

.PHONY: all clean distclean

all: $(PROGRAM_NAME)

$(PROGRAM_NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(PROGRAM_NAME) $(LDFLAGS)
	
clean:
	@- $(RM) $(PROGRAM_NAME)
	@- $(RM) $(OBJS)	

distclean: clean
