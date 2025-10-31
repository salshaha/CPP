#include "Dog.hpp"

Dog::Dog()
{
    type = "Dog";
    std::cout << "Dog default constractor called" << std::endl;
}

Dog::Dog(const std::string& type)
{
	std::cout << "Dog Parameterized constructor called" << std::endl;
	this->type = type;
}

Dog::Dog(const Dog& copy)
    : Animal(copy)
{
	std::cout << "Dog Copy constructor called" << std::endl;
	type = copy.type;
}

Dog &Dog::operator=(const Dog &copy)
{
    if (this != &copy)
        type = copy.type;
    return (*this);
}

Dog::~Dog()
{
    std::cout << "Dog default deconstractor called" << std::endl;
}

void Dog::makeSound() const
{
    std::cout << "HOOOOWWW" << std::endl;
}