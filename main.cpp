#include <iostream>
#include <string>

#include "erase.h"
#include "copyfiles.h"
#include "devicelist.h"
#include "usage.h"
#include "fillzero.h"
#include "fillone.h"
#include "fillrandom.h"

using namespace std;

int main(int argc, char ** argv){
	string inputFilePath, cmd, systemConnectedDrive; 
	int numberOfIteration;
	system("cat banner");
	memeraseUsage();
	char input;
	for (int i = 1; i < argc; ++i){
		string str = *(argv + i);
		if (str == "-f"){
			inputFilePath = *((argv + i) + 1);
			cmd = inputFilePath + " >> file-from-user";
			system(cmd.c_str());
		}
		else if (str == "-i"){
			numberOfIteration = stoi(*((argv + i) + 1));
		}
		else if(str == "-o"){
			fillZero();
		}
		else if (str == "-l"){
			fillOne();
		}
		else if (str == "-r"){
			fillRandom();
		}
		else {
			cout << "Oohh... Please enter a valid input." << endl;
			memeraseUsage();
		}
	}

	cout <<"Corrently inserted device : " << endl;
	string * list;
        list = systemConnectedDrives();
    	for (int i = 0; i < 4; i++){
    		cout << list[i] << endl;
		}
	cout << "Insert the memory device or confirm the drive[Y/n]:" << endl;

	cin >> input;
	if (input == 'y' or input == 'Y'){ 
		for (int i = 0; i < numberOfIteration; i++){
			/*sleep 2 sec*/
			eraseDrive(systemConnectedDrive);
			/*sleep 2 sec*/
			copyFiles(inputFilePath);
		}
	}
	else {
		cout << "memErase terminated!..." << endl;
	}
return 0;
}

