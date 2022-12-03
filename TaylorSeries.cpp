#include <iostream>
double e(int x, int n) {
    static double p = 1, f = 1;
    double r;
    if (n == 0)
        return 1;
    r = e(x, n - 1);
    p = p * x;
    f = f * n;
    return r + p / f;
}

double TaylorSeriesHornersRule(int x, int n) {
        static double s;
        if (n == 0) {
            return s;
        }
        else {
            s = 1 + x * s / n;
        }
        return TaylorSeriesHornersRule(x, n - 1);

    }
int main()
{
    std::cout << TaylorSeriesHornersRule(2, 10);
    return 0;
}
