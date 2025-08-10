/**
 * 
 * @file ternary_operator.cpp
 * @brief A C++ program that demonstrates the use of the ternary operator.
 * The ternary operator is a shorthand for an if-else statement.
 * It evaluates a condition and returns one of two values based on whether the condition is true or false.
 * @author Nishant Saini
 * @date 09 Aug 2025
 */
#include<iostream>
using std::cout;
using std::endl;


/**
 * @brief Entry point of the program.
 * This function demonstrates the use of the ternary operator in C++.
 * It checks if a number is positive or negative and prints the result.
 * @return int Returns 0 upon successful execution.
 */
int main() {

    int n = 10;

    // The ternary operator checks if n is greater than or equal to 0.
    // If true, it prints "Positive"; otherwise, it prints "Negative".
    cout << (n>=0 ? "Positive" : "Negative") << endl; // Ternary operator example
    
}