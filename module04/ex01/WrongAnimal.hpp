#ifndef WRONG_ANIMAL_HPP
#define WRONG_ANIMAL_HPP

#include <iostream>

class WrongAnimal {
    protected:
        std::string type;
    public:
        WrongAnimal(); // Default constructor
        WrongAnimal(const WrongAnimal& other); // Copy constructor
        virtual ~WrongAnimal(); // Destructor
        WrongAnimal& operator=(const WrongAnimal& other); // Assignment operator

        void makeSound() const; // Method to make sound
        std::string getType() const; // Method to get type
};

#endif