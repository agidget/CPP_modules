#include "Brain.hpp"

Brain::Brain(void)
{
	std::cout << "Brain is here!" << std::endl;
	for (int i = 0; i < 100; i++)
		ideas[i] = "Idea No. " + std::to_string(i);
}

Brain::~Brain(void)
{
	std::cout << "Brain has left" << std::endl;
}

Brain::Brain(const Brain &copy)
{
	*this = copy;
}

Brain & Brain::operator=(const Brain &other)
{
	for (int i = 0; i < 100; i++)
		this->ideas[i] = other.ideas[i];

	return (*this);
}

std::string	Brain::getIdea(int index)
{
	if (index < 0 && index > 99)
	{
		std::cout << "Available ideas only from 0 to 99" << std::endl;
		return NULL;
	}
	else
		return (ideas[index]);
}

void	Brain::setIdea(std::string idea, int index)
{
	if (index < 0 && index > 99)
		std::cout << "Available ideas only from 0 to 99" << std::endl;
	else
		ideas[index] = idea;
}