#ifndef WRONG_ANIMAL_HPP
# define WRONG_ANIMAL_HPP

# include <iostream>

class	WrongAnimal
{
protected:

	std::string	type;

public:

	WrongAnimal(void);
	~WrongAnimal(void);
	WrongAnimal(const WrongAnimal &copy);
	WrongAnimal & operator=(const WrongAnimal &other);

	std::string	getType(void) const;
	void		makeSound(void) const;
};

#endif