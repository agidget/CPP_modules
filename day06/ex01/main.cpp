#include "Data.hpp"

uintptr_t	serialize(Data* ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data*	deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data*>(raw));
}

int main()
{
	Data*	oneData = new Data;
	oneData->num = 1;
	oneData->str = "One";

	uintptr_t	myCast = serialize(oneData);
	Data*		twoData = deserialize(myCast);

	std::cout << "Original Data: " << std::endl;
	std::cout << "Num: " << oneData->num << ", Str: ";
	std::cout << oneData->str << std::endl;
	std::cout << "Address: " << oneData << std::endl;

	std::cout << "\nData after: " << std::endl;
	std::cout << "Num: " << twoData->num << ", Str: ";
	std::cout << twoData->str << std::endl;
	std::cout << "Address: " << twoData << std::endl;

	delete oneData;
}