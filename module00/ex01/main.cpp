#include "PhoneBook.hpp"

int	main()
{
	std::string command;
	PhoneBook phonebook;

	while(1)
	{
		std::cout << "Enter a command (ADD, SEARCH, EXIT):" << std::endl;
		std::cin >> command;
		if (command == "ADD")
			phonebook.add_contact();
		else if	(command == "SEARCH")
			phonebook.search_contact();
		else if (command == "EXIT")
		{
			std::cout << "Exiting the program." << std::endl;
			break ;
		}
		else
			std::cout << "Invalid command!" << std::endl; 
	}
	return (0);
}
