#pragma once
#include <string>

class Weapon
{
public:
	int damage = 0;
	int weaponDurability = 0;

	Weapon(int damage, int weaponDurability);

	int getDamage() const;
	int getWeaponDurability() const;
};

class Armor
{
public:
	int defense = 0;
	int armorDurability = 0;

	Armor(int defense, int armorDurability);

	int getDefense() const;
	int getArmorDurability() const;
};

class Character
{
protected:
	std::string name = "";
	int health = 0;
	
	Weapon weapon;
	Armor armor;

public:
	Character(std::string name, int health, Weapon weapon, Armor armor);

	void printStats();

};

class Enemy : public Character
{
	public:
	Enemy(std::string name, int health, Weapon weapon, Armor armor);
};