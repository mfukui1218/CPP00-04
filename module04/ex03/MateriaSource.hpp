#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"
#include "AMateria.hpp"
#include <iostream>
#include <string>

class MateriaSource : public IMateriaSource
{
    private:
        AMateria* materia[4];
    public:
        MateriaSource();
        MateriaSource(const MateriaSource& other);
        ~MateriaSource();
        MateriaSource& operator=(const MateriaSource& other);
        void learnMateria(AMateria* m);
        AMateria* createMateria(const std::string& type);
};

#endif