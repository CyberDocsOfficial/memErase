#include <sys/statvfs.h>
#include <cmath>
#include <string>
#include <cstring>
#include "user.h"
#include "devicelist.h"

#ifndef __massstoragedevicememory_h_
#define __massstoragedevicememory_h_

using namespace std;

int deviceMemory(){
	const uint GB = (1024 * 1024) * 1024;
	string currentSystemUser = systemUserRead();
        string * currentlyConnectedSystemDrives = systemConnectedDrives();
	string diskMountPoint = "/media/"+ currentSystemUser + "/" + * currentlyConnectedSystemDrives;
	struct statvfs buffer;
	int ret = statvfs(diskMountPoint.c_str(), &buffer);
	const double totalDiskSpace = ceil((double)(buffer.f_blocks * buffer.f_frsize)/GB);
	return totalDiskSpace;
}
#endif
