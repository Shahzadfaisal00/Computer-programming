// Name: Shahzad faisal 
// Department: Electrical Engineering (Power)
// Registration No: BF25NWELE0733
// Section: A

#include <iostream>          // Includes input-output stream library for cin and cout
using namespace std;         // Allows using standard names like cout and cin without std::

int main()                   // Main function where program execution starts
{
    int integer1;            // Declares an integer variable to store first number
    int integer2;            // Declares an integer variable to store second number
    int sum;                 // Declares an integer variable to store the sum

    cout << "Enter first integer\n";  // Displays message asking user to enter first number
    cin >> integer1;                  // Takes first integer input from user

    cout << "Enter second integer\n"; // Displays message asking user to enter second number
    cin >> integer2;                  // Takes second integer input from user

    sum = integer1 + integer2;        // Adds both numbers and stores result in sum

    cout << "Sum is " << sum << endl; // Displays the sum on the screen

    return 0;                         // Ends the program successfully
}
