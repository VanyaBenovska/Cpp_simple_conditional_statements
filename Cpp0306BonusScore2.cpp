// Cpp0306BonusScore2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int number;
	cin >> number;
	double bonus_score = 0, score = 0;
	if (number > 1000) {                      
		bonus_score += 10.0 * number / 100.0;		
	}
	else if (number > 100) {
		bonus_score += 20.0 * number / 100.0;		
	}
	else {
		bonus_score += 5;		
	}

	if (!(number % 2)) {
		bonus_score += 1;
	}
	else if (number % 10 == 5) {
		bonus_score += 2;
	}
	
	cout << bonus_score << endl << bonus_score + number << endl;
	cout << "\n\n";

	return 0;
}
