#include "Zombie.hpp"

Zombie::Zombie(void)
{
}

Zombie::~Zombie(void)
{
	std::cout << name << " zombi died \U0001F480" << std::endl;
}

void	Zombie::setName(std::string str)
{
	this->name = str;
}

void	Zombie::announce(void)
{
	std::cout << name << " ";
	std::cout << "\033[1;31mBraiiiiiiinnnzzzZ...\033[0m" << std::endl;
}