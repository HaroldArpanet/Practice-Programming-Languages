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

    // Print odd numbers from 1 to the entered number
    cout << "Odd numbers from 1 to " << limit << ": ";
    for (int i = 1; i <= limit; i += 2) {
        cout << i << " ";
    }

    cout << endl;

    return 0;
}
