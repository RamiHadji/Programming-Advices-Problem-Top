// Problems29.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

enum enOddOrEven { Odd = 1, Even = 2 };
int ReadNumber() {
    int Number;
    cout << "Please enter a number?" << endl;
    cin >> Number;
    return Number;
}
enOddOrEven CheckOddOrEven(int Number)
{
    if (Number % 2 != 0)
        return enOddOrEven::Odd;
    else
        return enOddOrEven::Even;
}
int SumEvenNumbersFrom1toN_UsingWhile(int N) {
    int Counter = 0;
    int Sum = 0;

    cout << "Sum Odd numbers using While Statement:\n";

    while (Counter < N)
    {
        Counter++;
        if (CheckOddOrEven(Counter) == enOddOrEven::Even)
        {
            Sum += Counter;
        }
    }
    return Sum;
}
int SumEvenNumbersFrom1toN_UsingDoWhile(int N) {

    int Sum = 0;
    int Counter = 0;

    cout << "Sum Odd numbers using Do..While Statement:\n";
    do {
        Counter++;
        if (CheckOddOrEven(Counter) == enOddOrEven::Even)
        {
            Sum += Counter;
        }
    } while (Counter < N);
    return Sum;
}
int SumEvenNumbersFrom1toN_UsingFor(int N)
{
    int Sum = 0;
    cout << "Sum Odd numbers using For Statement:\n";
    for (int Counter = 1; Counter <= N; Counter++)
    {
        if (CheckOddOrEven(Counter) == enOddOrEven::Even)
        {
            Sum += Counter;
        }
    }
    return Sum;
}
int main() {

    int N = ReadNumber();

    cout << SumEvenNumbersFrom1toN_UsingWhile(N) << endl;
    cout << SumEvenNumbersFrom1toN_UsingDoWhile(N) << endl;
    cout << SumEvenNumbersFrom1toN_UsingFor(N) << endl;

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
