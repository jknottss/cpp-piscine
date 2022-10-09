#include "FragTrap.h"

FragTrap::FragTrap()
{
	std::cout << "call default constructor for FragTrap" << std::endl;
}

FragTrap::FragTrap(const std::string &name)
{
	_name = name;
	_hp = 100;
	_nrjp = 100;
	_damage = 30;
	std::cout << "FragTrap call overload constructor for name: " << _name << std::endl;
}

FragTrap::~FragTrap()
{
	_hp = 100;
	_nrjp = 100;
	_damage = 30;
	std::cout << "call FragTrap destructor for: " << _name << std::endl;
}

FragTrap::FragTrap(const FragTrap &src)
{
	*this = src;
}

FragTrap &FragTrap::operator=(const FragTrap &rhs)
{
	if (this == &rhs)
		return *this;
	_name = rhs._name;
	_hp = rhs._hp;
	_nrjp = rhs._nrjp;
	_damage = rhs._damage;
	return *this;
}

void FragTrap::highFivesGuys()
{
	std::cout << "high five from " << _name << std::endl;
}

void FragTrap::attack(const std::string &target)
{
	if (check())
		return;
	_nrjp--;
	std::cout << "fragTrap "  << _name << " attack " << target << " causing " << _damage
			  <<  " points of damage! " << "energy left: " << _nrjp << std::endl;
}