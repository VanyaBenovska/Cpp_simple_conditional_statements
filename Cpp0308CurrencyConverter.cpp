// Cpp0308CurrencyConverter.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
#include<map>
#include<string>
#include<iomanip>
using namespace std;


int main()
{
	map<string, double> m{ { "USD", 1.79549 },{ "EUR", 1.95583 },{ "GBP", 2.53405 },
	{ "BGN", 1 } };

	float quantity;  // double
	string first_currency, second_currency;
	double quantity_in_second_currency;
	cin >> quantity >> first_currency >> second_currency;

	quantity_in_second_currency = quantity * m[first_currency] / m[second_currency];
	cout << fixed << setprecision(2) << quantity_in_second_currency << endl;
	cout << "\n\n";

	return 0;
}
