// Problem15.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
void ReadNumbers(float& A, float& B) {
	cout << " Please enter rectangle width A ? " << endl;
	cin >> A;
	cout << " Please enter rectangle width B ? " << endl;
	cin >> B;

}
float CalculateRectangleArea(float A, float B) {
	return  A * B;
}
void PrintResult(float Area) {
	cout << " \nRectangle Area =  " << Area << endl;
}
int main() {
	float A, B;
	ReadNumbers(A, B);
	PrintResult(CalculateRectangleArea(A, B));
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
