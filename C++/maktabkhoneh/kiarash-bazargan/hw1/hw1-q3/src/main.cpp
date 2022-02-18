#include <iostream>

using namespace std;

int main()
{
        int number,dahgan,yekan;
        cout << "\n\nPlease enter a number in range 10 to 99 : "; cin >> number; cout << "\n\n";
        yekan = number % 10;
        dahgan = (number - yekan) / 10;
        cout << "dahgan = " << dahgan << "\n";
        cout << "yekan = " << yekan << "\n";
}
