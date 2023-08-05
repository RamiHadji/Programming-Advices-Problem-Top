// Problems21.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <cmath>

using namespace std;

float ReadCircumference()
{
	float L;
	cout << " Please enter Circumference? : " << endl;
	cin >> L;
	return L;
}
float CircleAreaByCircumference(float L)
{
	const float PI = 3.141592653589793238;

	float Area = pow(L, 2) / (4 * PI);

	return Area;
}
void PrintResult(float Area)
{
	cout << " \n Circle Area = " << Area << endl;
}
int main() {
	PrintResult(CircleAreaByCircumference(ReadCircumference()));
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
