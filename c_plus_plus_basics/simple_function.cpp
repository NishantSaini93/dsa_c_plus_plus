/**
 * 
 * C++ Simple Function Example
 * @file simple_function.cpp
 * @brief A C++ program that demonstrates the use of simple functions.
 * This program defines a function that prints a message and another function that adds two integers.
 * @author Nishant Saini
 * @date 09 Aug 2025
 */
#include<iostream>
using std::cout;
using std::endl;

/**
 * @brief A simple function that prints a message.
 * This function demonstrates basic C++ syntax and function definition.
 * @return void
 */
void print_message() {
    cout << "This is a simple function demonstrating basic C++ syntax." << endl;
}

/**
 * @brief A function that adds two integers and prints the result.
 * @param a First integer to add.
 * @param b Second integer to add.
 * This function demonstrates how to define and call a function with parameters.
 * @return void
 */
void add_two_integers(int a, int b) {
    cout << "Sum of " << a << " and " << b << " is: " << (a + b) << endl;
}


/**
 * @brief Entry point of the program.
 * This function calls the print_message function and demonstrates the addition of two integers.
 * @return int Returns 0 upon successful execution.
 */
int main() {
    print_message(); // Calling the function to print the message
    add_two_integers(5, 10); // Calling the function to add two integers
    return 0;
}
