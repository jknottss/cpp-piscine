
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
    void takeDemage(unsigned int amount);
    void beRepaired(unsigned int amount);
    
private:
    std::string _name;
    int _hp;
    int _nrjp;
    int _demage;
};

#endif