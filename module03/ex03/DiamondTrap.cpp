#include "DiamondTrap.hpp"

// デフォルトコンストラクタ
DiamondTrap::DiamondTrap() : ClapTrap("Unnamed_clap_name"), name("Unnamed") {
	std::cout << "DiamondTrap default constructor called" << std::endl;
	this->hitPoints = 100;      // FragTrap
	this->energyPoints = 50;    // ScavTrap
	this->attackDamage = 30;    // FragTrap
}

// 名前付きコンストラクタ
DiamondTrap::DiamondTrap(const std::string& name)
	: ClapTrap(name + "_clap_name"), name(name) {
	std::cout << "DiamondTrap name constructor called" << std::endl;
	this->hitPoints = 100;
	this->energyPoints = 50;
	this->attackDamage = 30;
}

// コピーコンストラクタ
DiamondTrap::DiamondTrap(const DiamondTrap& other)
	: ClapTrap(other), FragTrap(other), ScavTrap(other), name(other.name) {
	std::cout << "DiamondTrap copy constructor called" << std::endl;
}

// 代入演算子
DiamondTrap& DiamondTrap::operator=(const DiamondTrap& other) {
	std::cout << "DiamondTrap assignment operator called" << std::endl;
	if (this != &other) {
		ClapTrap::operator=(other);
		name = other.name;
	}
	return *this;
}

// デストラクタ
DiamondTrap::~DiamondTrap() {
	std::cout << "DiamondTrap destructor called" << std::endl;
}

// ScavTrap::attack を使用
void DiamondTrap::attack(const std::string& target) {
	ScavTrap::attack(target);
}

// 自分の名前とClapTrap名を出力
void DiamondTrap::whoAmI() {
	std::cout << "DiamondTrap name: " << this->name << std::endl;
	std::cout << "ClapTrap name: " << ClapTrap::name << std::endl;
}
