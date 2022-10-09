#include "ScavTrap.h"
#include "ClapTrap.h"

int main()
{
	ClapTrap a("master");
	ClapTrap b("slave");

	a.setDmg(5);
	a.attack("slave");
	b.takeDamage(a.getDmg());
	b.beRepaired(1);

	std::cout << "____scavTrap____" << std::endl;

	ScavTrap c("batman");
	ScavTrap d("robin");

	d.gkStatus();
	c.attack("robin");
	d.takeDamage(c.getDmg());
	d.guardGate();
	d.gkStatus();

	return 0;
}

