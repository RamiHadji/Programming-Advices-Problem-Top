// Problem14.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
void Readnumbers(int& Num1, int& Num2) {
	cout << " Enter the number1: " << endl;
	cin >> Num1;
	cout << " Enter the number2: " << endl;
	cin >> Num2;
}
void Swap(int& A, int& B) {
	int Temp;
	Temp = A;
	A = B;
	B = Temp;
}
void PrintNumbers(int Num1, int Num2) {
	cout << " \n Number1 = " << Num1 << endl;
	cout << " \n Number2 = " << Num2 << endl;
}
int main() {
	int Num1, Num2;
	Readnumbers(Num1, Num2);
	PrintNumbers(Num1, Num2);
	Swap(Num1, Num2);
	PrintNumbers(Num1, Num2);
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
