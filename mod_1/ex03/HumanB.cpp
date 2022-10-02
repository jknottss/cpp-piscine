#include "HumanB.h"

HumanB::HumanB(std::string name) : _name(name)
{
	_gun = nullptr;
}

HumanB::~HumanB()
{

}

void HumanB::setWeapon(Weapon &gun)
{
	_gun = &gun;
}

void HumanB::attack()
{
	if (_gun == nullptr)
	{
		std::cout << _name << " scream and run away" << std::endl;
		return;
	}
	std::cout << _name << " attacks with their " << _gun->getType() << std::endl;
}