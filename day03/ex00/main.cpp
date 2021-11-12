#include "ClapTrap.hpp"

int	main()
{
	ClapTrap	warriorOne("WarriorOne");

	warriorOne.attack("Enemy");
	warriorOne.takeDamage(3);
	warriorOne.beRepaired(4);
}