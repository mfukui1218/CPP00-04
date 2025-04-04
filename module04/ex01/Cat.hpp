#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal {
    private:
	    Brain* brain;
    public:
        Cat(); // Constructor
        Cat(const Cat& other); // Copy constructor
        ~Cat(); // Destructor
        Cat& operator=(const Cat& other); // Assignment operator

        void makeSound() const; // Override makeSound method
        void setIdea(int index, const std::string& idea); // Set idea in brain
        std::string getIdea(int index) const;
};

#endif