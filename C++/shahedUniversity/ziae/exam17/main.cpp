#include <iostream>

using namespace std;

int main() {
    // Read a positive number from the user
    int number;
    cout << "Enter a positive number: ";
    cin >> number;

    // Validate that the input is positive
    if (number < 0) {
        cout << "Error: Please enter a non-negative number." << endl;
        return 1;  // Exit with an error code
    }

    // Calculate the factorial of the entered number
    unsigned long long factorial = 1;
    for (int i = 1; i <= number; ++i) {
        factorial *= i;
    }

    // Print the calculated factorial
    cout << "Factorial of " << number << ": " << factorial << endl;

    return 0;
}
