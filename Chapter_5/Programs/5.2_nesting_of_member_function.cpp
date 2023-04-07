#include <iostream>
#include <string>

class binary
{
    std::string s;

public:
    // For reading input from the use
    void read(void)
    {
        std::cout << "Enter a binary number: " << std::endl;
        std::cin >> s;
    }
    // For checking that given number is binary number or not
    void chk_bin(void)
    {
        for (int i = 0; i < s.length(); i++)
        {
            if (s.at(i) != '0' && s.at(i) != '1')
            {
                std::cout << "Incorrect binary number format...the program will quit" << std::endl;
                exit(0);
            }
        }
    }
    void ones(void)
    {
        chk_bin();
        for (int i = 0; i < s.length(); i++)
        {
            if (s.at(i) == '0')
                s.at(i) = '1';
            else
                s.at(i) = '0';
        }
    }
    void displayOnes(void)
    {
        ones();
        std::cout << "The 1's compliment of the above binary number is: " << s << std::endl;
    }
};

int main(void)
{
    binary b;
    b.read();
    b.displayOnes();
    return 0;
}