#include "HumanB.hpp"

HumanB::HumanB(std::string str)
{
	this->name = str;
	this->gun = NULL;
}

HumanB::~HumanB(void)
{}

void	HumanB::setWeapon(Weapon &weap)
{
	this->gun = &weap;
}

void	HumanB::attack(void)
{
	std::cout << "\033[0;36m";
	std::cout << this->name << " attacks with his ";
	if (!this->gun)
		std::cout << "with his bare hands" << std::endl;
	else
		std::cout << this->gun->getType() << std::endl;
	std::cout << "\033[0m";
}
