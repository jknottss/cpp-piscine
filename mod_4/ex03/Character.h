#ifndef CHARACTER_H
#define CHARACTER_H

#include "ICharacter.h"

class Character : public ICharacter {
private:
    Character();
    std::string _name;
    static const int inv_size = 4;
    AMateria *inv[Character::inv_size];
    int _idx;
public:
    Character(std::string name);
    Character(Character const &src);
    ~Character();
    Character &operator=(Character const &rhs);

    std::string const &getName() const;
    void equip(AMateria *m);
    void unequip(int idx);
    void use(int idx, ICharacter &target);
};


#endif
