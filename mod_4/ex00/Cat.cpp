#include "Cat.h"

Cat::Cat()
{
    _type = "Cat";
    std::cout << "call cat constructor" << std::endl;
}

Cat::~Cat()
{
    std::cout << "call cat destructor" << std::endl;
}

void Cat::makeSound() const
{
    std::cout << "meow meow ^_^" << std::endl;
}

Cat::Cat(const Cat &src) : Animal(src)
{
    *this = src;
}

Cat &Cat::operator=(const Cat &rhs)
{
    if (this == &rhs)
        return *this;
    _type = rhs._type;
    return *this;
}

