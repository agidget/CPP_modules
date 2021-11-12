#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) : ClapTrap()
{
	name = "Unknown";
	hitpoints = 0;
	energy = 0;
	attackDamage = 0;
}

ScavTrap::ScavTrap(std::string str) : ClapTrap(str)
{
	std::cout << "\033[1;37mScavTrap is called\033[0m" << std::endl;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "\033[1;37mScavTrap has left\033[0m" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &copy)
{
	*this = copy;
}

ScavTrap & ScavTrap::operator=(const ScavTrap &other)
{
	this->name = other.name;
	this->hitpoints = other.hitpoints;
	this->energy = other.energy;
	this->attackDamage = other.attackDamage;

	return (*this);
}

void	ScavTrap::attack(std::string const & target)
{
	std::cout << "\033[0;31mScavTrap " << name << " attack too with " << target;
	std::cout << std::endl;
	this->hitpoints++;
	std::cout << "Amount of hitponts after: " << this->hitpoints << std::endl;
	std::cout << "\033[0m" << std::endl;
}

void	ScavTrap::guardGate(void)
{
	std::cout << "\033[0;33mScavTrap " << name << " have enterred in Gate keeper mode" << std::endl;
	std::cout << "\033[0m" << std::endl;
}