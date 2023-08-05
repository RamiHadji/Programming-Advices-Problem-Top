// Problem9.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
void ReadNumbers(int& Num1, int& Num2, int& Num3) {
	cout << " Please enter your number 1 " << endl;
	cin >> Num1;
	cout << " Please enter your number 2 " << endl;
	cin >> Num2;
	cout << " Please enter your number 3 " << endl;
	cin >> Num3;
}
int SumOf3Numbers(int Num1, int Num2, int Num3) {
	return Num1 + Num2 + Num3;
}
void PrintResults(int Total) {
	cout << " \n the total sum of numbers is : " << Total << endl;
}
int main() {
	int Num1, Num2, Num3;
	ReadNumbers(Num1, Num2, Num3);
	PrintResults(SumOf3Numbers(Num1, Num2, Num3));
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
