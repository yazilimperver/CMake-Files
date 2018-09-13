#ifndef MATHLIB_HPP
#define MATHLIB_HPP

#include "Shared_Exports.h"

class SHARED_EXPORTS MathLib
{
    public:
        int Sum(const int &a, const int &b);
        int Mult(const int &a, const int &b);
        int Div(const int &a, const int &b);
        int Sub(const int &a, const int &b);
};

#endif //MATHLIB_HPP