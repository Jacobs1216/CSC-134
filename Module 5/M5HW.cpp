/*
Jacob Simmons
csc-134
4/15/2026
m5hw
*/

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

//fucntions for each program
void rainfall();
void volumeCalculator();
void romanNumeral();
void areaCalculator();
void distanceCalculator();

void rainfall() {
    string month1, month2, month3;
    double rain1, rain2, rain3, average;

    cout << "enter month: " << endl;
    cin >> month1;
    cout << "enter rainfall for " << month1 << endl;
    cin >> rain1;

    cout << "enter month: " << endl;
    cin >> month2;
    cout << "enter rainfall for " << month2 << endl;
    cin >> rain2;

    cout << "enter month: " << endl;
    cin >> month3;
    cout << "enter rainfall for " << month3 << endl;
    cin >> rain3;

    average = (rain1 + rain2 + rain3) / 3.0;

    cout << fixed << setprecision(2);
    cout << "The average rainfall for " << month1 << ", " << month2 << ", and " << month3 
        << "is " << average << " inches." << endl; 

}

void volumeCalculator() {

}


