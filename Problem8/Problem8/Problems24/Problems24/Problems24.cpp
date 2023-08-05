// Problems24.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int ReadAge()
{
    int Age;
    cout << "\n Please Enter your Age : " << endl;
    cin >> Age;
    return Age;

}
bool ValidatenumberInrange(int Number, int From, int To)
{
    return (Number >= From && Number <= To);
}
void PrintResult(int Age) {
    if (ValidatenumberInrange(Age, 18, 45))
        cout << Age << "is a valid age \n";
    else
        cout << Age << "is a invalid age \n";
}
int main() {
    PrintResult(ReadAge());
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
