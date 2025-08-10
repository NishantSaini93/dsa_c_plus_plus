/**
 * 
 * @file type_casting.cpp
 * @brief A C++ program that demonstrates type casting.
 * This program showcases implicit and explicit type casting in C++.
 * @author Nishant Saini
 * @date 09 Aug 2025
 */
#include<iostream>
using std::cout;
using std::endl;

/**
 * @brief Entry point of the program.
 * This function demonstrates implicit and explicit type casting in C++.
 * @return int Returns 0 upon successful execution.
 */
int main() {
    // Implicit type casting
    int value_1 = 10;
    double converted_value_1 = value_1; // int to double
    cout << "Implicit type casting (int to double): " << converted_value_1 << endl;

    // Explicit type casting
    // Using static_cast for explicit type casting
    // static_cast is the preferred way for type casting in C++
    // It provides compile-time type checking and is safer than C-style casts.
    // It is used to convert one type to another, ensuring that the conversion is valid.
    // Here, we convert a double to an int, which truncates the decimal part.
    double value_2 = 9.99;
    int converted_value_2 = static_cast<int>(value_2); // double to int
    cout << "Explicit type casting (double to int): " << converted_value_2<< endl;

    return 0; // Indicating successful execution
}