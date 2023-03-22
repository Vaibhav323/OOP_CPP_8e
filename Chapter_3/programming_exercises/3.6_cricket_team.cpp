#include <iostream>
#include <iomanip>
int main(void)
{
    const char *p_name[] = {"Sachin", "Saurav", "Rahul"};
    int runs[] = {8430, 42900, 3350};
    int innings[] = {230, 130, 105};
    int t_not_out[] = {18, 9, 11};
    int t_out[] = {};
    int average[] = {};

    for (int i = 0; i < sizeof(runs) / sizeof(runs[0]); i++)
    {
        t_out[i] = average[i] = 0;
        std::cout << std::setw(20) << t_not_out[i] << " | " << std::endl;
        t_out[i] = innings[i] - t_not_out[i];
        average[i] = runs[i] / t_out[i];
        std::cout << std::setw(20) << t_not_out[i] << " | " << std::endl;
    }
    std::cout << std::setw(20) << "Player's name"
              << " | "
              << std::setw(20) << "Runs"
              << " | "
              << std::setw(20) << "Innings"
              << " | "
              << std::setw(20) << "Times not out"
              << " | "
              << std::setw(20) << "Average"
              << " | " << std::endl;
    for (int i = 0; i < sizeof(runs) / sizeof(runs[0]); i++)
    {
        std::cout << std::setw(20) << p_name[i] << " | "
                  << std::setw(20) << runs[i] << " | "
                  << std::setw(20) << innings[i] << " | "
                  << std::setw(20) << t_not_out[i] << " | "
                  << std::setw(20) << average[i] << " | " << std::endl;
    }

    return 0;
}