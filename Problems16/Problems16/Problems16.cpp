// Problems16.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
#include <string>
#include <cmath>
using namespace std;

void ReadNumber(float& A, float& B) {
	cout << " Enter nember A: " << endl;
	cin >> A;
	cout << " Enter nember B: " << endl;
	cin >> B;
}
float RectangleAreaBySideAndDiagonal(float A, float B) {
	float Area = A * sqrt(pow(B, 2) - pow(A, 2));
	return Area;
}
float PrintResult(float Area) {
	cout << " \n Rectangle Area = " << Area << endl;
	return 0;
}
int main() {
	float A, B;
	ReadNumber(A, B);
	PrintResult(RectangleAreaBySideAndDiagonal(A, B));
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
