#ifndef HUMAN_A_HPP
# define HUMAN_A_HPP

# include "Weapon.hpp"

class	HumanA
{
	std::string	name;
	Weapon		&gun;

public:

	HumanA(std::string str, Weapon &weap);
	~HumanA(void);

	void	attack(void);
};

#endif