#include "Dog.hpp"

Dog::Dog(void)
{
	std::cout << "\033[0;33mDog is here\033[0m" << std::endl;
	type = "Dog";
}

Dog::~Dog(void)
{
	std::cout << "\033[0;33mDog has left\033[0m" << std::endl;
}

Dog::Dog(const Dog &copy)
{
	*this = copy;
}

Dog & Dog::operator=(const Dog &other)
{
	this->type = other.type;
	return (*this);
}

void	Dog::makeSound(void) const
{
	std::cout << "\033[0;33mBark Bark!\033[0m" << std::endl;
}