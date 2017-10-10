// Cpp0312AreaofFigures2.cpp : Defines the entry point for the console application.
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
	double a, b, h, r;
	string input = "";
	getline(cin, input);
	int s;
	if (input == "square") { s = 1; }
	if (input == "rectangle") { s = 2; }
	if (input == "circle") { s = 3; }
	if (input == "triangle") { s = 4; }

	switch (s) {
	case 1:		
		cin >> a;
		area = a * a;
		break;
	case 2:		
		cin >> a >> b;
		area = a * b;
		break;
	case 3:
		double r;
		cin >> r;
		area = pi * r * r;
		break;
	case 4:		
		cin >> a >> h;
		area = a * h / 2.0;
		break;
	}

	cout << fixed << setprecision(3) << area << endl;
	cout << "\n\n";

	return 0;
}

