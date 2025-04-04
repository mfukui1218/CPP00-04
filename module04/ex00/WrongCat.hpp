#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal {
    public:
        WrongCat(); // Constructor
        WrongCat(const WrongCat& other); // Copy constructor
        ~WrongCat(); // Destructor
        WrongCat& operator=(const WrongCat& other); // Assignment operator
    
        void makeSound() const; // Override makeSound method
};

#endif