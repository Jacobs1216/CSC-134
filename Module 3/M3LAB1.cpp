/*
Jacob Simmons
3/17/2026
csc-134
m3lab1
*/


#include <iostream>
using namespace std;

int main () {

    int choice;

    //question
    cout << "You're a Nascar driver in 1st place" << endl;
    cout << "Your car begin to make a weird noise." << endl;
    cout << "What do you do?" << endl;
    cout << "1. Ignore the noise and keep racing and hold your current postion." << endl;
    cout << "2. Go into the pit lane and investigate, and risk losing 1st place." << endl;

    //input choices
    cin >> choice;

    if (choice == 1) {
        cout << "Your engine blows causing you to score a DNF in the race" << endl;
    }

    if (choice == 2) {
        cout << "You discover an oil leak, you fix the problem and finsh the race in 3rd place" << endl;
    }

    else {
        cout << "that is not a valid choice" << endl;
    }

    return 0;
}