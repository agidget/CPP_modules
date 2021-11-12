#include "AMateria.hpp"

AMateria::AMateria(std::string const & type)
{
	// std::cout << "AMateria is here" << std::endl;
	this->type = type;
}

AMateria::~AMateria(void)
{
	// std::cout << "AMateria has left" << std::endl;
}

AMateria::AMateria(const AMateria &copy)
{
	*this = copy;
}

AMateria & AMateria::operator=(const AMateria &other)
{
	this->type = other.type;
	return (*this);
}

std::string const & AMateria::getType() const
{
	return (type);
}

void	AMateria::use(ICharacter& target)
{
	if (type.compare("ice") == 0)
	{
		std::cout << "\033[0;96m* shoots an ice bolt at ";
		std::cout << target.getName();
		std::cout << " *\033[0m" << std::endl;
	}
	else if (type.compare("cure") == 0)
	{
		std::cout << "\033[0;95m* heals " << target.getName();
		std::cout << "’s wounds *\033[0m" << std::endl;
	}
	else
		std::cout << "No such type of materia" << std::endl;
}