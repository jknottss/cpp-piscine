#include "RobotomyRequestForm.h"

RobotomyRequestForm::RobotomyRequestForm()
 : Form::Form("RobotomyRequestForm", 72, 45), _target("")
{
}

RobotomyRequestForm::RobotomyRequestForm(std::string target)
 : Form::Form("RobotomyRequestForm", 72, 45), _target(target)
{
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &rhs)
	: Form::Form(rhs), _target(rhs._target)
{
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &rhs)
{
	if (this != &rhs)
	{
		Form::operator=(rhs);
		_target = rhs._target;
	}
	return *this;
}

void RobotomyRequestForm::execute(const Bureaucrat &executor) const
{
	if(getIsSigned() && (executor.getGrade() <= getGradeToExecute()))
	{
		std::cout << "some drilling noises..." << std::endl;
		srand(time(NULL));
		if (std::rand() % 2)
			std::cout << _target << " has been robotomized successfully" << std::endl;
		else
			std::cout << _target << " robotomy failed" << std::endl;
	}
	else
	{
		std::cerr << executor.getName() << " ";
		throw Form::CantExecuteForm();
	}
}