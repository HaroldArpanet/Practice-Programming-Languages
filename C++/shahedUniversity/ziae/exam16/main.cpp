#include <iostream>

using namespace std;

int main() {
    // Read a positive number from the user
    int limit;
    cout << "Enter a positive number: ";
    cin >> limit;

    // Validate that the input is positive
    if (limit <= 0) {
        cout << "Error: Please enter a positive number." << endl;
        return 1;  // Exit with an error code
    }

    // Print and calculate the sum of odd numbers from 1 to the entered number
    cout << "Odd numbers from 1 to " << limit << ": ";
    int sumOfOdds = 0;
    for (int i = 1; i <= limit; i += 2) {
        cout << i << " ";
        sumOfOdds += i;
    }

    cout << "\nSum of odd numbers: " << sumOfOdds << endl;

    return 0;
}
