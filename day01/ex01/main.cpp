#include "Zombie.hpp"

int main()
{
	// Zombie	*kek = zombieHorde(-45, "Kek");
	// delete [] kek;

	Zombie	*lol = zombieHorde(10, "Name");

	for (int i = 0; i < 10; i++)
		lol[i].announce();

	delete [] lol;
}