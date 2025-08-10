/**
 * 
 * C++ Operators Example
 * @file basic_operators.cpp
 * @brief A C++ program that demonstrates the use of various operators.
 * This program showcases arithmetic, relational, and logical operators.
 * @author Nishant Saini
 * @date 09 Aug 2025
 */
#include<iostream>
using std::cout;
using std::endl;


int main() {
    // Arithmetic Operators
    int a = 2, b = 4;
    cout << "Addition: " << (a + b) << endl;
    cout << "Subtraction: " << (a - b) << endl;
    cout << "Multiplication: " << (a * b) << endl;
    cout << "Division: " << (a / b) << endl;
    cout << "Modulus: " << (a % b) << endl;

    // Relational Operators
    cout << "Is a equal to b? " << (a == b) << endl;
    cout << "Is a not equal to b? " << (a != b) << endl;
    cout << "Is a greater than b? " << (a > b) << endl;
    cout << "Is a less than or equal to b? " << (a <= b) << endl;

    // Logical Operators
    bool x = true, y = false;
    cout << "Logical AND: " << (x && y) << endl;
    cout << "Logical OR: " << (x || y) << endl;
    cout << "Logical NOT on x: " << (!x) << endl;

    return 0; // Indicating successful execution
}