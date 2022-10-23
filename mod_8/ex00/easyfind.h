
#ifndef EASYFIND_H
#define EASYFIND_H

#include <iostream>
#include <vector>

template <typename T>
typename T::iterator easyfind(T &cont, int dst)
{
    typename T::iterator it = std::find(cont.begin(), cont.end(), dst);
    return it;
}

#endif
