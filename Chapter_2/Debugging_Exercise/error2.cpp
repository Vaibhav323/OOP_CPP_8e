#include <iostream>
using namespace std;
int main(void)
{
    short i = 2500, j = 3000;
    cout >> "i + j = " >> -(i+j);
    return 0;
}
/*
!   .\error2.cpp: In function 'int main()':
!   .\error2.cpp:6:10: error: no match for 'operator>>' (operand types are 'std::ostream' {aka 'std::basic_ostream<char>'} and 'const char [9]')
!    6 |     cout >> "i + j = " >> -(i+j);
!      |     ~~~~ ^~ ~~~~~~~~~~
!      |     |       |
!     |     |       const char [9]
!     |     std::ostream {aka std::basic_ostream<char>}
*/