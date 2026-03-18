/*
Jacob Simmons
3/18/2026
csc-134
m3hwq3
*/


#include <iostream>
using namespace std;

int main() {

    //variables
    string choice;
    
    // PROMPT
    cout << "You're a Formula 1 driver currently racing as it begins to rain." << endl;
    cout << "Choice 1: Pit and change to wet weather tires." << endl;
    cout << "(You may lose current position from pitting and will have a slower top speed)" << endl;
    cout << "Choice 2: Continue racing on standard racing slicks" << endl;
    cout << "(You will be faster but you have a higher chance losing traction and crashing)" << endl;
    cout << "To choose enter 1 or 2" << endl;
    cin >> choice;

    //CHOICE 1
    if (choice == "1") {

        string choice1;

        cout << "Everyone else decided to change tires aswell so you hold current postion" << endl;
        cout << "Now youre in 2nd place in a battle for first how do you handle the last turn before the finsh line?" << endl;
        cout << "choice 1: try to out break your opponent and overtake in the corner" << endl;
        cout << "Choise 2: wait until after the corner and try to pass in the straight right before the finsih line" << endl;
        cin >> choice1;

    }
    



    return 0;
}