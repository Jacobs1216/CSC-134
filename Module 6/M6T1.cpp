/*
Jacob Simmons
csc-134
4/27/2026
m6t1
*/

#include <iostream>
#include <iomanip>
using namespace std;

//function declarations
void part1();
void part2();

//main
int main() {
    part1();
    part2();
}

//Part1 loop only (No arrays)
void part1() {
    int total = 0;
    int cars;

    for (int day = 1; day <= 5; day++) {
        cout << "Enter cars for day " << day << ": ";
        cin >> cars;

        total += cars;
    }

    double average = (double)total / 5;

    cout << "Total cars: " << total << endl;
    cout << "Average per day: " << fixed << setprecision(2) << average << endl;
    cout << endl;
}

//Part 2 using arrays
void part2() {
    const int DAYS = 5;
    int cars[DAYS];
    int total = 0;

    // Input + store in array
    for (int i = 0; i < DAYS; i++) {
        cout << "Enter cars for day " << i + 1 << ": ";
        cin >> cars[i];

        total += cars[i];
    }

    // Calculate average
    double average = (double)total / DAYS;

    // Output results
    cout << "\nTotal cars: " << total << endl;
    cout << "Average per day: " << fixed << setprecision(2) << average << endl;

    // Print full week's data
    cout << "\nWeekly data:\n";
    for (int i = 0; i < DAYS; i++) {
        cout << "Day " << i + 1 << ": " << cars[i] << endl;
    }

}


