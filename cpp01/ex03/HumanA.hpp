#pragma once
#include "Weapon.hpp"

class HumanA{
private:
    std::string name;
    Weapon gun;
public:
    HumanA(std::string ,Weapon &gun);
    ~HumanA();
    void attack(void);
};
