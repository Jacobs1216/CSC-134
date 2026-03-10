/*
Jacob Simmons
3/9/26
csc-134
M2HWQ3 - Pizza Party
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main () {

    //variables
    int pizza;
    int slicePerPizza;
    int visitors;
    int slicesEaten;
    int totalSlices;
    int leftoverSlices;

    //user inputs
    cout << "how many pizzas were ordered" << endl;
    cin >> pizza;

    cout << "How many slice are there per pizza?" << endl;
    cin >> slicePerPizza;

    cout << "How many visitors will there be?" << endl;
    cin >> visitors;

    //calculations
    totalSlices = pizza * slicePerPizza;
    slicesEaten = visitors * 3;
    leftoverSlices = totalSlices - slicesEaten;

    //display output
    cout << "There are a " << totalSlices << " slices of pizza" << endl;
    cout << "there are " << visitors << ", there will be " << leftoverSlices << " slices leftover." << endl;
}