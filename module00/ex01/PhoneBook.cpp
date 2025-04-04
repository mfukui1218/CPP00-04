#include "PhoneBook.hpp"

PhoneBook::PhoneBook() : contact_count(0) {}

void PhoneBook::add_contact()
{
	std::string	first_name;
	std::string	last_name;
	std::string	nickname;
	std::string	phone_number;
	std::string	darkest_secret;

	std::cout << "Enter first name: ";
	std::cin >>	first_name;
	std::cout << "Enter last name: ";
	std::cin >>	last_name;
	std::cout << "Enter nickname: ";
	std::cin >>	nickname;
	std::cout << "Enter phone number: ";
	std::cin >>	phone_number;
	std::cout << "Enter darkest secret: ";
	std::cin.ignore();
    std::getline(std::cin, darkest_secret);
	contacts[contact_count % 8].set_first_name(first_name);
    contacts[contact_count % 8].set_last_name(last_name);
    contacts[contact_count % 8].set_nickname(nickname);
    contacts[contact_count % 8].set_phone_number(phone_number);
    contacts[contact_count % 8].set_darkest_secret(darkest_secret);
    contact_count++;
	std::cout << "Contact added successfully!" << std::endl;
}

void PhoneBook::search_contact() const
{
	int	i;
	int	index;

	if (contact_count == 0)
	{
        std::cout << "No contacts to display." << std::endl;
        return;
    }
    std::cout << "|     Index| First Name|  Last Name|   Nickname|" << std::endl;
    std::cout << "|----------|-----------|-----------|-----------|" << std::endl;
	i = 0;
	while(i < (contact_count < 8 ? contact_count : 8))
	{
		std::cout << "|" 
		<< std::setw(10) << i << "|"
        << std::setw(11) << truncate(contacts[i].get_first_name(), 10) << "|"
        << std::setw(11) << truncate(contacts[i].get_last_name(), 10) << "|"
        << std::setw(11) << truncate(contacts[i].get_nickname(), 10) << "|"
        << std::endl;
		i++;
	}
	std::cout << "Enter the index of the contact to display: ";
	std::cin >> index;
	if (std::cin.fail() || index < 0 || index >= (contact_count < 8 ? contact_count : 8)) {
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cout << "Invalid index." << std::endl;
        return;
    }
	display_contact(index);
}

std::string truncate(const std::string& str, std::size_t width)
{
    if (str.length() > width)
        return str.substr(0, width - 1) + ".";
    return str;
}

void PhoneBook::display_contact(int index) const
{
    std::cout << "First Name: " << contacts[index].get_first_name() << std::endl;
    std::cout << "Last Name: " << contacts[index].get_last_name() << std::endl;
    std::cout << "Nickname: " << contacts[index].get_nickname() << std::endl;
    std::cout << "Phone Number: " << contacts[index].get_phone_number() << std::endl;
    std::cout << "Darkest Secret: " << contacts[index].get_darkest_secret() << std::endl;
}
