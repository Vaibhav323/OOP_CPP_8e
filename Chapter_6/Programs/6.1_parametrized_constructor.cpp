/*
This program defines a class called Point tht stores the x and y coordinates of a point.
The class uses parameterized constructor for initializing the class objects.
*/

#include <iostream>

class Point
{
private:
    int x, y;

public:
    Point(int a, int b)
    {
        x = a;
        y = b;
    }
    void display()
    {
        std::cout << "(" << x << " , " << y << ")" << std::endl;
    }
};
int main(void)
{
    Point p1(1, 1);
    Point p2(5, 10);
    std::cout << "Point p1 = ";
    p1.display();
    std::cout << "Point p2 = ";
    p2.display();
    return 0;
}