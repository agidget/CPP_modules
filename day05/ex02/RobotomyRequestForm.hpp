#ifndef ROBOTOMY_REQUEST_FORM_HPP
# define ROBOTOMY_REQUEST_FORM_HPP

# include "Form.hpp"
# include <ctime>

class	RobotomyRequestForm: public Form
{
public:

	RobotomyRequestForm(std::string target);
	~RobotomyRequestForm(void);
	RobotomyRequestForm(const RobotomyRequestForm &copy);
	RobotomyRequestForm & operator=(const RobotomyRequestForm &other);

	virtual void	act(void) const;
};

#endif