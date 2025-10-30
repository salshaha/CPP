#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"

class FragTrap : public virtual ClapTrap
{
    protected:
        static unsigned int hit;
        static unsigned int damage;
    public:
        FragTrap();
        FragTrap(std::string name);
        FragTrap&   operator=( const FragTrap& other );
        ~FragTrap();
        void highFivesGuys(void);

};


#endif