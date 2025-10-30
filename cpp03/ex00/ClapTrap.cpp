#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    this->name = "";
    this->damage = 0;
    this->energy = 10;
    this->hit = 10;
	std::cout << "Default constructor called" << this->name << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &copy)
{
    std::cout << "Copy constructor called" << std::endl;
	this->name = copy.name;
	this->hit = copy.hit;
	this->energy = copy.energy;
	this->damage = copy.damage;
}
 
ClapTrap::ClapTrap(std::string name)
{
	std::cout << "Parameterized constructor called" << std::endl;
    this->name = name;
    this->damage = 0;
    this->energy = 10;
    this->hit = 10;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &copy)
{
    if (this != &copy)
	{
        std::cout << "Copy assignment operator called" << std::endl;
	    this->name = copy.name;
	    this->hit = copy.hit;
	    this->energy = copy.energy;
	    this->damage = copy.damage;
    }
    return (*this);
}

ClapTrap::~ClapTrap()
{
    std::cout << "Object " << name << " destroyed!" << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
    if (this->energy > 0 && this->hit > 0)
    {
        this->energy -= 1;
        std::cout << "ClapTrap " << this->name << " attacks " << target 
                << ", causing " << this->damage << " points of damage!" 
                << std::endl;
    }
    else
        std::cout << "ClapTrap " << this->name << " cannot attack!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (hit == 0)
	{
		std::cout << "ClapTrap " << this->name 
			<< " is destroyed! " << std::endl;
		return ;
	}
    else if (amount >= this->hit)
    {
        this->hit = 0;
        std::cout << this->name << " takes " << amount << " of damage! " << std::endl;
        std::cout << this->name << " Dead" << std::endl;
        return ;
    }
    this->hit -= amount;
    std::cout << this->name << " takes " << amount << " of damage! " << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (this->hit == 0 || this->energy == 0)
    {
        std::cout << "cant repair" << std::endl;
        return ;
    }
    this->energy -= 1;
    this->hit += amount;
    std::cout << this->name << " repairs itself, regaining "<< amount << " hit points! " << std::endl;
}