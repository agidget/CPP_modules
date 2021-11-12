#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string name, unsigned int grade) : name(name)
{
	try
	{
		if (grade > 150)
			throw Bureaucrat::GradeTooLowException();
		if (grade < 1)
			throw Bureaucrat::GradeTooHighException();
		this->grade = grade;
	}
	catch(std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}
}

Bureaucrat::~Bureaucrat(void)
{}

Bureaucrat::Bureaucrat(const Bureaucrat &copy) : name(copy.name)
{
	this->grade = copy.grade;
}

Bureaucrat & Bureaucrat::operator=(const Bureaucrat &other)
{
	this->grade = other.grade;

	return (*this);
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("\033[0;31mGrade is too high\033[0m");
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("\033[0;31mGrade is too low\033[0m");
}

std::string	Bureaucrat::getName(void)
{
	return (this->name);
}

unsigned int	Bureaucrat::getGrade(void)
{
	return (this->grade);
}

void	Bureaucrat::incrementGrade(void)
{
	try
	{
		if (grade - 1 < 1)
			throw Bureaucrat::GradeTooHighException();
		this->grade--;
	}
	catch (std::exception & e)
	{
		std::cerr << "\033[0;31mNot possible to increment a grade\033[0m" << std::endl;
		std::cerr << e.what() << std::endl;
	}
}

void	Bureaucrat::decrementGrade(void)
{
	try
	{
		if (grade + 1 > 150)
			throw Bureaucrat::GradeTooLowException();
		this->grade++;
	}
	catch (std::exception & e)
	{
		std::cerr << "\033[0;31mNot possible to decrement a grade\033[0m" << std::endl;
		std::cerr << e.what() << std::endl;
	}
}

std::ostream & operator<<(std::ostream &out, Bureaucrat any)
{
	out << any.getName() << ", bureaucrat grade " << any.getGrade() << std::endl;

	return (out);
}

void	Bureaucrat::signForm(Form &form)
{
	form.beSigned(*this);
}