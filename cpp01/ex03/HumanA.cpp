#include "HumanA.hpp"

void HumanA::attack(){
    std::cout << name << " attacks with their " << gun.getType() << std::endl;
}

HumanA::~HumanA(){}

HumanA::HumanA(std::string t_name, Weapon& g_gun) : gun(g_gun){
    this->name = t_name;
}
