
#ifndef CAT_H
#define CAT_H

#include "Animal.h"
#include "Brain.h"
class Cat : public Animal {
public:
    Cat();
    ~Cat();
    Cat(Cat const &src);
    Cat & operator=(Cat const &rhs);

    void makeSound() const;
private:
     Brain *_brain;
};

#endif
