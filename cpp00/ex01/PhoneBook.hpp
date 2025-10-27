#ifndef PhoneBook_HPP
#define PhoneBook_HPP

#include "Contact.hpp"
#include <string>
#include <cstdlib>
#include <iostream>
#include <cctype>
#include <iomanip>

class PhoneBook 
{
	public:
		Contact contacts[8];
		PhoneBook();
		~PhoneBook();
};

#endif