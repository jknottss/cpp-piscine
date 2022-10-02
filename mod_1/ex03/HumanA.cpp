
#include "HumanA.h"

HumanA::HumanA(std::string name, Weapon &gun) : _name(name)
{
	_gun = &gun;
}

HumanA::~HumanA()
{

}

void HumanA::attack()
{
	std::cout << _name << " attacks with their " << _gun->getType() << std::endl;
}