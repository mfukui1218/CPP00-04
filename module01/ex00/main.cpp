#include "Zombie.hpp"

int main()
{
	Zombie	*heap_zombie;

	heap_zombie = newZombie("HeapZombie");
	heap_zombie->announce();
	delete heap_zombie;
	randomChump("StackZombie");
	return (0);

}