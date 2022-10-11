#include "Animal.h"
#include "Cat.h"
#include "Dog.h"
# define NUMS 4

int main()
{
    Animal *arr[NUMS];

    for (int i = 0; i < NUMS; i++)
    {
        if (i < NUMS/2)
            arr[i] = new Cat();
        else
            arr[i] = new Dog();
        std::cout << arr[i]->getType() << std::endl;
    }

    for (int i = 0; i < NUMS; i++)
        delete arr[i];

    return 0;

}