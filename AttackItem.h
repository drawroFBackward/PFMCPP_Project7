#include "Item.h"

struct AttackItem : Item
{
	AttackItem() : Item{ "Attack Item", 10 } {}
	void use(Character* character) override;
};