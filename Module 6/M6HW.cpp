/*
Jacob Simmons
csc-134
4/28/2026
M6HW
*/

#include <iostream>
using namespace std;

void startRace();
void pitStop();
void pitLane();
void finalLap();
void victory();

bool drsEnabled = false;
bool hasFreshTires = false;

int main() {
    cout << "=== Formula 1 Grand Prix Adventure ===\n";
    cout << "You are racing in the final  grand prix of the season\n";
    cout << "Make the right decision and win the race\n\n";

    startRace();

    return 0;
}

void startRace() {
    int choice;

    cout << "\nThe lights go out and the race begins!\n";
    cout << "You are heading into Turn 1 beside your rival.\n";
    cout << "1. Brake early and stay safe\n";
    cout << "2. Dive down the inside\n";
    cout << "3. Back out and follow behind\n";
    cout << "Choose: ";
    cin >> choice;

    if (choice == 1) {
        cout << "You brake early and keep control, but lose one postion.\n";
        pitStop();
    }
    else if (choice == 2) {
        cout << "You make a bold move and pass your rival\n";
        drsEnabled = true;
        pitStop();
    }
    else if (choice == 3) {
        cout << "You stay behind and save your tires for later\n";
        pitStop();
    }
    else {
        cout << "invalid choice\n";
        startRace();
    }
}

void pitStop() {
    int choice;

    cout << "\nA few laps later, your tires are starting to wear down.\n";
    cout << "Your engineer says: \"Box now or stay out?\"\n";
    cout << "1. Pit for fresh tires\n";
    cout << "2. Stay out on old tires\n";
    cout << "3. Ask engineer for tire data\n";
    cout << "Choose: ";
    cin >> choice;

    if (choice == 1) {
        hasFreshTires = true;
        pitLane();
    }
    else if (choice == 2) {
        cout << "You stay out, but your lap times get slower.\n";
        finalLap();
    }
    else if (choice == 3) {
        cout << "Engineer: \"Your tires are almost gone, We reccomend boxing now\"\n";
        pitStop();
    }
    else {
        cout << "Invalid input\n";
        pitStop();
    }
}

void pitLane() {
    int choice;

    cout << "\nYou enter the pit lane for fresh tires.\n";
    cout << "The pit crew changes your tires quickly.\n";
    cout << "But the pit exit is locked by a red light!\n";
    cout << "1. Wait for the green light\n";
    cout << "2. Drive through anyway\n";
    cout << "3. Radio the engineer\n";
    cout << "Choose: ";
    cin >> choice;

    if (choice == 1) {
        cout << "The light turns green and you safely rejoin the race\n";
        finalLap();
    }
    else if (choice == 2) {
        cout << "You leave early and get a time penalty. You lose the race.\n";
        cout << "=== GAME OVER ===\n";
    }
    else if (choice == 3) {
        cout << "Engineer: \"Wait for the green light or you will get a penalty\"\n";
    }
    else {
        cout << "invalid choice\n";
        pitLane();
    }
}

void finalLap() {
    int choice;

    cout << "\nIt is the final lap of the Grand Prix!\n";
    cout << "Your rival is right in front of you.\n";
    cout << "1. Use DRS and attack on the straight\n";
    cout << "2. Try to pass around the outside\n";
    cout << "3. Defend your current position\n";
    cout << "Choose: ";
    cin >> choice;

    if (choice == 1) {
        if (drsEnabled || hasFreshTires) {
            victory();
        }
        else {
            cout << "You are to slow without DRS or fresh tires.\n";
            cout << "You finish 2nd place\n";
            cout << "=== GAME OVER ===\n";
        }
    }
    else if (choice == 2) {
        if (hasFreshTires) {
            victory();
        }
        else {
            cout << "Your old tires have no grip and you run wide.\n";
            cout << "You finish 3rd.\n";
            cout << "=== Game Over ===\n";
        }
    }
    else if (choice == 3) {
        cout << "You defend safely but cannot pass your rival.\n";
        cout << "You finish 2nd\n";
        cout << "=== GAME OVER ===\n";
    }
    else {
        cout << "invalid choice\n";
        finalLap();
    }
}
void victory() {
    cout << "\nYou make the move on the final lap!\n";
    cout << "You cross the finish line in first place!\n";
    cout << "You win the Formula 1 Grand Prix!\n";
    cout << "=== GAME OVER: VICTORY! ===\n";
}