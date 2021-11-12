#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int	main()
{
	const Animal*	meta = new Animal();
	const Animal*	j = new Dog();
	const Animal*	i = new Cat();

	std::cout << meta->getType() << " " << std::endl;
	meta->makeSound();
	std::cout << j->getType() << " " << std::endl;
	j->makeSound();
	std::cout << i->getType() << " " << std::endl;
	i->makeSound();

	delete meta;
	delete j;
	delete i;

	std::cout << "\n-------------------\n" << std::endl;

	const WrongAnimal*	k = new WrongAnimal();
	const WrongAnimal*	l = new WrongCat();
	const WrongCat*		m = new WrongCat();

	std::cout << k->getType() << " " << std::endl;
	k->makeSound();
	std::cout << l->getType() << " " << std::endl;
	l->makeSound();
	std::cout << m->getType() << " " << std::endl;
	m->makeSound();

	delete k;
	delete l;
	delete m;
}