// Long-term fixed deposit system

#include <iostream>

class Fixed_deposit
{
    long int P_amount;
    int Years;
    float Rate, R_value;

public:
    Fixed_deposit(){};
    Fixed_deposit(long int p, int y, float r = 0.12);
    Fixed_deposit(long int p, int y, int r);
    void display(void);
};
Fixed_deposit::Fixed_deposit(long int p, int y, float r)
{
    P_amount = p;
    Years = y;
    Rate = r;
    R_value = P_amount;
    for (int i = 1; i <= y; i++)
        R_value *= (1.0 + r);
}
Fixed_deposit::Fixed_deposit(long int p, int y, int r)
{
    P_amount = p;
    Years = y;
    Rate = r;
    R_value = P_amount;
    for (int i = 1; i <= y; i++)
        R_value *= (1.0 + float(r) / 100);
}
void Fixed_deposit ::display(void)
{
    std::cout << std::endl
              << "Principal Amount = " << P_amount << std::endl
              << "Return Value = " << R_value << std::endl;
}
int main()
{
    Fixed_deposit FD1, FD2, FD3; // deposit created
    long int p;                  // principal amount
    int y, R;
    float r;
    std::cout << "Enter amount, period, interest rate(in percent)" << std::endl;
    std::cin >> p >> y >> R;
    FD1 = Fixed_deposit(p, y, R);
    std::cout << "Enter amount, period, interest rate(in percent)" << std::endl;
    std::cin >> p >> y >> r;
    FD2 = Fixed_deposit(p, y, r);
    std::cout << "Enter amount, period, interest rate(in percent)" << std::endl;
    std::cin >> p >> y;
    FD3 = Fixed_deposit(p, y);

    std::cout << "===Deposit 1===" << std::endl;
    FD1.display();

    std::cout << "===Deposit 2===" << std::endl;
    FD2.display();

    std::cout << "===Deposit 3===" << std::endl;
    FD3.display();
    return 0;
}