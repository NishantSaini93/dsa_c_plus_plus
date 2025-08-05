/**
 * @file primitive_data_types.cpp
 * @brief A C++ program that demonstrates the use of primitive data types.
 *
 * This program showcases various primitive data types in C++, including int, float,
 * double, char, and bool.
 *
 * @author Nishant Saini
 * @date 04 Aug 2025
 */

#include <iostream>
using std::cout;
using std::endl;

/**
 * @brief Entry point of the program.
 *
 * This function demonstrates the use of various primitive data types in C++.
 * It initializes variables of different types and prints their values to the console.
 *
 * @return int Returns 0 upon successful execution.
 */
int main() {
    // Integer type
    int integer_var = 42;
    cout << "Integer: " << integer_var << endl;
    // Floating-point type
    float float_var = 3.14f;
    cout << "Float: " << float_var << endl;
    // Double type
    double double_var = 2.71828;
    cout << "Double: " << double_var << endl;
    // Character type
    char char_var = 'A';
    cout << "Character: " << char_var << endl;
    // Boolean type
    bool bool_var = true;
    cout << "Boolean: " << std::boolalpha << bool_var << endl;
    // Demonstrating size of each data type (may vary by system)
    cout << "Size of int: " << sizeof(integer_var) << " bytes" << endl;   // Output: Size of int: 4 bytes
    cout << "Size of float: " << sizeof(float_var) << " bytes" << endl;     // Output: Size of float: 4 bytes
    cout << "Size of double: " << sizeof(double_var) << " bytes" << endl; // Output: Size of double: 8 bytes

    // The use of std::boolalpha allows for printing boolean values as true/false instead of 1/0.
    cout << "Size of char: " << sizeof(char_var) << " bytes" << endl; // Output: Size of char: 1 byte
    cout << "Size of bool: " << sizeof(bool_var) << " bytes" << endl; // Output: Size of bool: 1 byte
    return 0; // Indicating successful execution
}
