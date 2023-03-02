#include "ScavTrap.hpp"

int main() {
    {
        std::cout << "" << std::endl;
        ClapTrap a("bob");
        ClapTrap b("jessy");

        a.attack("jessy");
        b.takeDamage(3);
        a.beRepaired(2);
        a.attack("jessy");
        b.takeDamage(6);
        std::cout << b << std::endl;
    }
	{
		std::cout << std::endl << "ScavTrap" << std::endl << std::endl;
		ScavTrap	a("deneme");
		ScavTrap	b("eyubi");
		std::cout << b << std::endl;
		a.attack("ClapTrap");
		b.attack("emircan");
		b.takeDamage(31);
		b.guardGate();
		std::cout << b << std::endl;
	}
}