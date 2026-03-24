/*
Jacob Simmons
3/23/2026
csc-134
hello loop
*/

#include <iostream>
using namespace std;

int main() {
    //vairables
    int number = 1;
    //while statement 
    while (number <= 5) {
        cout << "hello\n";
        number++;

    }

    //vairables
    const int MIN_NUMBER = 1, //starting number to square
              MAX_NUMBER = 10; // max number to square
    
    int num = MIN_NUMBER; // counter  

    while  (num <= MAX_NUMBER) {
    cout << "number" << "\t" << (num * num) << endl;
    num++;
    }

    return 0;

}