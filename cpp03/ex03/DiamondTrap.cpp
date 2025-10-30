#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap( "Default_clap_name"), name("Default")
{
    hit = FragTrap::hit;      // from FragTrap
    energy = ScavTrap::energy; // from ScavTrap
    damage = FragTrap::damage; // from FragTrap
    std::cout << "DiamondTrap default constructed!" << std::endl;
}

DiamondTrap::DiamondTrap( const DiamondTrap& copy )
        :ClapTrap(copy), FragTrap(copy), ScavTrap(copy)
{
    std::cout << "DiamondTrap Copy constructor called" << std::endl;
    name = copy.name;
    ClapTrap::name = name + "_clap_name";
    hit = FragTrap::hit;      // from FragTrap
    energy = ScavTrap::energy; // from ScavTrap
    damage = FragTrap::damage;
}

DiamondTrap::DiamondTrap(std::string name)
    : ClapTrap(name + "_clap_name"), FragTrap(name), ScavTrap(name), name(name)
{
    hit = FragTrap::hit;      // from FragTrap
    energy = ScavTrap::energy; // from ScavTrap
    damage = FragTrap::damage; // from FragTrap
    std::cout << "DiamondTrap " << this->name << " constructed!" << std::endl;
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "DiamondTrap " << name << " destroyed!" << std::endl;
}

void DiamondTrap::whoAmI()
{
    std::cout << "DiamondTrap name: " << this->name << std::endl;
    std::cout << "ClapTrap name: " << ClapTrap::name << std::endl;
}