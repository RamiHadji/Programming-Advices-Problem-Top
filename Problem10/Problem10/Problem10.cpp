// Problem10.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
void ReadNumbers(int& Mark1, int& Mark2, int& Mark3) {
	cout << " Please enter your number 1 " << endl;
	cin >> Mark1;
	cout << " Please enter your number 2 " << endl;
	cin >> Mark2;
	cout << " Please enter your number 3 " << endl;
	cin >> Mark3;
}
int SumOf3Numbers(int Mark1, int Mark2, int Mark3) {
	return Mark1 + Mark2 + Mark3;
}
float CalculateAverage(int Mark1, int Mark2, int Mark3) {
	return (float)SumOf3Numbers(Mark1, Mark2, Mark3) / 3;
}
void PrintResults(int Total) {
	cout << " \n the total sum of numbers is : " << Total << endl;
}
int main() {
	int Mark1, Mark2, Mark3;
	ReadNumbers(Mark1, Mark2, Mark3);
	PrintResults(CalculateAverage(Mark1, Mark2, Mark3));
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
