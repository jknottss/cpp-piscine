
#ifndef FORM_H
#define FORM_H

#include <iostream>
#include <string>

#include "Bureaucrat.h"

class Bureaucrat;

class Form {
    public:
    Form(const std::string name, const int gradeToSign, const int gradeToExecute);
    Form(Form const &src);
    virtual ~Form();

    Form & operator=(Form const &rhs);

    const std::string &getName() const;
    bool getIsSigned() const;
    int getGradeToSign() const;
    int getGradeToExecute() const;
    void beSigned(Bureaucrat const &rhs);
    virtual void execute(Bureaucrat const &executor) const = 0;

    class GradeTooHighException : public std::exception
    {
        public:
        const char *what() const throw();
    };

    class GradeTooLowException : public std::exception
    {
        public:
        const char *what() const throw();
    };

    class CantExecuteForm : public std::exception
    {
        public:
        const char *what() const throw();
    };

    private:
    Form();
    const std::string _name;
    bool _isSigned;
    const int _gradeToSign;
    const int _gradeToExecute;

    static const int highestGrade = 1;
    static const int lowestGrade = 150;

    void checkGrade() const;
};

std::ostream & operator<<(std::ostream &os, Form const &rhs);

#endif
