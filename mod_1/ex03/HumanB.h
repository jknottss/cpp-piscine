
#ifndef HUMANB_H
#define HUMANB_H

#include "Weapon.h"
class HumanB {
public:
	HumanB(std::string name);
	~HumanB();
	void setWeapon(Weapon &gun);
	void attack();

private:
	std::string _name;
	Weapon *_gun;
};


#endif
