#include<iostream>
#include "random.h"

int getNum()
{
    while(true)
    {
        int num{};
        std::cin >> num;
        if(std::cin.fail())
        {
            std::cin.clear();
            std::cin.ignore(32767, '\n');
        }
        else if(num >= 1 && num <= 100)
        {
            std::cin.clear();
            std::cin.ignore(32767, '\n');
            return num;
        }
    }
}
int main()
{
    std::cout << " Lets play a game, I'm thinking of a number. You have 7 tries to guess the number.\n";
    bool play{true};
    char charPlay{};
    int guesses{7};
    int guess{};
    while(play)
    {
        int num{getRandom(1,100)};
        for(int i = 1; i <= guesses; i++)
        {
            std::cout << "Guess #" << i << "\n";
            guess = getNum();
            if(guess < num)
                std::cout << "Your guess is too low \n";
            else if(guess > num)
                std::cout << "Your guess is too high \n";
            else
                std::cout << "Correct! You win!\n";
            if(i == 7)
                std::cout << "Sorry, you lose. THe correct number was " << num << "\n";
        }
    std::cout << "Would you like to play again (y/n)";
    std::cin >> charPlay;
    play = (charPlay == 'y') ? true : false;
    }
}
