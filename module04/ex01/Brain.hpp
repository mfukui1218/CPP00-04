#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>

class Brain {
    private:
        std::string ideas[100];
    public:
        Brain(); // Default constructor
        Brain(const Brain& other); // Copy constructor
        ~Brain(); // Destructor
        Brain& operator=(const Brain& other); // Assignment operator

        void setIdea(int index, const std::string& idea);
        std::string getIdea(int index) const;
};

#endif