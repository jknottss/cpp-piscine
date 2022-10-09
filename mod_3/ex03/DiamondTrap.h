
#ifndef DIAMONDTRAP_H
#define DIAMONDTRAP_H

#include "FragTrap.h"

class DiamondTrap : public ScavTrap, public FragTrap {
	public:
	DiamondTrap();
	~DiamondTrap();
	DiamondTrap(std::string name);
	DiamondTrap(DiamondTrap const &src);
	DiamondTrap & operator=(DiamondTrap const &rhs);


	void whoAmI();
	void attack(const std::string &target);

private:
	std::string _name;
};


#endif
