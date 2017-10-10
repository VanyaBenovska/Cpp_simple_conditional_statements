// Cpp0313Timeplus15Minutes.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include<iomanip>
using namespace std;


int main()
{
	unsigned short entered_hours, entered_minutes, minutes_after_15_min, 
		hours_to_print, minutes_to_print;
	cin >> entered_hours >> entered_minutes;
	hours_to_print = entered_hours;
	minutes_after_15_min = entered_minutes + 15;

	if (minutes_after_15_min > 59 ) {
		minutes_to_print = minutes_after_15_min % 60;
		hours_to_print += 1;
	}
	else {
		minutes_to_print = minutes_after_15_min;
	}
	if (hours_to_print > 23) {
		hours_to_print = 0;
	}
	cout << hours_to_print << ":" << setfill('0') << setw(2) << minutes_to_print << endl;
	cout << "\n\n";

    return 0;
}

