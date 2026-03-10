// Name: Shahzad faisal
// Department: Electrical Engineering (Power)
// Registration No: BF25NWELE0733
// Section: A

#include <iostream>   // Library for input and output
using namespace std;  // So we can use cout and cin without std::

// Function declaration (prototype)
int factorial(int n);

int main()
{
    int n;   // Variable to store the number

    cout << "Enter a positive integer: ";   // Ask user for input
    cin >> n;   // Take input from user

    // Call factorial function and display result
    cout << "Factorial of " << n << " = " << factorial(n);

    return 0;   // End of program
}

// Function definition
int factorial(int n)
{
    if(n > 1)   // If number is greater than 1
        return n * factorial(n - 1);   // Recursive call (function calls itself)
    else
        return 1;   // Base case: when n is 1 or 0, factorial is 1
}