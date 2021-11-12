#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include "Form.hpp"

class	Form;

class	Bureaucrat
{
	const std::string	name;
	unsigned int		grade;

public:

	Bureaucrat(std::string name = "Unknown", unsigned int grade = 150);
	~Bureaucrat(void);
	Bureaucrat(const Bureaucrat &copy);
	Bureaucrat & operator=(const Bureaucrat &other);

	class	GradeTooHighException: public std::exception
	{
	public:
		virtual	const char* what() const throw();
	};
	class	GradeTooLowException: public std::exception
	{
	public:
		virtual	const char* what() const throw();
	};

	std::string		getName(void) const;
	unsigned int	getGrade(void) const;
	void			incrementGrade(void);
	void			decrementGrade(void);

	void	signForm(Form &form);
	void	executeForm(Form const &form);
};

std::ostream & operator<<(std::ostream &out, Bureaucrat any);

#endif