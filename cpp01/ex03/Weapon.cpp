#include "Weapon.hpp"

const std::string &Weapon::getType(){return(this->type);}
void Weapon::setType(std::string t_type){this->type = t_type;}

Weapon::Weapon(std::string _type) : type(_type){}
Weapon::~Weapon(){}
