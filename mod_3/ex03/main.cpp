#include "FragTrap.h"
#include "DiamondTrap.h"
int main()
{
	std::cout << "\n____clapTrap___\n" << std::endl;

	ClapTrap a("master");
	ClapTrap b("slave");

	a.setDmg(5);
	a.attack(b.getName());
	b.takeDamage(a.getDmg());
	b.beRepaired(1);

	std::cout << "\n____scavTrap____\n" << std::endl;

	ScavTrap c("batman");
	ScavTrap d("robin");

	d.gkStatus();
	c.attack(d.getName());
	d.takeDamage(c.getDmg());
	d.guardGate();
	d.gkStatus();

	std::cout << "\n____fragTrap____\n" << std::endl;

	FragTrap e("chip");
	FragTrap f("dail");

	e.attack(f.getName());
	f.takeDamage(e.getDmg());
	f.beRepaired(33);
	e.highFivesGuys();

	std::cout << "\n____diamond____\n" << std::endl;

	DiamondTrap g("lupa");
	DiamondTrap h("pupa");

	g.attack(h.getName());
	h.takeDamage(g.getDmg());
	h.beRepaired(10);
	g.whoAmI();
	h.whoAmI();

	return 0;
}

