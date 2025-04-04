#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

class Cat : public Animal {
public:
    Cat(); // Constructor
    Cat(const Cat& other); // Copy constructor
    ~Cat(); // Destructor
    Cat& operator=(const Cat& other); // Assignment operator

    void makeSound() const; // Override makeSound method
};

#endif