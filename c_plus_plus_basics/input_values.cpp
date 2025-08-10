/**
 * @file input_values.cpp
 * @brief A C++ program that demonstrates input operations.
 * This program prompts the user to enter an ID and then displays it.
 * It serves as a basic example of how to read input from the console using the iostream library.
 * @author Nishant Saini
 * @date 09 Aug 2025
 */
#include<iostream>
using std::cout;
using std::endl;
using std::cin;


/**
 * @brief Entry point of the program.
 * This function prompts the user to enter an ID and displays it.
 * @return int Returns 0 upon successful execution.
 */
int main() {
    int your_id;
    cout << "Enter your ID: ";
    cin >> your_id; // Input your ID from the user
    cout << "Your ID is: " << your_id << endl; // Output the ID to the console

    return 0; // Indicating successful execution
}