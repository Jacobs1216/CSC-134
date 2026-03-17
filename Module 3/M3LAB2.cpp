/*
jacob simmons
3/17/2026
csc-134
m3lab2
*/

#include <iostream>
using namespace std;

int main () {
    
    //variable
    int grade;

    cout << "Enter a numerical grade: " << endl;
    cin >> grade;

    if (grade >= 90 && grade <= 100)
    {
        cout << "Letter Grade: A" << endl;
    }
    else if (grade >= 80 && grade <= 89)
    {
        cout << "Letter Grade: B" << endl;
    }
    else if (grade >= 70 && grade <= 79)
    {
        cout << "Letter Grade: C" << endl;
    }
    else if (grade >= 60 && grade <= 69)
    {
        cout << "Letter Grade: D" << endl;
    }
    else if (grade >= 0 && grade <= 59)
    {
        cout << "Letter Grade: F" << endl;
    }
    else
    {
        cout << "Invalid grade entered." << endl;
    }

    return 0;

}
