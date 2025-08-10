/**
 * 
 * C++ Basic Data Type Modifiers Example
 * @file basic_data_type_modifiers.cpp
 * @brief A C++ program that demonstrates the sizes of various basic data types.
 * This program prints the sizes of different data types using the sizeof operator.
 * @author Nishant Saini
 * @date 09 Aug 3025
 */
#include<iostream>
#include <iomanip> // For std::setw
using std::cout;
using std::endl;
using std::setw;
using std::setfill;
using std::left;
using std::right;

/**
 * @brief Entry point of the program.
 * This function prints the sizes of various basic data types in C++.
 * @return int Returns 0 upon successful execution.
 */
int main() {
    // Size may vary by system
    cout << "\033[1;31mNote: Size may vary by system.\033[0m" << endl;
    cout << left << setw(30) << "Size of integer:" << right << setw(30) << sizeof(int) << endl;
    cout << left << setw(30) << "Size of float:"  << right << setw(30) << sizeof(float) << endl;
    cout << left << setw(30) << "Size of double:"  << right << setw(30) << sizeof(double) << endl;
    cout << left << setw(30) << "Size of char:"  << right << setw(30) << sizeof(char) << endl;
    cout << left << setw(30) << "Size of bool:"  << right << setw(30) << sizeof(bool) << endl;
    cout << left << setw(30) << "Size of long:"  << right << setw(30) << sizeof(long) << endl;
    cout << left << setw(30) << "Size of long long: " << right << setw(30) << sizeof(long long) << endl;
    cout << left << setw(30) << "Size of short:"  << right << setw(30) << sizeof(short) << endl;
    cout << left << setw(30) << "Size of unsigned int:"  << right << setw(30) << sizeof(unsigned int) << endl;
    cout << left << setw(30) << "Size of unsigned long: " << right << setw(30) << sizeof(unsigned long) << endl;
    cout << left << setw(30) << "Size of unsigned long long"  << right << setw(30) << sizeof(unsigned long long) << endl;
    cout << left << setw(30) << "Size of unsigned short"  << right << setw(30) << sizeof(unsigned short) << endl;
    return 0;
}