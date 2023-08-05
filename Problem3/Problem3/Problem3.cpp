// Problem3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;
enum enNumberType { Odd = 1, Even = 2 };
int ReadNumber() {
    int Num;
    cout << "Please enter a number!" << endl;
    cin >> Num;
    return Num;
}
enNumberType CheckNumberType(int Num) {
    int Result = Num % 2;
    if (Result == 0)
        return enNumberType::Even;
    else
        return enNumberType::Odd;
}
void PrintNumberType(enNumberType NumberType) {
    if (NumberType == enNumberType::Even)
        cout << "\n Number is Even\n";
    else
        cout << "\n Number is Odd\n";
}
int main() {
    PrintNumberType(CheckNumberType(ReadNumber()));
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
