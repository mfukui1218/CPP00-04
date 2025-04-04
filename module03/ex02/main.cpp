#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include <iostream>

int main() {
	FragTrap frag("FR4G-TP");

	frag.attack("Bandit");
	frag.takeDamage(50);
	frag.beRepaired(30);
	frag.highFivesGuys();

	return 0;
}
