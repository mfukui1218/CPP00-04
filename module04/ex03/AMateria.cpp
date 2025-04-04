#include "AMateria.hpp"

AMateria::AMateria() : type("Unknown") {
    std::cout << "AMateria default constructor called" << std::endl;
}

AMateria::AMateria(const std::string& type) : type(type) {
    std::cout << "AMateria constructor called" << std::endl;
}

AMateria::AMateria(const AMateria& other) : type(other.type) {
    std::cout << "AMateria copy constructor called" << std::endl;
}

AMateria::~AMateria() {
    std::cout << "AMateria destructor called" << std::endl;
}

AMateria& AMateria::operator=(const AMateria& other) {
    if (this != &other) {
        type = other.type;
    }
    std::cout << "AMateria assignment operator called" << std::endl;
    return *this;
}

void AMateria::use(ICharacter& target) {
    std::cout << "Using AMateria on " << target.getName() << std::endl;
}

std::string AMateria::getType() const {
    return type;
}
