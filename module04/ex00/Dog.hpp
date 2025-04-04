#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

class Dog : public Animal {
    public:
        Dog(); // Constructor
        Dog(const Dog& other); // Copy constructor
        ~Dog(); // Destructor
        Dog& operator=(const Dog& other); // Assignment operator

        void makeSound() const; // Override makeSound method
};

#endif