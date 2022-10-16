#ifndef SHRUBBERYCREATIONFORM_H
#define SHRUBBERYCREATIONFORM_H

#include "fstream"
#include "Form.h"

class ShrubberyCreationForm : public Form {
private:
    ShrubberyCreationForm();
    std::string _target;
public:
    ShrubberyCreationForm(const std::string target);
    ShrubberyCreationForm(ShrubberyCreationForm const &rhs);
    ~ShrubberyCreationForm();

    ShrubberyCreationForm &operator=(ShrubberyCreationForm const &rhs);

    void execute(Bureaucrat const &executor) const;
};


#endif