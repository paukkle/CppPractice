#include <iostream>

int main()
{
    int currVal = 0, val = 0;

    std::cout << "Begin by giving the starting value:" << std::endl;
    if (std::cin >> currVal)
    {
        int count = 0;
        while (std::cin >> val)
        {
            if (val == currVal)
            {
                count++;
            }
            else
            {
                std::cout << currVal << " appeared " << count << " times." << std::endl;
                currVal = val;
                count = 0;
                std::cout << "Give new values" << std::endl;
            }
            
        }
    }
}