
// This is a simple C++ program that prints "Hello World!" to the console.

// iostream is preprocessor directive that includes the standard input-output stream library
#include <iostream>

// Using the standard namespace to avoid prefixing std:: before cout and endl
using std::cout;
using std::endl;

int main() {
    /*
    The main function is the entry point of the program.
    */
    cout<<"Hello World!"<<endl;
    // Alternatively, you can use "\n" for a new line
    // "\n" is often faster than endl because endl also flushes the output buffer
    cout<<"This is just starting"<<"\n";
    return 0;
}
