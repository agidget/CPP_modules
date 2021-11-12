#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target) : 
	Form("RobotomyRequestForm", 72, 45, target)
{}

RobotomyRequestForm::~RobotomyRequestForm(void)
{}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &copy) :
	Form(copy.getName(), copy.getGradeToSign(), copy.getGradeToExecute(), copy.getTarget())
{}

RobotomyRequestForm & RobotomyRequestForm::operator=( const RobotomyRequestForm &other)
{
	this->Form::operator=(other);
	return (*this);
}

void	RobotomyRequestForm::act(void) const
{
	int num;

	srand(time(NULL));
	num = rand() % 2;
	if (num)
	{
		std::cout << "\033[1;33mDzzz zzz ... zzz" << std::endl;
		std::cout << this->getTarget() << " was robotomized\033[0m" << std::endl;
	}
	else
		std::cout << "\033[1;31mFailure\033[0m" << std::endl;
}