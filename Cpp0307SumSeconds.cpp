// Cpp0307SumSeconds.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
#include <iomanip>
using namespace std;



int main()
{
	//unsigned short int num;
	//unsigned character sign;
	unsigned short int seconds_first_player, seconds_second_player, seconds_third_player,
		total_sum_seconds, hours, minutes;
	cin >> seconds_first_player >> seconds_second_player >> seconds_third_player;

	total_sum_seconds = seconds_first_player + seconds_second_player + seconds_third_player;
	
	hours = total_sum_seconds / 60;
	minutes = total_sum_seconds % 60;

	cout << hours << ":" << setfill('0') << setw(2) << minutes << endl;

	cout << "\n\n";

    return 0;
}

