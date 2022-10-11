

#include "WrongCat.h"

WrongCat::WrongCat()
{
    _type = "WrongCat";
    std::cout << "call WrongCat constructor" << std::endl;
}

WrongCat::~WrongCat()
{
    std::cout << "call WrongCat destructor" << std::endl;
}

void WrongCat::makeSound() const
{
    std::cout << "I wanna work today!!" << std::endl;
}

WrongCat::WrongCat(const WrongCat &src) : WrongAnimal(src)
{
    *this = src;
}

WrongCat &WrongCat::operator=(const WrongCat &rhs)
{
    if (this == &rhs)
        return *this;
    _type = rhs._type;
    return *this;
}
