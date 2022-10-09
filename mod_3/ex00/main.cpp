#include "ClapTrap.h"

int main()
{
	ClapTrap a("master");
	ClapTrap b("slave");

	a.setDmg(5);
	a.attack(b.getName());
	b.takeDamage(a.getDmg());
	b.beRepaired(1);

	return 0;
}

