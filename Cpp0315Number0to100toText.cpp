// Cpp0315Number0to100toText.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include<string>
#include<map>
using namespace std;


int main()
{
	map<int, string> m{ {0, "zero"}, {1, "one"}, {2, "two"}, {3, "three"}, {4, "four"},
	{5, "five"}, {6, "six"}, {7, "seven"}, {8, "eight"}, {9, "nine"},
	{10, "ten"},{11, "eleven" },{12, "twelve" },{13, "thirteen" },
	{14, "fourteen" },{15, "fifteen" },{16, "sixteen" },{17, "seventeen" },
	{18, "eighteen" },{19, "nineteen" },
	{20, "twenty"}, {30, "thirty"}, {40, "forty"},
	{50, "fifty"}, {60, "sixty"}, {70, "seventy"}, {80, "eighty"}, {90, "ninety"}, {100, "one hundred"} };

	unsigned short number, first_digit, second_digit, middle_digit, last_digit;

	cin >> number;
	if ((number < 0) || (number > 100))
		cout << "invalid number";
	else if (m.find(number) == m.end()) {
		// not found

		first_digit = number / 10;
		last_digit = number % 10;
		first_digit = first_digit * 10;
		cout << m[first_digit].c_str() << " " << m[last_digit].c_str() << endl;
		cout << "\n";
	}
	else {
		// found
		if (number <= 100 && number >= 0) {
			cout << m[number].c_str() << endl;
			cout << "\n";
		}
	}

	return 0;
}

