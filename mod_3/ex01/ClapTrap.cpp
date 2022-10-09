#include "ClapTrap.h"

ClapTrap::ClapTrap() : _hp(10), _nrjp(10), _damage(0)
{
    _name = "default name";
    std::cout << "ClapTrap call default constructor" << std::endl;
}

ClapTrap::ClapTrap(std::string const name) : _hp(10), _nrjp(10), _damage(0)
{
    _name = name;
    std::cout << "ClapTrap call overload constructor for name: " << _name << std::endl;
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
    _damage = rhs._damage;
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
    std::cout << "ClapTrap call destructor for: " << _name << std::endl;
}
 
void ClapTrap::attack(const std::string &target)
{
    if(check())
     return;
    _nrjp--;
    std::cout  << _name << " attack " << target << " causing " << _damage
		<<  " points of damage! " << "energy left: " << _nrjp << std::endl;
    
}

void ClapTrap::beRepaired(unsigned int amount) 
{
    if (check())
        return;
    _nrjp--;
    _hp += amount;
    std::cout  << _name << " restore hp on " << amount << ", total hp: " << _hp
		<< " energy left: " << _nrjp << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    _hp-=amount;
    if (_hp < 0)
		_hp = 0;
	std::cout << _name << " taken " << amount << " damage, total hp: " << _hp << std::endl;
}

void ClapTrap::setDmg(unsigned int amount)
{
	_damage = amount;
}

int ClapTrap::getDmg()
{
	return _damage;
}