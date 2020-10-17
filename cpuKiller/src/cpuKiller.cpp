#include<iostream>

long long power(int a, int b)
{
    long long result{1};
    while(b)
    {
        if(b%2) result *= a;
        a *= a;
        b /= 2;
    }
    return result;
}

int main()
{
    double sum{};
    double num{};
    double s{};
    std::cout << "What would you like the x to be";
    std::cin >> s;
    while(num < 1000000000)
    {
        sum += (1/(power(num,s)));
        std::cout << sum << '\n';
        num++;
    }
}
