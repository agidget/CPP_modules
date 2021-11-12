#include "Karen.hpp"

Karen::Karen(void)
{
	this->debugPtr = &Karen::debug;
	this->infoPtr = &Karen::info;
	this->warningPtr = &Karen::warning;
	this->errorPtr = &Karen::error;
}

Karen::~Karen(void)
{}

void	Karen::debug(void)
{
	std::cout << RED("[ DEBUG ]") << std::endl;
	std::cout << "No sexism in 42 community, please"  << std::endl;
}

void	Karen::info(void)
{
	std::cout << RED("[ INFO ]") << std::endl;
	std::cout << "Are you sure you want to contunie like that?"  << std::endl;
}

void	Karen::warning(void)
{
	std::cout << RED("[ WARNING ]") << std::endl;
	std::cout << "I warned you, please, stop"  << std::endl;
}

void	Karen::error(void)
{
	std::cout << RED("[ ERROR ]") << std::endl;
	std::cout << "Rules are broken, goodbye"  << std::endl;
}

int		Karen::returnIndex(std::string level)
{
	std::string lvl[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	int i = 0;
	while (level != lvl[i] && i < 4)
		i++;
	return (i);
}

void	Karen::complain(std::string level)
{
	switch(returnIndex(level))
	{
		case 0:
			(this->*debugPtr)();
			break ;
		case 1:
			(this->*infoPtr)();
			break ;
		case 2:
			(this->*warningPtr)();
			break ;
		case 3:
			(this->*errorPtr)();
			break ;
		default:
			std::cout << RED("[ UNKNOWN LEVEL ]") << std::endl;
			break ;
	}

}
