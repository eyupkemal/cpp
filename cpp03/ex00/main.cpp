#include "ClapTrap.hpp"

int main()
{
    ClapTrap a("eyup");
    ClapTrap b("osman");

    a.attack("osman");
    b.takeDamage(3);
    a.beRepaired(3);
    a.attack("osman");
    b.takeDamage(7);
}