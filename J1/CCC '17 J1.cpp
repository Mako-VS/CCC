#include <iostream>

int main()
{
    int x;
    int y;
    std::cin >> x;
    std::cin >> y;

    if (x > 0 && y > 0) 
    {
        std::cout << 1;
    }
    if (x < 0 && y > 0) 
    {
        std::cout << 2;
    }
    if (x < 0 && y < 0) 
    {
        std::cout << 3;
    }
    if (x > 0 && y < 0) 
    {
        std::cout << 4;
    }
}