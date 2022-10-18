
#include "Intern.h"

Intern::Intern()
{
}

Intern::Intern(Intern const &rhs)
{
	*this = rhs;
}

Intern::~Intern()
{
}

Intern &Intern::operator=(const Intern &rhs)
{
	(void) rhs;
	return *this;
}

Form *Intern::makeForm(const std::string &formName, const std::string &target) const
{
	Form *res = NULL;
	t_list f[] = {
			{"presidential pardon", new PresidentialPardonForm(target)},
			{"robotomy request", new RobotomyRequestForm(target)},
			{"shrubbery creation", new ShrubberyCreationForm(target)},
			{"", NULL}};
	for (int i = 0; f[i]._type != NULL; i++)
	{
		if (f[i]._name == formName)
			res = f[i]._type;
		else
			delete f[i]._type;
	}
	if (res == NULL)
		std::cout << "unexpected form name" << std::endl;
	else
		std::cout << "Intern creates " << formName << std::endl;
	return res;
}
