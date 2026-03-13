/*
Jacob Simmons
3/13/26
csc-134
M3T2
*/

#include <iostream>
using namespace std;

int main () {
    
    //variables
    int width1, width2, length1, length2;
    int area1, area2;

    //user input
    cout << "please enter the the width and height of the first rectangle" << endl;
    cout << "seperate values by a space or new line" << endl;
    cin >> width1 >> length1;

    cout << "please enter the the width and height of the second rectangle" << endl;
    cout << "seperate values by a space or new line" << endl;
    cin >> width2 >> length2;

    //calculations
    area1 = width1 * length1;
    area2 = width2 * length2;

    //display output
    cout << "The first rectangle has a area of " << area1 << endl;
    cout << "The second rectangle has a area of " << area2 << endl;


    return 0;
}