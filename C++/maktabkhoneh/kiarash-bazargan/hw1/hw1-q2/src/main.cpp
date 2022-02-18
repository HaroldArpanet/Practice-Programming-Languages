#include <iostream>

using namespace std;

int main(){
        cout << "This program multiplies a two-by-two matrix by a two-by-one vector and gives you the final x and y\n";
        cout << "The equation is as follows : \n";
        cout << "[ a  b ]   [ e ]   [ x ]\n"; cout << "[      ] * [   ] = [   ]\n"; cout << "[ c  d ]   [ f ]   [ y ]\n";
        float a,b,c,d,e,f,x,y;
        cout << "Please enter a : "; cin >> a; cout << "\n";
        cout << "Please enter b : "; cin >> b; cout << "\n";
        cout << "Please enter c : "; cin >> c; cout << "\n";
        cout << "Please enter d : "; cin >> d; cout << "\n";
        cout << "Please enter e : "; cin >> e; cout << "\n";
        cout << "Please enter f : "; cin >> f; cout << "\n";
        x = (a*e) + (b*f);
        y = (c*e) + (d*f);
        cout << "\nCalculating ...\n\n";
        cout << "ANSWER : \n\n";
        cout << "x = "; cout << x; cout << "\n";
        cout << "y = "; cout << y; cout << "\n";
        cout << "\n\nEND";
}
