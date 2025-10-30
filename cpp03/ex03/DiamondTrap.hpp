#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap
{
    private:
        std::string name; // DiamondTrap’s own name

    public:
        DiamondTrap();
        DiamondTrap(const DiamondTrap& copy);
        DiamondTrap(std::string name);
        DiamondTrap&   operator=(const DiamondTrap& copy);
        ~DiamondTrap();

        void whoAmI(); // special ability

        // We use ScavTrap’s version of attack()
        using ScavTrap::attack;
};

#endif