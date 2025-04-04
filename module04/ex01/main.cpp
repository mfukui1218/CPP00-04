#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"
#include <iostream>

int main() {
	std::cout << "=== Basic Animal Tests ===" << std::endl;

	const Animal* j = new Dog();
	const Animal* i = new Cat();

	delete j;  // Dog のデストラクタ → Brain のデストラクタが呼ばれること
	delete i;  // Cat のデストラクタ → Brain のデストラクタが呼ばれること

	std::cout << "\n=== Array of Animals ===" << std::endl;

	const int N = 6;
	Animal* animals[N];

	for (int i = 0; i < N / 2; ++i)
		animals[i] = new Dog();
	for (int i = N / 2; i < N; ++i)
		animals[i] = new Cat();

	for (int i = 0; i < N; ++i)
		delete animals[i];

	std::cout << "\n=== Deep Copy Test ===" << std::endl;

	Dog original;
	original.setIdea(0, "Catch the ball!");
	original.setIdea(1, "Dig a hole");

	Dog copy = original;

	std::cout << "Original's idea 0: " << original.getIdea(0) << std::endl;
	std::cout << "Copy's idea 0   : " << copy.getIdea(0) << std::endl;

	original.setIdea(0, "Sleep on sofa");

	std::cout << "After modifying original..." << std::endl;
	std::cout << "Original's idea 0: " << original.getIdea(0) << std::endl;
	std::cout << "Copy's idea 0   : " << copy.getIdea(0) << std::endl;

	// Check that they are not the same memory
	if (&original == &copy)
		std::cout << "Same object! (bad)" << std::endl;
	else
		std::cout << "Different objects (good)" << std::endl;

	return 0;
}
