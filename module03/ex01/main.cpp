#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main() {
	ClapTrap clap("CL4P-TP");
	clap.attack("target1");
	clap.takeDamage(4);
	clap.beRepaired(3);

	std::cout << "----" << std::endl;

	ScavTrap scav("SC4V-TP");
	scav.attack("target2");
	scav.takeDamage(30);
	scav.beRepaired(20);
	scav.guardGate();

	return 0;
}
