#include "easyfind.hpp"
#include <vector>

int	main()
{
	std::vector<int>	intVector(5);
	for (int i = 0; i < 5; i++)
		intVector[i] = i;
	try
	{
        easyFind(intVector, 4);
		easyFind(intVector, 8);
	}
	catch (std::exception &e)
	{
		std::cout << "\033[0;31mOccurence is not found\033[0m" << std::endl;
	}
}