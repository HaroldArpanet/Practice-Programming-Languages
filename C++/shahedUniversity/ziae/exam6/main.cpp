#include <iostream>

using namespace std;

int main() {
    // Read the price of the product in the previous year and the current year
    double previousYearPrice, currentYearPrice;
    cout << "Enter the price of the product in the previous year: ";
    cin >> previousYearPrice;

    cout << "Enter the price of the product in the current year: ";
    cin >> currentYearPrice;

    // Calculate the inflation rate
    double inflationRate = (currentYearPrice - previousYearPrice) / previousYearPrice;

    // Predict the price of the next year
    double nextYearPrice = currentYearPrice + inflationRate * currentYearPrice;

    // Print the results
    cout << "Inflation Rate: " << inflationRate << "%" << endl;
    cout << "Predicted Price of the Next Year: " << nextYearPrice << endl;

    return 0;
}
