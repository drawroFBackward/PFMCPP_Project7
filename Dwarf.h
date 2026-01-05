#pragma once
#include "Character.h"
#include <iostream>

struct Dwarf : Character
{
    Dwarf(const std::string& name, int hitPoints, int armor, int attackDamage);
    const std::string& getName() override;
    std::string getStats() override;
private:
    const std::string name;
};