#ifndef BUREAUCRAT_H
#define BUREAUCRAT_H

#include <iostream>
#include <string>

#include "Form.h"

class Form;

class Bureaucrat {
public:
	Bureaucrat(const std::string name, const int grade);
	Bureaucrat(Bureaucrat const &src);
	~Bureaucrat();
	Bureaucrat & operator=(Bureaucrat const &rhs);

	const std::string &getName() const;
	const int &getGrade() const;

	void incGrade(const int n);
	void decGrade(const int n);
    void signForm(Form &form) const;

class GradeTooHighException : public std::exception {
public:
	const char *what() const throw();
};

class GradeTooLowException : public std::exception {
public:
	const char *what() const throw();
};

private:
	Bureaucrat();
	const std::string _name;
	int _grade;

	static const int lowestGrade = 150;
	static const int highestGrade = 1;
	void checkGrade() const;

};

std::ostream &operator<<(std::ostream &os, Bureaucrat const &rhs);

#endif
