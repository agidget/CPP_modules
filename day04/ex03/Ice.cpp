#include "Ice.hpp"

Ice::Ice(void)
{
	// std::cout << "\033[0;96mIce is here\033[0m" << std::endl;
	type = "ice";
}

Ice::~Ice(void)
{
	// std::cout << "\033[0;96mIce has left\033[0m" << std::endl;
}

Ice::Ice(const Ice &copy)
{
	*this = copy;
}

Ice & Ice::operator=(const Ice &other)
{
	this->type = other.type;

	return (*this);
}

AMateria*	Ice::clone() const
{
	AMateria*	newIce = new Ice();
	return (newIce);
}