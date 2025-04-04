#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name) : name(name), hitPoints(10), energyPoints(10), attackDamage(0) {
	std::cout << "ClapTrap " << name << " has been destroyed!" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& other) : name(other.name), hitPoints(other.hitPoints), energyPoints(other.energyPoints), attackDamage(other.attackDamage) {
	std::cout << "ClapTrap " << name << " has been copied!" << std::endl;
}

ClapTrap::~ClapTrap() {
    std::cout << "ClapTrap " << name << " has been destroyed!" << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& other) {
	if (this != &other){
		name = other.name;
		hitPoints = other.hitPoints;
		energyPoints = other.energyPoints;
		attackDamage = other.attackDamage;
	}
	std::cout << "ClapTrap " << name << " has been assigned!" << std::endl;
    return *this;
}

void ClapTrap::attack(const std::string& target) {
	if (energyPoints <= 0 || hitPoints <= 0) {
        std::cout << "ClapTrap " << name << " has no energy or hit points left to attack!" << std::endl;
        return;
    }
	std::cout << "ClapTrap " << name << " attacks " << target
              << ", causing " << attackDamage << " points of damage!" << std::endl;
	energyPoints--;
}

void ClapTrap::takeDamage(unsigned int amount){
	if (hitPoints <= 0) {
        std::cout << "ClapTrap " << name << " is already destroyed!" << std::endl;
        return;
    }
	hitPoints -= amount;
	if (hitPoints <= 0)
		hitPoints = 0;
    std::cout << "ClapTrap " << name << " takes " << amount << " damage! Remaining HP: " << hitPoints << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount){
	if (energyPoints <= 0 || hitPoints <= 0) {
        std::cout << "ClapTrap " << name << " has no energy or hit points left to repair!" << std::endl;
        return;
    }
	hitPoints += amount;
	energyPoints--;
	std::cout << "ClapTrap " << name << " repairs itself for " << amount
              << " hit points! New HP: " << hitPoints << std::endl;
}