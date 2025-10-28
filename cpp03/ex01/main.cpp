#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
    std::cout << "=== Creating ClapTrap ===" << std::endl;
    ClapTrap clap("CL4P-TP");
    clap.attack("target dummy");
    clap.takeDamage(5);
    clap.beRepaired(3);

    std::cout << "\n=== Creating ScavTrap ===" << std::endl;
    ScavTrap scav("SC4V-TP");
    scav.attack("bandit");
    scav.takeDamage(20);
    scav.beRepaired(10);
    scav.guardGate();

    std::cout << "\n=== Destruction order check ===" << std::endl;
    // Objects will go out of scope here — destructor messages will show
    return 0;
}