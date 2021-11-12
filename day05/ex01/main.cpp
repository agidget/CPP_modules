#include "Bureaucrat.hpp"

int main()
{
	Bureaucrat	one("Vova", 1);
	Bureaucrat	two("Dima", 20);
	Bureaucrat	three("Igor", 100);

	Form	impPaper("A Big One");
	Form	justPaper("Some Form", 10, 5);
	Form	vainDoc("Useless", 130, 120);

	Form	impossible("Impossible", 160, 5);
	std::cout << impossible << std::endl;

	std::cout << one;
	std::cout << two;
	std::cout << three;

	std::cout << impPaper;
	std::cout << justPaper;
	std::cout << vainDoc;

	std::cout << "\n-------------------\n" << std::endl;

	one.signForm(impPaper);
	std::cout << impPaper;
	two.signForm(justPaper);
	std::cout << justPaper;
	three.signForm(vainDoc);
	std::cout << vainDoc;

	std::cout << "\n-------------------\n" << std::endl;

	justPaper.beSigned(one);
	std::cout << justPaper;
}