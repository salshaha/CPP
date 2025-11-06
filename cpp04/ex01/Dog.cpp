#include "Dog.hpp"

Dog::Dog()
{
    type = "Dog";
    mind = new Brain();
    std::cout << "Dog default constractor called" << std::endl;
}

Dog::Dog(const std::string& type)
{
	std::cout << "Dog Parameterized constructor called" << std::endl;
	this->type = type;
    mind = new Brain();
}

Dog::Dog(const Dog& copy)
    : Animal(copy)
{
	std::cout << "Dog Copy constructor called" << std::endl;
	type = copy.type;
    mind = new Brain(*copy.mind);
}

Dog& Dog::operator=(const Dog& copy) {
    std::cout << "Cat Assignment operator called" << std::endl;
    if (this != &copy) {
        Animal::operator=(copy);
        delete mind;
        mind = new Brain(*copy.mind);
    }
    return *this;
}

Dog::~Dog()
{
    std::cout << "Dog default deconstractor called" << std::endl;
    delete mind;
}

void Dog::makeSound() const
{
    std::cout << "HOOOOWWW" << std::endl;
}

Brain&	Dog::getBrain( void ) const
{
	return (*mind);
}