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

int ClapTrap::check() 
{
    if (_nrjp < 1 || _hp < 1)
    {
        std::cout << _name << " don't have enough energy or hit points" << std::endl;
        return 1;  
    }
    return 0;
}

ClapTrap::~ClapTrap()
{
    std::cout << "call destructor for: " << _name << std::endl;
}
 
void ClapTrap::attack(const std::string &target)
{
    if(check())
     return;
    _nrjp--;
    std::cout << "ClapTrap " << _name << " attack " << target << " causing " << _demage <<  " points of damage!" << std::endl;
    
}

void ClapTrap::beRepaired(unsigned int amount) 
{
    if (check())
        return;
    _nrjp--;
    _hp += amount;
    std::cout << "ClapTrap " << _name << " restore hp on " << amount << ", total hp " << _hp << std::endl;
}

void ClapTrap::takeDemage(unsigned int amount)
{
    _hp-=amount;
    if (_hp < 0)
        _hp = 0;
}