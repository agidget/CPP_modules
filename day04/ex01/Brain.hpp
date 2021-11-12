#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>
#include <string>

class	Brain
{
protected:

	std::string	ideas[100];

public:

	Brain(void);
	~Brain(void);
	Brain(const Brain &copy);
	Brain & operator=(const Brain &other);

	std::string	getIdea(int index);
	void		setIdea(std::string idea, int index);   
};

#endif