#include "ScavTrap.hpp"

int main()
{
    ClapTrap a("talha");
    ClapTrap b("Hans");
    ScavTrap c("Derived");

    a.attack("Hans");
    b.takeDamage(3);
    a.beRepaired(3);
    c.attack("talha");
    c.takeDamage(45);
    c.beRepaired(10);
    c.attack("talha");
    c.takeDamage(25);
    c.guardGate();
}