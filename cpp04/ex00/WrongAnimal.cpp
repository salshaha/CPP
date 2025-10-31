#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    type = "";
    std::cout << "WrongAnimal default constractor called" << std::endl;
}

WrongAnimal::WrongAnimal( const WrongAnimal& copy )
{
	std::cout << "WrongAnimal Copy constructor called" << std::endl;
	type = copy.type;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &copy)
{
    if (this != &copy)
        type = copy.type;
    return (*this);
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "WrongAnimal default deconstractor called" << std::endl;
}

void WrongAnimal::makeSound () const
{
    std::cout << "WrongAnimal" << std::endl;
}

void WrongAnimal::setType(std::string &type)
{
    this->type = type;
}

const std::string& WrongAnimal::getType(void) const
{
    return (type);
}