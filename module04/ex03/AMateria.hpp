#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <iostream>
#include <string>
#include "ICharacter.hpp"

class ICharacter;

class AMateria
{
    protected:
        std::string type;
    public:
        AMateria();
        AMateria(const std::string& type);
        AMateria(const AMateria& other);
        virtual ~AMateria();
        AMateria& operator=(const AMateria& other);
        virtual void use(ICharacter& target);
        virtual AMateria* clone() const = 0;
        std::string getType() const;
};

#endif