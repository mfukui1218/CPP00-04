#include "ClapTrap.hpp"

int main() {
    ClapTrap clap1("Clappy");
    ClapTrap clap2("Trappy");

    std::cout << "=== Combat Begins ===" << std::endl;

    clap1.attack("Trappy");
    clap2.takeDamage(3);

    clap2.beRepaired(5);

    clap2.attack("Clappy");
    clap1.takeDamage(4);

    for (int i = 0; i < 10; i++) {
        clap1.attack("Trappy");
    }
    clap1.beRepaired(5);

    return 0;
}
