#pragma once

#include "Root.h"

class Linear
        : public Root
{
public:
    Linear(void);
    Linear(double a, double b);
    ~Linear(void);

    virtual void getRoot();
};
