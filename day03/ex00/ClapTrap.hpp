#ifndef CLAP_TRAP_HPP
# define CLAP_TRAP_HPP

# include <iostream>

class	ClapTrap
{
	std::string		name;
	unsigned int	hitpoints;
	unsigned int	energy;
	unsigned int	attackDamage;

public:

	ClapTrap(void);
	ClapTrap(std::string str);
	~ClapTrap(void);
	ClapTrap(const ClapTrap &copy);
	ClapTrap & operator=(const ClapTrap &other);

	void	attack(std::string const & target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);
};

#endif