#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"

class ScavTrap : public virtual ClapTrap
{
    protected:
		  static unsigned int Energy;
    public:
      ScavTrap();
      ScavTrap(std::string name);
      ScavTrap(ScavTrap &copy);
      ScavTrap&   operator=( const ScavTrap& copy );
      ~ScavTrap();
      void guardGate();
      void attack(const std::string& target);
};

#endif