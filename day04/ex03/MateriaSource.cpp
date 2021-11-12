#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void)
{
	// std::cout << "MateriaSource is here" << std::endl;
	for (int i = 0; i < 4; i++)
		stock[i] = NULL;
}

MateriaSource::~MateriaSource(void)
{
	for (int i = 0; i < 4; i++)
	{
		if (stock[i])
			delete stock[i];
	}
	// std::cout << "MateriaSource has left" << std::endl;
}

MateriaSource::MateriaSource(const MateriaSource &copy)
{
	std::cout << "Copy MateriaSource is here" << std::endl;
	for (int i = 0; i < 4; i++)
	{
		if (copy.stock[i])
			stock[i] = copy.stock[i]->clone();
		else
			stock[i] = NULL;
	}
}

MateriaSource & MateriaSource::operator=(const MateriaSource &other)
{
	std::cout << "Operator MateriaSource is here" << std::endl;
	for (int i = 0; i < 4; i++)
	{
		if (stock[i])
			delete stock[i];
	}
	for (int i = 0; i < 4; i++)
	{
		if (other.stock[i])
			stock[i] = other.stock[i]->clone();
		else
			stock[i] = NULL;
	}
	return (*this);
}

void	MateriaSource::learnMateria(AMateria* mat)
{
	for (int i = 0; i < 4; i++)
	{
		if (!stock[i])
		{
			stock[i] = mat;
			break ;
		}
	}
}

AMateria*	MateriaSource::createMateria(std::string const & type)
{
	for (int i = 0; i < 4; i++)
	{
		if (stock[i] && stock[i]->getType().compare(type) == 0)
			return (stock[i]->clone());
	}
	return (NULL);
}