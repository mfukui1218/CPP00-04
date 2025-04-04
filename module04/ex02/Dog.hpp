#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal {
    private:
        Brain* brain; // Pointer to Brain object
    public:
        Dog(); // Constructor
        Dog(const Dog& other); // Copy constructor
        ~Dog(); // Destructor
        Dog& operator=(const Dog& other); // Assignment operator

        void makeSound() const; // Override makeSound method
        void setIdea(int index, const std::string& idea); // Set idea in brain
        std::string getIdea(int index) const; // Get idea from brain
};

#endif