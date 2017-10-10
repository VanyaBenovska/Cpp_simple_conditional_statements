// Cpp0304GreaterNumber.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	int first_number, second_number;
	cin >> first_number >> second_number;
	if (first_number > second_number) {
		cout << first_number << endl;
		cout << "\n\n";
	}
	else {
		cout << second_number << endl;
		cout << "\n\n";
	}
	return 0;
}

