#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string>

class Animal {
protected:
	std::string type;

public:
	Animal(); // ← メッセージ付き
	Animal(const Animal& other); // ← コピーコンストラクタ
	virtual ~Animal(); // ← virtual にする！
	virtual void makeSound() const = 0; // ← ポリモーフィズムの鍵
	std::string getType() const;
};

#endif