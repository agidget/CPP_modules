#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"

class	Dog: public Animal
{
public:

	Dog(void);
	virtual ~Dog(void);
	Dog(const Dog &copy);
	Dog & operator=(const Dog &other);

	virtual void	makeSound(void) const;
};

#endif