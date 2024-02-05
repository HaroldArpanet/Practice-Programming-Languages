#include <iostream>

using namespace std;

int main() {
    // Read the resistance from the user
    double resistance;
    cout << "Enter the resistance (in Ohms): ";
    cin >> resistance;

    // Read the current from the user
    double current;
    cout << "Enter the current (in Amperes): ";
    cin >> current;

    // Calculate the voltage using Ohm's Law (V = I * R)
    double voltage = current * resistance;

    // Print the calculated voltage
    cout << "Voltage: " << voltage << " Volts" << endl;

    return 0;
}
