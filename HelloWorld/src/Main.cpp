#include <iostream>
#include "Log.h"
#include "play.h"

int getInteger();

enum nums
{
    A,B,C
};

int a = 0;
int b = 1;
int c = 2;

class Player
{
public:
    int x;
    int y;
    double speed = 0.3;

    void Move(int ax, int ay)
    {
        x += ax * speed;
        y += ay * speed;
    }
};

void cccc(int&)
{}

int getInt()
{
    std::cout << "Enter in a number: ";
    int num{};
    std::cin >> num;
    return num;
}

int doubleNumber(int a)
{
    return a*2;
}

void write(int x)
{
    std::cout << "The sum of the 2 numbers is: " << x << std::endl;
}

int main()
{
    int x{getInteger()};
    int y{getInteger()};

    write(x+y);

    return 0;
    /*
    std::cout << "Enter a Number: \n";
    int x;
    std::cin >> x;
    std::cout << "Your number is [" << x << "]" << std::endl;
    int g;
    cccc(g);
    std::cout << g << std::endl;
    nums val = B;
    if(val == B)
    {
        //do stuff
    }
    std::cout << "Enter an integer: \n";
    int x{};
    std::cin >> x;
    std::cout << "Enter another integer: \n";
    int X{};
    std::cin >> X;
    std::cout << x << " + " << X << " is " << x+X << std::endl;
    std::cout << x << " - " << X << " is " << x-X;
    std::cin.get();
    return 0;
    */
}
