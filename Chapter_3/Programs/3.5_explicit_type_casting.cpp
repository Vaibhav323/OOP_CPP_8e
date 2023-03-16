#include <iostream>

int main(void)
{
    int intvar = 25;
    float floatvar = 35.87;

    std::cout << "intvar = " << intvar << std::endl
              << "floatvar = " << floatvar << std::endl
              << "float(intvar) = " << float(intvar) << std::endl
              << "int(floatvar) = " << int(floatvar) << std::endl;
    return 1;
}