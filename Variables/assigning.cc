#include <iostream>

int main()
{
    bool b = 42;
    std::cout << b << std::endl;
    int i = b;
    std::cout << i << std::endl;
    i = 3.14;
    double pi = i;
    std::cout << i << ", " << pi << std::endl;
    unsigned char c = -1;
    signed char c2 = 255;
    std::cout << c << ", " << c2 << std::endl;
    return 2;
}