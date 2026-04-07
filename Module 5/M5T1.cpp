/*
Jacob Simmons
4/6/2026
csc-134
4/6/26
*/


#include <iostream>
using namespace std;

//function prototypes
void say_hello();
int give_the_answer();
int double_a_number(int num);

//function definitions
int main() {
    cout << "Hello from main() " << endl;
    say_hello();

    int my_answer = give_the_answer();
    int twotimes = double_a_number(7);

    cout << "the answer is: " << my_answer << endl;
    cout << "heres another number: " << twotimes << endl;

return 0;
}

void say_hello() {
    cout << "hi from function say_hello() " << endl;
    return;
}

int give_the_answer() {
    return 42;
}

int double_a_number(int num) {
    int new_num = num * 2;
    return new_num;
}