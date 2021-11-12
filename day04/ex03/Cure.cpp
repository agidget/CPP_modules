#include "Cure.hpp"

Cure::Cure(void)
{
	// std::cout << "\033[0;95mCure is here\033[0m" << std::endl;
	type = "cure";
}

Cure::~Cure(void)
{
	// std::cout << "\033[0;95mCure has left\033[0m" << std::endl;
}

Cure::Cure(const Cure &copy)
{
	*this = copy;
}

Cure & Cure::operator=(const Cure &other)
{
	this->type = other.type;

	return (*this);
}

AMateria*	Cure::clone() const
{
	AMateria*	newCure = new Cure();
	return (newCure);
}