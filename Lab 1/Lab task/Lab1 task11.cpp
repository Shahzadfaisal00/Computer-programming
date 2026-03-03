// Name: Shahzad faisal
// Department: Electrical Engineering (Power)
// Registration No: BF25NWELE0733
// Section: A

#include <iostream>              // Includes the input-output stream library
using namespace std;             // Allows using cout and cin without std::

int main()                       // Main function where program starts
{
    int num1;                    // Declares integer variable to store first number
    int num2;                    // Declares integer variable to store second number

    cout << "Enter two integers, and I will tell you\n"
            << "the relationships they satisfy: ";
                                // Displays message asking user to enter two numbers
    cin >> num1 >> num2;          // Takes two integer inputs from the user

    if (num1 == num2)             // Checks if both numbers are equal
        cout << num1 << " is equal to " << num2 << endl; 
                                // Prints message if numbers are equal

    if (num1 != num2)             // Checks if both numbers are not equal
        cout << num1 << " is not equal to " << num2 << endl;
                                // Prints message if numbers are different

    if (num1 < num2)              // Checks if first number is less than second
        cout << num1 << " is less than " << num2 << endl;
                                // Prints message if first number is smaller

    if (num1 > num2)              // Checks if first number is greater than second
        cout << num1 << " is greater than " << num2 << endl;
                                // Prints message if first number is larger

    if (num1 <= num2)             // Checks if first number is less than or equal to second
        cout << num1 << " is less than or equal to " << num2 << endl;
                                // Prints message if condition is true

    if (num1 >= num2)             // Checks if first number is greater than or equal to second
        cout << num1 << " is greater than or equal to " << num2 << endl;
                                // Prints message if condition is true

    return 0;                     // Ends the program successfully
}
