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
	std::string         target;

public:

	Form(std::string name = "Unknown", unsigned int gradeToSign = 1,
		unsigned int gradeToExecute = 1, std::string target = "");
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

	std::string		getName(void) const;
	bool			getIfSigned(void);
	unsigned int	getGradeToSign(void) const;
	unsigned int	getGradeToExecute(void) const;
	std::string		getTarget(void) const;

	std::string		printIfSigned(void);
	void			beSigned(Bureaucrat &smb);

	virtual void	act(void) const;
	void			execute(Bureaucrat const & executor) const;

	class	FormNotSigned: public std::exception
	{
	public:
		virtual	const char* what() const throw();
	};
};

std::ostream & operator<<(std::ostream &out, Form any);

#endif