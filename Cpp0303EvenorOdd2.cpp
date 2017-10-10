// Cpp0303EvenorOdd2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

int main()
{
	signed int number;
	string odd = "odd", even = "even";
	cin >> number;
	bool is_number_Odd = number % 2 != 0;

	if (is_number_Odd) {
		cout << odd.c_str() << endl;
		cout << "\n\n";
	}
	else {		
		cout << even.c_str() << endl;
		cout << "\n\n";
	}
    return 0;
}

