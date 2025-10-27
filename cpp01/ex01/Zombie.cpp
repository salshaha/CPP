#include "Zombie.hpp"

void Zombie::announce(void)
{
    std::cout << "my name is: " << this->name << std::endl;
}

void Zombie::setName(std::string name)
{
    this->name = name; 
}