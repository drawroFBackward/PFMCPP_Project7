#include "Paladin.h"
#include "Utility.h"

// Paladin::Paladin
Paladin::Paladin( const std::string& name_, int hitPoints, int armor, int attackDamage )
	: Character{ hitPoints, armor, attackDamage }
	, name{ name_ }
{
	helpfulItems = makeHelpfulItems(rand() % 7 + 1);
	defensiveItems = makeDefensiveItems(rand() % 7 + 1);
}

// Paladin::getName
const std::string& Paladin::getName()
{
	return name;
}

// Paladin::getStats
std::string Paladin::getStats()
{
	return getCharacterStats(this);
}