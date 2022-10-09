#include "ScavTrap.h"

ScavTrap::ScavTrap() : _gk(false)
{
	std::cout << "call default constructor for ScarTrap" << std::endl;
}

ScavTrap::ScavTrap(const std::string name) : _gk(false)
{
	_name = name;
	_hp = 100;
	_nrjp = 50;
	_damage = 20;
	std::cout << "ScavTrap call overload constructor for name: " << _name << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "call ScavTrap destructor for: " << _name << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &src)
{
	*this = src;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &rhs)
{
	if (this == &rhs)
		return *this;
	_name = rhs._name;
	_hp = rhs._hp;
	_damage = rhs._damage;
	_nrjp = rhs._nrjp;
	return *this;
}

void ScavTrap::attack(const std::string &target)
{
	if (check())
		return;
	_nrjp--;
	std::cout << "scavTrap "  << _name << " attack " << target << " causing " << _damage
			   <<  " points of damage! " << "energy left: " << _nrjp << std::endl;
}

void ScavTrap::guardGate()
{
	_gk = true;
	std::cout << _name << " go guard gate" << std::endl;
}

void ScavTrap::gkStatus() const
{
	if (_gk)
		std::cout << _name << " on a gate" << std::endl;
	else
		std::cout << _name << " not on a gate" << std::endl;
}