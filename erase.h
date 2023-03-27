#include "user.h"
#include "devicelist.h"
#include <string>

#ifndef __erase_h_
#define __erase_h_

using namespace std;

int eraseDrive(string systemConnectedDrive){
	string currentSystemUserVar = systemUserRead();
	string cmd = "rm -rf /media/" + currentSystemUserVar + "/" + systemConnectedDrive + "/*";
	system(cmd.c_str());
	return 0;
}

#endif
