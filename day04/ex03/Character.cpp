#include "Character.hpp"

Character::Character(std::string name)
{
	// std::cout << "\033[1;93mCharacter is here\033[0m" << std::endl;
	this->name = name;
	for (int i = 0; i < 4; i++)
		skills[i] = NULL;
}

Character::~Character(void)
{
	for (int i = 0; i < 4; i++)
	{
		if (!skills[i])
			break ;
		delete skills[i];
	}
	// std::cout << "\033[1;93mCharacter has left\033[0m" << std::endl;
}

Character::Character(const Character &copy)
{
	std::cout << "\033[1;93mCopy Character is here\033[0m" << std::endl;
	this->name = copy.name;
	for (int i = 0; i < 4; i++)
	{
		if (copy.skills[i])
			skills[i] = copy.skills[i]->clone();
		else
			skills[i] = NULL;
	}
}

Character & Character::operator=(const Character &other)
{
	// std::cout << "\033[1;93mOperator Character is here\033[0m" << std::endl;
	for (int i = 0; i < 4; i++)
	{
		if (!skills[i])
			break ;
		delete skills[i];
	}
	this->name = other.name;
	for (int i = 0; i < 4; i++)
	{
		if (other.skills[i])
			skills[i] = other.skills[i]->clone();
		else
			skills[i] = NULL;
	}
	return (*this);
}

std::string const & Character::getName() const
{
	return (name);
}

void	Character::equip(AMateria* m)
{
	for (int i = 0; i < 4; i++)
	{
		if (!skills[i])
		{
			skills[i] = m;
			break ;
		}
	}
}

void	Character::unequip(int idx)
{
	if (idx >= 0 && idx <= 3 && skills[idx])
		skills[idx] = NULL;
}

void	Character::use(int idx, ICharacter& target)
{
	if (idx >= 0 && idx <= 3 && skills[idx])
		skills[idx]->use(target);
}