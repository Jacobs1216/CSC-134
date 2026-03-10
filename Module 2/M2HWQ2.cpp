/*
Jacob Simmons
3/9/26
csc-134
M2HWQ2 - General Crates
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main (){
    //constants
    double COST_PER_CUBIC_FOOT = 0.3;
    double CHARGE_PER_CUBIC_FOOT = 0.52;

    //variables
    double length;
    double width;
    double height;
    double volume;
    double cost;
    double charge;
    double profit;

    cout << setprecision(2) << fixed << showpoint;

    //input for crate dimensions
    cout << "Enter the dimensions for the crate (in feet)" << endl;
    cout << "input length" << endl;
    cin >> length;
    cout << "input width" << endl;
    cin >> width;
    cout << "input height" << endl;
    cin >> height;
    
    //calculations
    volume = length * width * height;
    cost = volume * COST_PER_CUBIC_FOOT;
    charge = volume * CHARGE_PER_CUBIC_FOOT;
    profit = charge - cost;

    //display of calculations
    cout << "The volume of the crate is " << volume << " cubic feet" << endl;
    cout << "The cost to build: $" << cost << endl;
    cout << "Customer charge: $" << charge << endl;
    cout << "Profit: $" << profit << endl;
    return 0;

}

