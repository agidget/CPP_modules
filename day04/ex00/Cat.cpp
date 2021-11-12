#include "Cat.hpp"

Cat::Cat(void)
{
	std::cout << "\033[0;35mCat is here\033[0m" << std::endl;
	type = "Cat";
}

Cat::~Cat(void)
{
	std::cout << "\033[0;35mCat has left\033[0m" << std::endl;
}

Cat::Cat(const Cat &copy)
{
	*this = copy;
}

Cat & Cat::operator=(const Cat &other)
{
	this->type = other.type;
	return (*this);
}

void	Cat::makeSound(void) const
{
	std::cout << "\033[0;35mMeow Meow!\033[0m" << std::endl;
}