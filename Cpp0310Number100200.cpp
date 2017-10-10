// Cpp0310Number100200.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
using namespace std;


int main()
{
	signed int number;
	cin >> number;

	if (number < 100) {
		cout << "Less than 100" << endl;
		cout << "\n\n";
	}
	else if (number >= 100 && number <= 200) {
		cout << "Between 100 and 200" << endl;
		cout << "\n\n";
	}
	else {
		cout << "Greater than 200" << endl;
		cout << "\n\n";
	}

	return 0;
}

