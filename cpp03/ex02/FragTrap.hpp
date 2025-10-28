#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
    public:
        FragTrap();
        FragTrap(std::string name);
        FragTrap&   operator=( const FragTrap& other );
        ~FragTrap();
        void highFivesGuys(void);
        void attack(const std::string& target);

};


#endif