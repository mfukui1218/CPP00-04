#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name )
{
	int i;
	Zombie* new_Zombie;

	i = 0;
	new_Zombie = new Zombie[N];
	while(i < N)
	{
		new_Zombie[i].set_Name(name);
		i++;
	}
	return (new_Zombie);
}