#include "Weapon.hpp"

Weapon::Weapon(std::string str)
{
	this->type = str;
}

Weapon::~Weapon(void)
{}

void	Weapon::setType(std::string str)
{
	this->type = str;
}

const std::string	&Weapon::getType(void)
{
	const std::string	&strRef = this->type;

	return (strRef);
}