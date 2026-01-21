/*
CSC-134
M1LAB
Jacob Simmons
1/21/2026
*/


#include <iostream>
using namespace std;


int main(){
    // the owner's name
    string name = "Jane Smith";
   
    // number of apples owned
    int apples = 100;
   
    // price per apple
    double pricePerApple = 0.25;

    cout << "Welcome to " << name << "'s apple orchard." << endl;
    cout << "we have " << apples << " apples in stock" << endl;
    cout << "apples are currently $" << pricePerApple << " each" << endl;
    
    // Calculating total price
    double totalPrice = (double) apples * pricePerApple;

    // Total price
    cout << "if you want them all, that will be $" << totalPrice << endl;

}