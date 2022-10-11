

#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>
#include "Brain.h"
class Animal {

public:
    Animal();
    Animal(Animal const &src);
    virtual ~Animal();
    Animal &operator=(Animal const &rhs);

    virtual void makeSound() const =0;
    virtual std::string getType() const;

protected:
    std::string _type;
};


#endif
