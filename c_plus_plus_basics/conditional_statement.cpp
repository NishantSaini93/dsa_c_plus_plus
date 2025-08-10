/**
 * 
 * C++ Conditional Statements Example
 * @file conditional_statement.cpp
 * @brief A C++ program that demonstrates the use of conditional statements.
 * This program checks the age of a user and categorizes them as a minor, adult, or senior citizen.
 * @author Nishant Saini
 * @date 09 Aug 2025
 */
#include<iostream>
using std::cout;
using std::endl;

/**
 * @brief Entry point of the program.
 * This function prompts the user to enter their age and categorizes them based on the input.
 * @return int Returns 0 upon successful execution.
 */
int main() {
    
    int age;
    cout << "Enter your age: ";
    std::cin >> age; // Input age from the user

    if (age < 18) {
        cout << "You are a minor." << endl;
    } else if (age >= 18 && age < 65) {
        cout << "You are an adult." << endl;
    } else {
        cout << "You are a senior citizen." << endl;
    }
}