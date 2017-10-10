// Cpp0315Number0to100toText2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
#include<string>
//#include<array>
using namespace std;


int main()
{
	int number;
	cin >> number;

	string shortName[] { "zero","one", "two", "three", "four", "five", 
		"six", "seven", "eight", "nine", "ten", "eleven", "twelve" };

	string compositeName[]{ "twen", "thir", "four", "fif", "six", "seven", "eigh", "nine" };

	string name = "";



	if ((number < 0) || (number > 100))
		name = "invalid number";

	else if (number < 13)
		name = shortName[number];

	else if (number < 20)
		name = compositeName[number % 10 - 2] + "teen";

	else if (number < 100)

	{

		if (number / 10 == 4) name = "forty";
		else name = compositeName[number / 10 - 2] + "ty";

		if (number % 10 != 0)
			name += " " + shortName[number % 10];

	}

	else // number = 100

		name = "one hundred";

	cout << name << endl;
	cout << "\n\n";


    return 0;
}

