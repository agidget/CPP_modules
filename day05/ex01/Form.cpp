#include "Form.hpp"

unsigned int	Form::checkGrade(unsigned int grade)
{
	try
	{
		if (grade > 150)
		{
			grade = 1;
			throw Form::GradeTooLowException();
		}
		if (grade < 1)
		{
			grade = 1;
			throw Form::GradeTooHighException();
		}
	}
	catch (std::exception & e)
	{
		std::cerr << "\033[0;31mNot possible to create the form, ";
		std::cerr << e.what() << std::endl;
		std::cerr << "\033[0;31mGrade is changed to the biggest one\033[0m\n";
	}
	return (grade);
}

Form::Form(std::string name, unsigned int gradeToSign,
		unsigned int gradeToExecute): 
			name(name), gradeToSign(checkGrade(gradeToSign)), gradeToExecute(checkGrade(gradeToExecute))
{
	this->ifSigned = false;
}

Form::~Form(void)
{}

Form::Form(const Form &copy):
	name(copy.name), gradeToSign(copy.gradeToSign), gradeToExecute(copy.gradeToExecute)
{
	this->ifSigned = copy.ifSigned;
}

Form & Form::operator=(const Form &other)
{
	this->ifSigned = other.ifSigned;

	return (*this);
}

const char* Form::GradeTooHighException::what() const throw()
{
	return ("\033[0;31mGrade is too high\033[0m");
}

const char* Form::GradeTooLowException::what() const throw()
{
	return ("\033[0;31mGrade is too low\033[0m");
}

std::string	Form::getName(void)
{
	return (this->name);
}

bool	Form::getIfSigned(void)
{
	return (this->ifSigned);
}

unsigned int	Form::getGradeToSign(void)
{
	return (this->gradeToSign);
}

unsigned int	Form::getGradeToExecute(void)
{
	return (this->gradeToExecute);
}

void	Form::beSigned(Bureaucrat &smb)
{
	try
	{
		if ((smb.getGrade() <= this->getGradeToSign()) && !ifSigned)
		{
			ifSigned = true;
			std::cout << smb.getName() << " signs " << this->name << std::endl;
		}
		else if ((smb.getGrade() <= this->getGradeToSign()) && ifSigned)
			std::cerr << "Form is already signed" << std::endl;
		else
			throw Form::GradeTooLowException();
	}
	catch (std::exception & e)
	{
		std::cerr << "\033[0;31mNot possible to sign the form, \033[0m";
		std::cerr << e.what() << std::endl;
	}
}

std::string	Form::printIfSigned(void)
{
	std::string	str;

	if (ifSigned)
		str =  "Form " + this->getName() + " is signed, ";
	else
		str =  "Form " + this->getName() + " is unsigned, ";
	return (str);
}

std::ostream & operator<<(std::ostream &out, Form any)
{
	out << any.printIfSigned() << "need " << any.getGradeToSign()
		<< " grade to be signed and " << any.getGradeToExecute()
		<< " grade to be executed" << std::endl;
	
	return (out);
}