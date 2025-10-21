// Program: findsum2.cpp
// Purpose: To read two numbers from the user and print their sum.
// Author: [Your Name]
// Description: 
//   This program demonstrates basic input/output operations in C++.
//   It reads two integer numbers (which can be large, so 'long long' is used) 
//   from standard input, calculates their sum, and displays the result. 
//   If the user doesn't provide valid input, the program terminates gracefully.

#include <iostream> // This header file allows input/output operations (cin, cout)
using namespace std; // Simplifies syntax so we can use 'cin' and 'cout' directly

int main() {
    long long a, b; // Declare two 64-bit integer variables to store input numbers
    
    // Input two numbers. The 'if' statement checks whether input was successful.
    // If the input fails (e.g., user enters text), the program exits with code 0.
    if (!(cin >> a >> b)) return 0; 
    
    // Calculate the sum and print it to the output, followed by a newline character
    cout << (a + b) << '\n';
    
    // Return 0 indicates that the program executed successfully
    return 0;
}
