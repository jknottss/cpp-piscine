#include "Weapon.h"

Weapon::Weapon(const std::string &type) : _type(type)
{

}

Weapon::~Weapon()
{

}

void Weapon::setType(const std::string &type)
{
	_type = type;
}

std::string Weapon::getType() const
{
	return (_type);
}
