#include "DiamondTrap.hpp"

int	main()
{
	DiamondTrap	warrior("Warrior");

	warrior.attack("Enemy");
	warrior.takeDamage(40);
	warrior.beRepaired(80);
	warrior.beRepaired(60);
	warrior.beRepaired(5);
	warrior.whoAmI();
}