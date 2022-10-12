
#include "AMateria.h"

AMateria::AMateria(const std::string &type) : _type(type)
{
}

const std::string &AMateria::getType() const
{
    return (this->_type);
}