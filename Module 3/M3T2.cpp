/*
Jacob Simmons
3/13/26
csc-134
M3T3 - Random numbers
*/

#include <iostream>
//for pseudo-random
#include <cmath>
//makes it truly random
#include <ctime>
using namespace std;

int main () {
    //greeting 
    cout << "hello, lets play craps!" << endl;

    //seed (produces new numbers each run)
    int seed = time(0);
    cout << "your seed is " << seed << endl;
    srand(seed);

    //max number is 6 for a 6 sided die
    const int MAX = 6; 
    int roll1, roll2, total;

    //roll display
    roll1 = (rand() % MAX) + 1; // +1 (goes from 1-6 instead of 0-5)
    cout << "your rolls are: " << roll1 << endl;

    roll2 = (rand() % MAX) + 1;
    cout << "and: " << roll2 << endl;

    //total display
    total = roll1 + roll2;
    cout << "your total roll is " << total << endl;

    //craps display
    //7 and 11 win
    //2 and 12 lose

     if (total == 7){
        cout << "Lucky seven, you win!" << endl;
    }
    else if (total == 11){
        cout << "Eleven, you win!" << endl;
    }
    else if (total == 2){
        cout << "Snake eyes, you lose." << endl;
    }
    else if (total == 12){
        cout << "Boxcars, you lose." << endl;
    }
    else {
        cout << "Your point total is " << total << "." << endl;
    }
    
    return 0;
    
}
    
    