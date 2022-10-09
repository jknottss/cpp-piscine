

#ifndef SCAVTRAP_H
#define SCAVTRAP_H

#include "ClapTrap.h"

class ScavTrap : public ClapTrap {

public:
	ScavTrap();
	ScavTrap(std::string const name);
	~ScavTrap();
	ScavTrap(ScavTrap const &src);
	ScavTrap & operator=(ScavTrap const &rhs);

	void attack(const std::string &target);
	void guardGate();
	void gkStatus() const;

private:
	bool _gk;
};


#endif
