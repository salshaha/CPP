#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap
{
    private:
        std::string name;
    public:
        DiamondTrap();
        DiamondTrap(DiamondTrap& copy);
        DiamondTrap(std::string name);
        DiamondTrap&   operator=(DiamondTrap& copy);
        ~DiamondTrap();

        void whoAmI();

        using ScavTrap::attack;//
};

#endif