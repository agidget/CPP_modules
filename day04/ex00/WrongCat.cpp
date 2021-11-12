#include "WrongCat.hpp"

WrongCat::WrongCat(void)
{
	std::cout << "\033[0;31mWrongCat is here\033[0m" << std::endl;
	type = "WrongCat";
}

WrongCat::~WrongCat(void)
{
	std::cout << "\033[0;31mWrongCat has left\033[0m" << std::endl;
}

WrongCat::WrongCat(const WrongCat &copy)
{
	*this = copy;
}

WrongCat & WrongCat::operator=(const WrongCat &other)
{
	this->type = other.type;
	return (*this);
}

void	WrongCat::makeSound(void) const
{
	std::cout << "\033[0;31mMeow Meow!\033[0m" << std::endl;
}