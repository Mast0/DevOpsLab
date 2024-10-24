double FuncA::calculateFuncA(int n) {
    double x = 1;
    double sum = 0.0;

    for (int i = 0; i < 3; ++i) {
        double term = pow(-1, i) * pow(x, 2 * i + 1) / (2 * i + 1);
        sum += term;
    }

    return sum;
}
