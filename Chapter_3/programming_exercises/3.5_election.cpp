#include <iostream>
int main(void)
{
    int arr[] = {1, 4, 4, 1, 5, 2, 1, 6, 4, 5, 3, 1, 3, 5, 1, 3, 5, 6, 5, 5, 2, 4, 2, 2, 6, 4, 4, 2, 6, 4, 2, 3, 1, 4, 2, 5, 5, 2, 4, 2, 5, 3, 3, 4, 1, 6, 2, 3, 5, 5, 3, 3, 4, 3, 6, 1, 3, 2, 6, 3, 2, 1, 5, 2, 1, 5, 2, 2, 1, 2, 5, 5, 3, 1, 6, 5, 4, 4, 4, 6, 5, 5, 3, 3, 1, 5, 4, 2, 4, 5, 4, 1, 5, 6, 2, 3, 2, 1, 2, 6};
    int cand1, cand2, cand3, cand4, cand5, spoilt_ballot;
    cand1 = cand2 = cand3 = cand4 = cand5 = spoilt_ballot = 0;
    for (int i = 0; i < sizeof(arr); i++)
    {
        switch (arr[i])
        {
        case 1:
            cand1++;
            break;
        case 2:
            cand2++;
            break;
        case 3:
            cand3++;
            break;
        case 4:
            cand4++;
            break;
        case 5:
            cand5++;
            break;
        case 6:
            spoilt_ballot++;
            break;
        default:
            break;
        }
    }
    std::cout << cand1 << std::endl
              << cand2 << std::endl
              << cand3 << std::endl
              << cand4 << std::endl
              << cand5 << std::endl
              << spoilt_ballot << std::endl;
    return 0;
}