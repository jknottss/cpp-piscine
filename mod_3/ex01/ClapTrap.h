
#ifndef CLAPTRAP_H
# define CLAPTRAP_H

#include <iostream>

class ClapTrap {

public:
    ClapTrap();
    ClapTrap(std::string const name);
    ClapTrap (ClapTrap const &src);
    ~ClapTrap();
    ClapTrap & operator=(ClapTrap const &rhs);

    void attack(const std::string &target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
	void setDmg(unsigned int amount);
	int getDmg();

protected:
    std::string _name;
    int _hp;
    int _nrjp;
    int _damage;
    int check();
};

#endif