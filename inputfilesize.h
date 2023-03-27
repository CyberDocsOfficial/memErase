#include <string>
#include <fstream>
#include <iostream>

#ifndef __inputfilesize_h_
#define __inputfilesize_h_

using namespace std;

int inputFileSizeSaveToFile(string fileFromMain){
	fileFromMain = "ls -l " + fileFromMain + " > file_from_user";
	system(fileFromMain.c_str());
	return 0;
}
int returnInputFileSize(){
	ifstream file("file_from_user");
	string str;
	int inputFileSizeReturn;
	while (getline(file, str)){
		inputFileSizeReturn = stoi(str);
	}
	return inputFileSizeReturn;
}
#endif
