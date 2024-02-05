#include <iostream>

using namespace std;

int main() {
    // Read two numbers from the user
    int number1, number2;
    cout << "Enter the first number: ";
    cin >> number1;

    cout << "Enter the second number: ";
    cin >> number2;

    // Calculate and print the sum
    int sum = number1 + number2;
    cout << "Sum of " << number1 << " and " << number2 << " is: " << sum << endl;

    return 0;
}
