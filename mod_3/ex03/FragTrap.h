#ifndef FRAGTRAP_H
#define FRAGTRAP_H

#include "ClapTrap.h"
#include "ScavTrap.h"

class FragTrap : virtual public ClapTrap {
public:
	FragTrap();
	~FragTrap();
	FragTrap(std::string const &name);
	FragTrap(FragTrap const &src);
	FragTrap & operator=(FragTrap const &rhs);

	void attack(const std::string &target);
	void highFivesGuys(void);
};


#endif
