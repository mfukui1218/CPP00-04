#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP
#include "Contact.hpp"

class PhoneBook
{
	private:
		Contact contacts[8];
		int contact_count;

	public:
		PhoneBook();
		void add_contact();
		void search_contact() const;
		void display_contact(int index) const;
};

std::string truncate(const std::string& str, std::size_t width);
#endif
