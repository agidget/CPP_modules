#include "Array.hpp"

int	main()
{
	Array<int>		intArr(10);
	Array<double>	doubleArr(10);

	std::cout << "Int Arr size : " << intArr.size() << std::endl;
	std::cout << "Double Arr size : " << doubleArr.size() << std::endl;

	for (int i = 0; i < 10; i++)
	{
		intArr[i] = i;
		doubleArr[i] = i + 0.5;
	}

	Array<int>		intArr2(5);
	intArr2 = intArr;
	std::cout << "\n2nd Int array:" << std::endl;
	for (int i = 0; i < (int)intArr2.size(); i++)
		std::cout << intArr2[i] << std::endl;

	Array<double>	doubleArr2(doubleArr);
	std::cout << "\n2nd Double array:" << std::endl;
	for (int i = 0; i < (int)doubleArr2.size(); i++)
		std::cout << doubleArr2[i] << std::endl;

	std::cout << "\nInt array:" << std::endl;
	for (int i = 0; i < (int)intArr.size(); i++)
		std::cout << intArr[i] << std::endl;

	std::cout << "\nDouble array:" << std::endl;
	for (int i = 0; i < (int)doubleArr.size(); i++)
		std::cout << doubleArr[i] << std::endl;

	std::cout << "\n-----------\n";

	std::cout << "Original Double Array\n";
	std::cout << doubleArr[0] << std::endl;
	std::cout << doubleArr[15] << std::endl;
	std::cout << doubleArr[9] << std::endl;

	// while (1);
}