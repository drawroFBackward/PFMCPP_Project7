#include "Paladin.h"

// Paladin::Paladin
Paladin::Paladin( const std::string& name_, int hitPoints, int armor, int attackDamage )
	: Character{ hitPoints, armor, attackDamage }
	, name{ name_ }
{
}

// Paladin::getName
const std::string& Paladin::getName()
{
	return name;
}

// Paladin::getStats
std::string Paladin::getStats()
{
	return 
		"    hitPoints: " + std::to_string(getHP()) + "\n" +
		"    armor: " + std::to_string(getArmorLevel()) + "\n" +
		"    attack damage: " + std::to_string(getAttackDamage());
}