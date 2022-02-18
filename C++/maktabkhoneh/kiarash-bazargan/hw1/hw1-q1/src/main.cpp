#include <iostream>
#include <math.h>
using namespace std;
int main() {
        string unknown;
        float a,b,c;
        cout << "\n :: This program use fisaghores rule to solve the unknown in equation :: \n";
        cout << "your equation must like a ^ 2 = b ^ 2 + c ^ 2\n";
        // For better app i ask for user what is the unknown
        cout << "\nWhat is unknown in your equation ? ( a or b or c ) ? "; cin >> unknown; cout << "\n\n";
        if (unknown=="a") {
                cout << "Please enter b : "; cin >> b; cout << "\n\n";
                cout << "Please enter c : "; cin >> c; cout << "\n\n";
                a = (b*b) + (c*c);
                a = sqrt(a);
                cout << "a = " << a << "\n\n";
        } else if (unknown=="b"){
                cout << "Please enter a : "; cin >> a; cout << "\n\n";
                cout << "Please enter c : "; cin >> c; cout << "\n\n";
                b = (a*a) - (c*c);
                b = sqrt(b);
                cout << "b = " << b << "\n\n";
        } else if (unknown=="c"){
                cout << "Please enter a : "; cin >> a; cout << "\n\n";
                cout << "Please enter b : "; cin >> b; cout << "\n\n";
                c = (a*a) - (b*b);
                c = sqrt(c);
                cout << "c = " << c << "\n\n";
        } else {
                cout << "Your input is wrong";
        }
}
