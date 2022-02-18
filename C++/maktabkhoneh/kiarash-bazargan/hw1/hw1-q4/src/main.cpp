#include <iostream>

using namespace std;

int main()
{
        int number,dahgan,yekan,finaln;
        cout << "\n\nPlease enter number in range 10 to 99 : "; cin >> number; cout << "\n\n";
        yekan = number % 10;
        dahgan = (number - yekan) / 10;
        finaln = number - ((yekan*10)+dahgan);
        cout << "number - reverse-number = " << finaln << "\n\n";
}
