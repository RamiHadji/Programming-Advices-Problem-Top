// Problems44.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

enum enDaysOfWeek { sat = 1, sun = 2, mon = 3, tue = 4, wed = 5, thu = 6, fri = 7, };

int ReadNumberInRange(string message, int From, int To)
{
	int Number = 0;
	do
	{
		cout << message << endl;
		cin >> Number;
	} while (Number<From || Number>To);
	return Number;
}

enDaysOfWeek ReadDayOfWeek()
{
	return (enDaysOfWeek)ReadNumberInRange("Please,enter Number of Day you want sat=1,sun=2,mon=3,tue=4,wed=5,thu=6,fri=7 ", 1, 7);
}

string GetDayOfWeek(enDaysOfWeek Day)
{
	switch (Day)
	{
	case enDaysOfWeek::sat:
		return "Saturdday";
	case enDaysOfWeek::sun:
		return "SunDay";
	case enDaysOfWeek::mon:
		return "Monday";
	case enDaysOfWeek::tue:
		return "Tuesday";
	case enDaysOfWeek::wed:
		return "Wednesday";
	case enDaysOfWeek::thu:
		return "Thursday";
	case enDaysOfWeek::fri:
		return "Friday";
	default:
		return "Not a Valid Day";
	}
}

int main()
{
	cout << GetDayOfWeek(ReadDayOfWeek()) << endl;
	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
