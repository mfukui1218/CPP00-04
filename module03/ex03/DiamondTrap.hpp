#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include <iostream>
#include <string>

class DiamondTrap : public FragTrap, public ScavTrap {
private:
	std::string name;  // DiamondTrap独自の名前（ClapTrapのnameとは別）

public:
	DiamondTrap();
	DiamondTrap(const std::string& name);
	DiamondTrap(const DiamondTrap& other);
	DiamondTrap& operator=(const DiamondTrap& other);
	~DiamondTrap();

	// ClapTrapのpublic関数をDiamondTrapから見えるようにする
	using ClapTrap::takeDamage;
	using ClapTrap::beRepaired;

	// attackはScavTrapのを使いたいときは、明示的にそちらを使う
	void attack(const std::string& target);
	void whoAmI();  // 自分のname + ClapTrapのname を表示
};

#endif
