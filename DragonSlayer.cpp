#include "DragonSlayer.h"
#include "Dragon.h"
#include "Utility.h"
#include "AttackItem.h"
#include <cstdlib>

//DragonSlayer::DragonSlayer
DragonSlayer::DragonSlayer( const std::string& name_, int hitPoints, int armor, int attackDamage )
    : Character{ hitPoints, armor, attackDamage }
    , name{ name_ }
{
	attackItems.push_back(std::unique_ptr<AttackItem>(new AttackItem()));// add one attack item to the dragon slayer
	helpfulItems = makeHelpfulItems(rand() % 7 + 1);
	defensiveItems = makeDefensiveItems(rand() % 7 + 1);
}

//DragonSlayer::getName
const std::string& DragonSlayer::getName()
{
    return name;
}

void DragonSlayer::attack(Character& other)
{
    std::cout << name << " is attacking " << other.getName() << " !!" << std::endl;
    if( auto* dragon = dynamic_cast<Dragon*>(&other) )
    {
        if (dragon->getHP() <= 0)
        {
            for (auto& item : attackItems)
            {
                if (auto* attackItem = dynamic_cast<AttackItem*>(item.get()))
                {
                    attackItem->use(this);
                    item.reset(); //can only be used once!
                    break;
                }
            }
            //DragonSlayers get a 10x boost when attacking dragons, from their attack item.
            //so they should USE their attack item before attacking the dragon... 
            //note: they should only use the item if the dragon's hitpoints are > 0...
            //note: items are single-use only, so you need to reset it after use.  
            //look in the Character class for how the other item types are reset after use.
			while (dragon->getHP() > attackDamage) // this way the finiahing blow is dealt with regular attack in next step
            {
                dragon->takeDamage(attackDamage);
            }
        }
    }
        
    Character::attack(other);
        
}

//DragonSlayer::getStats
std::string DragonSlayer::getStats()
{
    return getCharacterStats(this);
}