// Cpp0312AreaofFigures.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
#include<string>
#include<iomanip>
#include <sstream>
using namespace std;


int main()
{
//	enum Options { square, rectangle, circle, triangle };
//	Options type_of_figure;

	double area, pi = 3.14159265359;
	string input = "";
	getline(cin, input);
	int s;
	if (input == "square") { s = 1; }
	if (input == "rectangle") { s = 2; }
	if (input == "circle") { s = 3; }
	if (input == "triangle") { s = 4; }	

	switch (s) {
	case 1:
		double a;
		cin >> a;
		area = a * a;		
		break;
	case 2:
		double b, c;
		cin >> b >> c;
		area = b * c;
		break;
	case 3:
		double r;
		cin >> r;
		area = pi * r * r;
		break;
	case 4:
		double d, h;
		cin >> d >> h;
		area = d * h / 2.0;
		break;
	}

	cout << fixed << setprecision(3) << area << endl;
	cout << "\n\n";

    return 0;
}

