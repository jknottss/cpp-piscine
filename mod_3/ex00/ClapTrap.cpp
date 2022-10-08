#include "ClapTrap.h"

ClapTrap::ClapTrap() : _hp(10), _nrjp(10), _demage(0)
{
    _name = "clapTrap";
    std::cout << "call default constructor" << std::endl;
}

ClapTrap::ClapTrap(std::string const name) : _hp(10), _nrjp(10), _demage(0) 
{
    _name = name;
    std::cout << "call overload constructor for name: " << _name << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &src)
{
    *this = src;
}

ClapTrap &ClapTrap:: operator=(ClapTrap const &rhs)
{
    if (this == &rhs)
        return *this;
    _name = rhs._name;
    _hp = rhs._hp;
    _nrjp = rhs._nrjp;
    _demage = rhs._demage;
    return *this;
}

ClapTrap::~ClapTrap()
{
    std::cout << "call destructor for: " << _name << std::endl;
}