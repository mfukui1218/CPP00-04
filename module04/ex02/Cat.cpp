#include "Cat.hpp"

Cat::Cat() : Animal() {
    type = "Cat";
    std::cout << "Cat default constructor called" << std::endl;
    brain = new Brain();
}

Cat::Cat(const Cat& other) {
    this->type = other.type;
	std::cout << "Cat copy constructor called" << std::endl;
    this->brain = new Brain(*other.brain);
}

Cat::~Cat() {
    std::cout << "Cat destructor called" << std::endl;
    delete brain;
}

Cat& Cat::operator=(const Cat& other) {
    if (this != &other) {
        this->type = other.type;
        delete brain;
        brain = new Brain(*other.brain);
    }
    std::cout << "Cat assignment operator called" << std::endl;
    return *this;
}

void Cat::makeSound() const {
    std::cout << "Meow!" << std::endl;
}

void Cat::setIdea(int index, const std::string& idea) {
    if (index >= 0 && index < 100)
        brain->setIdea(index, idea);
}

std::string Cat::getIdea(int index) const {
    if (index >= 0 && index < 100)
        return brain->getIdea(index);
    return "";
}