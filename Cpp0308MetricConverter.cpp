// Cpp0308MetricConverter.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
#include<map>
#include<string>
#include<iomanip>
using namespace std;


int main()
{
	map<string, double> m{ {"mm", 1000}, {"cm", 100}, {"mi", 0.000621371192},
	{"in", 39.3700787}, {"km", 0.001}, {"ft", 3.2808399}, {"yd", 1.0936133},
	{"m", 1} };

	float distance;  // double
	string first_measure, second_measure;
	double distance_in_second_measure;
	cin >> distance >> first_measure >> second_measure;

	distance_in_second_measure = distance * m[second_measure] / m[first_measure];
	cout << fixed << setprecision(8) << distance_in_second_measure << endl;
	cout << "\n\n";

    return 0;
}

