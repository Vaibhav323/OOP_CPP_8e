#include <iostream>
class matrix
{
private:
    int **p;    // Pointer to Matrix
    int d1, d2; // Dimensions
public:
    matrix(int x, int y)
    {
        d1 = x;
        d2 = y;
        p = new int *[d1];
        for (int i = 0; i < d1; i++)
            p[i] = new int[d2];
    }
    void get_element(int i, int j, int value) { p[i][j] = value; }
    int &put_element(int i, int j) { return p[i][j]; }
};
int main(void)
{
    int m, n;
    std::cout << "Enter size of matrix: ";
    std::cin >> m >> n;
    matrix A(m, n);
    std::cout << "Enter matrix elements row by row " << std::endl;
    int i, j, value;
    for (i = 0; i < m; i++)
        for (j = 0; j < n; j++)
        {
            std::cin >> value;
            A.get_element(i, j, value);
        }
    std::cout << std::endl
              << A.put_element(1, 2) << std::endl;
    return 0;
}