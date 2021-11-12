#include "HumanA.hpp"

HumanA::HumanA(std::string str, Weapon &weap) : gun(weap)
{
	this->name = str;
}

HumanA::~HumanA(void)
{}

void	HumanA::attack(void)
{
	std::cout << "\033[0;34m";
	std::cout << this->name << " attacks with his ";
	std::cout << this->gun.getType() << std::endl;
	std::cout << "\033[0m";
}
