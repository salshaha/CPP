#include "DiamondTrap.hpp"

int     main( void )
{
    {
        std::cout << "DiamondTrap TEST: " << std::endl;
        DiamondTrap    robot("salshaha");
        DiamondTrap    robot2 = robot;

        robot2.attack("sarah");

        robot2.takeDamage(30);

        robot2.beRepaired(15);

        robot2.highFivesGuys();

        robot2.guardGate();

        robot2.whoAmI();

        robot2.takeDamage(60);
        robot2.beRepaired(10);

        robot2.takeDamage(35);
    }
    return (0);
}