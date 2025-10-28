#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
    ClapTrap clap("CL4P-TP");
    clap.attack("dummy");

    ScavTrap scav("SC4V-TP");
    scav.attack("bandit");
    scav.guardGate();

    FragTrap frag("FR4G-TP");
    frag.attack("enemy");
    frag.highFivesGuys(); // ✅ FragTrap special ability

    return 0;
}
