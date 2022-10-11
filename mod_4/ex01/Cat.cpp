#include "Cat.h"

Cat::Cat()
{
    _type = "Cat";
    std::cout << "call cat constructor" << std::endl;
    _brain = new Brain();
}

Cat::~Cat()
{
    delete _brain;
    std::cout << "call cat destructor" << std::endl;
}

void Cat::makeSound() const
{
    std::cout << "meow meow ^_^" << std::endl;
}

Cat::Cat(const Cat &src) : Animal(src)
{
    _type = src._type;
    _brain = new Brain(*src._brain);
}

Cat &Cat::operator=(const Cat &rhs)
{
    if (this != &rhs)
    {
        Animal::operator=(rhs);
        if (_brain)
            delete _brain;
        _brain = new Brain(*rhs._brain);
        _type = rhs._type;
    }
    return *this;
}

