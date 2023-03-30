#include "devmem.h"
#include "inputfilesize.h"
#include <cmath>
using namespace std;

int progress(){
	double inputFileSizeVar = returnInputFileSize();
	double ConnectedDriveSize = deviceMemory();
	static double quotientProgress;
	double driveSize, fileSize;
	double quotientSize = driveSize / fileSize;
	quotientProgress = 100 / quotientSize;
	return quotientProgress;
}


