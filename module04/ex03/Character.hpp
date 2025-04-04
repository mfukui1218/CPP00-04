#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "ICharacter.hpp"
#include "AMateria.hpp"
#include <iostream>
#include <string>

class Character : public ICharacter
{
    private:
        std::string name;
        AMateria* inventory[4]; 
        int inventoryCount;
    public:
        Character();
        Character(const std::string& name);
        Character(const Character& other);
        ~Character();
        Character& operator=(const Character& other);
        
        void equip(AMateria* m);
        void unequip(int idx);
        void use(int idx, ICharacter& target);
        
        std::string getName() const;
};

#endif
