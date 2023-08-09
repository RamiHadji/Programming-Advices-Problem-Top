// Problems40.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

// problem A restourant charges 10% services fee and 16% sales tax.
#include <iostream>
using namespace std;
float ReadPositiveNumber(string Message)
{
    float Number = 0;
    do
    {
        cout << Message << endl;
        cin >> Number;

    } while (Number <= 0);
    return Number;
}
float CalculateRemainder(float TotalBill, float TotalCashPaid)
{
    return TotalCashPaid - TotalBill;
}
float TotalBillAfterServiceAndTax(float TotalBill)
{
    TotalBill = TotalBill * 1.1;
    TotalBill = TotalBill * 1.16;
    return TotalBill;
}
int main() {
    float Totalbill = ReadPositiveNumber("Please Enter Total bill?");
    cout << endl;
    cout << "Total bill = " << Totalbill << endl;
    cout << "Total Bill After Service Fee and Sales Tax = " << TotalBillAfterServiceAndTax(Totalbill) << endl;
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
