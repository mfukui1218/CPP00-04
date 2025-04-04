#include "DiamondTrap.hpp"

int main() {
	DiamondTrap dt("DiamondBoi");

	dt.attack("enemy");        // ScavTrap::attack()
	dt.takeDamage(40);         // ClapTrap::takeDamage()
	dt.beRepaired(20);         // ClapTrap::beRepaired()
	dt.highFivesGuys();        // FragTrap
	dt.guardGate();            // ScavTrap
	dt.whoAmI();               // DiamondTrap特有

	return 0;
}


