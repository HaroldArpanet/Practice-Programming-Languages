#include <iostream>

using namespace std;

int main() {
    // Read three numbers from the user
    double side1, side2, side3;
    cout << "Enter the length of side 1: ";
    cin >> side1;

    cout << "Enter the length of side 2: ";
    cin >> side2;

    cout << "Enter the length of side 3: ";
    cin >> side3;

    // Check if the three numbers can form a triangle
    if (side1 + side2 > side3 || side1 + side3 > side2 || side2 + side3 > side1) {
        cout << "These three numbers can form a triangle." << endl;
    } else {
        cout << "These three numbers cannot form a triangle." << endl;
    }

    return 0;
}
