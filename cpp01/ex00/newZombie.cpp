#include "Zombie.hpp"

Zombie* newZombie( std::string name )
{
    Zombie *z_obj;

    z_obj = new (std::nothrow) Zombie(name);
    if (!z_obj)
        return NULL;
    return z_obj;
}