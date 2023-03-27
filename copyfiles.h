#include "massstoragedevicememory.h"
#include "user.h"
#include "inputfilesize.h"
#include <string>

using namespace std;

int copyFiles(string filePath){
	int i = 0;
	int intputFileSize = returnInputFileSize();
	string cmd;
	string systemUserFromUser = systemUserRead();
	int deviceDriveSize = deviceMemory();

	cmd  = "cp" + filePath + "/home/" + systemUserFromUser + "pendrive_name";

 	while (i < deviceDriveSize){
		system (cmd.c_str());
		i++;
	}
	return 0;
}


