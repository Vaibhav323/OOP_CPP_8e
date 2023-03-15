#include <iostream>
int main(void)
{
    int m,n;
    std::cout << "Enter first number: ";    
    std::cin >> m;
    std::cout << "Enter second number: ";
    std::cin >> n;
    if(m > n)
        std::cout << m;
    std::cout << n;
    return 0;
}