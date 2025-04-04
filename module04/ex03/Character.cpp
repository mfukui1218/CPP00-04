#include "Character.hpp"

Character::Character() : name("Default"), inventoryCount(0) {
    for (int i = 0; i < 4; ++i) {
        inventory[i] = nullptr;
    }
    std::cout << "Character default constructor called" << std::endl;
}

Character::Character(const std::string& name) : name(name), inventoryCount(0) {
    for (int i = 0; i < 4; ++i) {
        inventory[i] = nullptr;
    }
    std::cout << "Character constructor called" << std::endl;
}

Character::Character(const Character& other) : name(other.name), inventoryCount(other.inventoryCount) {
    for (int i = 0; i < 4; ++i) {
        if (other.inventory[i]) {
            inventory[i] ? other.inventory[i]->clone() : nullptr;
        } else {
            inventory[i] = nullptr;
        }
    }
    std::cout << "Character copy constructor called" << std::endl;
}

Character::~Character() {
    for (int i = 0; i < 4; ++i) {
        delete inventory[i];
    }
    std::cout << "Character destructor called" << std::endl;
}

Character& Character::operator=(const Character& other) {
    if (this != &other) {
        name = other.name;
        for (int i = 0; i < 4; ++i) {
            delete inventory[i];
            if (other.inventory[i]) {
                inventory[i] = other.inventory[i]->clone();
            } else {
                inventory[i] = nullptr;
            }
        }
    }
    std::cout << "Character assignment operator called" << std::endl;
    return *this;
}

void Character::equip(AMateria* m) {
    if (inventoryCount < 4 && m) {
        inventory[inventoryCount++] = m;
    }
}

void Character::unequip(int idx) {
    if (idx >= 0 && idx < inventoryCount) {
        for (int i = idx; i < inventoryCount - 1; ++i) {
            inventory[i] = inventory[i + 1];
        }
        inventory[inventoryCount - 1] = nullptr;
        --inventoryCount;
    }
}

void Character::use(int idx, ICharacter& target) {
    if (idx >= 0 && idx < inventoryCount && inventory[idx]) {
        inventory[idx]->use(target);
    }
}

std::string Character::getName() const {
    return name;
}

std::ostream& operator<<(std::ostream& os, const Character& character) {
    os << "Character name: " << character.getName();
    return os;
}
