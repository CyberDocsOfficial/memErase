#include <iostream>

using namespace std;

int memeraseUsage(){
	cout << "Note: Insert one external mass storage device at a time to this Machine!!!. Insert the mass storage device before running this program." << endl;
	cout << "memerase -f <file> -i <number of iterations> : Deep erase." << endl;
	cout << "memerase -o : Fill all sectors zeros." << endl;
	cout << "memerase -l : Fill all sectors once." << endl;
	cout << "memerase -r : Fill all sectors random." << endl;
	return 0;
}

