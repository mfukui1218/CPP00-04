#include <iostream>
#include <string>

int main()
{
	std::string str;
	std::string* stringPTR;
	std::string& stringREF = str;

	str = "HI THIS IS BRAIN";
	stringPTR = &str;
	std::cout << "The memory address of the string variable."<< &str << std::endl;
	std::cout << "The memory address held by stringPTR."<< stringPTR << std::endl;
	std::cout << "The memory address held by stringREF."<< &stringREF << std::endl;
	std::cout << "Value of the string variable: " << str << std::endl;
    std::cout << "Value pointed to by stringPTR: " << *stringPTR << std::endl;
    std::cout << "Value pointed to by stringREF: " << stringREF << std::endl;
    return 0;
}