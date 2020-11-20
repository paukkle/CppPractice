#include <iostream>

int main()
{
    int sum = 0;

    for (int val = 1; val <= 10; val++)
    sum+= val;
    
    std::cout << sum << std::endl;

    int sum2 = 0;
    int value = 0;
    while (std::cin >> value)
        sum2 += value;
    std::cout << sum2 << std::endl;

    return 0;
}