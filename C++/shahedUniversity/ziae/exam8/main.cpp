#include <iostream>

using namespace std;

int main() {
    // Read the initial speed from the user
    double initialSpeed;
    cout << "Enter the initial speed (in km/h): ";
    cin >> initialSpeed;

    // Read the time from the user (in minutes)
    double time;
    cout << "Enter the time taken (in minutes): ";
    cin >> time;

    // Read the final speed from the user
    double finalSpeed;
    cout << "Enter the final speed (in km/h): ";
    cin >> finalSpeed;

    // Convert time from minutes to hours
    double timeInHours = time / 60.0;

    // Calculate the acceleration using the formula: acceleration = (change in speed) / time
    double acceleration = (finalSpeed - initialSpeed) / timeInHours;

    // Print the calculated acceleration
    cout << "Acceleration: " << acceleration << " km/h^2" << endl;

    return 0;
}
