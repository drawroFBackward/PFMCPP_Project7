#pragma once
#include <iostream>
#include "Character.h"

struct Dragon : Character
{
    Dragon(const std::string& name, int hitPoints, int armor, int attackDamage);
    void attack(Character& other) override;
    const std::string& getName() override;
    std::string getStats() override;
private:
    const std::string name;
};

