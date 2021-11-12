#include "FragTrap.hpp"

FragTrap::FragTrap(void) : ClapTrap()
{
	name = "Unknown";
	hitpoints = 0;
	energy = 0;
	attackDamage = 0;
}

FragTrap::FragTrap(std::string str) : ClapTrap(str)
{
	std::cout << "\033[1;36mFragTrap is called\033[0m" << std::endl;
}

FragTrap::~FragTrap(void)
{
	std::cout << "\033[1;36mFragTrap has left\033[0m" << std::endl;
}

FragTrap::FragTrap(const FragTrap &copy)
{
	*this = copy;
}

FragTrap & FragTrap::operator=(const FragTrap &other)
{
	this->name = other.name;
	this->hitpoints = other.hitpoints;
	this->energy = other.energy;
	this->attackDamage = other.attackDamage;

	return (*this);
}

void	FragTrap::highFivesGuys(void)
{
	std::cout << "\033[45mGive me High Five!\033[0m ";
	std::cout << "\U0001F44B\n" << std::endl;
}