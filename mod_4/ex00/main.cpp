#include "Animal.h"
#include "Cat.h"
#include "Dog.h"
#include "WrongAnimal.h"
#include "WrongCat.h"

int main()
{

    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();

    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    i->makeSound(); //will output the cat sound!
    j->makeSound();
    meta->makeSound();

    delete i;
    delete j;
    delete meta;

    std::cout << "\n____________\n" << std::endl;

    const WrongAnimal* wrongmeta = new WrongAnimal();
    const WrongAnimal* cat = new WrongCat();

    std::cout << cat->getType() << " " << std::endl;
    cat->makeSound(); //will output the wrong sound!
    wrongmeta->makeSound();

    delete cat;
    delete wrongmeta;

    return 0;
}