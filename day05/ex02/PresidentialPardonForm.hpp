#ifndef PRESIDENTIAL_PARDON_FORM_HPP
# define PRESIDENTIAL_PARDON_FORM_HPP

#include "Form.hpp"

class	PresidentialPardonForm: public Form
{
public:

	PresidentialPardonForm(std::string target);
	~PresidentialPardonForm(void);
	PresidentialPardonForm(const PresidentialPardonForm &copy);
	PresidentialPardonForm & operator=(const PresidentialPardonForm &other);

	virtual void	act(void) const;
};

#endif