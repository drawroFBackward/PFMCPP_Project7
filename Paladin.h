#pragma once
#include "Character.h"
#include <iostream>

struct Paladin : Character
{
    const std::string& getName() override {}
    std::string getStats() override {}
private:
    const std::string name;
};