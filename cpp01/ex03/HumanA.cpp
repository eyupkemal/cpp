#include "HumanA.hpp"

void HumanA::attack(){
    std::cout << name << " attacks with their " << gun.getType() << std::endl;
}

HumanA::~HumanA(){}

HumanA::HumanA(std::string t_name, Weapon &g_gun) : name(t_name) , gun(g_gun){}
