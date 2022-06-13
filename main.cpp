#include <iostream>
#include "Linear.h"
#include "Square.h"

using namespace std;

int main()
{
    Linear a(0, 0), b(0, 5), c(4, 6);

    a.getRoot();
    b.getRoot();
    c.getRoot();

    Square d(0, 2, 3), g(5, 6, 8), f(3, 6, 3), m(9, 5, -6);

    d.getRoot();
    g.getRoot();
    f.getRoot();
    m.getRoot();

    return 0;
}
