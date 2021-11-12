#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int	main()
{
	// ScavTrap	warriorTwo("WarriorTwo");

	// warriorTwo.attack("newEnemy");
	// warriorTwo.takeDamage(9);
	// warriorTwo.beRepaired(40);
	// warriorTwo.beRepaired(20);
	// warriorTwo.beRepaired(5);
	// warriorTwo.guardGate();

	// std::cout << "------------------" << std::endl;

	FragTrap	warriorThree("WarriorThree");

	warriorThree.attack("Enemy");
	warriorThree.takeDamage(40);
	warriorThree.beRepaired(80);
	warriorThree.beRepaired(60);
	warriorThree.beRepaired(5);
	warriorThree.highFivesGuys();
}