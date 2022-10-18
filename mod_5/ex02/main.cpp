#include "Bureaucrat.h"
#include "ShrubberyCreationForm.h"
#include "RobotomyRequestForm.h"
#include "PresidentialPardonForm.h"
int main()
{
    Form *form;
	Form *form2;
	Form *form3;

    Bureaucrat jack = Bureaucrat("Jack", 1);
    try
    {
        form = new ShrubberyCreationForm("tree");
        jack.signForm(*form);
        jack.executeForm(*form);
		delete form;
    }
    catch (const std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
	try
	{
		form2 = new RobotomyRequestForm("Bender");
		jack.signForm(*form2);
		jack.executeForm(*form2);
		delete form2;
	}
	catch (const std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		form3 = new PresidentialPardonForm("Lila");
		jack.signForm(*form3);
		jack.executeForm(*form3);
		delete form3;
	}
	catch (const std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

    return 0;
}
