#ifndef INTERN_HPP
# define INTERN_HPP

# include "Form.hpp"
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"

class	Form;

class	Intern
{
public:

	Intern(void);
	virtual ~Intern(void);
	Intern(const Intern &copy);
	Intern & operator=(const Intern &other);

	int		returnIndex(std::string forms);
	Form*	makeForm(std::string form, std::string target);
};

#endif