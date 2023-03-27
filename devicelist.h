#include <string>
#include <fstream>
#include <iostream>
#include "user.h"

using namespace std;
#ifndef __devicelist_h_
#define __devicelist_h_

int listOfDrives(){
	string currentSystemUserVar1 = systemUserRead();
	string cmd = "ls /media/" + currentSystemUserVar1 + " > storage-device-list";
	system(cmd.c_str());
	return 0;
}
string * systemConnectedDrives(){
	 	ifstream file("storage-device-list");
	  	string str;
	  	static string storageDevicesList[4];
	  	int i=0;
	  	while (getline(file, str)){
			storageDevicesList[i] = str;
			i++;
	  	}
	  	cout << storageDevicesList << endl;
	  	return storageDevicesList;
}

#endif
