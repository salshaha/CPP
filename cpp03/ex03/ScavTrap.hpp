#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"

class ScavTrap : public virtual ClapTrap
{
    protected:
		static unsigned int energy;
    public:
        ScavTrap();
        ScavTrap(std::string name);
        ScavTrap&   operator=( const ScavTrap& other );
        ~ScavTrap();
        void guardGate();
        void attack(const std::string& target);

};


#endif