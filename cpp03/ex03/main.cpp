#include "DiamondTrap.hpp"

int     main( void )
{
    DiamondTrap    robot("salshaha");
    DiamondTrap    robot2 = robot;
    robot2.attack("sarah");
    robot2.takeDamage(31);
    robot2.beRepaired(16);
    robot2.highFivesGuys();
    robot2.guardGate();
    robot2.whoAmI();
    return (0);
}