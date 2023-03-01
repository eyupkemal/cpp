
#include "ClapTrap.hpp"

int main()
{
    ClapTrap a("bob");
    ClapTrap b("jessy");

    a.attack("jessy");
    b.takeDamage(3);
    a.beRepaired(3);
    a.attack("jessy");
    b.takeDamage(100);
}