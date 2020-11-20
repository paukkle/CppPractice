#include <iostream>
int main()
{
    std::cout << "Give me two numbers and I'll multiply them!" << std::endl;
    int v1 = 0, v2 = 0;
    std::cin >> v1 >> v2;
    std::cout << "Here's your result from multiplying ";
    std::cout << v1;;
    std::cout << " and ";
    std::cout << v2;
    std::cout << ": ";
    std::cout << v1 * v2;
    std::cout << std::endl;

    std::cout << "The product of " << v1
    << " and " << v2
    << " is " << v1 + v2 << std::endl;
}