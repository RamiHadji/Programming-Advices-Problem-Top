// Problem4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

struct stInfo{
    int Age;
    bool HasDrivingLicense;
};
stInfo ReadInfo() {
    stInfo Info;

    cout << " Please Enter Your Age? " << endl;
    cin >> Info.Age;

    cout << " Do you have drivver license? YES = 1, NO = 0 " << endl;
    cin >> Info.HasDrivingLicense;

    return Info;
}

bool IsAccepted(stInfo Info) {

    return(Info.Age > 21 && Info.HasDrivingLicense);

}

void PrintResult(stInfo Info) {

    if (IsAccepted(Info))
        cout << " \n Hired " << endl;
    else
        cout << " \n Rejected " << endl;
}
int main()
{
    PrintResult(ReadInfo());
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
