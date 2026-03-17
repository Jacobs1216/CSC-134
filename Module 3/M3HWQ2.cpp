/*
jacob simmons
3/17/2026
csc-134
m3hwq2
*/

#include <iostream>
#include <iomanip>
using namespace std;


int main () {

    //variables
    double mealPrice;
    double taxRate = 0.07; // 7% tax
    double tax;
    double tip = 0;
    double total;
    int orderType;

    //input order
    cout << "enter price of the meal: $" << endl;
    cin >> mealPrice;

    cout << "enter 1 if dine-in, enter 2 if takeout." << endl;
    cin >> orderType;

   //meal calculations
    if (orderType == 1) {
        tip = mealPrice * 0.15;
    }

    tax = mealPrice * taxRate;
    total = mealPrice + tax + tip;

    cout << fixed << setprecision(2) << endl;

    //receipt output
    cout << " ------ RECEIPT ------ " << endl;
    cout << "Meal Price: $" << mealPrice << endl;
    cout << "Tax: $" << tax << endl;
    cout << "Tip: $" << tip << endl;
    cout << "Total: $" << total << endl;

    return 0;


}