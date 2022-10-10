
#ifndef WRONGCAT_H
#define WRONGCAT_H

#include "WrongAnimal.h"

class WrongCat : public WrongAnimal {
public:
    WrongCat();
    ~WrongCat();
    WrongCat(WrongCat const &src);
    WrongCat & operator=(WrongCat const &rhs);

    void makeSound() const;
};


#endif
