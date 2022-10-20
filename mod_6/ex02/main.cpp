#include <iostream>
#include <cstdlib>
#include "Base.h"

Base *generate()
{
    int r = rand() % 3;
    if (r == 0)
        return new A();
    else if (r == 1)
        return new B();
    else if (r == 2)
        return new C();
    else
        throw new std::exception();
}

void identify(Base *inst)
{
    if (dynamic_cast<A *>(inst))
        std::cout << "A" << std::endl;
    else if (dynamic_cast<B *>(inst))
        std::cout << "B" << std::endl;
    else if (dynamic_cast<C *>(inst))
        std::cout << "C" << std::endl;
}

void identify(Base &p)
{
    try
    {
        A &a = dynamic_cast<A &>(p);
        std::cout << "A" << std::endl;
        (void)a;
    }
    catch(const std::exception& e) {}
    try
    {
        B &b = dynamic_cast<B &>(p);
        std::cout << "B" << std::endl;
        (void)b;
    }
    catch(const std::exception& e) {}
    try
    {
        C &c = dynamic_cast<C &>(p);
        std::cout << "C" << std::endl;
        (void)c;
    }
    catch(const std::exception& e) {}
}

int main(void)
{
    Base	*base;

    std::cout << "Identifying with pointers" << std::endl;
    for (int i = 0; i < 9; i++)
    {
        base = generate();
        identify(base);
        delete base;
    }

    std::cout << std::endl << "Identifying with references" << std::endl;
    for (int i = 0; i < 9; i++)
    {
        base = generate();
        identify(*base);
        delete base;
    }
}