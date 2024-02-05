#include <iostream>

using namespace std;

int main() {
    // Define the size of the array
    const int maxSize = 100; // You can adjust the size as needed

    // Declare an array to store the series of numbers
    int numbers[maxSize];

    // Read the series of numbers from the user and store them in the array
    cout << "Enter the series of numbers (enter a non-number to stop):" << endl;
    int count = 0;

    while (count < maxSize) {
        cout << "Number " << count + 1 << ": ";
        if (cin >> numbers[count]) {
            // Increment the count only if a valid number is entered
            count++;
        } else {
            // Break the loop if a non-number is entered
            break;
        }
    }

    // Print the array
    cout << "\nArray elements:" << endl;
    for (int i = 0; i < count; ++i) {
        cout << numbers[i] << " ";
    }

    cout << endl;

    return 0;
}
