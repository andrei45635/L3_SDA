#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "Matrice.h"
#include "TestExtins.h"
#include "TestScurt.h"

using namespace std;

int main() {

	cout << "Beginning tests..." << endl;
	testAll();
	cout<<"First test finished..."<<endl;
	testAllExtins();
	cout << "Both tests finished...";
	_CrtDumpMemoryLeaks();
}
