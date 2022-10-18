
#ifndef ROBOTOMYREQUESTFORM_H
#define ROBOTOMYREQUESTFORM_H

#include "Form.h"
#include <cstdlib>
#include <ctime>
class RobotomyRequestForm : public Form {

public:
	RobotomyRequestForm(std::string target);
	RobotomyRequestForm(RobotomyRequestForm const &rhs);
	~RobotomyRequestForm();

	RobotomyRequestForm & operator=(RobotomyRequestForm const &rhs);

	void execute(Bureaucrat const &executor) const;

private:
	std::string _target;
	RobotomyRequestForm();
};


#endif
