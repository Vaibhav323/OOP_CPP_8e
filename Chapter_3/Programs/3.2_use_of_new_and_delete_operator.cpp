#include <iostream>
int main(void)
{
    int *arr;
    int size;

    std::cout << "Enter the size of integer array: ";
    std::cin >> size;

    std::cout << "Creating an array of size " << size << ".." << std::endl;
    arr = new int[size];

    std::cout << "Dynamic allocation of memory for array arr is successful.";

    delete arr;
    return 0;
}