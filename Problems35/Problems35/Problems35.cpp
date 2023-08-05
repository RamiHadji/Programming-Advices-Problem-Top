// Problems35.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

struct stPiggyBankContenet
{
    int Pennies, Nickels, Dimes, Quarters, Dollars;
};
stPiggyBankContenet ReadPiggBankContenet()
{
    stPiggyBankContenet PiggyBankContenet;
    cout << "Please enter a Total Pennies? " << endl;
    cin >> PiggyBankContenet.Pennies;
    cout << "Please enter a Total Nickels? " << endl;
    cin >> PiggyBankContenet.Nickels;
    cout << "Please enter a Total Dimes? " << endl;
    cin >> PiggyBankContenet.Dimes;
    cout << "Please enter a Total Quarters? " << endl;
    cin >> PiggyBankContenet.Quarters;
    cout << "Please enter a Total Dollars? " << endl;
    cin >> PiggyBankContenet.Dollars;

    return PiggyBankContenet;
}
int CalculateTotalPennies(stPiggyBankContenet PiggyBankContenet)
{
    int TotalPennies = 0;
    TotalPennies = PiggyBankContenet.Pennies * 1 + PiggyBankContenet.Nickels * 5 + PiggyBankContenet.Dimes * 10 + PiggyBankContenet.Quarters * 25 + PiggyBankContenet.Dollars * 100;
    return  TotalPennies;
}
int main() {
    int TotalPennies = CalculateTotalPennies(ReadPiggBankContenet());
    cout << endl << "Total Pennies = " << TotalPennies << endl;
    cout << endl << "Total Dollars =" << (float)TotalPennies / 100 << endl;
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
