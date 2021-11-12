#ifndef HUMAN_B_HPP
# define HUMAN_B_HPP

# include "Weapon.hpp"

class	HumanB
{
	std::string	name;
	Weapon		*gun;

public:

	HumanB(std::string str);
	~HumanB(void);

	void	setWeapon(Weapon &weap);
	void	attack(void);
};

#endif