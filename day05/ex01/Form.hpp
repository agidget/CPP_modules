#ifndef FORM_HPP
# define FORM_HPP

# include "Bureaucrat.hpp"

class	Bureaucrat;

class	Form
{
	const std::string	name;
	bool				ifSigned;
	const unsigned int	gradeToSign;
	const unsigned int	gradeToExecute;

public:

	Form(std::string name = "Unknown", unsigned int gradeToSign = 1,
		unsigned int gradeToExecute = 1);
	~Form(void);
	Form(const Form &copy);
	Form & operator=(const Form &other);

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

    unsigned int	checkGrade(unsigned int grade);

	std::string		getName(void);
	bool			getIfSigned(void);
	unsigned int	getGradeToSign(void);
	unsigned int	getGradeToExecute(void);

	std::string	printIfSigned(void);
	void		beSigned(Bureaucrat &smb);
};

std::ostream & operator<<(std::ostream &out, Form any);

#endif