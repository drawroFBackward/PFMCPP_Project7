#include "Dwarf.h"
#include "Utility.h"

//Dwarf::Dwarf
Dwarf::Dwarf( const std::string& name_, int hitPoints, int armor, int attackDamage )
	: Character{ hitPoints, armor, attackDamage }
	, name{ name_ }
{
	helpfulItems = makeHelpfulItems(rand() % 7 + 1);
	defensiveItems = makeDefensiveItems(rand() % 7 + 1);
}

//Dwarf::getName
const std::string& Dwarf::getName()
{
	return name;
}

//Dwarf::getStats
std::string Dwarf::getStats()
{
	return getCharacterStats(this);
}