#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void) : FragTrap(), ScavTrap()
{
	name = "Unknown";
	ClapTrap::name = name + "_clap_name";
	hitpoints = 0;
	energy = 0;
	attackDamage = 0;
}

DiamondTrap::DiamondTrap(std::string str) : ClapTrap(str), FragTrap(str), ScavTrap(str)
{
	std::cout << "\033[0;95mDiamondTrap is here\033[0m" << std::endl;
	name = str;
	ClapTrap::name = name + "_clap_name";
	hitpoints = 100;
	energy = 50;
	attackDamage = 30;
}

DiamondTrap::~DiamondTrap(void)
{
	std::cout << "\033[0;95mDiamondTrap has left\033[0m" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &copy)
{
	*this = copy;
}

DiamondTrap & DiamondTrap::operator=(const DiamondTrap &other)
{
	this->name = other.name;
	this->ClapTrap::name = other.ClapTrap::name;
	this->hitpoints = other.hitpoints;
	this->energy = other.energy;
	this->attackDamage = other.attackDamage;

	return (*this);
}

void	DiamondTrap::whoAmI(void)
{
	std::cout << "\033[1;95mMy name is " << name << std::endl;
	std::cout << "My ClapTrap name is " << ClapTrap::name << std::endl;
	std::cout << "\033[0m" << std::endl;
}