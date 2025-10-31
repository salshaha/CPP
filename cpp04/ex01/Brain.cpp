#include "Brain.hpp"

Brain::Brain()
{
    int i;

    i = 0;
    while (i < 100)
        this->idea[i++] = "";
    std::cout << "Brain default constractor called" << std::endl;
}

Brain::Brain( const Brain& copy )
{
    int i;

    i = 0;
	std::cout << "Brain Copy constructor called" << std::endl;
	while (i < 100)
        this->idea[i] = copy.idea[i++];
}

Brain &Brain::operator=(const Brain &copy)
{
    int i;

    i = 0;
    if (this != &copy)
    {
        while (i < 100)
        this->idea[i] = copy.idea[i++];
    }
    return (*this);
}

Brain::~Brain()
{
    std::cout << "Brain default deconstractor called" << std::endl;
}

// void Brain::setType(std::string &type)
// {
//     this->type = type;
// }

// const std::string& Brain::getType(void) const
// {
//     return (type);
// }