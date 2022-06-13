#include "Square.h"
#include <iostream>
#include <cmath>//
using namespace std;

Square::Square(void)
{}

Square::Square(double a, double b, double c)
        : Root(a, b)
{
    this->c = c;
}

Square::~Square(void)
{}

void Square::getRoot()
{
    double x1, x2, d;
    if (getA() == 0.0)
    {
        cout << "Roots of " << getA() << "*x^2 + " << getB() << "*x + " << c << " = 0" << endl;
        cout << "x1, x2 = nan" << endl << endl;
        return;
    }

    d = getB() * getB() - 4 * getA() * c;
    cout << "D = " << d << endl;
    if (d > 0)
    {
        x1 = (-getB() + sqrt(d)) / (2 * getA());
        x2 = (-getB() - sqrt(d)) / (2 * getA());

        cout << "Roots of " << getA() << "*x^2 + " << getB() << "*x + " << c << " = 0" << endl;
        cout << "x1 = " << x1 << endl;
        cout << "x2 = " << x2 << endl;
    }
    else if (d == 0.0)
    {
        x1 = (-getB() / (2 * getA()));
        x2 = x1;
        cout << "Roots of " << getA() << "*x^2 + " << getB() << "*x + " << c << " = 0" << endl;
        cout << "x1 = x2 = " << x1 << endl;
    }
    else
    {
        cout << "Roots of " << getA() << "*x^2 + " << getB() << "*x + " << c << " = 0" << endl;
        cout << "x1, x2 = nan" << endl;
    }
    cout << endl;
}
