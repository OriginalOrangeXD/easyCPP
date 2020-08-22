#include <iostream>


int getInt()
{
    std::cout << "Enter in a number: ";
    int num{};
    std::cin >> num;
    return num;
}
void write(int x)
{
    std::cout << "The sum of the 2 numbers is: " << x << std::endl;
}
