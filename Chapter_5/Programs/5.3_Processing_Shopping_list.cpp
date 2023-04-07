#include <iostream>

const int m = 50;
class ITEMS
{
    int itemCode[m];
    float itemPrice[m];
    int count;

public:
    void CNT(void)
    {
        count = 0;
    }
    void getItems(void);
    void displaySum(void);
    void remove(void);
    void displayItems(void);
};
void ITEMS ::getItems(void)
{
    std::cout << "Enter item code: ";
    std::cin >> itemCode[count];
    std::cout << "Enter item cost: ";
    std::cin >> itemPrice[count];
    count++;
}
void ITEMS::displaySum(void)
{
    float sum = 0;
    for (int i = 0; i < count; i++)
        sum = sum + itemPrice[i];
    std::cout << std::endl
              << "Total Value: " << sum << std::endl;
}
void ITEMS::remove(void)
{
    int a;
    std::cout << "Enter item code: ";
    std::cin >> a;
    for (int i = 0; i < count; i++)
        if (itemCode[i] == a)
            itemPrice[i] = 0;
}
void ITEMS::displayItems(void)
{
    std::cout << std::endl
              << "Code Price" << std::endl;
    for (int i = 0; i < count; i++)
    {
        std::cout << std::endl
                  << itemCode[i];
        std::cout << " " << itemPrice[i];
    }
    std::cout << std::endl;
}

int main(void)
{
    ITEMS order;
    order.CNT();
    int x;
    do
    {
        std::cout << std::endl
                  << "You can do the following;"
                  << std::endl
                  << "Enter appropriate number"
                  << std ::endl
                  << "1 : Add an item "
                  << std::endl
                  << "2 : Display total value"
                  << std::endl
                  << "3 : Delete an item"
                  << std::endl
                  << "4 : Display all items"
                  << std::endl
                  << "5 : Quit"
                  << std::endl
                  << "What is you Option? ";
        std::cin >> x;
        switch (x)
        {
        case 1:
            order.getItems();
            break;
        case 2:
            order.displaySum();
            break;
        case 3:
            order.remove();
            break;
        case 4:
            order.displayItems();
            break;
        case 5:
            break;
        default:
            std::cout << "Error in input, try again!" << std::endl;
        }
    } while (x != 5);
}