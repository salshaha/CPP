#include "WrongCat.hpp"

WrongCat::WrongCat()
{
    type = "WrongCat";
    std::cout << "WrongCat default constractor called" << std::endl;
}

WrongCat::WrongCat(const std::string& type)
{
	std::cout << "WrongCat Parameterized constructor called" << std::endl;
	this->type = type;
}

WrongCat::WrongCat(const WrongCat& copy)
    : WrongAnimal(copy)
{
	std::cout << "WrongCat Copy constructor called" << std::endl;
	type = copy.type;
}

WrongCat &WrongCat::operator=(const WrongCat &copy)
{
    if (this != &copy)
        type = copy.type;
    return (*this);
}

WrongCat::~WrongCat()
{
    std::cout << "WrongCat default deconstractor called" << std::endl;
}

void WrongCat::makeSound() const
{
    std::cout << "MEOW" << std::endl;
}