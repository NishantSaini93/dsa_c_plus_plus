#include<iostream>
using std::cout;
using std::endl;

int main() {
    // Unary Operators
    int var_value = 1;
    cout << "Initial value:" << var_value << endl;

    // Increment operator
    cout << "Pre-increment: " << ++var_value << endl; // Pre-increment
    cout << "Post-increment: " << var_value++ << endl; // Post-increment
    cout << "Value of a after post-increment operation: " << var_value << endl;

    // Decrement operator
    cout << "Pre-decrement: " << --var_value << endl; // Pre-decrement
    cout << "Post-decrement: " << var_value-- << endl; // Post-decrement
    cout << "Value of a after post-decrement operation: " << var_value << endl;

    return 0; // Indicating successful execution
}