#include <iostream>
class sample
{
private:
    int data1;
    char data2;

public:
    void set(int i, char c)
    {
        data1 = i;
        data2 = c;
    }
    void display(void)
    {
        std::cout << "Data1 = " << data1 << std::endl;
        std::cout << "Data2 = " << data2 << std::endl;
    }
};
int main(void)
{
    sample *s_ptr;
    try
    {
        s_ptr = new sample;
    }
    catch (std::bad_alloc ba)
    {
        std::cout << "Bad Allocation occurred... the program will terminate now..";
        return 1;
    }
    s_ptr->set(25, 'A');
    s_ptr->display();
    delete s_ptr;
    return 1;
}