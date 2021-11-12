#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "ICharacter.hpp"

class	Character: public ICharacter
{
private:

	std::string	name;
	AMateria*	skills[4];

public:

	Character(std::string name = "");
	~Character(void);
	Character(const Character &copy);
	Character & operator=(const Character &other);

	virtual std::string const & getName() const;
	virtual void equip(AMateria* m);
	virtual void unequip(int idx);
	virtual void use(int idx, ICharacter& target);
};

#endif