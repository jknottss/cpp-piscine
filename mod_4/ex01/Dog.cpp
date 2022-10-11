
#include "Dog.h"

Dog::Dog()
{
    _type = "Dog";
    std::cout << "call dog constructor" << std::endl;
    _brain = new Brain();

}

Dog::~Dog()
{
    delete _brain;
    std::cout << "call dog destructor" << std::endl;
}


void Dog::makeSound() const
{
    std::cout << "woof like a dog" << std::endl;
}

Dog::Dog(const Dog &src) : Animal(src)
{
        _type = src._type;
        _brain = new Brain(*src._brain);
}

Dog &Dog::operator=(const Dog &rhs)
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

