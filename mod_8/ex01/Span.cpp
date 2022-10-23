#include "Span.h"

Span::Span() : _size(0)
{
}

Span::Span(unsigned int size) : _size(size)
{
}

Span::Span(const Span &rhs) : _size(rhs._size)
{
    _arr = rhs._arr;
}

Span::~Span()
{
}

Span &Span::operator=(const Span &rhs)
{
    if (this != &rhs)
    {
        _size = rhs._size;
        _arr = rhs._arr;
    }
    return *this;
}

unsigned int Span::getSize() const
{
    return _arr.size();
}

void Span::addNumber(int nbr)
{
    if(_arr.size() == _size)
        throw std::out_of_range("Array is full");
    _arr.push_back(nbr);
}

unsigned int Span::longestSpan() const
{
    if (_arr.size() <= 1)
        throw std::logic_error("not enough elements in array");

    std::vector<int> tmp = _arr;
    std::sort(tmp.begin(), tmp.end());
    return (tmp.back() - tmp.front());
}

unsigned int Span::shortestSpan() const
{
    if (_arr.size() <= 1)
        throw std::logic_error("not enough elements in array");

    std::vector<int> tmp = _arr;
    std::sort(tmp.begin(), tmp.end());

    std::vector<int>::iterator it;

    unsigned int min = *(tmp.begin() + 1) - *(tmp.begin());
    for (it = tmp.begin() + 1; it != tmp.end() - 1; ++it)
    {
        if (static_cast<unsigned int>(*(it + 1) - *(it)) < min)
            min = *(it + 1) - *(it);
    }
    return  min;
}

const std::vector<int> &Span::getArr() const
{
    return _arr;
}

void Span::setFill()
{
    unsigned int count = _size - getSize();

    srand(time(NULL));
    for (unsigned int i = 0; i < count; i++)
        addNumber(rand() % 10000);
}