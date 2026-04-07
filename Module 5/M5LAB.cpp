/*
Jacob Simmons
4/6/26 
csc-134
m5lab1
*/

#include <iostream>
using namespace std;

// Function Prototypes
void main_menu();
void choice_qualifying();
void choice_pit_strategy();
void choice_drive_safe();
void choice_push_hard();
void choice_box_now();
void choice_stay_out();

int main() {
    cout << "M5LAB1 - Formula 1: Choose Your Own Adventure" << endl;
    main_menu();
    cout << "Thanks for playing!" << endl;
    return 0;
}

void main_menu() {
    cout << "\nMain Menu" << endl;
    cout << "You are an F1 driver getting ready for race day." << endl;
    cout << "Do you:" << endl;
    cout << "1. Focus on qualifying" << endl;
    cout << "2. Plan your pit strategy" << endl;
    cout << "3. Play it safe and save the car" << endl;
    cout << "4. Quit" << endl;
    cout << "Choose: ";

    int choice;
    cin >> choice;

    if (choice == 1) {
        choice_qualifying();
    } else if (choice == 2) {
        choice_pit_strategy();
    } else if (choice == 3) {
        choice_drive_safe();
    } else if (choice == 4) {
        cout << "You retire from the weekend before the race begins." << endl;
        return;
    } else {
        cout << "That is not a valid choice, please try again." << endl;
        cin.ignore();
        main_menu();
    }
}

// FUNCTION DEFINITIONS

void choice_qualifying() {
    cout << "\nQualifying Session" << endl;
    cout << "You are on your final flying lap in Q3." << endl;
    cout << "Do you:" << endl;
    cout << "1. Push hard into every corner" << endl;
    cout << "2. Drive a little safer for a clean lap" << endl;
    cout << "Choose: ";

    int choice;
    cin >> choice;

    if (choice == 1) {
        choice_push_hard();
    } else if (choice == 2) {
        cout << "You put together a smooth lap and qualify P3." << endl;
        cout << "A strong starting position gives you a great chance in the race." << endl;
    } else {
        cout << "Invalid choice. Returning to main menu." << endl;
        main_menu();
    }
}

void choice_pit_strategy() {
    cout << "\nPit Strategy" << endl;
    cout << "It starts to drizzle halfway through the race." << endl;
    cout << "Do you:" << endl;
    cout << "1. Box now for intermediate tires" << endl;
    cout << "2. Stay out and hope the rain stops" << endl;
    cout << "Choose: ";

    int choice;
    cin >> choice;

    if (choice == 1) {
        choice_box_now();
    } else if (choice == 2) {
        choice_stay_out();
    } else {
        cout << "Invalid choice. Returning to main menu." << endl;
        main_menu();
    }
}

void choice_drive_safe() {
    cout << "\nSafe Driving" << endl;
    cout << "You decide to protect the car and avoid unnecessary risks." << endl;
    cout << "You stay out of trouble, finish the race in P6, and score solid points for the team." << endl;
}

void choice_push_hard() {
    cout << "\nFlat Out!" << endl;
    cout << "You attack every corner at the limit." << endl;
    cout << "The lap starts strong, but you lock up in the final sector and lose time." << endl;
    cout << "You qualify P8, but the team is impressed by your aggression." << endl;
}

void choice_box_now() {
    cout << "\nPit Stop Decision" << endl;
    cout << "You pit early for intermediate tires." << endl;
    cout << "The rain gets heavier, and your strategy works perfectly." << endl;
    cout << "You jump several cars and finish on the podium in P2!" << endl;
}

void choice_stay_out() {
    cout << "\nRisky Strategy" << endl;
    cout << "You stay out on slick tires." << endl;
    cout << "At first it looks smart, but the track gets too wet." << endl;
    cout << "You slide wide, lose positions, and finish P10 with just one point." << endl;
}