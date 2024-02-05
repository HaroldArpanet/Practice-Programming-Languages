#include <iostream>

using namespace std;

// Function to calculate the greatest common divisor (GCD) of two numbers
int findGCD(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    // Read two positive numbers from the user
    int number1, number2;
    cout << "Enter the first positive number: ";
    cin >> number1;

    // Validate that the input is positive
    if (number1 <= 0) {
        cout << "Error: Please enter a positive number." << endl;
        return 1;  // Exit with an error code
    }

    cout << "Enter the second positive number: ";
    cin >> number2;

    // Validate that the input is positive
    if (number2 <= 0) {
        cout << "Error: Please enter a positive number." << endl;
        return 1;  // Exit with an error code
    }

    // Call the function to find the greatest common divisor (GCD)
    int gcd = findGCD(number1, number2);

    // Print the calculated greatest common divisor
    cout << "Greatest Common Divisor (GCD) of " << number1 << " and " << number2 << ": " << gcd << endl;

    return 0;
}
