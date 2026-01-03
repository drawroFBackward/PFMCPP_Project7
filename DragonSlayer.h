#pragma once
#include "Character.h"
#include <iostream>

struct DragonSlayer : Character
{
    void attack(Character& other) override;
private:
    const std::string name;
};