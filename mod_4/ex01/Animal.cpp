
#include "Animal.h"

Animal::Animal() : _type("Animal")
{
    std::cout << "call default animal constructor" << std::endl;
}

Animal::~Animal()
{
    std::cout << "call default animal destructor" << std::endl;
}

Animal::Animal(const Animal &src)
{
    *this = src;
}

Animal &Animal::operator=(const Animal &rhs)
{
    if (this == &rhs)
        return *this;
    _type = rhs._type;
    return *this;
}

void Animal::makeSound() const
{
    std::cout << "loud animal sound" << std::endl;
}

std::string Animal::getType() const
{
    return _type;
}


