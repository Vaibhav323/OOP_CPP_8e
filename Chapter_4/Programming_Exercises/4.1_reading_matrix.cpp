#include <iostream>

int main(void)
{
    int m, n, tmp;
    std::cout << "Enter size of m and n respectively: " << std::endl;
    std::cin >> m >> n;
    int arr[m][n] = {};
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            std::cout << "Enter the value of arr[" << i + 1 << "][" << j + 1 << "]: ";
            std::cin >> tmp;
            arr[i][j] = tmp;
        }
    }
    // Displaying the matrix
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            std::cout << "Value of matrix " << i + 1 << " x " << j + 1 << ": " << arr[i][j] << std::endl;
        }
    }
    return 0;
}