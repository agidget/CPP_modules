#ifndef SHRUBBERY_CREATION_FORM_HPP
# define SHRUBBERY_CREATION_FORM_HPP

# include "Form.hpp"
# include <fstream>

class	ShrubberyCreationForm: public Form
{
public:

	ShrubberyCreationForm(std::string target);
	~ShrubberyCreationForm(void);
	ShrubberyCreationForm(const ShrubberyCreationForm &copy);
	ShrubberyCreationForm & operator=(const ShrubberyCreationForm &other);

	virtual void	act(void) const;
};

#endif