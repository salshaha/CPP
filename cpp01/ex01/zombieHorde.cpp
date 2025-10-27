#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
    int i;
    Zombie *zom;

    i = 0;
    if (N < 1)
        return (NULL);
    zom = new (std::nothrow) Zombie[N];
    if (!zom)
        return (NULL);
    while (i < N)
    {
        zom[i].setName(name);
        i++;
    }
    return (zom);
}
