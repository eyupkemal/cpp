#include "ClapTrap.hpp"

int main()
{
    ClapTrap a("Musab");
    ClapTrap b("Hans");

    a.attack("Hans");
    b.takeDamage(3);
    a.beRepaired(3);
    a.attack("Hans");
    b.takeDamage(7);
}