// Problems45.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

enum enMounthsOfYear { Jan = 1, Feb = 2, Mar = 3, Apr = 4, May = 5, Jun = 6, Jul = 7, Aug = 8, Sep = 9, Oct = 10, Nov = 11, Dec = 12 };
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
enMounthsOfYear ReadMounthOfYear()
{
	return (enMounthsOfYear)ReadNumberInRange(" Choose Any Number 1:12", 1, 12);
}
string GetMounthOfYear(enMounthsOfYear Mounth)
{
	switch (Mounth)
	{
	case enMounthsOfYear::Jan:
		return "January";
	case enMounthsOfYear::Feb:
		return "Febraruy";
	case enMounthsOfYear::Mar:
		return "March";
	case enMounthsOfYear::Apr:
		return "April";
	case enMounthsOfYear::May:
		return "May";
	case enMounthsOfYear::Jun:
		return "June";
	case enMounthsOfYear::Jul:
		return "July";
	case enMounthsOfYear::Aug:
		return "August";
	case enMounthsOfYear::Sep:
		return "September";
	case enMounthsOfYear::Oct:
		return "October";
	case enMounthsOfYear::Nov:
		return "November";
	case enMounthsOfYear::Dec:
		return "December";
	default:
		return "Not a Valid Day";
	}
}

int main()
{
	cout << GetMounthOfYear(ReadMounthOfYear()) << endl;
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
