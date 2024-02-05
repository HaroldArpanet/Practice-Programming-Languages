#include <iostream>

using namespace std;

int main() {
    // Read three numbers from the user
    int number1, number2, number3;
    cout << "Enter the first number: ";
    cin >> number1;

    cout << "Enter the second number: ";
    cin >> number2;

    cout << "Enter the third number: ";
    cin >> number3;

    // Calculate and print the average
    double average = static_cast<double>(number1 + number2 + number3) / 3.0;
    cout << "Average of " << number1 << ", " << number2 << ", and " << number3 << " is: " << average << endl;

    return 0;
}
