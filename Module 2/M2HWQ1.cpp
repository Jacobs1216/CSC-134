/*
Jacob Simmons
3/9/26
csc-134
M2HWQ1 - BANK ACCOUNT
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    
    cout << setprecision(2) << fixed << endl;

    //variables
    int accountNumber = 683654;
    double startingBalance = 2656.53;
    double finalBalance;
    double deposit;
    double withdrawal;

    //user input
    cout << "Thank you for choosing City Bank, please enter your name." << endl;
    cin >> name;

    cout << "Hello, " << name << " your account balance is $" << startingBalance << endl;
    cout << "enter your deposit amount" << endl;
    cin >> deposit;
    cout << "enter your withdrawal amount" << endl;
    cin >> withdrawal;

    //calculate final balance
    finalBalance = startingBalance + deposit - withdrawal

    //display results
    cout << "------Account Statement------" << endl;
    cout << "Owner Name: " << name << endl;
    cout << "Account number: " << accountNumber << endl;
    cout << "Account Balance: " << finalBalance << endl;

    return 0;

}