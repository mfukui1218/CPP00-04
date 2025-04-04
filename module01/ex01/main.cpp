#include "Zombie.hpp"

int main()
{
	int		i;
	int		Zombie_count;
	Zombie	*horde;

	Zombie_count = 10;
	horde = zombieHorde(Zombie_count, "hordezombie");
	if (!horde) {
        std::cerr << "Failed to create zombie horde." << std::endl;
        return 1;
    }
	i = 0;
	while(i < Zombie_count)
	{
		horde[i].announce();
		i++;
	}
	delete[] horde;
	return(0);
}
