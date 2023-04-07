#include <iostream>

class code
{
private:
    int id;

public:
    code(){};                     // #1
    code(int a) { id = a; };      // #2
    code(code &x) { id = x.id; }; // #3
    void display(void)
    {
        std::cout << id;
    }
};
int main(void)
{
    code A(100); // Constructor #2
    code B(A);   // Constructor #3 (copy constructor)
    code C = A;  // Copy constructor
    code D;
    D = A; // Copy constructor not called
    std::cout << "ID of A: ";
    A.display();
    std::cout << std::endl
              << "ID of B: ";
    B.display();
    std::cout << std::endl
              << "ID of C: ";
    C.display();
    std::cout << std::endl
              << "ID of D: ";
    D.display();
    return 0;
}