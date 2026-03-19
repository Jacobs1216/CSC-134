/*
Jacob Simmons
3/19/26
csc-134
M3HWQ4
*/

#include <iostream>
#include <cmath>
#include <ctime>

using namespace std;

int main() {

    //variables
    int num1;
    int num2;
    int answer;

    //seed
    int seed = time(0);
    srand(seed);
    const int MAX = 9;
    num1 = (rand() % MAX) + 1;
    num2 = (rand() % MAX) + 1;

    //display problem
    cout << "what is " << num1 << " plus " << num2 << endl;

    //input answer
    cin >> answer;

    //answer check
    if (answer == num1 + num2) {
        cout << "Correct!" << endl;
    }

    else {
        cout << "That is incorrect." << endl;
    }

    return 0;
    
}
