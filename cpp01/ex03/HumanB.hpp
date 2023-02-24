#pragma once
#include "Weapon.hpp"

class HumanB{
private:
    std::string name;
public:
    Weapon* gun;
    HumanB(std::string);
    ~HumanB();
    void attack(void) const;
    void setWeapon(Weapon& _gun);
};

