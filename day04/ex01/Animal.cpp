#include "Animal.hpp"

Animal::Animal(void)
{
	std::cout << "\033[0;36mAnimal is here\033[0m" << std::endl;
	type = "Animal";
}

Animal::~Animal(void)
{
	std::cout << "\033[0;36mAnimal has left\033[0m" << std::endl;
}

Animal::Animal(const Animal &copy)
{
	*this = copy;
}

Animal & Animal::operator=(const Animal &other)
{
	this->type = other.type;
	return (*this);
}

std::string	Animal::getType(void) const
{
	return (type);
}

void	Animal::makeSound(void) const
{
	std::cout << "\033[0;36mAnimal is speaking\033[0m" << std::endl;
}