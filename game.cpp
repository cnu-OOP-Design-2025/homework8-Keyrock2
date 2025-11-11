#include "game.h"

// ===== 1. 구체적인 캐릭터 스탯 구현 =====
// Knight
int Knight::getAttack() const { return 70; }
int Knight::getSpeed() const { return 40; }
int Knight::getDefense() const { return 80; }

// Wizard
int Wizard::getAttack() const { return 50; }
int Wizard::getSpeed() const { return 50; }
int Wizard::getDefense() const { return 30; }

// Archer
int Archer::getAttack() const { return 60; }
int Archer::getSpeed() const { return 70; }
int Archer::getDefense() const { return 40; }

// ===== 2. 구체적인 데코레이터 구현 =====
// Armor
string Armor::getDescription() const
{
    return character->getDescription() + ", Armor";
}
int Armor::getAttack() const
{
    return character->getAttack() + 0;
}
int Armor::getSpeed() const
{
    return character->getSpeed() - 5;
}
int Armor::getDefense() const
{
    return character->getDefense() + 30;
}

// Boots
string Boots::getDescription() const
{
    return character->getDescription() + ", Boots";
}
int Boots::getAttack() const
{
    return character->getAttack() + 0;
}
int Boots::getSpeed() const
{
    return character->getSpeed() + 15;
}
int Boots::getDefense() const
{
    return character->getDefense() + 0;
}

// Staff
string Staff::getDescription() const
{
    return character->getDescription() + ", Staff";
}
int Staff::getAttack() const
{
    return character->getAttack() + 20;
}
int Staff::getSpeed() const
{
    return character->getSpeed() + 0;
}
int Staff::getDefense() const
{
    return character->getDefense() + 0;
}

// Sword
string Sword::getDescription() const
{
    return character->getDescription() + ", Sword";
}
int Sword::getAttack() const
{
    return character->getAttack() + 30;
}
int Sword::getSpeed() const
{
    return character->getSpeed() + 0;
}
int Sword::getDefense() const
{
    return character->getDefense() + 0;
}

// Bow
string Bow::getDescription() const
{
    return character->getDescription() + ", Bow";
}
int Bow::getAttack() const
{
    return character->getAttack() + 25;
}
int Bow::getSpeed() const
{
    return character->getSpeed() + 0;
}
int Bow::getDefense() const
{
    return character->getDefense() + 0;
}