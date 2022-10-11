
#ifndef BRAIN_H
#define BRAIN_H

#include <iostream>

class Brain {
protected:
    std::string _ideas[100];
public:
    Brain();
    virtual ~Brain();
    Brain(Brain const &src);
    Brain & operator=(Brain const &rhs);

    std::string getIdea(size_t n) const;
    void setIdea(size_t n, std::string idea);
};


#endif
