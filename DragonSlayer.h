#pragma once
#include "Character.h"
#include <iostream>

struct DragonSlayer : Character
{
    DragonSlayer(const std::string& name, int hitPoints, int armor, int attackDamage);
    void attack(Character& other) override;
    const std::string& getName() override;
    std::string getStats() override;
	const std::vector<std::unique_ptr<Item>>& getAttackItems() const { return attackItems; }
protected:
	std::vector<std::unique_ptr<Item>> attackItems;
private:
    const std::string name;
};