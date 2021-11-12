#include "Bureaucrat.hpp"

int main()
{
	Bureaucrat	one("Vova", 1);
	Bureaucrat	two("Ken", 150);
	Bureaucrat	wrong1("Lol", 0);
	Bureaucrat	wrong2("Kek", 160);

	std::cout << one;
	std::cout << two;

	std::cout << "\n-------------------\n" << std::endl;

	one.incrementGrade();
	one.decrementGrade();
	std::cout << one;

	std::cout << "\n-------------------\n" << std::endl;

	two.decrementGrade();
	two.incrementGrade();
	std::cout << two;
}