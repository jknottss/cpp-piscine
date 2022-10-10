
#include "Dog.h"

Dog::Dog()
{
    _type = "Dog";
    std::cout << "call dog constructor" << std::endl;
}

Dog::~Dog()
{
    std::cout << "call dog destructor" << std::endl;
}


void Dog::makeSound() const
{
    std::cout << "woof like a dog" << std::endl;
}
Dog::Dog(const Dog &src) : Animal(src)
{
    *this = src;
}

Dog &Dog::operator=(const Dog &rhs)
{
    if (this == &rhs)
        return *this;
    _type = rhs._type;
    return *this;
}

