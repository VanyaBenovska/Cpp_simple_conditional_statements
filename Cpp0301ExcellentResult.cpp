// Cpp0301ExcellentResult.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

int main()
{
	float result;
	string excellent = "Excellent!";
	cin >> result;
	if (result >= 5.5) {
		cout << excellent.c_str() << endl;
		// Why works: cout << excellent << endl;
		cout << "\n\n";
	}
	
    return 0;
}

