#include <iostream>

int main()
{
    int sum = 0;
    int value = 0;

    std::cout << "Give numbers:" << std::endl;

    while (value != 8)
    {   
        sum += value;
        std::cin >> value;
    }
    std::cout << "The sum of your numbers is "
            << sum;
    return 0;
}