#include "PhoneBook.hpp"
#include <cstdlib>

int check_if_num(std::string str)
{
	for (unsigned long i = 0; i < str.size(); i++)
	{
		if (!isdigit(str[i]))
		{
			std::cout << "invalid input" << std::endl;
			return (0);
		}
	}
	return (1);        
}

void add(int i, PhoneBook& book)
{
	Contact new_contact;
	std::string	str;
	
	std::cout << "Enter First name: " << std::endl;
	std::cin >> str;
	new_contact.setFirst_name(str);

	std::cout << "Enter Last name: " << std::endl;
	std::cin >> str;
	new_contact.setLast_name(str);

	std::cout << "Enter nickname: " << std::endl;
	std::cin >> str;
	new_contact.setNickname(str);
	
	std::cout << "Enter phone number: " << std::endl;
	std::cin >> str;
	new_contact.setPhone_number(str);
	while (!check_if_num(str))
	{
		std::cout << "Enter phone number:" << std::endl;
		std::cin >> str;
	}
	new_contact.setPhone_number(str);

	std::cout << "Enter darkest secret:" << std::endl;
	std::cin.ignore();
	std::getline(std::cin, str);
	while (str.empty())
	{
		std::getline(std::cin, str);
	}
	new_contact.setDarkest_secret(str);
	book.contacts[i] = new_contact;
}

std::string formatField(const std::string& str)
{
    if (str.length() > 10)
	{
		std::string sub = str.substr(0, 9) + ".";
        return (sub);
	}
    return str;
}

void find_index(PhoneBook& book, int range)
{
	std::string index;
	int i;

	while (1)
	{
		if (range == 0)
			break ;
		std::cout << "choose index: ";
		std::cin >> index;
		if (!check_if_num(index))
            continue;
		i = atoi(index.c_str());
		if (i < 0 || i > range - 1)
		{
			std::cout << "invalid input" << std::endl;
			continue;
		}
		std::cout << "First Name: " << book.contacts[i].getFirst_name() << std::endl;
		std::cout << "Last Name: " << book.contacts[i].getLast_name() << std::endl;
		std::cout << "nickname: " << book.contacts[i].getNickname() << std::endl;
		std::cout << "Phone Number: " << book.contacts[i].getPhone_number() << std::endl;
		std::cout << "darkest secret: " << book.contacts[i].getDarkest_secret() << std::endl;
		break ;
	}
}

void search(PhoneBook& book, int index)
{
    std::cout << std::setw(10) << std::left << "index"    << "|"
    		<< std::setw(10) << std::left << "first name" << "|"
    		<< std::setw(10) << std::left << "last name"  << "|"
            << std::setw(10) << std::left << "nickname"   << std::endl;

    for (int i = 0; i < index; i++) 
	{
        std::cout << std::setw(10) << std::left << i << "|"
        		<< std::setw(10) << std::left << formatField(book.contacts[i].getFirst_name()) << "|"
        		<< std::setw(10) << std::left << formatField(book.contacts[i].getLast_name())  << "|"
        		<< std::setw(10) << std::left << formatField(book.contacts[i].getNickname())  << std::endl;
    }
	find_index(book, index);
}

int main()
{
	std::string command;
	PhoneBook book;
	int exit_flag;
	int i;
	int j;

	exit_flag = 1;
	i = 0;
	j = 0;
	while (exit_flag)
	{
		std::cout << "Enter ADD, SEARCH or EXIT: " << std::endl;
		std::cin >> command;
		if (std::cin.eof())
			exit_flag = 0;
		if (command == "ADD")
		{
			if (i == 8)
				i = 0;
			add(i, book);
			i++;
			if (j <= 7)
				j++;
		}
		else if (command == "SEARCH")
			search(book, j);
		else if(command == "EXIT")
			exit_flag = 0;
	}
	return (0);
}
