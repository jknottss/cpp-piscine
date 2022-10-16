#include "Bureaucrat.h"
#include "ShrubberyCreationForm.h"

int main()
{
    Form *form;
    Bureaucrat jack = Bureaucrat("Jack", 1);
    try
    {
        form = new ShrubberyCreationForm("tree");
        jack.signForm(*form);
        jack.executeForm(*form);
    }
    catch (const std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }

    return 0;
}
