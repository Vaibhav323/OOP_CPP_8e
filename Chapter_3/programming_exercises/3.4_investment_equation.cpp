#include <iostream>
#include <cmath>
int main(void)
{
    int p, n;
    double r, v, x;
    std::cout << "Enter value of P, r, n respectively" << std::endl;
    std::cin >> p >> r >> n;
    x = 1 + r;
    v = double(p) * std::pow(x, n);
    std::cout << v << std::endl;
    return 0;
}