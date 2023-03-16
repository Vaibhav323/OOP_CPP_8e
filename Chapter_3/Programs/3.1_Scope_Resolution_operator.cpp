#include <iostream>
int m = 10;
int main(void)
{
    int m = 20;
    {
        int k = m;
        int m = 30;
        std::cout << "We are in inner block" << std::endl
                << "k = " << k << std::endl
                << "m = " << m << std::endl
                << "::m = " << ::m << std::endl;
    }
    std::cout << "We are in outer block" << std::endl
                << "m = " << m << std::endl
                << "::m = " << ::m << std::endl;
}