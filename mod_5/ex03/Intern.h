
#ifndef INTERN_H
#define INTERN_H

#include "ShrubberyCreationForm.h"
#include "RobotomyRequestForm.h"
#include "PresidentialPardonForm.h"

class Intern {
public:
	Intern();
	Intern(Intern const &rhs);
	~Intern();

	Intern &operator=(Intern const &rhs);

	Form *makeForm(const std::string &formName, const std::string &target) const;

private:
	typedef struct s_list
	{
		std::string _name;
		Form *_type;
	}t_list;

};


#endif
