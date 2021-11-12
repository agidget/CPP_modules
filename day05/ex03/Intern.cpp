#include "Intern.hpp"

Intern::Intern(void)
{}

Intern::~Intern(void)
{}
Intern::Intern(const Intern &copy)
{
	*this = copy;
}

Intern & Intern::operator=(const Intern &other)
{
	if (this == &other)
		return (*this);
	return (*this);
}

int	Intern::returnIndex(std::string form)
{
	std::string	forms[3] = {"shrubbery creation", "robotomy request",
							"presidential pardon"};
	
	int i = 0;
	while (form != forms[i] && i < 3)
		i++;
	return (i);
}

Form*	Intern::makeForm(std::string form, std::string target)
{
	Form*	ptr;

	switch(returnIndex(form))
	{
		case 0:
			ptr = new ShrubberyCreationForm(target);
			break ;
		case 1:
			ptr = new RobotomyRequestForm(target);
			break ;
		case 2:
			ptr = new PresidentialPardonForm(target);
			break ;
		default:
			std::cout << "\033[1;31mForm " << form << " is unknown\033[0m" << std::endl;
			ptr = NULL;
			break;
	}
	if (ptr)
		std::cout << "Intern creates " << form << std::endl;
	return (ptr);
}