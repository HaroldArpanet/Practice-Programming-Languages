#include <iostream>

using namespace std;

int main() {
    // Read the base and height of the parallelogram from the user
    double base, height;
    cout << "Enter the base of the parallelogram: ";
    cin >> base;

    cout << "Enter the height of the parallelogram: ";
    cin >> height;

    // Calculate and print the area of the parallelogram
    double area = base * height;
    cout << "Area of the parallelogram with base " << base << " and height " << height << " is: " << area << endl;

    return 0;
}
