#include "Cat.hpp"

Cat::Cat()
{
    type = "Cat";
    std::cout << "Cat default constractor called" << std::endl;
}

Cat::Cat(const std::string& type)
{
	std::cout << "Cat Parameterized constructor called" << std::endl;
	this->type = type;
}

Cat::Cat(const Cat& copy)
    : Animal(copy)
{
	std::cout << "Cat Copy constructor called" << std::endl;
	type = copy.type;
}

Cat &Cat::operator=(const Cat &copy)
{
    if (this != &copy)
        type = copy.type;
    return (*this);
}

Cat::~Cat()
{
    std::cout << "Cat default deconstractor called" << std::endl;
}

void Cat::makeSound() const
{
    std::cout << "MEOW" << std::endl;
}