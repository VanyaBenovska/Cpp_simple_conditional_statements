// Cpp0309PasswordGuess.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
#include<string>
using namespace std;


int main()
{
	string original_password = "s3cr3t!P@ssw0rd", entered_password;
	cin >> entered_password;

	if (entered_password == original_password) {
		cout << "Welcome" << endl;
		cout << "\n\n";
	}
	else {
		cout << "Wrong password!" << endl;
		cout << "\n\n";
	}

    return 0;
}

