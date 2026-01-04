#pragma once
#include <iostream>
#include "Character.h"

struct Dragon : Character
{
    void attack(Character& other) override;
    const std::string& getName() override {}
    std::string getStats() override {}
private:
    const std::string name;
};

