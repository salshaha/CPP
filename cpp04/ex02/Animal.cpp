#include "Animal.hpp"

Animal::Animal()
{
    type = "";
    std::cout << "Animal default constractor called" << std::endl;
}

Animal::Animal( const Animal& copy )
{
	std::cout << "Animal Copy constructor called" << std::endl;
	type = copy.type;
}

Animal &Animal::operator=(const Animal &copy)
{
    if (this != &copy)
        type = copy.type;
    return (*this);
}

Animal::~Animal()
{
    std::cout << "Animal default deconstractor called" << std::endl;
}

void Animal::setType(std::string &type)
{
    this->type = type;
}

const std::string& Animal::getType(void) const
{
    return (type);
}