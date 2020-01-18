// fibonacci.cpp
#include "fibonacci.h"
#include <exception>
#include <iostream>

int fibonacci(int n)
{
    if (n < 0) { throw "n cannot be less than 0"; }

    if (n == 0) { return 0; }
    else if (n <= 2) { return 1; }

    return fibonacci(n - 2) + fibonacci(n - 1);
}
