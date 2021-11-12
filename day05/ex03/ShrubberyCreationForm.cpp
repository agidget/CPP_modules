#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : 
	Form("ShrubberyCreationForm", 145, 137, target)
{}

ShrubberyCreationForm::~ShrubberyCreationForm(void)
{}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &copy) :
	Form(copy.getName(), copy.getGradeToSign(), copy.getGradeToExecute(), copy.getTarget())
{}

ShrubberyCreationForm & ShrubberyCreationForm::operator=( const ShrubberyCreationForm &other)
{
	this->Form::operator=(other);
	return (*this);
}

void	ShrubberyCreationForm::act(void) const
{
	std::ofstream	myfile(this->getTarget() + "_shrubbery", std::ofstream::out);

	if (myfile.good())
	{
		myfile << "        __ _.--..--._ _\n";
		myfile << "     .-' _/   _/\\_   \\_'-.\n";
		myfile << "    |__ /   _/\\__/\\_   \\__|\n";
		myfile << "      |___/\\_\\__/  \\___|\n";
		myfile << "             \\__/\n";
		myfile << "             \\__/\n";
		myfile << "              \\__/\n";
		myfile << "               \\__/\n";
		myfile << "            ____\\__/___\n";
		myfile << "       . - '             ' -.\n";
		myfile << "      /                      \\\n";
		myfile << "~~~~~~~  ~~~~~ ~~~~~  ~~~ ~~~  ~~~~~";
		myfile.close();
	}
	else
	{
		std::cout << "Unable to write in the file" << std::endl;
	}
}