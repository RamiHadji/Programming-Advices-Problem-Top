// Problems42.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

struct strTaskDuoration
{
    int NumberOfDays, NumberOfHours, NumberOfMinutes, NumberOfSeconds;
};
int ReadPositiveNumber(string Message)
{
    float Number = 0;
    do
    {
        cout << Message << endl;
        cin >> Number;

    } while (Number <= 0);
    return Number;
}
strTaskDuoration ReadTaskDuration()
{
    strTaskDuoration TaskDuration;
    TaskDuration.NumberOfDays = ReadPositiveNumber("Please Enter Number Of Days?");
    TaskDuration.NumberOfHours = ReadPositiveNumber("Please Enter Number Of Hours?");
    TaskDuration.NumberOfMinutes = ReadPositiveNumber("Please Enter Number Of Minutes?");
    TaskDuration.NumberOfSeconds = ReadPositiveNumber("Please Enter Number Of Seconds?");
    return TaskDuration;
}
int TaskDuorationSeconds(strTaskDuoration TaskDuration)
{
    int DuorationSeconds = 0;
    DuorationSeconds = TaskDuration.NumberOfDays * 24 * 60 * 60;
    DuorationSeconds += TaskDuration.NumberOfHours * 60 * 60;
    DuorationSeconds += TaskDuration.NumberOfMinutes * 60;
    DuorationSeconds += TaskDuration.NumberOfSeconds;
    return DuorationSeconds;
}
int main() {
    cout << "\nTask Duration In Seconds: " << TaskDuorationSeconds(ReadTaskDuration()) << endl;
    cout << endl;

    return 0;
}// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
