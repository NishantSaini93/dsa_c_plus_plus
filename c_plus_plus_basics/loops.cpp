/**
 * 
 * C++ Loops Example
 * @file loops.cpp
 * @brief A C++ program that demonstrates the use of different types of loops.
 * This program showcases for loop, while loop, and do-while loop.
 * @author Nishant Saini
 * @date 09 Aug 2025
 */
#include<iostream>
using std::cout;
using std::endl;

/**
 * @brief Entry point of the program.
 * This function demonstrates the use of different types of loops in C++.
 * It prints numbers from 1 to 5 using for loop, while loop, and do-while loop.
 * @return int Returns 0 upon successful execution.
 */
int main(){

    // For loop
    cout << "For Loop:" << endl;
    for (int i = 0; i < 2; i++) {
        cout << "Number:" << i + 1 << endl;
    }

    // While Loop
    cout << "---------"<<endl<<"While Loop:" << endl;
    int j = 0;
    while (j < 3) {
        cout << "Number:" << j + 1 << endl;
        j++;
    }

    // Do-While Loop
    cout << "---------"<< endl << "Do-While Loop:" << endl;
    int k = 0;
    do {
        cout << "Number:" << k + 1 << endl;
        k++;
    } while (k < 4);

    return 0;
}