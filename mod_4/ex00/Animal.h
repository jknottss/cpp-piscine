

#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>

class Animal {

public:
    Animal();
    Animal(Animal const &src);
    virtual ~Animal();
    Animal &operator=(Animal const &rhs);

    virtual void makeSound() const;
    std::string getType() const;

protected:
    std::string _type;
};


#endif
