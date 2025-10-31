#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
    hit = 100;
    energy = 100;
    damage = 30;
    std::cout << "FragTrap defult constructed!" << std::endl;
}

FragTrap::FragTrap(std::string name)
    :ClapTrap(name)
{
    hit = 100;
    energy = 100;
    damage = 30;
    std::cout << "FragTrap " << name << " constructed!" << std::endl;
}

FragTrap::FragTrap(FragTrap& copy )
    :ClapTrap(copy)
{
    hit = 100;
    energy = 100;
    damage = 30;
    std::cout << "FragTrap " << name << "copy constructed!" << std::endl;
}

FragTrap&   FragTrap::operator=(const FragTrap& copy)
{
    std::cout << "FragTrap Copy assignment operator called" << std::endl;
	if (this != &copy)
	{
		this->name = copy.name;
		this->hit = copy.hit;
		this->energy = copy.energy;
		this->damage = copy.damage;
	}
	return (*this);
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap " << name << " destroyed!" << std::endl;
}

void FragTrap::highFivesGuys(void)
{
    std::cout << "FragTrap " << name << " requests a positive high five!" << std::endl;
}

