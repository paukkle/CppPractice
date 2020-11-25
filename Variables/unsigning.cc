#include <iostream>

int main()
{
    unsigned u = 10, u2 = 42;
    std::cout << u2 -u << std::endl; // returns 32
    std::cout << u - u2 << std::endl;  // returns 42949672264

    int i = 10, i2 = 42;
    std::cout << i2 - i << std::endl;  // returns 32
    std::cout << i - i2 << std::endl;  // returns -32

    std::cout << i - u << std::endl;  //returns 0
    std::cout << u -i << std::endl;  // returns 0
    return 1;
}
