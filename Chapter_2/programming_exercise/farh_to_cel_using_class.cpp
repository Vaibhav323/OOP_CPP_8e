#include <iostream>
class temp
{
    private:
        float far;
    public:
       temp(_far):far(_far)
        {
        }
        void convert()
        {
            float _cel;
            _cel = (5.0/9.0)*(_far - 32.0);
            std::cout << "The given temp in celsius: " << _cel << std::endl;
        }
};
int main(void)
{
    temp(100.0);
    temp.convert();
    return 0;
}