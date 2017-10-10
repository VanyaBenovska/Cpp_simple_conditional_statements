// Cpp0314EqualNumbers.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
using namespace std;

bool AreEquals(int a, int b);

int main()
{
	int a, b, c;
	cin >> a >> b >> c;

	if (AreEquals(a, b) && AreEquals(b, c)) {
		cout << "yes" << endl;
		cout << "\n\n";
	}
	else {
		cout << "no" << endl;
		cout << "\n\n";
	}

    return 0;
}

bool AreEquals(int a, int b) {
	return (a == b);
}
