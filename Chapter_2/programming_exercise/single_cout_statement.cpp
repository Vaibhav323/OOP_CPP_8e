#include <iostream>
int main(void)
{
    int math = 90;
    int phy = 77;
    int chem = 69;
    std::cout << "Using endl" << std::endl;
    std::cout << "-------------------------" << std::endl;
    std::cout << "Maths = " << math << std::endl 
            << "Physics = " << phy << std::endl 
            << "Chemistry = " << chem << std::endl;
    std::cout << std::endl << "-------------------------" << std::endl;
    std::cout << "Using newline charcter" << "\n";
    std::cout << "-------------------------" << "\n";
    std::cout << "Maths = " << math << "\n" 
            << "Physics = " << phy << "\n" 
            << "Chemistry = " << chem << "\n";
}