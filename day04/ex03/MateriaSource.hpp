#ifndef MATERIA_SOURCE_HPP
# define MATERIA_SOURCE_HPP

# include "Character.hpp"
# include "IMateriaSource.hpp"

class	MateriaSource: public IMateriaSource
{
private:
	
	AMateria*	stock[4];

public:

	MateriaSource(void);
	~MateriaSource(void);
	MateriaSource(const MateriaSource &copy);
	MateriaSource & operator=(const MateriaSource &other);

	virtual void		learnMateria(AMateria* mat);
	virtual AMateria*	createMateria(std::string const & type);
};

#endif