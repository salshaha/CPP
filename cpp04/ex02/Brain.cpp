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
    {
        this->idea[i] = copy.idea[i];
        i++;
    }
}

Brain &Brain::operator=(const Brain &copy)
{
    int i;

    i = 0;
    if (this != &copy)
    {
        while (i < 100)
        {
            this->idea[i] = copy.idea[i];
            i++;
        }
    }
    return (*this);
}

Brain::~Brain()
{
    std::cout << "Brain default deconstractor called" << std::endl;
}

void Brain::SetIdea(int index , std::string idea)
{
    if (index >= 0 && index < 100)
        this->idea[index] = idea;
}
std::string Brain::GetIdea(int index) const
{
    return this->idea[index];
}
void Brain :: printIdeas()
{
    for (size_t i = 0; i <= 4; i++)
    {
        std :: cout << this->idea[i] << std :: endl;
    }
    
}
