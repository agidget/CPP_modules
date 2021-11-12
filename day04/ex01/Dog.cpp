#include "Dog.hpp"

Dog::Dog(void)
{
	std::cout << "\033[0;33mDog is here\033[0m" << std::endl;
	type = "Dog";
	dogBrain = new Brain();
}

Dog::~Dog(void)
{
	delete dogBrain;
	std::cout << "\033[0;33mDog has left\033[0m" << std::endl;
}

Dog::Dog(const Dog &copy)
{
	std::cout << "\033[0;33mCopy Dog is here\033[0m" << std::endl;
	this->type = copy.type;
	this->dogBrain = new Brain();
	for (int i = 0; i < 100; i++)
		this->setDogIdea(copy.dogBrain->getIdea(i), i);
}

Dog & Dog::operator=(const Dog &other)
{
	delete this->dogBrain;

	this->type = "Dog";
	this->dogBrain = new Brain();
	for (int i = 0; i < 100; i++)
		this->setDogIdea(other.dogBrain->getIdea(i), i);

	return (*this);
}

void	Dog::makeSound(void) const
{
	std::cout << "\033[0;33mBark Bark!\033[0m" << std::endl;
}

std::string	Dog::getDogIdea(int index)
{
	return (dogBrain->getIdea(index));
}

void	Dog::setDogIdea(std::string idea, int index)
{
	dogBrain->setIdea(idea, index);
}