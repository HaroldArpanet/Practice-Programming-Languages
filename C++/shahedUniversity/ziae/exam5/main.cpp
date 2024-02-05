#include <iostream>

using namespace std;

int main() {
    // Read the salary of the employee from the user
    double salary;
    cout << "Enter the salary of the employee: ";
    cin >> salary;

    // Calculate insurance (7% of salary)
    double insurance = 0.07 * salary;

    // Calculate tax (10% of salary)
    double tax = 0.10 * salary;

    // Calculate the remaining salary after deducting insurance and tax
    double remainingSalary = salary - insurance - tax;

    // Print the results
    cout << "Insurance: " << insurance << endl;
    cout << "Tax: " << tax << endl;
    cout << "Remaining Salary: " << remainingSalary << endl;

    return 0;
}
