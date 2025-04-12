#include "Dog.hpp"

Dog::Dog() : Animal() {
    type = "Dog";
    std::cout << "Dog default constructor called" << std::endl;
    brain = new Brain();
}

Dog::Dog(const Dog& other) {
    this->type = other.type;
    std::cout << "Dog copy constructor called" << std::endl;
    this->brain = new Brain(*other.brain);
}

Dog::~Dog() {
    std::cout << "Dog destructor called" << std::endl;
    delete brain;
}

Dog& Dog::operator=(const Dog& other) {
    if (this != &other) {
        this->type = other.type;
        delete brain;
        brain = new Brain(*other.brain);
    }
    std::cout << "Dog assignment operator called" << std::endl;
    return *this;
}

void Dog::makeSound() const {
    std::cout << "Woof!" << std::endl;
}

void Dog::setIdea(int index, const std::string& idea) {
    if (index >= 0 && index < 100)
        brain->setIdea(index, idea);
}

std::string Dog::getIdea(int index) const {
    if (index >= 0 && index < 100)
        return brain->getIdea(index);
    return "";
}