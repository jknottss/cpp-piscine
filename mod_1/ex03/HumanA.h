
#ifndef CPP_PISCINE_HUMANA_H
#define CPP_PISCINE_HUMANA_H

#include "Weapon.h"

class HumanA {
public:
	HumanA(std::string name, Weapon &gun);
	~HumanA();
	void attack(void);

private:
	std::string _name;
	Weapon *_gun;
};


#endif
