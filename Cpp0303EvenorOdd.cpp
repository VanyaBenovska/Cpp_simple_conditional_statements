// Cpp0301ExcellentResult.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

int main()
{
	int number;
	bool isOdd = 1;
	string odd = "odd", even = "even";
	cin >> number;
	if (number % 2 == 0) { isOdd = 0; }

	if (isOdd) {
		cout << odd.c_str() << endl;
	}
	else {
		cout << even.c_str() << endl;
		cout << "\n\n";
	}
	return 0;
}

