/**
 * 
 * C++ Basic Bitwise Operators Example
 * @file basic_bitwise_operators.cpp
 * @brief A C++ program that demonstrates the use of basic bitwise operators.
 * This program showcases bitwise AND, OR, XOR, left shift, and right shift operations.
 * @author Nishant Saini
 * @date 09 Aug 2025
 */
#include<iostream>
using std::cout;
using std::endl;

/**
 * @brief Entry point of the program.
 * This function demonstrates the use of basic bitwise operators in C++.
 * It performs bitwise operations on two integers and prints the results.
 * @return int Returns 0 upon successful execution.
 */
int main() {

    int a = 2, b = 4;
    
    // Bitwise AND operator
    cout << "Bitwise AND: " << (a & b) << endl; 
    // Bitwise OR operator
    cout << "Bitwise OR: " << (a | b) << endl;
    // Bitwise XOR operator
    cout << "Bitwise XOR: " << (a ^ b) << endl;

    // left shift operator
    cout << "Left Shift: " << (a << 1) << endl;
    // right shift operator
    cout << "Right Shift: " << (b >> 1) << endl;


    return 0; // Indicating successful execution
}