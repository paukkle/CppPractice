#include <iostream>

int main()
{
    int sum = 0;
    int value = 0;
    while (value != 8)
    {   sum += value;
        std::cout << "Give a number:" << std::endl;
        std::cin >> value;
    }
    return 0;
}