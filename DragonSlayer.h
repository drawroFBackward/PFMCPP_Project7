#pragma once
#include "Character.h"
#include <iostream>

struct DragonSlayer : Character
{
    void attack(Character& other) override;
    const std::string& getName() override {}
    std::string getStats() override {}
private:
    const std::string name;
};