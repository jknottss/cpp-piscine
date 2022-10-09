#include "DiamondTrap.h"

DiamondTrap::DiamondTrap()
{
	std::cout << "DiamondTrap call default constructor" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name)
{
	_name = name;
	ClapTrap::_name = name + "_clap_name";
	_hp = FragTrap::_hp;
	_nrjp = ScavTrap::_nrjp;
	_damage = FragTrap::_damage;
	std::cout << "Diamond call overload constructor for name: " << _name << std::endl;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap call destructor for: " << _name << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &src)
{
	*this = src;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &rhs)
{
	if (this == &rhs)
		return *this;
	_name = rhs._name;
	_hp = rhs._hp;
	_nrjp = rhs._nrjp;
	_damage = rhs._damage;
	return *this;
}

void DiamondTrap::attack(const std::string &target)
{
	ScavTrap::attack(target);
}

void DiamondTrap::whoAmI()
{
	std::cout << "Name: " << _name << ", clap name: " << ClapTrap::_name << std::endl;
}

