
#include "WrongAnimal.h"

WrongAnimal::WrongAnimal() : _type("WrongAnimal")
{
    std::cout << "call default WrongAnimal constructor" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "call default WrongAnimal destructor" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &src)
{
    *this = src;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &rhs)
{
    if (this == &rhs)
        return *this;
    _type = rhs._type;
    return *this;
}

void WrongAnimal::makeSound() const
{
    std::cout << "loud WrongAnimal sound" << std::endl;
}

std::string WrongAnimal::getType() const
{
    return _type;
}
