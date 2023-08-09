// Problems43.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;
struct strTaskDuration
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
strTaskDuration SecondsToTaskDuration(int TotalSeconds)
{
    strTaskDuration TaskDuration;
    const int SecondPerDay = 24 * 60 * 60;
    const int SecondPerHoure = 60 * 60;
    const int SecondPerMinute = 60;

    int Remainder = 0;
    TaskDuration.NumberOfDays = float(Remainder / SecondPerDay);
    Remainder = TotalSeconds % SecondPerDay;
    TaskDuration.NumberOfHours = float(Remainder / SecondPerHoure);
    Remainder = Remainder % SecondPerHoure;
    TaskDuration.NumberOfMinutes = float(Remainder / SecondPerMinute);
    Remainder = Remainder % SecondPerMinute;
    TaskDuration.NumberOfSeconds = Remainder;
    return TaskDuration;
}
void PrintTaskDurationDetails(strTaskDuration TaskDuration)
{
    cout << "\n";
    cout << TaskDuration.NumberOfDays << ":"
        << TaskDuration.NumberOfHours << ":"
        << TaskDuration.NumberOfMinutes << ":"
        << TaskDuration.NumberOfSeconds << "\n";
}
int main() {
    int TotalSeconds = ReadPositiveNumber("Please Enter Total Seconds");
    PrintTaskDurationDetails(SecondsToTaskDuration(TotalSeconds));
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
