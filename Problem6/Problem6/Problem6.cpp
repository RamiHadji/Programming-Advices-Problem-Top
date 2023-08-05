// Problem6.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

struct stInfo {
    string FirstName;
    string LastName;
};

stInfo ReadInfo() {
    stInfo Info;
    cout << " Enter First Name : " << endl;
    cin >> Info.FirstName;
    cout << " Enter Last Name : " << endl;
    cin >> Info.LastName;

    return Info;
}

string GetFullName(stInfo Info ,bool Reversed) {
    string FullName = "";

    if(Reversed)
       FullName = Info.FirstName + " " + Info.LastName;
    else
        FullName = Info.LastName + " " + Info.FirstName;
    return FullName;
}

void PrintFullName(string FullName) {
    cout << "\n Your Full Name is : " << FullName << endl;
}

int main() {
    PrintFullName(GetFullName(ReadInfo(),true));
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
