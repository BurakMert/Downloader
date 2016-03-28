LIBRARIES = -L/home/burakmert/Projects/MMIS/NFS_ROOTS/4/lib
LIBRARIES += -L/home/burakmert/Projects/MMIS/HttpPerform
DBUS_INCLUDE = -I/usr/include/dbus-1.0 -I/usr/lib/x86_64-linux-gnu/dbus-1.0/include
GNU_INCLUDE = -I/usr/include/x86_64-linux-gnu
ROOTFS_INCLUDE = -I/home/burakmert/Projects/MMIS/NFS_ROOTS/4/usr/include
INCLUDE_DIRS =  $(GNU_INCLUDE) $(DBUS_INCLUDE) 
LDFLAGS += -ldbus-1 -lcurl -lcrypto -lssl -lpthread -largon2 


SRC += security.cpp
SRC += HTTPPerform.cpp
SRC += cJSON.cpp
SRC += main.cpp

all:
	$(CXX) -std=c++11 -o downloader $(SRC) $(INCLUDE_DIRS) $(ROOTFS_INCLUDE) $(LIBRARIES) $(LDFLAGS)

clean:
	rm -f downloader
