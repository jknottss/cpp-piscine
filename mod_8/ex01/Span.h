
#ifndef SPAN_H
#define SPAN_H

#include <iostream>
#include <vector>

class Span {

public:
    Span();
    Span(unsigned int size);
    Span(Span const &rhs);
    ~Span();

    Span &operator=(Span const &rhs);

    unsigned int getSize() const;
    const std::vector<int> &getArr() const;
    void addNumber(int nbr);
    unsigned int longestSpan() const;
    unsigned int shortestSpan() const;
    void setFill();

private:
    unsigned int _size;
    std::vector<int> _arr;
};


#endif
