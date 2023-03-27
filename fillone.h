#include <string>

#ifndef __fillone_h_
#define __fillone_h_

using namespace std;

int fillOne(){
	string cmd, * connectedDrive;
	connectedDrive = systemConnectedDrives();
	cmd = "if=/dev/zero of=/dev/sd" + * connectedDrive + " bs=1M";
	system(cmd.c_str());
	/*sleep for 4 sec here*/

	return 0;
}

#endif
