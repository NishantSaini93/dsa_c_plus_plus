
/**
 * @file hello_world.cpp
 * @brief A simple C++ program that demonstrates basic output operations.
 *
 * This program prints "Hello World!" and an additional message to the console.
 * It serves as an introductory example for C++ syntax, usage of the iostream library,
 * and the structure of a basic C++ application.
 *
 * @author Nishant Saini
 * @date 04 Aug 2025
 */

// iostream is preprocessor directive that includes the standard input-output stream library
#include <iostream>

// Using the standard namespace to avoid prefixing std:: before cout and endl
using std::cout;
using std::endl;

/**
 * @brief Entry point of the program.
 *
 * This function starts the execution of the program. It prints
 * "Hello World!" and an additional message to the standard output.
 *
 * @return int Returns 0 upon successful execution.
 */
int main() {
    cout<<"Hello World!"<<endl;
    // Alternatively, you can use "\n" for a new line
    // "\n" is often faster than endl because endl also flushes the output buffer
    cout<<"This is just starting"<<"\n";
    return 0;
}
