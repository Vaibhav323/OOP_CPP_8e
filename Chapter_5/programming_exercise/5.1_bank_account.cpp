#include <iostream>
#include <string>
enum acc_type
{
    SAVING,
    CURRENT
};
class bank_account
{
private:
    std::string dep_name;
    int acc_no;
    float amount;

public:
    void init()
    {
        std::cout << "Enter your Account number: ";
        std::cin >> acc_no;
        std::cout << "Enter your Name: ";
        std::cin >> dep_name;

        amount = 0;
    }
    void deposit()
    {
        int value;
        std::cout << "Enter value to deposit:";
        std::cin >> value;
        amount += value;
        std::cout << "Your amount after depositing is: " << amount << std::endl;
    }
    void withdraw()
    {
        int value;
        std::cout << "Enter value to withdraw:";
        std::cin >> value;
        if (amount < value)
        {
            std::cout << "Your balance is lower than given mount. So we cannot withdraw the amount." << std::endl;
        }
        else
        {
            amount -= value;
        }
        std::cout << "Your amount after withdrawing is: " << amount << std::endl;
    }
    void display()
    {
        std::cout << "Your Name: " << dep_name << std::endl
                  << "Your balance: " << amount << std::endl;
    }
};
int main(void)
{
    bank_account b1;
    b1.init();
    b1.deposit();
    b1.withdraw();
    b1.withdraw();
    b1.display();
    return 0;
}