#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class	Dog: public Animal
{
	Brain* dogBrain;

public:

	Dog(void);
	virtual ~Dog(void);
	Dog(const Dog &copy);
	Dog & operator=(const Dog &other);

	virtual void	makeSound(void) const;
	std::string		getDogIdea(int index);
	void			setDogIdea(std::string idea, int index);
};

#endif