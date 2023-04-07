#include <iostream>

class item
{
    int number;
    float cost;

public:
    void getData(int a, float b); // Prototype declaration to be defined
    // Function defined inside class
    void putData(void)
    {
        std::cout << "Number: " << number << std::endl;
        std::cout << "cost: " << cost << std::endl;
    }
};
// ================== Member function definition ==================
void item::getData(int a, float b)
{
    number = a;
    cost = b;
}
// ================== Main Program ==================
int main(void)
{
    item x;
    std::cout << "Object x " << std::endl;
    x.getData(100, 299.95);
    x.putData();

    item y;
    std::cout << "Object Y " << std::endl;
    y.getData(200, 175.50);
    y.putData();
}