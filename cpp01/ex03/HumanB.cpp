#include "HumanB.hpp"
#include "Weapon.hpp"

HumanB::HumanB(std::string _name): name(_name) {}
HumanB::~HumanB() {}

void    HumanB::attack(void) const {
    std::cout << this->name << " attacks with their " << this->gun->getType() << std::endl;
}

void HumanB::setWeapon(Weapon& _gun){
    this->gun = &_gun;
}
