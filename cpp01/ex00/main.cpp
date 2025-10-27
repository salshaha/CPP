#include "Zombie.hpp"

int main( void )
{
    Zombie *zo_one;

    zo_one = newZombie("Zo_one");
    if (!zo_one)
        return (1);
    zo_one->announce();
    randomChump("sarah");
    delete zo_one;
    return (0);
}