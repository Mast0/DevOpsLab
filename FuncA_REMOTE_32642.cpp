#include "FuncA.h"
#include <cmath>

double FuncA::calculateFuncA(int n) {
    double x = 1;
    double sum = 0.0;
    
    for (int i = 0; i < n; ++i) {
        double term = pow(-1, i) * pow(x, 2 * i + 1) / (2 * i + 1);
        sum += term;
    }
    
    return sum;
}
