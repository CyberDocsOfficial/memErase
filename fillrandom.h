#include <string>
#include <unistd.h>
#include "devicelist.h"

#ifndef __fillrandom_h_
#define __fillrandom_h_

using namespace std;

int fillRandom(){
	string cmd, * connectedDrive;
	connectedDrive = systemConnectedDrives();
	cmd = "if=/dev/urandom of=/dev/sd" + * connectedDrive + " bs=1M";
	system(cmd.c_str());
	sleep(4);
	return 0;

}
#endif
