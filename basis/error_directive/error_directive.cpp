// error_directive.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"

//#if defined(POL) && defined(FRA) 

#if defined(POL) && defined(FRA)
#error Please define only one country 
#elif !(defined(POL) || defined(FRA)) 
#error Please define only one country 
#endif 

#ifndef POL
#define country "Poland" 
#define capital "Warsaw" 
#elif !defined(FRA) 
#define country "France" 
#define capital "Paris" 
#endif 

#include <iostream> 
using namespace std;
int main()
{
	cout << capital << " is the capital of " << country << "." << endl;
	system("pause");
	return 0;

}

