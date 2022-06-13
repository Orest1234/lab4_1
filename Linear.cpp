#include "Linear.h"
#include <iostream>

using namespace std;

Linear::Linear(void)
{}

Linear::Linear(double a, double b)
        : Root(a, b)
{}

Linear::~Linear(void)
{}

void Linear::getRoot()
{
    double x;

    if (getA() == 0 && getB() == 0)
    {
        cout << "Root of " << getA() << "*x + " << getB() << " = 0" << endl;
        cout << "x = inf" << endl;
    }
    else if (getA() == 0 && getB() != 0)
    {
        cout << "Root of " << getA() << "*x + " << getB() << " = 0" << endl;
        cout << "x = nan" << endl;
    }
    else
    {
        x = -(getB() / getA());
        cout << "Root of " << getA() << "*x + " << getB() << " = 0" << endl;
        cout << "x = " << x << endl;
    }
    cout << endl;
}
