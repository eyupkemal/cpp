#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
    ClapTrap a("emircan");
    ClapTrap b("Hans");
    ScavTrap c("Derived");
    FragTrap d("highFive");

    a.attack("Hans");
    b.takeDamage(3);
    a.beRepaired(3);
    c.attack("emircan");
    c.takeDamage(45);
    c.beRepaired(10);
    c.attack("emircan");
    c.takeDamage(25);
    c.guardGate();
    d.highFivesGuys();
}