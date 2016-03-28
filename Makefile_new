LIBRARIES = -L./libs/ # for argon2 # for curl
#LIBRARIES += -L./Libraries2Add/ 
LIBRARIES += -L/home/sedat/MMIS_ARGE/filesystems/ROOTFS/usr/lib  # for dbus
LIBRARIES += -L/home/sedat/MMIS_ARGE/filesystems/ROOTFS/lib


DBUS_INCLUDE = -I/usr/include/dbus-1.0 -I/usr/lib/x86_64-linux-gnu/dbus-1.0/include
GNU_INCLUDE = -I/usr/include/x86_64-linux-gnu
ROOTFS_INCLUDE = -I/home/sedat/MMIS_ARGE/filesystems/ROOTFS/usr/include
HEADERS_INCLUDE = -I.

INCLUDE_DIRS =  $(GNU_INCLUDE) $(ROOTFS_INCLUDE) $(DBUS_INCLUDE) $(HEADERS_INCLUDE)

LDFLAGS += -ldbus-1 -lcurl -lcrypto -lssl -lpthread -largon2

LINK_DIR += -Xlinker -rpath-link=/home/sedat/MMIS_ARGE/toolchain/gcc-linaro-arm-linux-gnueabihf-4.9-2014.09_linux/bin/../arm-linux-gnueabihf/libc/lib/arm-linux-gnueabihf/
LINK_DIR += -Xlinker -rpath-link=/home/sedat/MMIS_ARGE/toolchain/gcc-linaro-arm-linux-gnueabihf-4.9-2014.09_linux/bin/../arm-linux-gnueabihf/libc/usr/lib/arm-linux-gnueabihf/
LINK_DIR += -Xlinker -rpath-link=/home/sedat/MMIS_ARGE/security/appStoreClient/Libraries2Add
LINK_DIR += -Xlinker -rpath-link=/home/sedat/MMIS_ARGE/filesystems/ROOTFS/usr/lib
LINK_DIR += -Xlinker -rpath-link=/home/sedat/MMIS_ARGE/filesystems/ROOTFS/lib

SRC += src/security.c
SRC += src/main.cpp
SRC += src/HTTPPerform.cpp
SRC += src/cJSON.c

all:
	$(CXX) -std=c++11  -o downloader $(SRC) $(INCLUDE_DIRS) $(LIBRARIES) $(LDFLAGS) $(LINK_DIR)

clean:
	rm -f downloader
