#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string>

class Animal {
protected:
	std::string type;

public:
	Animal(); // ← メッセージ付き
	virtual ~Animal(); // ← virtual にする！
	virtual void makeSound() const; // ← ポリモーフィズムの鍵
	std::string getType() const;
};

#endif