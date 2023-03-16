#include <iostream>
#include <iomanip>
int main(void)
{
    int Basic = 950, Allowance = 95, Total = 1045;
    std::cout << std::setw(10) << "Basic" << std::setw(10) << Basic << std::endl
              << std::setw(10) << "Allowance" << std::setw(10) << Allowance << std::endl
              << std::setw(10) << "Total" << std::setw(10) << Total << std::endl;
    return 0;
}