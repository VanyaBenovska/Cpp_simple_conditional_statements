// Cpp0305Number09toText.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
#include<map>
#include <utility>

using namespace std;

//one two three four five six six seven eight nine
int main()
{
	//map<int, string> m{ {1,"one"}, {2, "two"}, {3, "three"}, {4, "four"},
	//{5, "five"}, {6, "six"}, {7, "seven"}, {8, "eight"}, {9, "nine"} };
	map<int, string> Numbers;
	Numbers[1] = "one";
	Numbers[2] = "two";
	Numbers[3] = "three";
	Numbers[4] = "four";
	Numbers[5] = "five";
	Numbers[6] = "six";
	Numbers[7] = "seven";
	Numbers[8] = "eight";
	Numbers[9] = "nine";

	int num;
	cin >> num;
	if (num > 9) {
		cout << "number too big" << endl;
	}
	else {
		cout << Numbers[num].c_str();
	}

	return 0;
}

