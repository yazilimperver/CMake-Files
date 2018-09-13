#include <exception>
#include <stdexcept>
#include <iostream>
#include "MathLib.h"

int MathLib::Sum(const int &a, const int &b)
{
    return a + b;
}

int MathLib::Mult(const int &a, const int &b)
{
    return a * b;
}

int MathLib::Div(const int &a, const int &b)
{
    if(b == 0)
    {
        throw std::overflow_error("Divide by zero exception");
    }
    
    return a/b;
}

int MathLib::Sub(const int &a, const int &b)
{
    return a - b;
}