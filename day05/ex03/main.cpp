#include "Bureaucrat.hpp"
#include "Intern.hpp"

int main()
{
	Intern someRandomIntern;

	Form*	rrf;
	Form*	rrf1;
	Form*	rrf2;
	Form*	rrf3;

	rrf = someRandomIntern.makeForm("shrubbery creation", "Bender");
	rrf1 = someRandomIntern.makeForm("robotomy request", "Bender");
	rrf2 = someRandomIntern.makeForm("lolol", "Bender");
	rrf3 = someRandomIntern.makeForm("presidential pardon", "Bender");

	delete rrf;
	delete rrf1;
	delete rrf2;
	delete rrf3;
}