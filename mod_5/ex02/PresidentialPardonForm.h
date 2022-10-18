
#ifndef PRESIDENTIALPARDONFORM_H
#define PRESIDENTIALPARDONFORM_H

#include "Form.h"
class PresidentialPardonForm : public Form {
public:
	PresidentialPardonForm(std::string target);
	PresidentialPardonForm(PresidentialPardonForm const &rhs);
	~PresidentialPardonForm();

	PresidentialPardonForm & operator=(PresidentialPardonForm const &rhs);
	void execute(Bureaucrat const &executor) const;
private:
	std::string _target;
	PresidentialPardonForm();
};


#endif
