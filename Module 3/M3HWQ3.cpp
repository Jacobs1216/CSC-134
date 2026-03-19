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
    
    // INITAL PROMPT
    cout << "You're a Formula 1 driver currently racing as it begins to rain." << endl;
    cout << "Choice 1: Pit and change to wet weather tires." << endl;
    cout << "(You may lose current position from pitting and will have a slower top speed)" << endl;
    cout << "Choice 2: Continue racing on standard racing slicks" << endl;
    cout << "(You will be faster but you have a higher chance losing traction and crashing)" << endl;
    cout << "To choose enter 1 or 2" << endl;
    cin >> choice;


    if (choice == "1") {

        string choice1;

        cout << "Everyone else decided to change tires aswell so you hold current position" << endl;
        // 2ND QUESTION
        cout << "Now youre in 2nd place in a battle for first how do you handle the last turn before the finish line?" << endl;
        cout << "choice 1: try to out brake your opponent and overtake in the corner" << endl;
        cout << "Choice 2: wait until after the corner and try to pass in the straight right before the finish line" << endl;
        cin >> choice1;

        if (choice1 == "1") {
            cout << "You dive down the inside and out-brake your opponent" << endl;
            cout << "You take the lead and win the race" << endl;
            }
        else if (choice1 == "2") {
            cout << "You wait for the straight and go for a clean overtake" << endl;
            cout << "But your opponent defends well and you finish 2nd" << endl;
        }
        
        else {
            cout << "Invalid choice. You lose focus and miss your chance." << endl;
        }

        }
    
    else if (choice == "2") {

        cout << "The rain continues on throughout the race" << endl;
        cout << "You hold P1 for awhile you eventually make a mistake and spin out off the track taking you out of the race." << endl;
        cout << "YOU LOSE" << endl;

    }

    else {
        cout << "invalid choice" << endl;
    }

    return 0;
}