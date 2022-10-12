
#ifndef MATERIASOURCE_H
#define MATERIASOURCE_H

#include "iostream"
#include "IMateriaSource.h"

class MateriaSource : public IMateriaSource {
private:
    static const int mat_size = 4;
    int _mat_nbr;
    AMateria *materials[MateriaSource::mat_size];
public:
    MateriaSource();
    MateriaSource(MateriaSource const &src);
    ~MateriaSource();

    MateriaSource &operator=(MateriaSource const &rhs);

    void learnMateria(AMateria *m);
    AMateria *createMateria(std::string const &type);
};

#endif
