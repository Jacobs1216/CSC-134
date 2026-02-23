/*
CSC-134
M2T2 Receipt Calculator
Jacob Simmons
2/22/2026
*/


#include <iostream>
#include <iomanip> // for 2 decimal places
using namespace std;

int main() {
    //purpose: create a receipt

    //declare variables
    string item = "cheeseburger";
    double item_price = 5.99;
    double tax_percent = 0.08; // 8% tax
    double tax_amount;         // tax total in $
    double total;              // price + tax

    //great user an take order
    cout << "Welcome to our restuarant!" << endl;
    cout << "You ordered one " << item << "." << endl;

    // calculate meal price
    // calculate sales tax and total price
    tax_amount = item_price * tax_percent;
    total = item_price + tax_amount;

    //print receipt
    cout << setprecision(2) << fixed;
    cout << "Your total is, " << total << endl;

    return 0; // no errors
}
