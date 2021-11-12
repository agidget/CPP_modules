#include "Dog.hpp"
#include "Cat.hpp"

#define NUM 2

int	main()
{
	Animal* pets[NUM];
	for (int i = 0; i < NUM; i++)
	{
		if (i < NUM / 2)
			pets[i] = new Dog();
		else
			pets[i] = new Cat();
	}

	for (int i = 0; i < NUM; i++)
		delete pets[i];

	std::cout << "\n-------------------\n" << std::endl;

	Cat* boris = new Cat();

	for (int i = 0; i < 100; i++)
		boris->setCatIdea("Wow", i);
	Cat* sharik = new Cat();
	*sharik = *boris;
	std::cout << "boris's idea " << boris->getCatIdea(78) << std::endl;
	std::cout << "sharik's idea " << sharik->getCatIdea(78) << std::endl;
	boris->setCatIdea("Pam pam", 78);
	std::cout << "new boris's idea " << boris->getCatIdea(78) << std::endl;
	std::cout << "sharik's idea " << sharik->getCatIdea(78) << std::endl;

	delete boris;
	delete sharik;

	std::cout << "\n-------------------\n" << std::endl;

	Cat bor;

	for (int i = 0; i < 100; i++)
		bor.setCatIdea("Wow", i);
	Cat sh(bor);
	std::cout << "bor's idea " << bor.getCatIdea(78) << std::endl;
	std::cout << "sh's idea " << sh.getCatIdea(78) << std::endl;
	bor.setCatIdea("Pam pam", 78);
	std::cout << "new bor's idea " << bor.getCatIdea(78) << std::endl;
	std::cout << "sh's idea " << sh.getCatIdea(78) << std::endl;
}