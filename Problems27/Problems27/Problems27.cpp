// Problems27.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int ReadNumber()
{
    int Number;
    cout << "Please enter a number?" << endl;
    cin >> Number;

    return Number;

}
void PrintRangeFrom1toN_UsingWhile(int N)
{
    int Counter = N + 1;
    cout << "Range printed using while Statement:\n";
    while (Counter > 1)
    {
        Counter--;
        cout << Counter << endl;
    }
}
void PrintRangeFrom1toN_UsingDoWhile(int N)
{
    int Counter = N + 1;
    cout << "Range printed using Do..While Statement:\n";
    do
    {
        Counter--;
        cout << Counter << endl;

    } while (Counter > 1);
}
void PrintRangeFrom1toN_UsingWhilFor(int N)
{
    cout << "Range printed using For Statement:\n";
    for (int Counter = N; Counter >= 1; Counter--)
    {
        cout << Counter << endl;
    }
}
int main() {
    int N = ReadNumber();
    PrintRangeFrom1toN_UsingWhile(N);
    PrintRangeFrom1toN_UsingDoWhile(N);
    PrintRangeFrom1toN_UsingWhilFor(N);
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
