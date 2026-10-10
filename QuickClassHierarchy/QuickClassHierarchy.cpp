// QuickClassHierarchy.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "Character.h"

int main()
{
	Weapon sword(10, 100);
	sword.getDamage();
	sword.getWeaponDurability();

	Armor shield(5, 50);
	shield.getArmorDurability();
	shield.getDefense();

	Character player("Hero", 100, sword, shield);
	player.printStats();

	Enemy goblin("Goblin", 50, Weapon(5, 30), Armor(2, 20));
	goblin.printStats();

	return 0;
}