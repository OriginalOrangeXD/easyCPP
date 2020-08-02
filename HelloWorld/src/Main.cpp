#include <iostream>
#include "Log.h"
#include "play.h"

int main()
{
    int x = 5;
    bool equ = x == 5;
    if(equ)
        Log("Test");
    Zplay();
    std::cin.get();
}
