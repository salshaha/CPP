#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
    : ClapTrap( "Default_clap_name"), name("Default")
{
    hit = FragTrap::Hit;
    energy = ScavTrap::Energy;
    damage = FragTrap::Damage;
    std::cout << "DiamondTrap default constructed!" << std::endl;
}

DiamondTrap::DiamondTrap(DiamondTrap& copy)
        :ClapTrap(copy), FragTrap(copy), ScavTrap(copy)
{
    std::cout << "DiamondTrap Copy constructor called" << std::endl;
    name = copy.name;
    ClapTrap::name = name + "_clap_name";
    hit = FragTrap::Hit;
    energy = ScavTrap::Energy;
    damage = FragTrap::Damage;
}

DiamondTrap&   DiamondTrap::operator=(DiamondTrap& copy)
{
    std::cout << "DiamondTrap Copy assignment operator called" << std::endl;
    if (this != &copy)
    {
        name = copy.name;
        ClapTrap::name = name + "_clap_name";
        hit = FragTrap::Hit;
        energy = ScavTrap::Energy;
        damage = FragTrap::Damage;
    }
    return (*this);
}

DiamondTrap::DiamondTrap(std::string name)
    : ClapTrap(name + "_clap_name"), FragTrap(name), ScavTrap(name), name(name)
{
    hit = FragTrap::Hit;
    energy = ScavTrap::Energy;
    damage = FragTrap::Damage;
    std::cout << "DiamondTrap " << this->name << " Parametrized  constructed!" << std::endl;
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
