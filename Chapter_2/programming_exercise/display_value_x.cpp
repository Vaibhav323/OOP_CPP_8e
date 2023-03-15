#include <iostream>
int main(void)
{
    int x,a,b,c;
    std::cout << "Enter values of a,b,c respectively" << std::endl;
    std::cin >> a >> b >> c;
    x = a/b-c;
    std::cout << "Value of x = " << x << std::endl;
    return 0;
}
/*
* Test case 1
! a = 250, b = 85, c = 25
? x = -23
* Test case 2
! a = 300, b = 70, c = 70
? x = -66
*/