#include <iostream>
#include <string>
#include "devicelist.h"
#include <unistd.h>
#ifndef __fillzero_h
#define __fillzero_h

using namespace std;

int fillZero(){
	string cmd, * connectedDrive;
	connectedDrive = systemConnectedDrives();
	cmd = "if=/dev/zero of=/dev/sd" + * connectedDrive + " bs=1M";
	system(cmd.c_str());
	sleep(4);	
	return 0;

}

#endif
