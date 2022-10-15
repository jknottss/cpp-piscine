#include "Bureaucrat.h"

int main()
{
    try
    {
        Form f1("Test form #1", 0, 1);
        std::cout << f1 << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }

    try
    {
        Bureaucrat jack = Bureaucrat("Jack", 23);
        Form f2("Test form #2", 22, 22);

        std::cout << jack << std::endl;
        std::cout << f2 << std::endl;
        jack.signForm(f2);
    }
    catch (const std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    return 0;
}
