#include "FragTrap.h"

int main()
{
	ClapTrap a("master");
	ClapTrap b("slave");

	a.setDmg(5);
	a.attack(b.getName());
	b.takeDamage(a.getDmg());
	b.beRepaired(1);

	std::cout << "____scavTrap____" << std::endl;

	ScavTrap c("batman");
	ScavTrap d("robin");

	d.gkStatus();
	c.attack(d.getName());
	d.takeDamage(c.getDmg());
	d.guardGate();
	d.gkStatus();

	std::cout << "____fragTrap____" << std::endl;

	FragTrap e("chip");
	FragTrap f("dail");

	e.attack(f.getName());
	f.takeDamage(e.getDmg());
	f.beRepaired(33);
	e.highFivesGuys();

	return 0;
}

