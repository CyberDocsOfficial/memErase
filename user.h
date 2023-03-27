#include <string>
#include <fstream>
#include <iostream>
#include <unistd.h>
using namespace std;
#ifndef __user_h_
#define __user_h_

string systemCurrentUser(){
	string strVar;
	sleep(2);
	system("whoami > user");
	sleep(4);
	return strVar;
}
string systemUserRead(){
	ifstream file("user");
	string str, currentSystemUsers;
	while (getline(file, str)){
		currentSystemUsers = str;
	}
	return currentSystemUsers;
}

#endif
