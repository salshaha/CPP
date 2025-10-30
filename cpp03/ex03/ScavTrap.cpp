#include "ScavTrap.hpp"

unsigned int ScavTrap::energy = 50;

ScavTrap::ScavTrap()
{
    std::cout << "ScavTrap defult constructed!" << std::endl;
}

ScavTrap::ScavTrap(std::string name)
    :ClapTrap(name)
{
    hit = 100;
    energy = 50;
    damage = 20;
    std::cout << "ScavTrap " << name << " constructed!" << std::endl;
}

ScavTrap&   ScavTrap::operator=(const ScavTrap& copy)
{
    std::cout << "ScavTrap Copy assignment operator called" << std::endl;
	if (this != &copy)
	{
		this->name = copy.name;
		this->hit = copy.hit;
		this->energy = copy.energy;
		this->damage = copy.damage;
	}
	return (*this);
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap " << name << " destroyed!" << std::endl;
}

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap " << this->name << " is now in Gate Keeper mode!" << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
    if (this->energy > 0 && this->hit > 0)
    {
        this->energy -= 1;
        std::cout << "ScavTrap " << this->name << " attacks " << target 
                << ", causing " << this->damage << " points of damage!" 
                << std::endl;
    }
    else
        std::cout << "ScavTrap " << this->name << " cannot attack!" << std::endl;
}