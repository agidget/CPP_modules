#ifndef SCAV_TRAP_HPP
# define SCAV_TRAP_HPP

# include "ClapTrap.hpp"

class	ScavTrap : public virtual ClapTrap
{
public:

	ScavTrap(void);
	ScavTrap(std::string str);
	~ScavTrap(void);
	ScavTrap(const ScavTrap &copy);
	ScavTrap & operator=(const ScavTrap &other);

	void	attack(std::string const & target);
	void	guardGate(void);
};

#endif