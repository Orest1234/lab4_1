#pragma once
class Root
{
private:
    double a, b;
public:
    Root(void);
    Root(double a, double b);

    double getA() { return a; };
    double getB() { return b; };

    ~Root(void);

    virtual void getRoot() = 0;
};
