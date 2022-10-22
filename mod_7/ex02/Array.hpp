#ifndef ARRAY_H
# define ARRAY_H

#include <iostream>

template<typename T>
class Array
{
    public:
    Array() : _size(0) {_arr = new T[0];}
    Array(const unsigned int n) : _size(n) {_arr = new T[n];}
    Array(Array const &rhs) : _size(rhs._size)
    {
        _arr = new T[rhs._size];
        for (unsigned int i = 0; i < rhs._size; i++)
            _arr[i] = rhs._arr[i];
        
    }
    ~Array() { delete [] _arr; }

    Array &operator=(Array const &rhs)
    {
        if (this != &rhs)
        {
            this->~Array();
            _size = rhs._size;
            _arr = new T[rhs._size];
            for (unsigned int i = 0; i < rhs._size; i++)
                _arr[i] = rhs[i];
        }
        return *this;
    }

    T &operator [](const int i) const 
    {
        if (i >= static_cast<int>(_size) || i < 0)
            throw std::overflow_error("out of range");
        return _arr[i];
    }

    unsigned int size() const { return _size; }

    private:
    T *_arr;
    unsigned int _size;
};

#endif
