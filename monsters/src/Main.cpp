#include <iostream>

enum MONSTER_TYPE {
    MONSTER_TYPE_OGRE,
    MONSTER_TYPE_DRAGON,
    MONSTER_TYPE_ORC,
    MONSTER_TYPE_GIANT,
    MONSTER_TYPE_SPIDER,
    MONSTER_TYPE_SLIME
};

struct Monster
{
    std::string name;
    MONSTER_TYPE type;
    int health;
};

void printMonster(Monster monster)
{
    /*
    if(monster.type == 0)
        std::cout << "This Ogre is named " << monster.name << " and has " << monster.health << " health." << std::endl;
    else if(monster.type == 1)
        std::cout << "This Dragon is named " << monster.name << " and has " << monster.health << " health." << std::endl;
    else if(monster.type == 2)
        std::cout << "This Orc is named " << monster.name << " and has " << monster.health << " health." << std::endl;
    else if(monster.type == 3)
        std::cout << "This Giant is named " << monster.name << " and has " << monster.health << " health." << std::endl;
    else if(monster.type == 4)
        std::cout << "This Spider is named " << monster.name << " and has " << monster.health << " health." << std::endl;
    else if(monster.type == 5)
        std::cout << "This Slime is named " << monster.name << " and has " << monster.health << " health." << std::endl;
        */
    switch(monster.type)
    {
        case MONSTER_TYPE_OGRE:
        case MONSTER_TYPE_OGRE:
        case MONSTER_TYPE_OGRE:
        case MONSTER_TYPE_OGRE:
        case MONSTER_TYPE_OGRE:
        case MONSTER_TYPE_OGRE:
}

int main()
{
    Monster ogre{"Torg", MONSTER_TYPE_OGRE, 145};
    Monster slime{"Blurp", MONSTER_TYPE_SLIME, 23};
    printMonster(ogre);
    printMonster(slime);
    return 0;
}
