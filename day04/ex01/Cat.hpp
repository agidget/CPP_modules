#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class	Cat: public Animal
{
	Brain* catBrain;

public:

	Cat(void);
	virtual ~Cat(void);
	Cat(const Cat &copy);
	Cat & operator=(const Cat &other);

	virtual void	makeSound(void) const;
	std::string		getCatIdea(int index);
	void			setCatIdea(std::string idea, int index); 
};

#endif