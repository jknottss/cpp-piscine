#include "Bureaucrat.h"
#include "ShrubberyCreationForm.h"
#include "RobotomyRequestForm.h"
#include "PresidentialPardonForm.h"
#include "Intern.h"
int main()
{
	Intern intern;
	Bureaucrat jack("Jack", 1);
	Form *form = NULL;

	form = intern.makeForm("presidential pardon", "Peter");
	delete(form);

	form = intern.makeForm("robotomy request", "Marvin");
	delete(form);

	form = intern.makeForm("best form in the world", "test target");
	delete(form);

	form = intern.makeForm("shrubbery creation", "tree");
	jack.signForm(*form);
	jack.executeForm(*form);
	delete(form);
    return 0;
}
