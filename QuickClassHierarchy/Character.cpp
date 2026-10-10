#include "Character.h"
#include <iostream>

Weapon::Weapon(int damage, int weaponDurability)
	:
	damage(damage), weaponDurability(weaponDurability)
{
}

int Weapon::getDamage() const
{
	return damage;
}

int Weapon::getWeaponDurability() const
{
	return weaponDurability;
}

Armor::Armor(int defense, int armorDurability)
	:
	defense(defense), armorDurability(armorDurability)
{
}

int Armor::getDefense() const
{
	return defense;
}

int Armor::getArmorDurability() const
{
	return armorDurability;
}

Character::Character(std::string name, int health, Weapon weapon, Armor armor)
	:
	name(name), health(health), weapon(weapon), armor(armor)
{
}

void Character::printStats()
{
	std::cout << "Name: " << name << std::endl;
	std::cout << "Health: " << health << std::endl;
	std::cout << "Weapon Damage: " << weapon.getDamage() << std::endl;
	std::cout << "Weapon Durability: " << weapon.getWeaponDurability() << std::endl;
	std::cout << "Armor Defense: " << armor.getDefense() << std::endl;
	std::cout << "Armor Durability: " << armor.getArmorDurability() << std::endl;
	std::cout << std::endl;
}

Enemy::Enemy(std::string name, int health, Weapon weapon, Armor armor)
	:
	Character(name, health, weapon, armor)
{
}
