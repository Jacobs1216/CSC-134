//CSC134
//M2T1
//Jacob Simmond
//2/4/26

#include <iostream>
using namespace std;

int main() {
    //set up all variables
    string first_name, last_name, full_name; //ask the for the customer's name
    string product = "tires";
    int amount_purchased;
    double cost_each = 0.99;
    double total_cost;

    //greet the customer
    cout << "Welcome to our " << product << " store!" << endl;
    cout << "What's your first name? ";
    cin >> first_name;
    cout << "what's your last name? ";
    cin >> last_name;
    full_name = first_name + " " + last_name;
    cout << "Nice to meet you, " << full_name << endl;

    //ask how much they would like to purchase
    cout << "how many " << product << " would you like today? ";
    cin >> amount_purchased;

    //calculate total cost
    total_cost = amount_purchased * cost_each;

    //give the result
    cout << "For " << amount_purchased << " " << product;
    cout << "That will be: $" << total_cost << endl;
    cout << "Thank you for shopping with us!" << endl;




}