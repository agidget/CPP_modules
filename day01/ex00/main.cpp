#include "Zombie.hpp"

int	main()
{
	Zombie	dead("Jinny");
	Zombie	*man;

	dead.announce();

	man = newZombie("Lenny");
	man->announce();

	randomChump("Kitty");
	
	delete man;
}