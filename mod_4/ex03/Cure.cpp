
#include "Cure.h"

Cure::Cure() : AMateria("cure")
{

}

Cure::Cure(Cure const &src) : AMateria("cure")
{
    _type = src._type;
}

Cure::~Cure()
{

}

Cure &Cure::operator=(const Cure &rhs)
{
    if (this == &rhs)
        return *this;
    _type = rhs._type;
    return *this;
}

AMateria *Cure::clone() const
{
    return (new Cure(*this));
}

void Cure::use(ICharacter &target)
{
    std::cout << "* heal " << target.getName() << "'s wounds *" << std::endl;
}