#ifndef ITER_CLASS_H
# define ITER_CLASS_H

template<typename T>
void iter(T *arr, unsigned int size, void (*f)(const T &))
{
    for (unsigned int i = 0; i < size; i ++)
        f(arr[i]);
}
#endif
