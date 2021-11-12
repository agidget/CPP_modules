#include "Zombie.hpp"

Zombie*	zombieHorde(int N, std::string name)
{
	if (N <= 0 || N > 2147483647)
	{
		std::cout << "Error with the number, try another one" << std::endl;
		exit(EXIT_FAILURE);
	}

	Zombie*	family = new Zombie[N];

	for (int i = 0; i < N; i++)
		family[i].setName(name);

	return (family);
}