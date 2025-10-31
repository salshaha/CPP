#include "Cat.hpp"

Cat::Cat()
{
    type = "Cat";
    mind = new Brain();
    std::cout << "Cat default constractor called" << std::endl;
}

Cat::Cat(const std::string& type)
{
	std::cout << "Cat Parameterized constructor called" << std::endl;
	this->type = type;
    mind = new Brain();
}

Cat::Cat(const Cat& copy)
    : Animal(copy)
{
	std::cout << "Cat Copy constructor called" << std::endl;
	type = copy.type;
    mind = new Brain(*copy.mind);
}

Cat& Cat::operator=(const Cat& copy) {
    std::cout << "Cat Assignment operator called" << std::endl;
    if (this != &copy) {
        Animal::operator=(copy);
        delete mind;  // Delete old brain
        mind = new Brain(*copy.mind);  // Deep copy: create new Brain
    }
    return *this;
}

Cat::~Cat()
{
    std::cout << "Cat default deconstractor called" << std::endl;
    delete mind;
}

void Cat::makeSound() const
{
    std::cout << "MEOW" << std::endl;
}

//need get