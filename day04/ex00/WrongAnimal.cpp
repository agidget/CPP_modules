#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void)
{
	std::cout << "\033[0;31mWrongAnimal is here\033[0m" << std::endl;
	type = "WrongAnimal";
}

WrongAnimal::~WrongAnimal(void)
{
	std::cout << "\033[0;31mWrongAnimal has left\033[0m" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &copy)
{
	*this = copy;
}

WrongAnimal & WrongAnimal::operator=(const WrongAnimal &other)
{
	this->type = other.type;
	return (*this);
}

std::string	WrongAnimal::getType(void) const
{
	return (type);
}

void	WrongAnimal::makeSound(void) const
{
	std::cout << "\033[0;31mWrongAnimal is speaking\033[0m" << std::endl;
}