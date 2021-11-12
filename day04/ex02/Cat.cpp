#include "Cat.hpp"

Cat::Cat(void)
{
	std::cout << "\033[0;35mCat is here\033[0m" << std::endl;
	type = "Cat";
	catBrain = new Brain();
}

Cat::~Cat(void)
{
	delete catBrain;
	std::cout << "\033[0;35mCat has left\033[0m" << std::endl;
}

Cat::Cat(const Cat &copy)
{
	std::cout << "\033[0;35mCopy Cat is here\033[0m" << std::endl;
	this->type = copy.type;
	this->catBrain = new Brain();
	for (int i = 0; i < 100; i++)
		this->setCatIdea(copy.catBrain->getIdea(i), i);
}

Cat & Cat::operator=(const Cat &other)
{
	delete this->catBrain;

	this->type = "Cat";
	this->catBrain = new Brain();
	for (int i = 0; i < 100; i++)
		this->setCatIdea(other.catBrain->getIdea(i), i);
	
	return (*this);
}

void	Cat::makeSound(void) const
{
	std::cout << "\033[0;35mMeow Meow!\033[0m" << std::endl;
}

std::string	Cat::getCatIdea(int index)
{
	return (catBrain->getIdea(index));
}

void	Cat::setCatIdea(std::string idea, int index)
{
	catBrain->setIdea(idea, index);
}