#include "Dwarf.h"

//Dwarf::Dwarf
Dwarf::Dwarf( const std::string& name_, int hitPoints, int armor, int attackDamage )
	: Character{ hitPoints, armor, attackDamage }
	, name{ name_ }
{
}

//Dwarf::getName
const std::string& Dwarf::getName()
{
	return name;
}

//Dwarf::getStats
std::string Dwarf::getStats()
{
	return getName() + "'s stats: \n" +
		"    hitPoints: " + std::to_string( getHP() ) + "\n" +
		"    armor: " + std::to_string( getArmorLevel() ) + "\n" +
		"    attack damage: " + std::to_string( getAttackDamage() ) + "\n";
}