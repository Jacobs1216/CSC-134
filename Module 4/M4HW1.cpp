/*
Jacob Simmons
3/24/2026
csc-134
M4HW1
*/

#include <iostream>
using namespace std;

int main() {
    int number = 1;
    int numInput;

    cout << "please enter a number 1 to 12" << endl;
    cin >> numInput;

    while (numInput < 1 || numInput > 12) {
        cout << "Invalid input, enter a number 1 to 12" << endl;
        cin >> numInput;
    }

    while (number <=12 ) {
        cout << numInput << " x " << number << " = " << numInput * number << endl;
        number++;
    }
return 0;
}