#include "FragTrap.hpp"
#include <iostream>

FragTrap::FragTrap() : ClapTrap("Unnamed") {
	std::cout << "FragTrap default constructor called" << std::endl;
	hitPoints = 100;
	energyPoints = 100;
	attackDamage = 30;
}

FragTrap::FragTrap(const std::string& name) : ClapTrap(name) {
	std::cout << "FragTrap name constructor called" << std::endl;
	hitPoints = 100;
	energyPoints = 100;
	attackDamage = 30;
}

FragTrap::FragTrap(const FragTrap& other) : ClapTrap(other) {
	std::cout << "FragTrap copy constructor called" << std::endl;
	*this = other;
}

FragTrap& FragTrap::operator=(const FragTrap& other) {
	std::cout << "FragTrap assignment operator called" << std::endl;
	if (this != &other)
		ClapTrap::operator=(other);
	return *this;
}

FragTrap::~FragTrap() {
	std::cout << "FragTrap destructor called" << std::endl;
}

void FragTrap::attack(const std::string& target) {
	std::cout << "FragTrap " << name << " aggressively attacks " << target
	          << ", dealing " << attackDamage << " points of damage!" << std::endl;
}

void FragTrap::highFivesGuys() {
	std::cout << "FragTrap " << name << " requests a HIGH FIVE! ✋" << std::endl;
}
