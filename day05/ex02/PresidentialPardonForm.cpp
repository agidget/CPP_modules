#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target) : 
	Form("PresidentialPardonForm", 72, 45, target)
{}

PresidentialPardonForm::~PresidentialPardonForm(void)
{}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &copy) :
	Form(copy.getName(), copy.getGradeToSign(), copy.getGradeToExecute(), copy.getTarget())
{}

PresidentialPardonForm & PresidentialPardonForm::operator=( const PresidentialPardonForm &other)
{
	this->Form::operator=(other);
	return (*this);
}

void	PresidentialPardonForm::act(void) const
{
	std::cout << "\033[1;32m" << getTarget();
	std::cout << " has been pardoned by Zafod Beeblebrox \033[0m" << std::endl;
}