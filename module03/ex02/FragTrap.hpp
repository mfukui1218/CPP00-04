#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap {
public:
	FragTrap();                          // default constructor
	FragTrap(const std::string& name);  // name constructor
	FragTrap(const FragTrap& other);    // copy constructor
	FragTrap& operator=(const FragTrap& other); // assignment
	~FragTrap();                         // destructor

	void highFivesGuys();               // positive request!
	void attack(const std::string& target); // override
};

#endif
