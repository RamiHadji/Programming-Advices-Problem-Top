// Problem13.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
void ReadNumbers(int& Num1, int& Num2, int& Num3) {
    cout << " Please enter Number 1 ? " << endl;
    cin >> Num1;
    cout << " Pleas enter Number 2 " << endl;
    cin >> Num2;
    cout << " Pleas enter Number 3 " << endl;
    cin >> Num3;
}
int MaxOf3Numbers(int Num1, int Num2, int Num3) {
    if (Num1 > Num2)
        if (Num1 > Num3)
            return Num1;
        else
            return Num2;
    else
        if (Num2 > Num3)
            return Num2;
        else
            return Num3;
}
void PrintResults(int Max) {
    cout << "\n The Maximum Number is : " << Max << endl;
}
int main() {
    int Num1, Num2, Num3;
    ReadNumbers(Num1, Num2, Num3);
    PrintResults(MaxOf3Numbers(Num1, Num2, Num3));
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
