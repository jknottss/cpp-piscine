
#include "PresidentialPardonForm.h"

PresidentialPardonForm::PresidentialPardonForm()
 : Form::Form("PresidentialPardonForm", 25, 5), _target("")
{
}

PresidentialPardonForm::PresidentialPardonForm(std::string target)
 : Form::Form("PresidentialPardonForm", 25, 5), _target(target)
{
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &rhs)
 : Form::Form(rhs), _target(rhs._target)
{
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &rhs)
{
	if (this != &rhs)
	{
		Form::operator=(rhs);
		_target = rhs._target;
	}
	return *this;
}
PresidentialPardonForm::~PresidentialPardonForm()
{
}

void PresidentialPardonForm::execute(const Bureaucrat &executor) const
{
	if (getIsSigned() && (executor.getGrade() <= getGradeToExecute()))
	{
		std::cout << _target << " has been pardoned by Zaphod Beeblebrox" << std::endl;
	}
	else
	{
		std::cerr << executor.getName() << " ";
		throw Form::CantExecuteForm();
	}
}