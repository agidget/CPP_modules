#include "Karen.hpp"

int main(int argc, char **argv)
{
	Karen	lol;

	if (argc != 2)
	{
		std::cout << RED("Choose just one complaint") << std::endl;
		std::cout << std::endl;
		return (1);
	}
	lol.complain(argv[1]);
	return (0);
}