#include "Animal.hpp"

Animal::Animal() : type("Unknown") {
    std::cout << "Animal default constructor called" << std::endl;
}

Animal::~Animal() {
    std::cout << "Animal destructor called" << std::endl;
}

void Animal::makeSound() const {
    std::cout << "Animal sound!" << std::endl;
}

std::string Animal::getType() const {
	return type;
}
