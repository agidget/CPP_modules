#include "ScavTrap.hpp"

int	main()
{
	ScavTrap	warriorTwo("WarriorTwo");

	warriorTwo.attack("newEnemy");
	warriorTwo.takeDamage(9);
	warriorTwo.beRepaired(40);
	warriorTwo.beRepaired(20);
	warriorTwo.beRepaired(5);
	warriorTwo.guardGate();
}