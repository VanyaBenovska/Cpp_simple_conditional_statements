// Cpp0311SpeedInfo.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
using namespace std;


int main()
{
	float speed;
	cin >> speed;

	if (speed <= 10) {
		cout << "slow" << endl;
		cout << "\n\n";
	}
	else if (speed > 10 && speed <= 50) {
		cout << "average" << endl;
		cout << "\n\n";
	}
	else if (speed > 50 && speed <= 150) {
		cout << "fast" << endl;
		cout << "\n\n";
	}
	else if (speed > 150 && speed <= 1000) {
		cout << "ultra fast" << endl;
		cout << "\n\n";
	}
	else {
		cout << "extremely fast" << endl;
		cout << "\n\n";
	}

	return 0;
}
