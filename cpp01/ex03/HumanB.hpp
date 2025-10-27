#ifndef HUMANB_HPP
#define HUMANB_HPP

#include <string>
#include <iostream>
#include "Weapon.hpp"
class HumanB
{
    private:
        std::string name;
        Weapon *weapon;
    public:
        HumanB(std::string name);
        const std::string &getName(void) const;
        void setName(std::string name);
        void setWeapon(Weapon& wep);
        void attack();
};

#endif