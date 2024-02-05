#include <iostream>

using namespace std;

int main() {
    // Read three characters from the user
    char char1, char2, char3;
    cout << "Enter the first character: ";
    cin >> char1;

    cout << "Enter the second character: ";
    cin >> char2;

    cout << "Enter the third character: ";
    cin >> char3;

    // Concatenate the characters and print the greeting
    cout << "Hello " << char1 << char2 << char3 << "!" << endl;

    return 0;
}
