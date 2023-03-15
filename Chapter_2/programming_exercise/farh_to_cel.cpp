#include <iostream>
int main(void)
{
    float far,cel;
    std::cout << "Enter temp in Fahrenheit: ";
    std::cin >> far;
    cel = (5.0/9.0)*(far - 32.0);
    std::cout << "The given temp in celsius: " << cel << std::endl;
    return 0;
}