#include "constants.h"
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

bool isEven(int a)
{
    return !(a%2);
}

int doubleNumber(int a)
{
    return a*2;
}

double getDouble()
{
    std::cout << "Enter a double value: ";
    double num{0.0};
    std::cin >> num;
    return num;
}

char getChar()
{
    std::cout << "Enter one of the following: +, -, *, or /: "; 
    char symbol{};
    std::cin >> symbol;
    return symbol;
}

double doubleMath(double x, double y, char sym)
{
    if(sym == '*')
        return x * y;
    else if(sym == '/')
        return x/y;
    else if(sym == '+')
        return x+y;
    else if(sym == '-')
        return x-y;
    else 
        return 0;
}

int combo(int combo[])
{
    return 1;
}

double gravitySim(int t, double gravity, double height)
{
    return (-gravity*(t*t)/2)+height;
}
void tttt(double &test)
{}
int main()
{
    
    std::cout << "Enter a integer: ";
    int small{};
    std::cin >> small;
    double test{0.1+0.2};
    tttt(test);
    std::cout << "Enter a larger integer: ";
    int large{};
    std::cin >> large;
    if(large < small)
    {
        std::cout << "Swapping the values\n";
        int tmp = small;
        small = large;
        large = tmp;
    }// tmp is destroyed
    std::cout << "The smaller integer is: " << small << "\n";
    std::cout << "The larger integer is: " << large << "\n";
    return 0;
    double d1{100.00 - 99.99};
    double d2{10.00 - 9.99};
    std::cout << d1 << std::endl << d2;
    std::cout << isEven(3);
    double height{getDouble()};
    std::cout << "At 0 seconds the ball is at : " << height << " meters\n";
    for(int x = 1; x <= 5; x++)
    {
        double dist{gravitySim(x, gravity, height)};
        if(dist > 0)
            std::cout << "At " << x << " seconds, the ball is at height: " << dist << " meters\n";
        else
            std::cout << "At " << x << " seconds, the ball is on the ground.\n";
    }
    double X{getDouble()};
    double Y{getDouble()};
    char sym{getChar()};
    std::cout << X << " " << sym << " " << Y << " is " << doubleMath(X, Y, sym) << "\n";
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
