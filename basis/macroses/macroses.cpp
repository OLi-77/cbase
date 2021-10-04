// macroses.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream> 
using namespace std;
int main(void)
{
	cout << "File: " << __FILE__ << endl
		<< "Date: " << __DATE__ << endl
		<< "Line: " << __LINE__ << endl
		<< "Time: " << __TIME__ << endl;
	return 0;
}
