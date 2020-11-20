#include <iostream>

int main()
{
    int sum1 = 0;
    int while1 = 1;

    int sum2 = 0;
    int while2 = 50;

    while (while1 <= 10)
    {
        sum1 += while1;
        std::cout << sum1 << std::endl;
        while1++;
    }

    while (while2 <= 100)
    {
        sum2 += while2;
        std::cout << sum2 << std::endl;
        while2++;
    }

    int rounds = 10;
    while (rounds >= 0)
    {
        std::cout << rounds << std::endl;
        rounds--;
    }
}