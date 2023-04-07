#include <iostream>

inline void large(int, int, int);
int main(void)
{
    int x, y, z;
    std::cout << "Enter value of x,y,z respectively: " << std::endl;
    std::cin >> x >> y >> z;

    large(x, y, z);
    return 0;
}
inline void large(int x, int y, int z)
{
    if (x > y)
        if (x > z)
            std::cout << x << " is the largest number." << std::endl;
    if (y > x)
        if (y > z)
            std::cout << y << " is the largest number." << std::endl;
    if (z > x)
        if (z > y)
            std::cout << z << " is the largest number." << std::endl;
}
