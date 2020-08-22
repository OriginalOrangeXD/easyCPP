#include <array>
#include <iostream>
#include "Log.h"
#include "play.h"
#include "io.h"

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


int doubleNumber(int a)
{
    return a*2;
}

int combo(int combo[])
{
    return 1;
}

int main()
{

    int x{getInt()};
    int y{getInt()};

    write(x+y);
    int nums[12];
    nums[0] = 1;
    nums[1] = 1;
    nums[2] = 2;
    nums[3] = 2;
    nums[4] = 3;
    nums[5] = 3;
    nums[6] = 4;
    nums[7] = 4;
    nums[8] = 5;
    nums[9] = 5;
    nums[10] = 6;
    nums[11] = 6;
    int n = 12;
    std::cout << (1 << n) << std::endl;
    for(int mask = 0; mask < (1 << n); mask++)
    {
        int subsetSum{};
        for(int i = 0; i < n; i++)
        {
            if(mask & (1 << i))
                subsetSum += nums[i];
        }
        if(subsetSum == 7)
            std::cout << mask << std::endl;
    }
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
