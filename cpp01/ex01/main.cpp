#include "Zombie.hpp"

int main()
{
    Zombie *z;
    int i = 0;

    z = zombieHorde(3, "sarah");
    if (!z)
        return (1);
    while (i < 3)
    {
        z[i].announce();
        i++;
    }
    delete[] z;
    return (0);
}
