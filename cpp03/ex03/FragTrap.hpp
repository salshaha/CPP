#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"

class FragTrap : public virtual ClapTrap
{
    protected:
        static unsigned int Hit;
        static unsigned int Damage;
    public:
        FragTrap();
        FragTrap(std::string name);
        FragTrap(FragTrap& copy);
        FragTrap&   operator=( const FragTrap& copy );
        ~FragTrap();
        void highFivesGuys(void);
};

#endif