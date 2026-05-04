#ifndef NWT_RAPH_H_
#define NWT_RAPH_H_

#include <cmath>
#include <iostream>
#include "interval.h"

// x - initial aproximation of zero of the function
// f - pointer to function that evaluates to f(x)
// df - pointer to function that evaluates to first derivative of f(x)
// d2f - pointer to function that evaluates to second derivative of f(x)
// mit - maximum number of iterations
// eps - minimal error

// calculated values
// x - found zero of the function
// fatx - value of f(x)
// it - numer of iterations

// return value st
// 1: mit < 1
// 2: for some x: f"(x) = 0
// 3: coudn't achive desired accuracy in mit iterations
// 4: when for some x [f'(x)]² -2f(x)f"(x) < 0
// in other cases 0


int newton_raphson_f(_Float128 &x, _Float128 (*f)(_Float128),
                     _Float128 (*df)(_Float128), _Float128 (*d2f)(_Float128),
                     const int mit, const _Float128 eps, _Float128 &fatx,
                     int &it);

int newton_raphson_i(Interval &x, Interval (*f)(Interval),
                     Interval (*df)(Interval), Interval (*d2f)(Interval),
                     const int mit, const _Float128 eps, Interval &fatx,
                     int &it);

#endif //  NWT_RAPH_H_
