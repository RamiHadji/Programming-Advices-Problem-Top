// Problem8.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

enum enPassFail { Pass = 1, Fail = 2 };

int ReadMark() {

    int Mark;
    cout << " Please enter the Mark : " << endl;
    cin >> Mark;
    return Mark;

}
enPassFail CheckMark(int Mark) {
    if (Mark >= 50)
        return enPassFail::Pass;
    else
        return enPassFail::Fail;
}
void PrinntResults(int Mark) {
    if (CheckMark(Mark) == enPassFail::Pass)
        cout << " \n You Passed " << endl;
    else
        cout << " \n You Faild " << endl;
}
int main() {
    PrinntResults(ReadMark());
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
