#ifndef FRAG_TRAP_HPP
# define FRAG_TRAP_HPP

# include "ClapTrap.hpp"

class	FragTrap : public virtual ClapTrap
{
public:

	FragTrap(void);
	FragTrap(std::string str);
	~FragTrap(void);
	FragTrap(const FragTrap &copy);
	FragTrap & operator=(const FragTrap &other);

	void	highFivesGuys(void);
};

#endif