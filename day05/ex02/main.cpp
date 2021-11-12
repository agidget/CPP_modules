#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
	Bureaucrat	one("Vova", 1);
	Bureaucrat	two("Dima", 20);
	Bureaucrat	three("Igor", 140);
	
	ShrubberyCreationForm lol("LOL");
	RobotomyRequestForm lol2("lol");
	PresidentialPardonForm kek("kek");

	one.signForm(lol);
	one.executeForm(lol);

	three.executeForm(lol2);
	lol2.beSigned(two);
	three.executeForm(lol2);
	lol2.execute(two);

	two.signForm(kek);
	one.executeForm(kek);
}