#include "Ice.h"

Ice::Ice() : AMateria("ice")
{

}

Ice::Ice(const Ice &src) : AMateria("ice")
{
    _type = src._type;
}

Ice &Ice::operator=(const Ice &rhs)
{
    if (this == &rhs)
        return *this;
    _type = rhs._type;
    return *this;
}

Ice::~Ice()
{

}

AMateria *Ice::clone() const
{
    return (new Ice(*this));
}

void Ice::use(ICharacter &target)
{
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}