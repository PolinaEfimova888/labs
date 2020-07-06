#include <iostream>
#include <cmath>
#include <list>
#include "Header.h"

using namespace std;



int main(int argc, const char* argv[]) {

    Hiperbola f(2, 2, 1, 1, 4, 5);
    cout << "y=" << f.k << "/(x+" << f.a << ")+" << f.b << endl;
    cout << "y(" << f.x << ")=" << f.F() << endl;
    cout << "ymin(" << f.x1 << "<=x<=" << f.x2 << ")=" << f.Min() << endl;
    cout << "ymax(" << f.x1 << "<=x<=" << f.x2 << ")=" << f.Max() << endl;


    Parabola f1(2, 2, 1, 1, 5, 6);
    cout << "\ny=(" << f1.k << "x+" << f1.a << ")^2+" << f1.b << endl;
    cout << "y(" << f1.x << ")=" << f1.F() << endl;
    cout << "ymin(" << f1.x1 << "<=x<=" << f1.x2 << ")=" << f1.Min() << endl;
    cout << "ymax(" << f1.x1 << "<=x<=" << f1.x2 << ")=" << f1.Max() << endl;


    Exponenta f2(2, 2, 1, 1, 5, 6);
    cout << "\ny=e^(" << f2.k << "x+" << f2.a << ")+" << f2.b << endl;
    cout << "y(" << f2.x << ")=" << f2.F() << endl;
    cout << "ymin(" << f2.x1 << "<=x<=" << f2.x2 << ")=" << f2.Min() << endl;
    cout << "ymax(" << f2.x1 << "<=x<=" << f2.x2 << ")=" << f2.Max() << endl;




    double c[5] = { 1,2,3,4,5 };
    Polinom f3(2, 5, c, 1, 2);
    cout << "\ny=" << f3.c[0] << "+";


    if (f3.c[1] != 1) {
        cout << f3.c[1] << "x+";
    }
    else {
        cout << "x+";
    }

    for (int i = 2; i < 5; i++) {
        if (i != 4) {
            if (f3.c[i] != 1) {
                cout << f3.c[i] << "x^" << i << "+";
            }
            else {
                cout << "x^" << i << "+";
            }
        }
        else {
            if (f3.c[i] != 1) {
                cout << f3.c[i] << "x^" << i;
            }
            else {
                cout << "x^" << i;
            }
        }
    }

    cout << "\ny(2)=" << f3.F() << endl;
}
