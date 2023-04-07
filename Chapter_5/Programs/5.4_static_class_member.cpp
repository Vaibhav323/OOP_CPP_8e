#include <iostream>

class item
{
    static int count;
    int number;

public:
    void getData(int a)
    {
        number = a;
        count++;
    }
    void getCount(void)
    {
        std::cout << "count: " << count << std::endl;
    }
};
int item::count;

int main(void)
{
    item a, b, c;
    a.getCount();
    b.getCount();
    c.getCount();

    std::cout << "While reading data" << std::endl;
    a.getData(100);
    a.getCount();
    b.getData(200);
    b.getCount();
    c.getData(300);
    c.getCount();

    std::cout << "After reading data" << std::endl;
    a.getCount();
    b.getCount();
    c.getCount();
    return 0;
}