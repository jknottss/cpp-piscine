
#include "Brain.h"

Brain::Brain()
{
    std::cout << "call default brain constructor" << std::endl;
}

Brain::~Brain()
{
    std::cout << "call default brain destructor" << std::endl;
}

Brain::Brain(const Brain &src)
{
    *this = src;
}

Brain &Brain::operator=(const Brain &rhs)
{
    if (this == &rhs)
        return *this;
    for (size_t i = 0; i < 100; i++)
        _ideas[i] = rhs._ideas[i];
    return *this;
}

std::string Brain::getIdea(size_t n) const
{
    return _ideas[n];
}

void Brain::setIdea(size_t n, std::string idea)
{
    _ideas[n] = idea;
}