#include "AMateria.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"

int main()
{
	{
		Character*	cat = new Character("Cat");
		Character*	dog = new Character("Dog");
		ICharacter*	target = new Character("lol");

		AMateria*	ice = new Ice();
		AMateria*	cure = new Cure();

		cat->equip(ice);
		*dog = *cat;
		cat->equip(cure);

		cat->use(0, *target);
		cat->use(1, *target);
		dog->use(0, *target);

		delete cat;
		delete dog;
		delete target;
	}

	std::cout << "\n-------------------\n" << std::endl;

	{
		IMateriaSource* src = new MateriaSource();
		src->learnMateria(new Ice());
		src->learnMateria(new Cure());

		ICharacter* me = new Character("me");

		AMateria* tmp;
		tmp = src->createMateria("ice");
		me->equip(tmp);
		tmp = src->createMateria("cure");
		me->equip(tmp);

		ICharacter* bob = new Character("bob");
		me->use(0, *bob);
		me->use(1, *bob);

		delete bob;
		delete me;
		delete src;
	}

	// while (1);
}