
#include "Character.h"

Character::Character()
{
    _name = "random name";
    _idx = 0;
    for (int i = 0; i < Character::inv_size; i++)
        inv[i] = NULL;
}

Character::Character(std::string name)
{
    _name = name;
    _idx = 0;
    for (int i = 0; i < Character::inv_size; i++)
        inv[i] = NULL;
}

Character::~Character()
{
    for (int i = 0; i < Character::inv_size; i++)
    {
        if (inv[i])
            delete inv[i];
    }

}

Character::Character(const Character &src)
{
    _name = src._name;
    _idx = src._idx;
    for (int i = 0; i < Character::inv_size; i++)
    {
        if (src.inv[i])
            inv[i] = (src.inv[i])->clone();
        else
            inv[i] = NULL;
    }
}

Character &Character::operator=(const Character &rhs)
{
    if (this != &rhs)
    {
        _name = rhs._name;
        _idx = rhs._idx;
        for (int i = 0; i < Character::inv_size; i++)
        {
            if (inv[i])
                delete inv[i];
            if (rhs.inv[i])
                inv[i] = rhs.inv[i];
            else
                inv[i] = NULL;
        }
    }
    return *this;
}

const std::string &Character::getName() const
{
    return _name;
}

void Character::equip(AMateria *m)
{
    for (int i = 0; i < Character::inv_size; i++)
    {
        if (m == inv[i])
        {
            std::cout << "already equipped" << std::endl;
            return;
        }
    }
    if (m && _idx < Character::inv_size)
    {
        for (int i = 0; i < Character::inv_size; i++)
        {
            if(!inv[i])
            {
                inv[i] = m;
                _idx++;
                break;
            }
        }
    }
}

void Character::unequip(int idx)
{
    if (idx < 0 || idx >= Character::inv_size || !inv[idx])
    {
        std::cout << "unequid impossible :(" << std::endl;
        return;
    }
    inv[idx] = NULL;
    _idx--;
}

void Character::use(int idx, ICharacter &target)
{
    AMateria *tmp;

    if (idx >= Character::inv_size || idx < 0 || !inv[idx])
    {
        std::cout << "use impossible :(" << std::endl;
        return;
    }
    inv[idx]->use(target);
    tmp = inv[idx];
    unequip(idx);
    delete tmp;
}
