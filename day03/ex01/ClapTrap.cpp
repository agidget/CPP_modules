#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void)
{
	name = "Unknown";
	hitpoints = 0;
	energy = 0;
	attackDamage = 0;
}

ClapTrap::ClapTrap(std::string str) : hitpoints(100), energy(50), attackDamage(20)
{
	std::cout << "Constructor is called" << std::endl;
	name = str;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "Destructor is called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &copy)
{
	*this = copy;
}

ClapTrap & ClapTrap::operator=(const ClapTrap &other)
{
	this->name = other.name;
	this->hitpoints = other.hitpoints;
	this->energy = other.energy;
	this->attackDamage = other.attackDamage;

	return (*this);
}

void	ClapTrap::attack(std::string const & target)
{
	std::cout << "\033[0;31mClapTrap " << name << " attack " << target << ", causing ";
	std::cout << attackDamage << " points of damage!" << std::endl;
	this->hitpoints++;
	std::cout << "Amount of hitponts after: " << this->hitpoints << std::endl;
	std::cout << "\033[0m" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "\033[0;34mClapTrap " << name << " take " << amount << " amount of damage!" << std::endl;
	this->attackDamage += amount;
	std::cout << "Amount of attackDamage points after: " << this->attackDamage << std::endl;
	std::cout << "\033[0m" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->energy >= amount)
	{
		this->energy -=amount;
		std::cout << "\033[0;32mClapTrap " << name << " is being repaired by " << amount;
		std::cout << " amount of energy" << std::endl;
		std::cout << "Amount of energy points after: " << this->energy << std::endl;
		std::cout << "\033[0m" << std::endl;
	}
	else
	{
		std::cout << "\033[1;32mNot enough energy for " << name;
		std::cout << " to be repaired" << std::endl;
		std::cout << "Amount of energy points: " << this->energy << std::endl;
		std::cout << "\033[0m" << std::endl;
	}
}