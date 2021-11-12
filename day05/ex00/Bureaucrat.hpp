#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>

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

	std::string	    getName(void);
	unsigned int    getGrade(void);
	void		    incrementGrade(void);
	void		    decrementGrade(void);
};

std::ostream & operator<<(std::ostream &out, Bureaucrat any);

#endif