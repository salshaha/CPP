#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
    this->weapon = NULL;
    this->name = name;
}

void HumanB::attack()
{
    if (!weapon)
    {
        std::cout << name << " Dont have a weapon " << std::endl;
        return;
    }
    std::cout << name << " attacks with their " << weapon->getType() << std::endl;
}

void    HumanB::setName(std::string name)
{
    this->name = name;
}

const std::string &HumanB::getName(void) const
{
    return (name);
}

void HumanB::setWeapon(Weapon& wep)
{
    this->weapon = &wep;
}
