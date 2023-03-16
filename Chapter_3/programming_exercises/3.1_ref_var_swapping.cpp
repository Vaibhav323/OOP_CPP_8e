#include <iostream>
int swap(int &, int &);
int main(void)
{
    int m = 10, n = 5;
    std::cout << "--------- Before Swapping ---------" << std::endl;
    std::cout << "m = " << m << std::endl;
    std::cout << "n = " << n << std::endl;
    swap(m, n);
    std::cout << "--------- After Swapping ---------" << std::endl;
    std::cout << "m = " << m << std::endl;
    std::cout << "n = " << n << std::endl;
    return 0;
}
int swap(int &x, int &y)
{
    int tmp;
    tmp = x;
    x = y;
    y = tmp;
    return 0;
}
