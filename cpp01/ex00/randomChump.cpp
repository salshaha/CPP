#include "Zombie.hpp"

void randomChump( std::string name )
{
    Zombie Z_obj(name);

    Z_obj.announce();
}
